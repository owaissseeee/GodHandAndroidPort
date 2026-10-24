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

// Function: func_0035B9B0
// Address: 0x35b9b0 - 0x35ba48
void func_0035B9B0_0x35b9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035B9B0_0x35b9b0");
#endif

    switch (ctx->pc) {
        case 0x35b9f4u: goto label_35b9f4;
        case 0x35ba30u: goto label_35ba30;
        default: break;
    }

    ctx->pc = 0x35b9b0u;

    // 0x35b9b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35b9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35b9b4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x35b9b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b9b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35b9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35b9bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b9c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35b9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x35b9c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35b9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35b9c8: 0x8c650950  lw          $a1, 0x950($v1)
    ctx->pc = 0x35b9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2384)));
    // 0x35b9cc: 0x24630d30  addiu       $v1, $v1, 0xD30
    ctx->pc = 0x35b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3376));
    // 0x35b9d0: 0x8c700280  lw          $s0, 0x280($v1)
    ctx->pc = 0x35b9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x35b9d4: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x35B9D4u;
    {
        const bool branch_taken_0x35b9d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B9D4u;
        // 0x35b9d8: 0x8c71027c  lw          $s1, 0x27C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b9d4) {
            ctx->pc = 0x35BA34u;
            goto label_35ba34;
        }
    }
    ctx->pc = 0x35B9DCu;
    // 0x35b9dc: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x35b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x35b9e0: 0x12230014  beq         $s1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x35B9E0u;
    {
        const bool branch_taken_0x35b9e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x35B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B9E0u;
        // 0x35b9e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b9e0) {
            ctx->pc = 0x35BA34u;
            goto label_35ba34;
        }
    }
    ctx->pc = 0x35B9E8u;
    // 0x35b9e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35b9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b9ec: 0xc0d6ae6  jal         func_35AB98
    ctx->pc = 0x35B9ECu;
    SET_GPR_U32(ctx, 31, 0x35B9F4u);
    ctx->pc = 0x35B9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B9ECu;
    // 0x35b9f0: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AB98u, 0x35B9ECu, 0x35B9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B9F4u;
label_35b9f4:
    // 0x35b9f4: 0x3403ea24  ori         $v1, $zero, 0xEA24
    ctx->pc = 0x35b9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59940);
    // 0x35b9f8: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x35b9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x35b9fc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x35B9FCu;
    {
        const bool branch_taken_0x35b9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35b9fc) {
            ctx->pc = 0x35BA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B9FCu;
            // 0x35ba00: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x35BA04u;
            goto label_35ba04;
        }
    }
    ctx->pc = 0x35BA04u;
label_35ba04:
    // 0x35ba04: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x35ba04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35ba08: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x35ba08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ba0c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x35ba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35ba10: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x35ba10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x35ba14: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x35ba14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35ba18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35ba18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ba1c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x35ba1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x35ba20: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x35ba20u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35ba24: 0x2012  mflo        $a0
    ctx->pc = 0x35ba24u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x35ba28: 0xc0d9a46  jal         func_366918
    ctx->pc = 0x35BA28u;
    SET_GPR_U32(ctx, 31, 0x35BA30u);
    ctx->pc = 0x35BA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BA28u;
    // 0x35ba2c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366918u, 0x35BA28u, 0x35BA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BA30u;
label_35ba30:
    // 0x35ba30: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x35ba30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_35ba34:
    // 0x35ba34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35ba34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ba38: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35ba38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ba3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35ba3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ba40: 0x3e00008  jr          $ra
    ctx->pc = 0x35BA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BA40u;
        // 0x35ba44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BA48u;
}
