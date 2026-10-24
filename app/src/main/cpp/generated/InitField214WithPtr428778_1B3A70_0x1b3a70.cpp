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

// Function: InitField214WithPtr428778_1B3A70
// Address: 0x1b3a70 - 0x1b3ab8
void InitField214WithPtr428778_1B3A70_0x1b3a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitField214WithPtr428778_1B3A70_0x1b3a70");
#endif

    switch (ctx->pc) {
        case 0x1b3a98u: goto label_1b3a98;
        case 0x1b3aa4u: goto label_1b3aa4;
        default: break;
    }

    ctx->pc = 0x1b3a70u;

    // 0x1b3a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b3a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b3a74: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b3a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b3a78: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b3a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b3a7c: 0x24428778  addiu       $v0, $v0, -0x7888
    ctx->pc = 0x1b3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936440));
    // 0x1b3a80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b3a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b3a84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b3a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3a8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b3a8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a90: 0xc06d568  jal         func_1B55A0
    ctx->pc = 0x1B3A90u;
    SET_GPR_U32(ctx, 31, 0x1B3A98u);
    ctx->pc = 0x1B3A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A90u;
    // 0x1b3a94: 0xae020214  sw          $v0, 0x214($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B55A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B55A0u, 0x1B3A90u, 0x1B3A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A98u;
label_1b3a98:
    // 0x1b3a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a9c: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1B3A9Cu;
    SET_GPR_U32(ctx, 31, 0x1B3AA4u);
    ctx->pc = 0x1B3AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A9Cu;
    // 0x1b3aa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1B3A9Cu, 0x1B3AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3AA4u;
label_1b3aa4:
    // 0x1b3aa4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b3aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3aa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b3aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3AB0u;
        // 0x1b3ab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3AB8u;
}
