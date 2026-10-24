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

// Function: cSnd_BgmEvFadeDefault
// Address: 0x2d1e18 - 0x2d1e48
void cSnd_BgmEvFadeDefault_0x2d1e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmEvFadeDefault_0x2d1e18");
#endif

    switch (ctx->pc) {
        case 0x2d1e3cu: goto label_2d1e3c;
        default: break;
    }

    ctx->pc = 0x2d1e18u;

    // 0x2d1e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d1e1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d1e1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1e20: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2d1e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2d1e24: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2d1e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1e28: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2d1e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2d1e2c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2d1e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2d1e30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1e34: 0xc0b47e8  jal         func_2D1FA0
    ctx->pc = 0x2D1E34u;
    SET_GPR_U32(ctx, 31, 0x2D1E3Cu);
    ctx->pc = 0x2D1FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1FA0u, 0x2D1E34u, 0x2D1E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1E3Cu;
label_2d1e3c:
    // 0x2d1e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1e40: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E40u;
        // 0x2d1e44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1E48u;
}
