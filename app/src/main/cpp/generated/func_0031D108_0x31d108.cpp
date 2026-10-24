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

// Function: func_0031D108
// Address: 0x31d108 - 0x31d168
void func_0031D108_0x31d108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031D108_0x31d108");
#endif

    ctx->pc = 0x31d108u;

    // 0x31d108: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x31d108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31d10c: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x31d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x31d110: 0x3442660d  ori         $v0, $v0, 0x660D
    ctx->pc = 0x31d110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26125);
    // 0x31d114: 0x3c063c6e  lui         $a2, 0x3C6E
    ctx->pc = 0x31d114u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15470 << 16));
    // 0x31d118: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x31d118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31d11c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x31d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x31d120: 0x34c6f35f  ori         $a2, $a2, 0xF35F
    ctx->pc = 0x31d120u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62303);
    // 0x31d124: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31d124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31d128: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31d128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31d12c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x31d12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x31d130: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31d130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d134: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31d134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31d138: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x31d138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d13c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x31d13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x31d140: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x31d140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x31d144: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31d144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31d148: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31d148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31d14c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31d14cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d150: 0x0  nop
    ctx->pc = 0x31d150u;
    // NOP
    // 0x31d154: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31d154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x31d158: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31d158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31d15c: 0x3e00008  jr          $ra
    ctx->pc = 0x31D15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D15Cu;
        // 0x31d160: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D164u;
    // 0x31d164: 0x0  nop
    ctx->pc = 0x31d164u;
    // NOP
    ctx->pc = 0x31d168u;
}
