#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r606_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r606
{
// Function: isDeadEm__FUi
// Address: 0x799e20 - 0x799e40
void isDeadEm__FUi_0x799e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isDeadEm__FUi_0x799e20");
#endif

    switch (ctx->pc) {
        case 0x799e34u: goto label_799e34;
        default: break;
    }

    ctx->pc = 0x799e20u;

    // 0x799e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799e24: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x799e24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x799e28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799e2c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799E2Cu;
    SET_GPR_U32(ctx, 31, 0x799E34u);
    ctx->pc = 0x799E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E2Cu;
    // 0x799e30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799E2Cu, 0x799E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E34u;
label_799e34:
    // 0x799e34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799e38: 0x3e00008  jr          $ra
    ctx->pc = 0x799E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E38u;
        // 0x799e3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799E40u;
}
} // namespace gh_r606
