#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: Release__16r301CannonGameId
// Address: 0x79d3f8 - 0x79d428
void Release__16r301CannonGameId_0x79d3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Release__16r301CannonGameId_0x79d3f8");
#endif

    switch (ctx->pc) {
        case 0x79d408u: goto label_79d408;
        default: break;
    }

    ctx->pc = 0x79d3f8u;

    // 0x79d3f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79d3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79d3fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79d3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79d400: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x79D400u;
    SET_GPR_U32(ctx, 31, 0x79D408u);
    ctx->pc = 0x79D404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D400u;
    // 0x79d404: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x79D400u, 0x79D408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D408u;
label_79d408:
    // 0x79d408: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79d408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79d40c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79d40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79d410: 0x8c622384  lw          $v0, 0x2384($v1)
    ctx->pc = 0x79d410u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2384u));
    // 0x79d414: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x79d414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79d418: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x79d418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x79d41c: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x79d41cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x79d420: 0x3e00008  jr          $ra
    ctx->pc = 0x79D420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D420u;
        // 0x79d424: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D428u;
}
} // namespace gh_r301
