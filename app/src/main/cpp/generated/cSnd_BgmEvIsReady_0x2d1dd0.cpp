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

// Function: cSnd_BgmEvIsReady
// Address: 0x2d1dd0 - 0x2d1e18
void cSnd_BgmEvIsReady_0x2d1dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmEvIsReady_0x2d1dd0");
#endif

    switch (ctx->pc) {
        case 0x2d1de0u: goto label_2d1de0;
        case 0x2d1df0u: goto label_2d1df0;
        default: break;
    }

    ctx->pc = 0x2d1dd0u;

    // 0x2d1dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d1dd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1dd8: 0xc0b48ac  jal         func_2D22B0
    ctx->pc = 0x2D1DD8u;
    SET_GPR_U32(ctx, 31, 0x2D1DE0u);
    ctx->pc = 0x2D22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D22B0u, 0x2D1DD8u, 0x2D1DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1DE0u;
label_2d1de0:
    // 0x2d1de0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1DE0u;
    {
        const bool branch_taken_0x2d1de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1de0) {
            ctx->pc = 0x2D1DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1DE0u;
            // 0x2d1de4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1E00u;
            goto label_2d1e00;
        }
    }
    ctx->pc = 0x2D1DE8u;
    // 0x2d1de8: 0xc0b329e  jal         func_2CCA78
    ctx->pc = 0x2D1DE8u;
    SET_GPR_U32(ctx, 31, 0x2D1DF0u);
    ctx->pc = 0x2D1DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1DE8u;
    // 0x2d1dec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCA78u, 0x2D1DE8u, 0x2D1DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1DF0u;
label_2d1df0:
    // 0x2d1df0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d1df0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1df4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D1DF4u;
    {
        const bool branch_taken_0x2d1df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DF4u;
        // 0x2d1df8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1df4) {
            ctx->pc = 0x2D1E00u;
            goto label_2d1e00;
        }
    }
    ctx->pc = 0x2D1DFCu;
    // 0x2d1dfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1e00:
    // 0x2d1e00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1e04: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E04u;
        // 0x2d1e08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1E0Cu;
    // 0x2d1e0c: 0x0  nop
    ctx->pc = 0x2d1e0cu;
    // NOP
    // 0x2d1e10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d1e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d1e14: 0x0  nop
    ctx->pc = 0x2d1e14u;
    // NOP
    ctx->pc = 0x2d1e18u;
}
