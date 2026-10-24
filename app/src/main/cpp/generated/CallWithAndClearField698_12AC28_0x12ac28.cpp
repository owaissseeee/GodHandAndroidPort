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

// Function: CallWithAndClearField698_12AC28
// Address: 0x12ac28 - 0x12ac60
void CallWithAndClearField698_12AC28_0x12ac28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CallWithAndClearField698_12AC28_0x12ac28");
#endif

    switch (ctx->pc) {
        case 0x12ac4cu: goto label_12ac4c;
        default: break;
    }

    ctx->pc = 0x12ac28u;

    // 0x12ac28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ac28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ac2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12ac2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12ac30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12ac30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12ac34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ac34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac38: 0x8e040698  lw          $a0, 0x698($s0)
    ctx->pc = 0x12ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x12ac3c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AC3Cu;
    {
        const bool branch_taken_0x12ac3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ac3c) {
            ctx->pc = 0x12AC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AC3Cu;
            // 0x12ac40: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AC54u;
            goto label_12ac54;
        }
    }
    ctx->pc = 0x12AC44u;
    // 0x12ac44: 0xc073d2a  jal         func_1CF4A8
    ctx->pc = 0x12AC44u;
    SET_GPR_U32(ctx, 31, 0x12AC4Cu);
    ctx->pc = 0x1CF4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF4A8u, 0x12AC44u, 0x12AC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC4Cu;
label_12ac4c:
    // 0x12ac4c: 0xae000698  sw          $zero, 0x698($s0)
    ctx->pc = 0x12ac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 0));
    // 0x12ac50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12ac50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12ac54:
    // 0x12ac54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ac54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ac58: 0x3e00008  jr          $ra
    ctx->pc = 0x12AC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC58u;
        // 0x12ac5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AC60u;
}
