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

// Function: func_0031D0C0
// Address: 0x31d0c0 - 0x31d108
void func_0031D0C0_0x31d0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031D0C0_0x31d0c0");
#endif

    ctx->pc = 0x31d0c0u;

    // 0x31d0c0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x31d0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31d0c4: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x31d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x31d0c8: 0x3442660d  ori         $v0, $v0, 0x660D
    ctx->pc = 0x31d0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26125);
    // 0x31d0cc: 0x3c063c6e  lui         $a2, 0x3C6E
    ctx->pc = 0x31d0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15470 << 16));
    // 0x31d0d0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x31d0d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31d0d4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x31d0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x31d0d8: 0x34c6f35f  ori         $a2, $a2, 0xF35F
    ctx->pc = 0x31d0d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62303);
    // 0x31d0dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31d0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31d0e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31d0e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31d0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31d0e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31d0e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d0ec: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x31d0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x31d0f0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x31d0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x31d0f4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31d0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31d0f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31d0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31d0fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31d0fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d100: 0x3e00008  jr          $ra
    ctx->pc = 0x31D100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D100u;
        // 0x31d104: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D108u;
}
