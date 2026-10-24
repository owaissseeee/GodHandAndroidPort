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

// Function: func_002B12D8
// Address: 0x2b12d8 - 0x2b1300
void func_002B12D8_0x2b12d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B12D8_0x2b12d8");
#endif

    ctx->pc = 0x2b12d8u;

    // 0x2b12d8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2b12d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2b12dc: 0x3c0141d0  lui         $at, 0x41D0
    ctx->pc = 0x2b12dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16848 << 16));
    // 0x2b12e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b12e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b12e4: 0x8c627a0c  lw          $v0, 0x7A0C($v1)
    ctx->pc = 0x2b12e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x2b12e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B12E8u;
    {
        const bool branch_taken_0x2b12e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b12e8) {
            ctx->pc = 0x2B12F8u;
            goto label_2b12f8;
        }
    }
    ctx->pc = 0x2B12F0u;
    // 0x2b12f0: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x2b12f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x2b12f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b12f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b12f8:
    // 0x2b12f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B12F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B12F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1300u;
}
