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

// Function: cSnd_SetBgmFadeOutTimeAll
// Address: 0x2d0820 - 0x2d0850
void cSnd_SetBgmFadeOutTimeAll_0x2d0820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SetBgmFadeOutTimeAll_0x2d0820");
#endif

    switch (ctx->pc) {
        case 0x2d0830u: goto label_2d0830;
        default: break;
    }

    ctx->pc = 0x2d0820u;

    // 0x2d0820: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2d0820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d0824: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0824u;
    {
        const bool branch_taken_0x2d0824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0824) {
            ctx->pc = 0x2D0848u;
            goto label_2d0848;
        }
    }
    ctx->pc = 0x2D082Cu;
    // 0x2d082c: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x2d082cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_2d0830:
    // 0x2d0830: 0xe46c00c4  swc1        $f12, 0xC4($v1)
    ctx->pc = 0x2d0830u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 196), bits); }
    // 0x2d0834: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2d0834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2d0838: 0xac620098  sw          $v0, 0x98($v1)
    ctx->pc = 0x2d0838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 2));
    // 0x2d083c: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x2d083cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x2d0840: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D0840u;
    {
        const bool branch_taken_0x2d0840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0840) {
            ctx->pc = 0x2D0844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0840u;
            // 0x2d0844: 0x8c620098  lw          $v0, 0x98($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0830;
        }
    }
    ctx->pc = 0x2D0848u;
label_2d0848:
    // 0x2d0848: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0850u;
}
