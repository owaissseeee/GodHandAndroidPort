#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r605_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r605
{
// Function: isDeadEm__FUi
// Address: 0x799630 - 0x799650
void isDeadEm__FUi_0x799630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isDeadEm__FUi_0x799630");
#endif

    switch (ctx->pc) {
        case 0x799644u: goto label_799644;
        default: break;
    }

    ctx->pc = 0x799630u;

    // 0x799630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799634: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x799634u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x799638: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79963c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79963Cu;
    SET_GPR_U32(ctx, 31, 0x799644u);
    ctx->pc = 0x799640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79963Cu;
    // 0x799640: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79963Cu, 0x799644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799644u;
label_799644:
    // 0x799644: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799648: 0x3e00008  jr          $ra
    ctx->pc = 0x799648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799648u;
        // 0x79964c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799650u;
}
} // namespace gh_r605
