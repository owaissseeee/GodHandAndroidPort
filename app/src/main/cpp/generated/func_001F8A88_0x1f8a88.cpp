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

// Function: func_001F8A88
// Address: 0x1f8a88 - 0x1f8ad8
void func_001F8A88_0x1f8a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F8A88_0x1f8a88");
#endif

    ctx->pc = 0x1f8a88u;

    // 0x1f8a88: 0x460c6b41  sub.s       $f13, $f13, $f12
    ctx->pc = 0x1f8a88u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x1f8a8c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f8a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f8a90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f8a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8a94: 0x460e7bc1  sub.s       $f15, $f15, $f14
    ctx->pc = 0x1f8a94u;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[14]);
    // 0x1f8a98: 0x46108c41  sub.s       $f17, $f17, $f16
    ctx->pc = 0x1f8a98u;
    ctx->f[17] = FPU_SUB_S(ctx->f[17], ctx->f[16]);
    // 0x1f8a9c: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x1f8a9cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1f8aa0: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x1f8aa0u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x1f8aa4: 0x46008c42  mul.s       $f17, $f17, $f0
    ctx->pc = 0x1f8aa4u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[0]);
    // 0x1f8aa8: 0x460c6b00  add.s       $f12, $f13, $f12
    ctx->pc = 0x1f8aa8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
    // 0x1f8aac: 0xe48d000c  swc1        $f13, 0xC($a0)
    ctx->pc = 0x1f8aacu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1f8ab0: 0x460e7b80  add.s       $f14, $f15, $f14
    ctx->pc = 0x1f8ab0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
    // 0x1f8ab4: 0xe48f0010  swc1        $f15, 0x10($a0)
    ctx->pc = 0x1f8ab4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1f8ab8: 0x46108c00  add.s       $f16, $f17, $f16
    ctx->pc = 0x1f8ab8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[17], ctx->f[16]);
    // 0x1f8abc: 0xe4910014  swc1        $f17, 0x14($a0)
    ctx->pc = 0x1f8abcu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1f8ac0: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x1f8ac0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1f8ac4: 0xe48e0004  swc1        $f14, 0x4($a0)
    ctx->pc = 0x1f8ac4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1f8ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AC8u;
        // 0x1f8acc: 0xe4900008  swc1        $f16, 0x8($a0) (Delay Slot)
        { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8AD0u;
    // 0x1f8ad0: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1f8ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f8ad4: 0x0  nop
    ctx->pc = 0x1f8ad4u;
    // NOP
    ctx->pc = 0x1f8ad8u;
}
