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

// Function: SetMotionStep
// Address: 0x158288 - 0x1582a0
void SetMotionStep_0x158288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMotionStep_0x158288");
#endif

    ctx->pc = 0x158288u;

    // 0x158288: 0x94820434  lhu         $v0, 0x434($a0)
    ctx->pc = 0x158288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1076)));
    // 0x15828c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15828cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x158290: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x158290u;
    {
        const bool branch_taken_0x158290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158290) {
            ctx->pc = 0x158294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158290u;
            // 0x158294: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x158298u;
            goto label_158298;
        }
    }
    ctx->pc = 0x158298u;
label_158298:
    // 0x158298: 0x3e00008  jr          $ra
    ctx->pc = 0x158298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158298u;
        // 0x15829c: 0xe48c0444  swc1        $f12, 0x444($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1092), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1582A0u;
}
