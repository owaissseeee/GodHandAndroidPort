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

// Function: func_001507B8
// Address: 0x1507b8 - 0x150830
void func_001507B8_0x1507b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001507B8_0x1507b8");
#endif

    ctx->pc = 0x1507b8u;

    // 0x1507b8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1507b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1507bc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1507bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1507c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1507c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1507c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1507c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1507c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1507c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1507cc: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1507ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1507d0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1507d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1507d4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1507d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1507d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1507d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1507dc: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1507dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1507e0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1507e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1507e4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1507e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1507e8: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x1507e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1507ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1507ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1507f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1507F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1507F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1507F0u;
        // 0x1507f4: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1507F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1507F8u;
    // 0x1507f8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1507f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1507fc: 0x0  nop
    ctx->pc = 0x1507fcu;
    // NOP
    // 0x150800: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x150800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x150804: 0x0  nop
    ctx->pc = 0x150804u;
    // NOP
    // 0x150808: 0x0  nop
    ctx->pc = 0x150808u;
    // NOP
    // 0x15080c: 0x0  nop
    ctx->pc = 0x15080cu;
    // NOP
    // 0x150810: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x150810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x150814: 0x0  nop
    ctx->pc = 0x150814u;
    // NOP
    // 0x150818: 0x0  nop
    ctx->pc = 0x150818u;
    // NOP
    // 0x15081c: 0x0  nop
    ctx->pc = 0x15081cu;
    // NOP
    // 0x150820: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x150820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x150824: 0x0  nop
    ctx->pc = 0x150824u;
    // NOP
    // 0x150828: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x150828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15082c: 0x0  nop
    ctx->pc = 0x15082cu;
    // NOP
    ctx->pc = 0x150830u;
}
