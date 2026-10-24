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

// Function: SubInit_init
// Address: 0x1c6a90 - 0x1c6b68
void SubInit_init_0x1c6a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SubInit_init_0x1c6a90");
#endif

    switch (ctx->pc) {
        case 0x1c6b44u: goto label_1c6b44;
        case 0x1c6b4cu: goto label_1c6b4c;
        case 0x1c6b58u: goto label_1c6b58;
        default: break;
    }

    ctx->pc = 0x1c6a90u;

    // 0x1c6a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6a94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c6a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c6a98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6a9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6aa0: 0xa2080003  sb          $t0, 0x3($s0)
    ctx->pc = 0x1c6aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x1c6aa4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1c6aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6aa8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6AA8u;
    {
        const bool branch_taken_0x1c6aa8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1C6AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AA8u;
        // 0x1c6aac: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6aa8) {
            ctx->pc = 0x1C6AC4u;
            goto label_1c6ac4;
        }
    }
    ctx->pc = 0x1C6AB0u;
    // 0x1c6ab0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c6ab0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6ab4: 0x0  nop
    ctx->pc = 0x1c6ab4u;
    // NOP
    // 0x1c6ab8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c6ab8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c6abc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6ABCu;
    {
        const bool branch_taken_0x1c6abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6ABCu;
        // 0x1c6ac0: 0xe6000030  swc1        $f0, 0x30($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6abc) {
            ctx->pc = 0x1C6AE4u;
            goto label_1c6ae4;
        }
    }
    ctx->pc = 0x1C6AC4u;
label_1c6ac4:
    // 0x1c6ac4: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x1c6ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1c6ac8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1c6ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1c6acc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c6accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c6ad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6ad4: 0x0  nop
    ctx->pc = 0x1c6ad4u;
    // NOP
    // 0x1c6ad8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c6ad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c6adc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c6adcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1c6ae0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1c6ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1c6ae4:
    // 0x1c6ae4: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x1c6ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1c6ae8: 0x50460008  beql        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6AE8u;
    {
        const bool branch_taken_0x1c6ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1c6ae8) {
            ctx->pc = 0x1C6AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6AE8u;
            // 0x1c6aec: 0x260200a0  addiu       $v0, $s0, 0xA0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6B0Cu;
            goto label_1c6b0c;
        }
    }
    ctx->pc = 0x1C6AF0u;
    // 0x1c6af0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1c6af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6af4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x1c6af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x1c6af8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1c6af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6afc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c6afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c6b00: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1c6b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6b04: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c6b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1c6b08: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x1c6b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_1c6b0c:
    // 0x1c6b0c: 0x50470008  beql        $v0, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6B0Cu;
    {
        const bool branch_taken_0x1c6b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x1c6b0c) {
            ctx->pc = 0x1C6B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6B0Cu;
            // 0x1c6b10: 0xe60c0130  swc1        $f12, 0x130($s0) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6B30u;
            goto label_1c6b30;
        }
    }
    ctx->pc = 0x1C6B14u;
    // 0x1c6b14: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1c6b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6b18: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x1c6b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x1c6b1c: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1c6b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6b20: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c6b20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c6b24: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1c6b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6b28: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c6b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1c6b2c: 0xe60c0130  swc1        $f12, 0x130($s0)
    ctx->pc = 0x1c6b2cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_1c6b30:
    // 0x1c6b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b34: 0xe60d0134  swc1        $f13, 0x134($s0)
    ctx->pc = 0x1c6b34u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x1c6b38: 0xe60c0138  swc1        $f12, 0x138($s0)
    ctx->pc = 0x1c6b38u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x1c6b3c: 0xc071c4e  jal         func_1C7138
    ctx->pc = 0x1C6B3Cu;
    SET_GPR_U32(ctx, 31, 0x1C6B44u);
    ctx->pc = 0x1C6B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B3Cu;
    // 0x1c6b40: 0xe60d013c  swc1        $f13, 0x13C($s0) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7138u, 0x1C6B3Cu, 0x1C6B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B44u;
label_1c6b44:
    // 0x1c6b44: 0xc071cc4  jal         func_1C7310
    ctx->pc = 0x1C6B44u;
    SET_GPR_U32(ctx, 31, 0x1C6B4Cu);
    ctx->pc = 0x1C6B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B44u;
    // 0x1c6b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7310u, 0x1C6B44u, 0x1C6B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B4Cu;
label_1c6b4c:
    // 0x1c6b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b50: 0xc071f28  jal         func_1C7CA0
    ctx->pc = 0x1C6B50u;
    SET_GPR_U32(ctx, 31, 0x1C6B58u);
    ctx->pc = 0x1C6B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B50u;
    // 0x1c6b54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CA0u, 0x1C6B50u, 0x1C6B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B58u;
label_1c6b58:
    // 0x1c6b58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c6b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6b5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6b60: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B60u;
        // 0x1c6b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6B68u;
}
