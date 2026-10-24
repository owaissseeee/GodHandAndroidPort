#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0037D760
// Address: 0x37d760 - 0x37d820
void func_0037D760_0x37d760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037D760_0x37d760");
#endif

    switch (ctx->pc) {
        case 0x37d7a4u: goto label_37d7a4;
        case 0x37d7ccu: goto label_37d7cc;
        default: break;
    }

    ctx->pc = 0x37d760u;

    // 0x37d760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37d760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37d764: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37d764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37d768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37d768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37d76c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37d76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37d770: 0x8482001a  lh          $v0, 0x1A($a0)
    ctx->pc = 0x37d770u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x37d774: 0x84910018  lh          $s1, 0x18($a0)
    ctx->pc = 0x37d774u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x37d778: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37D778u;
    {
        const bool branch_taken_0x37d778 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x37D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D778u;
        // 0x37d77c: 0x511023  subu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d778) {
            ctx->pc = 0x37D788u;
            goto label_37d788;
        }
    }
    ctx->pc = 0x37D780u;
    // 0x37d780: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x37D780u;
    {
        const bool branch_taken_0x37d780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D780u;
        // 0x37d784: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d780) {
            ctx->pc = 0x37D80Cu;
            goto label_37d80c;
        }
    }
    ctx->pc = 0x37D788u;
label_37d788:
    // 0x37d788: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37d788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37d78c: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x37d78cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x37d790: 0x2a030011  slti        $v1, $s0, 0x11
    ctx->pc = 0x37d790u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x37d794: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x37D794u;
    {
        const bool branch_taken_0x37d794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d794) {
            ctx->pc = 0x37D7C4u;
            goto label_37d7c4;
        }
    }
    ctx->pc = 0x37D79Cu;
    // 0x37d79c: 0xc0ddfe8  jal         func_377FA0
    ctx->pc = 0x37D79Cu;
    SET_GPR_U32(ctx, 31, 0x37D7A4u);
    ctx->pc = 0x377FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377FA0u, 0x37D79Cu, 0x37D7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D7A4u;
label_37d7a4:
    // 0x37d7a4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x37d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37d7a8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x37d7a8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37d7ac: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37D7ACu;
    {
        const bool branch_taken_0x37d7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d7ac) {
            ctx->pc = 0x37D7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D7ACu;
            // 0x37d7b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D7B4u;
            goto label_37d7b4;
        }
    }
    ctx->pc = 0x37D7B4u;
label_37d7b4:
    // 0x37d7b4: 0x2010  mfhi        $a0
    ctx->pc = 0x37d7b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x37d7b8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x37d7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x37d7bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x37D7BCu;
    {
        const bool branch_taken_0x37d7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D7BCu;
        // 0x37d7c0: 0x41403  sra         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d7bc) {
            ctx->pc = 0x37D800u;
            goto label_37d800;
        }
    }
    ctx->pc = 0x37D7C4u;
label_37d7c4:
    // 0x37d7c4: 0xc0ddfe8  jal         func_377FA0
    ctx->pc = 0x37D7C4u;
    SET_GPR_U32(ctx, 31, 0x37D7CCu);
    ctx->pc = 0x377FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377FA0u, 0x37D7C4u, 0x37D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D7CCu;
label_37d7cc:
    // 0x37d7cc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x37d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x37d7d0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x37d7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37d7d4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x37d7d4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x37d7d8: 0x90202a  slt         $a0, $a0, $s0
    ctx->pc = 0x37d7d8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x37d7dc: 0x2602000f  addiu       $v0, $s0, 0xF
    ctx->pc = 0x37d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x37d7e0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37D7E0u;
    {
        const bool branch_taken_0x37d7e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d7e0) {
            ctx->pc = 0x37D7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D7E0u;
            // 0x37d7e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D7E8u;
            goto label_37d7e8;
        }
    }
    ctx->pc = 0x37D7E8u;
label_37d7e8:
    // 0x37d7e8: 0x204100b  movn        $v0, $s0, $a0
    ctx->pc = 0x37d7e8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x37d7ec: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x37d7ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x37d7f0: 0x2810  mfhi        $a1
    ctx->pc = 0x37d7f0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x37d7f4: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x37d7f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x37d7f8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37d7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37d7fc: 0x51403  sra         $v0, $a1, 16
    ctx->pc = 0x37d7fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 16));
label_37d800:
    // 0x37d800: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x37d800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x37d804: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37d804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37d808: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x37d808u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_37d80c:
    // 0x37d80c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37d80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37d810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37d810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37d814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d818: 0x3e00008  jr          $ra
    ctx->pc = 0x37D818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D818u;
        // 0x37d81c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D820u;
}
