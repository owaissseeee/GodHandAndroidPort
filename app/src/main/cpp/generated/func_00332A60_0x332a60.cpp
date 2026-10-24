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

// Function: func_00332A60
// Address: 0x332a60 - 0x332ae8
void func_00332A60_0x332a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00332A60_0x332a60");
#endif

    switch (ctx->pc) {
        case 0x332a84u: goto label_332a84;
        case 0x332aa4u: goto label_332aa4;
        case 0x332aacu: goto label_332aac;
        case 0x332ab4u: goto label_332ab4;
        case 0x332abcu: goto label_332abc;
        case 0x332ac8u: goto label_332ac8;
        default: break;
    }

    ctx->pc = 0x332a60u;

    // 0x332a60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x332a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x332a64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x332a64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332a68: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x332a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x332a6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x332a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332a70: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x332a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x332a74: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x332A74u;
    {
        const bool branch_taken_0x332a74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x332A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A74u;
        // 0x332a78: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332a74) {
            ctx->pc = 0x332AD4u;
            goto label_332ad4;
        }
    }
    ctx->pc = 0x332A7Cu;
    // 0x332a7c: 0xc0ccf00  jal         func_333C00
    ctx->pc = 0x332A7Cu;
    SET_GPR_U32(ctx, 31, 0x332A84u);
    ctx->pc = 0x332A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332A7Cu;
    // 0x332a80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333C00u, 0x332A7Cu, 0x332A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332A84u;
label_332a84:
    // 0x332a84: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x332a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x332a88: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x332a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x332a8c: 0x24719c90  addiu       $s1, $v1, -0x6370
    ctx->pc = 0x332a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941840));
    // 0x332a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x332a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332a94: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x332A94u;
    {
        const bool branch_taken_0x332a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x332A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A94u;
        // 0x332a98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332a94) {
            ctx->pc = 0x332AD0u;
            goto label_332ad0;
        }
    }
    ctx->pc = 0x332A9Cu;
    // 0x332a9c: 0xc0ccce4  jal         func_333390
    ctx->pc = 0x332A9Cu;
    SET_GPR_U32(ctx, 31, 0x332AA4u);
    ctx->pc = 0x333390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333390u, 0x332A9Cu, 0x332AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332AA4u;
label_332aa4:
    // 0x332aa4: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x332AA4u;
    SET_GPR_U32(ctx, 31, 0x332AACu);
    ctx->pc = 0x332AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332AA4u;
    // 0x332aa8: 0x34048100  ori         $a0, $zero, 0x8100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x332AA4u, 0x332AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332AACu;
label_332aac:
    // 0x332aac: 0xc0e6368  jal         func_398DA0
    ctx->pc = 0x332AACu;
    SET_GPR_U32(ctx, 31, 0x332AB4u);
    ctx->pc = 0x332AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332AACu;
    // 0x332ab0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DA0u, 0x332AACu, 0x332AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332AB4u;
label_332ab4:
    // 0x332ab4: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x332AB4u;
    SET_GPR_U32(ctx, 31, 0x332ABCu);
    ctx->pc = 0x332AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332AB4u;
    // 0x332ab8: 0x34048101  ori         $a0, $zero, 0x8101 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33025);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x332AB4u, 0x332ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332ABCu;
label_332abc:
    // 0x332abc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x332abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332ac0: 0xc0cca0e  jal         func_332838
    ctx->pc = 0x332AC0u;
    SET_GPR_U32(ctx, 31, 0x332AC8u);
    ctx->pc = 0x332AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332AC0u;
    // 0x332ac4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332838u, 0x332AC0u, 0x332AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332AC8u;
label_332ac8:
    // 0x332ac8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x332AC8u;
    {
        const bool branch_taken_0x332ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x332ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332AC8u;
        // 0x332acc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332ac8) {
            ctx->pc = 0x332AD8u;
            goto label_332ad8;
        }
    }
    ctx->pc = 0x332AD0u;
label_332ad0:
    // 0x332ad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x332ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_332ad4:
    // 0x332ad4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x332ad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_332ad8:
    // 0x332ad8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x332ad8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x332adc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x332adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x332ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x332AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332AE0u;
        // 0x332ae4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332AE8u;
}
