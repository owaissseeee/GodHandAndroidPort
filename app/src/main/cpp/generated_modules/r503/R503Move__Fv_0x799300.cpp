#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r503_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r503
{
// Function: R503Move__Fv
// Address: 0x799300 - 0x799328
void R503Move__Fv_0x799300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R503Move__Fv_0x799300");
#endif

    switch (ctx->pc) {
        case 0x79931cu: goto label_79931c;
        default: break;
    }

    ctx->pc = 0x799300u;

    // 0x799300: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799304: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x799308: 0x8c44a044  lw          $a0, -0x5FBC($v0)
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79A044u));
    // 0x79930c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79930Cu;
    {
        const bool branch_taken_0x79930c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79930Cu;
        // 0x799310: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79930c) {
            ctx->pc = 0x79931Cu;
            goto label_79931c;
        }
    }
    ctx->pc = 0x799314u;
    // 0x799314: 0xc1e650a  jal         func_799428
    ctx->pc = 0x799314u;
    SET_GPR_U32(ctx, 31, 0x79931Cu);
    ctx->pc = 0x799428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799428u, 0x799314u, 0x79931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79931Cu;
label_79931c:
    // 0x79931c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79931cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799320: 0x3e00008  jr          $ra
    ctx->pc = 0x799320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799320u;
        // 0x799324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799328u;
}
} // namespace gh_r503
