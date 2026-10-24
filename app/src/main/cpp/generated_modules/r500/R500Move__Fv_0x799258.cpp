#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r500_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r500
{
// Function: R500Move__Fv
// Address: 0x799258 - 0x799280
void R500Move__Fv_0x799258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R500Move__Fv_0x799258");
#endif

    switch (ctx->pc) {
        case 0x799274u: goto label_799274;
        default: break;
    }

    ctx->pc = 0x799258u;

    // 0x799258: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79925c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x799260: 0x8c449d00  lw          $a0, -0x6300($v0)
    ctx->pc = 0x799260u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x799D00u));
    // 0x799264: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799264u;
    {
        const bool branch_taken_0x799264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799264u;
        // 0x799268: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799264) {
            ctx->pc = 0x799274u;
            goto label_799274;
        }
    }
    ctx->pc = 0x79926Cu;
    // 0x79926c: 0xc1e64c6  jal         func_799318
    ctx->pc = 0x79926Cu;
    SET_GPR_U32(ctx, 31, 0x799274u);
    ctx->pc = 0x799318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799318u, 0x79926Cu, 0x799274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799274u;
label_799274:
    // 0x799274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799278: 0x3e00008  jr          $ra
    ctx->pc = 0x799278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799278u;
        // 0x79927c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799280u;
}
} // namespace gh_r500
