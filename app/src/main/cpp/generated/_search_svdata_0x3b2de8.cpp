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

// Function: _search_svdata
// Address: 0x3b2de8 - 0x3b2e38
void _search_svdata_0x3b2de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_search_svdata_0x3b2de8");
#endif

    switch (ctx->pc) {
        case 0x3b2df8u: goto label_3b2df8;
        case 0x3b2e08u: goto label_3b2e08;
        default: break;
    }

    ctx->pc = 0x3b2de8u;

    // 0x3b2de8: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x3b2de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x3b2dec: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x3B2DECu;
    {
        const bool branch_taken_0x3b2dec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2dec) {
            ctx->pc = 0x3B2E2Cu;
            goto label_3b2e2c;
        }
    }
    ctx->pc = 0x3B2DF4u;
    // 0x3b2df4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3b2df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3b2df8:
    // 0x3b2df8: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3B2DF8u;
    {
        const bool branch_taken_0x3b2df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2df8) {
            ctx->pc = 0x3B2DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2DF8u;
            // 0x3b2dfc: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2E24u;
            goto label_3b2e24;
        }
    }
    ctx->pc = 0x3B2E00u;
    // 0x3b2e00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3b2e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b2e04: 0x0  nop
    ctx->pc = 0x3b2e04u;
    // NOP
label_3b2e08:
    // 0x3b2e08: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2E08u;
    {
        const bool branch_taken_0x3b2e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3b2e08) {
            ctx->pc = 0x3B2E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2E08u;
            // 0x3b2e0c: 0x8c630038  lw          $v1, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2E18u;
            goto label_3b2e18;
        }
    }
    ctx->pc = 0x3B2E10u;
    // 0x3b2e10: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E10u;
        // 0x3b2e14: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2E18u;
label_3b2e18:
    // 0x3b2e18: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3B2E18u;
    {
        const bool branch_taken_0x3b2e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2e18) {
            ctx->pc = 0x3B2E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2E18u;
            // 0x3b2e1c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2e08;
        }
    }
    ctx->pc = 0x3B2E20u;
    // 0x3b2e20: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x3b2e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3b2e24:
    // 0x3b2e24: 0x54a0fff4  bnel        $a1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3B2E24u;
    {
        const bool branch_taken_0x3b2e24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2e24) {
            ctx->pc = 0x3B2E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2E24u;
            // 0x3b2e28: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2df8;
        }
    }
    ctx->pc = 0x3B2E2Cu;
label_3b2e2c:
    // 0x3b2e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E2Cu;
        // 0x3b2e30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2E34u;
    // 0x3b2e34: 0x0  nop
    ctx->pc = 0x3b2e34u;
    // NOP
    ctx->pc = 0x3b2e38u;
}
