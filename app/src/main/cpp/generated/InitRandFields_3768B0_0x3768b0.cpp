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

// Function: InitRandFields_3768B0
// Address: 0x3768b0 - 0x376978
void InitRandFields_3768B0_0x3768b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitRandFields_3768B0_0x3768b0");
#endif

    switch (ctx->pc) {
        case 0x376904u: goto label_376904;
        case 0x37692cu: goto label_37692c;
        default: break;
    }

    ctx->pc = 0x3768b0u;

    // 0x3768b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3768b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3768b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3768b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3768b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3768b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3768bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3768bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3768c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3768c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3768c4: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x3768c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3768c8: 0x94c20008  lhu         $v0, 0x8($a2)
    ctx->pc = 0x3768c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3768cc: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x3768ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3768d0: 0x94c3000a  lhu         $v1, 0xA($a2)
    ctx->pc = 0x3768d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x3768d4: 0xa623000e  sh          $v1, 0xE($s1)
    ctx->pc = 0x3768d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x3768d8: 0x94c2000c  lhu         $v0, 0xC($a2)
    ctx->pc = 0x3768d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x3768dc: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x3768dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x3768e0: 0x84d0000e  lh          $s0, 0xE($a2)
    ctx->pc = 0x3768e0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x3768e4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3768E4u;
    {
        const bool branch_taken_0x3768e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3768E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3768E4u;
        // 0x3768e8: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3768e4) {
            ctx->pc = 0x3768F4u;
            goto label_3768f4;
        }
    }
    ctx->pc = 0x3768ECu;
    // 0x3768ec: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3768ECu;
    {
        const bool branch_taken_0x3768ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3768F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3768ECu;
        // 0x3768f0: 0xa6200012  sh          $zero, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3768ec) {
            ctx->pc = 0x376964u;
            goto label_376964;
        }
    }
    ctx->pc = 0x3768F4u;
label_3768f4:
    // 0x3768f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3768F4u;
    {
        const bool branch_taken_0x3768f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3768f4) {
            ctx->pc = 0x376924u;
            goto label_376924;
        }
    }
    ctx->pc = 0x3768FCu;
    // 0x3768fc: 0xc0ddfe8  jal         func_377FA0
    ctx->pc = 0x3768FCu;
    SET_GPR_U32(ctx, 31, 0x376904u);
    ctx->pc = 0x377FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377FA0u, 0x3768FCu, 0x376904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376904u;
label_376904:
    // 0x376904: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x376904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x376908: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x376908u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37690c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37690Cu;
    {
        const bool branch_taken_0x37690c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37690c) {
            ctx->pc = 0x376910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37690Cu;
            // 0x376910: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x376914u;
            goto label_376914;
        }
    }
    ctx->pc = 0x376914u;
label_376914:
    // 0x376914: 0x2010  mfhi        $a0
    ctx->pc = 0x376914u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x376918: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x376918u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x37691c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x37691Cu;
    {
        const bool branch_taken_0x37691c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37691Cu;
        // 0x376920: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37691c) {
            ctx->pc = 0x376960u;
            goto label_376960;
        }
    }
    ctx->pc = 0x376924u;
label_376924:
    // 0x376924: 0xc0ddfe8  jal         func_377FA0
    ctx->pc = 0x376924u;
    SET_GPR_U32(ctx, 31, 0x37692Cu);
    ctx->pc = 0x377FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377FA0u, 0x376924u, 0x37692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37692Cu;
label_37692c:
    // 0x37692c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x37692cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x376930: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x376930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x376934: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x376934u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x376938: 0x90202a  slt         $a0, $a0, $s0
    ctx->pc = 0x376938u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x37693c: 0x2602000f  addiu       $v0, $s0, 0xF
    ctx->pc = 0x37693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x376940: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x376940u;
    {
        const bool branch_taken_0x376940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x376940) {
            ctx->pc = 0x376944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376940u;
            // 0x376944: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x376948u;
            goto label_376948;
        }
    }
    ctx->pc = 0x376948u;
label_376948:
    // 0x376948: 0x204100b  movn        $v0, $s0, $a0
    ctx->pc = 0x376948u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x37694c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x37694cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x376950: 0x2810  mfhi        $a1
    ctx->pc = 0x376950u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x376954: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x376954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x376958: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x376958u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37695c: 0x52403  sra         $a0, $a1, 16
    ctx->pc = 0x37695cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 16));
label_376960:
    // 0x376960: 0xa6240012  sh          $a0, 0x12($s1)
    ctx->pc = 0x376960u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 4));
label_376964:
    // 0x376964: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x376964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x376968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x376968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37696c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37696cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376970: 0x3e00008  jr          $ra
    ctx->pc = 0x376970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376970u;
        // 0x376974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376978u;
}
