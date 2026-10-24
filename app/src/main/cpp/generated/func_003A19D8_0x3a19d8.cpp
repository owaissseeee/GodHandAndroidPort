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

// Function: func_003A19D8
// Address: 0x3a19d8 - 0x3a19f8
void func_003A19D8_0x3a19d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A19D8_0x3a19d8");
#endif

    ctx->pc = 0x3a19d8u;

    // 0x3a19d8: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x3a19d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a19dc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3a19dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3a19e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a19e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a19e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a19e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a19e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a19e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a19ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3A19ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A19ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A19F4u;
    // 0x3a19f4: 0x0  nop
    ctx->pc = 0x3a19f4u;
    // NOP
    ctx->pc = 0x3a19f8u;
}
