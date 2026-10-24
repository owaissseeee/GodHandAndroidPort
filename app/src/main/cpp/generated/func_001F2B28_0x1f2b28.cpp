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

// Function: func_001F2B28
// Address: 0x1f2b28 - 0x1f2b80
void func_001F2B28_0x1f2b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F2B28_0x1f2b28");
#endif

    switch (ctx->pc) {
        case 0x1f2b48u: goto label_1f2b48;
        case 0x1f2b58u: goto label_1f2b58;
        case 0x1f2b68u: goto label_1f2b68;
        default: break;
    }

    ctx->pc = 0x1f2b28u;

    // 0x1f2b28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f2b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f2b2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f2b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f2b30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f2b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f2b34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f2b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f2b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f2b3c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f2b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b40: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1F2B40u;
    SET_GPR_U32(ctx, 31, 0x1F2B48u);
    ctx->pc = 0x1F2B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B40u;
    // 0x1f2b44: 0x26040348  addiu       $a0, $s0, 0x348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1F2B40u, 0x1F2B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B48u;
label_1f2b48:
    // 0x1f2b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f2b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b50: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F2B50u;
    SET_GPR_U32(ctx, 31, 0x1F2B58u);
    ctx->pc = 0x1F2B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B50u;
    // 0x1f2b54: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F2B50u, 0x1F2B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B58u;
label_1f2b58:
    // 0x1f2b58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f2b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b60: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F2B60u;
    SET_GPR_U32(ctx, 31, 0x1F2B68u);
    ctx->pc = 0x1F2B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B60u;
    // 0x1f2b64: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F2B60u, 0x1F2B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B68u;
label_1f2b68:
    // 0x1f2b68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f2b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2b6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f2b6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f2b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2b74: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B74u;
        // 0x1f2b78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2B7Cu;
    // 0x1f2b7c: 0x0  nop
    ctx->pc = 0x1f2b7cu;
    // NOP
    ctx->pc = 0x1f2b80u;
}
