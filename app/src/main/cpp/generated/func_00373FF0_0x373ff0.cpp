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

// Function: func_00373FF0
// Address: 0x373ff0 - 0x3740c8
void func_00373FF0_0x373ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00373FF0_0x373ff0");
#endif

    switch (ctx->pc) {
        case 0x374054u: goto label_374054;
        case 0x3740a4u: goto label_3740a4;
        default: break;
    }

    ctx->pc = 0x373ff0u;

    // 0x373ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x373ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x373ff4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x373ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x373ff8: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x373ff8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x373ffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374004: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x374004u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x374008: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x374008u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x37400c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x37400cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x374010: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x374010u;
    {
        const bool branch_taken_0x374010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x374014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374010u;
        // 0x374014: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x374010) {
            ctx->pc = 0x3740A8u;
            goto label_3740a8;
        }
    }
    ctx->pc = 0x374018u;
    // 0x374018: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x374018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x37401c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x37401cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x374020: 0x2442ee00  addiu       $v0, $v0, -0x1200
    ctx->pc = 0x374020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x374024: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x374024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x374028: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x374028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x37402c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x37402cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x374030: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x374030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374034: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x374034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x374038: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x374038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37403c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x37403cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x374040: 0x46150503  div.s       $f20, $f0, $f21
    ctx->pc = 0x374040u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[21]);
    // 0x374044: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x374044u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x374048: 0x46150d03  div.s       $f20, $f1, $f21
    ctx->pc = 0x374048u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[21]);
    // 0x37404c: 0xc0dd5bc  jal         func_3756F0
    ctx->pc = 0x37404Cu;
    SET_GPR_U32(ctx, 31, 0x374054u);
    ctx->pc = 0x3756F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756F0u, 0x37404Cu, 0x374054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374054u;
label_374054:
    // 0x374054: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x374054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x374058: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x374058u;
    {
        const bool branch_taken_0x374058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x374058) {
            ctx->pc = 0x37405Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374058u;
            // 0x37405c: 0xc600002c  lwc1        $f0, 0x2C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x37406Cu;
            goto label_37406c;
        }
    }
    ctx->pc = 0x374060u;
    // 0x374060: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x374060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374064: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x374064u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x374068: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x374068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37406c:
    // 0x37406c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x37406cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x374070: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x374070u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x374074: 0x0  nop
    ctx->pc = 0x374074u;
    // NOP
    // 0x374078: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x374078u;
    {
        const bool branch_taken_0x374078 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x374078) {
            ctx->pc = 0x37407Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374078u;
            // 0x37407c: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x374080u;
            goto label_374080;
        }
    }
    ctx->pc = 0x374080u;
label_374080:
    // 0x374080: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x374080u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x374084: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x374084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x374088: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x374088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37408c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x37408cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x374090: 0x24632060  addiu       $v1, $v1, 0x2060
    ctx->pc = 0x374090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8288));
    // 0x374094: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x374094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x374098: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x374098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37409c: 0xc0caa7c  jal         func_32A9F0
    ctx->pc = 0x37409Cu;
    SET_GPR_U32(ctx, 31, 0x3740A4u);
    ctx->pc = 0x3740A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37409Cu;
    // 0x3740a0: 0x84450000  lh          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A9F0u, 0x37409Cu, 0x3740A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3740A4u;
label_3740a4:
    // 0x3740a4: 0xe6160014  swc1        $f22, 0x14($s0)
    ctx->pc = 0x3740a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_3740a8:
    // 0x3740a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3740a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3740ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3740acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3740b0: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x3740b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3740b4: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x3740b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3740b8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3740b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3740bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3740BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3740C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3740BCu;
        // 0x3740c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3740BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3740C4u;
    // 0x3740c4: 0x0  nop
    ctx->pc = 0x3740c4u;
    // NOP
    ctx->pc = 0x3740c8u;
}
