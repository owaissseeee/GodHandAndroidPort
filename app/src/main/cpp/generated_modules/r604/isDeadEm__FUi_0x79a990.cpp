#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: isDeadEm__FUi
// Address: 0x79a990 - 0x79a9b0
void isDeadEm__FUi_0x79a990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isDeadEm__FUi_0x79a990");
#endif

    switch (ctx->pc) {
        case 0x79a9a4u: goto label_79a9a4;
        default: break;
    }

    ctx->pc = 0x79a990u;

    // 0x79a990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79a994: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x79a994u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x79a998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79a99c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79A99Cu;
    SET_GPR_U32(ctx, 31, 0x79A9A4u);
    ctx->pc = 0x79A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A99Cu;
    // 0x79a9a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A99Cu, 0x79A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9A4u;
label_79a9a4:
    // 0x79a9a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9A8u;
        // 0x79a9ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A9B0u;
}
} // namespace gh_r604
