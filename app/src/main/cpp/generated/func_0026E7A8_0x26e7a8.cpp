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

// Function: func_0026E7A8
// Address: 0x26e7a8 - 0x26e7d8
void func_0026E7A8_0x26e7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026E7A8_0x26e7a8");
#endif

    ctx->pc = 0x26e7a8u;

    // 0x26e7a8: 0x24821660  addiu       $v0, $a0, 0x1660
    ctx->pc = 0x26e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5728));
    // 0x26e7ac: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26E7ACu;
    {
        const bool branch_taken_0x26e7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x26e7ac) {
            ctx->pc = 0x26E7CCu;
            goto label_26e7cc;
        }
    }
    ctx->pc = 0x26E7B4u;
    // 0x26e7b4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x26e7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e7b8: 0xe4801660  swc1        $f0, 0x1660($a0)
    ctx->pc = 0x26e7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5728), bits); }
    // 0x26e7bc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x26e7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e7c0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x26e7c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x26e7c4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x26e7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e7c8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x26e7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_26e7cc:
    // 0x26e7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x26E7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E7D4u;
    // 0x26e7d4: 0x0  nop
    ctx->pc = 0x26e7d4u;
    // NOP
    ctx->pc = 0x26e7d8u;
}
