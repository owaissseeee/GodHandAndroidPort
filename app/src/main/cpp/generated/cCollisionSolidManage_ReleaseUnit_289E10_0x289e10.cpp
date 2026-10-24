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

// Function: cCollisionSolidManage_ReleaseUnit_289E10
// Address: 0x289e10 - 0x289e38
void cCollisionSolidManage_ReleaseUnit_289E10_0x289e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCollisionSolidManage_ReleaseUnit_289E10_0x289e10");
#endif

    switch (ctx->pc) {
        case 0x289e28u: goto label_289e28;
        default: break;
    }

    ctx->pc = 0x289e10u;

    // 0x289e10: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x289e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x289e14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x289e18: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x289e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x289e1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x289e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x289e20: 0xc04d1fa  jal         func_1347E8
    ctx->pc = 0x289E20u;
    SET_GPR_U32(ctx, 31, 0x289E28u);
    ctx->pc = 0x289E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E20u;
    // 0x289e24: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1347E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1347E8u, 0x289E20u, 0x289E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289E28u;
label_289e28:
    // 0x289e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x289e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x289E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289E2Cu;
        // 0x289e30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289E34u;
    // 0x289e34: 0x0  nop
    ctx->pc = 0x289e34u;
    // NOP
    ctx->pc = 0x289e38u;
}
