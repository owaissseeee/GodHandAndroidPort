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

// Function: func_001F88A8
// Address: 0x1f88a8 - 0x1f89a8
void func_001F88A8_0x1f88a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F88A8_0x1f88a8");
#endif

    ctx->pc = 0x1f88a8u;

    // 0x1f88a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f88a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f88ac: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1f88acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1f88b0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1f88b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f88b4: 0xa0860001  sb          $a2, 0x1($a0)
    ctx->pc = 0x1f88b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x1f88b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f88bc: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F88BCu;
    {
        const bool branch_taken_0x1f88bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F88C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88BCu;
        // 0x1f88c0: 0xa4800002  sh          $zero, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88bc) {
            ctx->pc = 0x1F88D8u;
            goto label_1f88d8;
        }
    }
    ctx->pc = 0x1F88C4u;
    // 0x1f88c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f88c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f88c8: 0x50c20024  beql        $a2, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1F88C8u;
    {
        const bool branch_taken_0x1f88c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f88c8) {
            ctx->pc = 0x1F88CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F88C8u;
            // 0x1f88cc: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F895Cu;
            goto label_1f895c;
        }
    }
    ctx->pc = 0x1F88D0u;
    // 0x1f88d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F88D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F88D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F88D8u;
label_1f88d8:
    // 0x1f88d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f88d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f88dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f88dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f88e0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1f88e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f88e4: 0x460260c2  mul.s       $f3, $f12, $f2
    ctx->pc = 0x1f88e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x1f88e8: 0xe48e0008  swc1        $f14, 0x8($a0)
    ctx->pc = 0x1f88e8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1f88ec: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1f88ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1f88f0: 0x46026882  mul.s       $f2, $f13, $f2
    ctx->pc = 0x1f88f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x1f88f4: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x1f88f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1f88f8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1f88f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f88fc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1f88fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1f8900: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1f8900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1f8904: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1f8904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8908: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1f8908u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1f890c: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x1f890cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1f8910: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1f8910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8914: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1f8914u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1f8918: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1f8918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1f891c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1f891cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8920: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1f8920u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1f8924: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x1f8924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1f8928: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1f8928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f892c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1f892cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1f8930: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1f8930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1f8934: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1f8934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8938: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1f8938u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1f893c: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x1f893cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1f8940: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1f8940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8944: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1f8944u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1f8948: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1f8948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1f894c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1f894cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8950: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1f8950u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1f8954: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8954u;
        // 0x1f8958: 0xe481002c  swc1        $f1, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F895Cu;
label_1f895c:
    // 0x1f895c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f895cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f8960: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f8960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f8964: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1f8964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1f8968: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x1f8968u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1f896c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1f896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8970: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1f8970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1f8974: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1f8974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f8978: 0xe48e0008  swc1        $f14, 0x8($a0)
    ctx->pc = 0x1f8978u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1f897c: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1f897cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1f8980: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x1f8980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1f8984: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1f8984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1f8988: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1f8988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1f898c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1f898cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1f8990: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1f8990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1f8994: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1f8994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1f8998: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8998u;
        // 0x1f899c: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F89A0u;
    // 0x1f89a0: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x1f89a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1f89a4: 0x0  nop
    ctx->pc = 0x1f89a4u;
    // NOP
    ctx->pc = 0x1f89a8u;
}
