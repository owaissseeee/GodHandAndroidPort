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

// Function: func_001B19E0
// Address: 0x1b19e0 - 0x1b1a80
void func_001B19E0_0x1b19e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B19E0_0x1b19e0");
#endif

    ctx->pc = 0x1b19e0u;

    // 0x1b19e0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1b19e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b19e4: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x1b19e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x1b19e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b19e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b19ec: 0x46000040  add.s       $f1, $f0, $f0
    ctx->pc = 0x1b19ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1b19f0: 0xc4c70008  lwc1        $f7, 0x8($a2)
    ctx->pc = 0x1b19f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1b19f4: 0x460200c2  mul.s       $f3, $f0, $f2
    ctx->pc = 0x1b19f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b19f8: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x1b19f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b19fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b19fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1a00: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b1a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b1a04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b1a04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b1a08: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x1b1a08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x1b1a0c: 0x46071982  mul.s       $f6, $f3, $f7
    ctx->pc = 0x1b1a0cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x1b1a10: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1b1a10u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1b1a14: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x1b1a14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x1b1a18: 0xe4a60020  swc1        $f6, 0x20($a1)
    ctx->pc = 0x1b1a18u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x1b1a1c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x1b1a1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x1b1a20: 0xe4a30004  swc1        $f3, 0x4($a1)
    ctx->pc = 0x1b1a20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1b1a24: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x1b1a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1b1a28: 0xe4a30010  swc1        $f3, 0x10($a1)
    ctx->pc = 0x1b1a28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x1b1a2c: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x1b1a2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x1b1a30: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1b1a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1a34: 0xe4a60008  swc1        $f6, 0x8($a1)
    ctx->pc = 0x1b1a34u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1b1a38: 0x46010800  add.s       $f0, $f1, $f1
    ctx->pc = 0x1b1a38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x1b1a3c: 0xe4a20018  swc1        $f2, 0x18($a1)
    ctx->pc = 0x1b1a3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x1b1a40: 0xe4a20024  swc1        $f2, 0x24($a1)
    ctx->pc = 0x1b1a40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x1b1a44: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x1b1a44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x1b1a48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b1a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b1a4c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x1b1a4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1b1a50: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x1b1a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x1b1a54: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1b1a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1a58: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x1b1a58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x1b1a5c: 0x46010800  add.s       $f0, $f1, $f1
    ctx->pc = 0x1b1a5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x1b1a60: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x1b1a60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x1b1a64: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1b1a64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1b1a68: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x1b1a68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x1b1a6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b1a6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b1a70: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x1b1a70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x1b1a74: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x1b1a74u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1b1a78: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A78u;
        // 0x1b1a7c: 0xe4a40028  swc1        $f4, 0x28($a1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1A80u;
}
