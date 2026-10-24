#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r602_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r602
{
// Function: isDeadEm__FUi
// Address: 0x7993b0 - 0x7993d0
void isDeadEm__FUi_0x7993b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isDeadEm__FUi_0x7993b0");
#endif

    switch (ctx->pc) {
        case 0x7993c4u: goto label_7993c4;
        default: break;
    }

    ctx->pc = 0x7993b0u;

    // 0x7993b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7993b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7993b4: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x7993b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x7993b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7993b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7993bc: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7993BCu;
    SET_GPR_U32(ctx, 31, 0x7993C4u);
    ctx->pc = 0x7993C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993BCu;
    // 0x7993c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7993BCu, 0x7993C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993C4u;
label_7993c4:
    // 0x7993c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7993c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7993c8: 0x3e00008  jr          $ra
    ctx->pc = 0x7993C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7993CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C8u;
        // 0x7993cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7993C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7993D0u;
}
} // namespace gh_r602
