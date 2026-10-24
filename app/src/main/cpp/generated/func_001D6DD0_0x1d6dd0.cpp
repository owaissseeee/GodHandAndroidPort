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

// Function: func_001D6DD0
// Address: 0x1d6dd0 - 0x1d6e20
void func_001D6DD0_0x1d6dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D6DD0_0x1d6dd0");
#endif

    ctx->pc = 0x1d6dd0u;

    // 0x1d6dd0: 0x9c830004  lwu         $v1, 0x4($a0)
    ctx->pc = 0x1d6dd0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d6dd4: 0x310fb  dsra        $v0, $v1, 3
    ctx->pc = 0x1d6dd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 3);
    // 0x1d6dd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d6dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d6ddc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D6DDCu;
    {
        const bool branch_taken_0x1d6ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DDCu;
        // 0x1d6de0: 0x8c860004  lw          $a2, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ddc) {
            ctx->pc = 0x1D6E18u;
            goto label_1d6e18;
        }
    }
    ctx->pc = 0x1D6DE4u;
    // 0x1d6de4: 0x3113b  dsra        $v0, $v1, 4
    ctx->pc = 0x1d6de4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 4);
    // 0x1d6de8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d6de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d6dec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D6DECu;
    {
        const bool branch_taken_0x1d6dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6dec) {
            ctx->pc = 0x1D6E18u;
            goto label_1d6e18;
        }
    }
    ctx->pc = 0x1D6DF4u;
    // 0x1d6df4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6DF4u;
    {
        const bool branch_taken_0x1d6df4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6df4) {
            ctx->pc = 0x1D6DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6DF4u;
            // 0x1d6df8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6E08u;
            goto label_1d6e08;
        }
    }
    ctx->pc = 0x1D6DFCu;
    // 0x1d6dfc: 0x34c20010  ori         $v0, $a2, 0x10
    ctx->pc = 0x1d6dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x1d6e00: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E00u;
        // 0x1d6e04: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6E08u;
label_1d6e08:
    // 0x1d6e08: 0xac600104  sw          $zero, 0x104($v1)
    ctx->pc = 0x1d6e08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 0));
    // 0x1d6e0c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1d6e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d6e10: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1d6e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1d6e14: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1d6e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1d6e18:
    // 0x1d6e18: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6E20u;
}
