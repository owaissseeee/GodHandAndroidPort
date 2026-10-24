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

// Function: func_00319970
// Address: 0x319970 - 0x319cc0
void func_00319970_0x319970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00319970_0x319970");
#endif

    switch (ctx->pc) {
        case 0x319a1cu: goto label_319a1c;
        case 0x319a58u: goto label_319a58;
        case 0x319a60u: goto label_319a60;
        case 0x319b28u: goto label_319b28;
        case 0x319b30u: goto label_319b30;
        case 0x319c00u: goto label_319c00;
        case 0x319c08u: goto label_319c08;
        case 0x319c34u: goto label_319c34;
        case 0x319c40u: goto label_319c40;
        case 0x319c4cu: goto label_319c4c;
        default: break;
    }

    ctx->pc = 0x319970u;

    // 0x319970: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x319970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x319974: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x319974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x319978: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x319978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x31997c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x31997cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x319980: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x319980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319984: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x319984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x319988: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x319988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31998c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x31998cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x319990: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x319990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x319994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x319994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x319998: 0xe7b90098  swc1        $f25, 0x98($sp)
    ctx->pc = 0x319998u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x31999c: 0xe7b80090  swc1        $f24, 0x90($sp)
    ctx->pc = 0x31999cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3199a0: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x3199a0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3199a4: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x3199a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3199a8: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x3199a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3199ac: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x3199acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3199b0: 0xc6200324  lwc1        $f0, 0x324($s1)
    ctx->pc = 0x3199b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3199b4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3199b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3199b8: 0x0  nop
    ctx->pc = 0x3199b8u;
    // NOP
    // 0x3199bc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3199BCu;
    {
        const bool branch_taken_0x3199bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3199C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3199BCu;
        // 0x3199c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3199bc) {
            ctx->pc = 0x3199D8u;
            goto label_3199d8;
        }
    }
    ctx->pc = 0x3199C4u;
    // 0x3199c4: 0xc6200328  lwc1        $f0, 0x328($s1)
    ctx->pc = 0x3199c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3199c8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3199c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3199cc: 0x0  nop
    ctx->pc = 0x3199ccu;
    // NOP
    // 0x3199d0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3199D0u;
    {
        const bool branch_taken_0x3199d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3199D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3199D0u;
        // 0x3199d4: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3199d0) {
            ctx->pc = 0x3199E0u;
            goto label_3199e0;
        }
    }
    ctx->pc = 0x3199D8u;
label_3199d8:
    // 0x3199d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3199d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3199dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3199dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3199e0:
    // 0x3199e0: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x3199E0u;
    {
        const bool branch_taken_0x3199e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3199E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3199E0u;
        // 0x3199e4: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3199e0) {
            ctx->pc = 0x319C80u;
            goto label_319c80;
        }
    }
    ctx->pc = 0x3199E8u;
    // 0x3199e8: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x3199e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x3199ec: 0x8e240320  lw          $a0, 0x320($s1)
    ctx->pc = 0x3199ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x3199f0: 0x247074a0  addiu       $s0, $v1, 0x74A0
    ctx->pc = 0x3199f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x3199f4: 0xc4414c48  lwc1        $f1, 0x4C48($v0)
    ctx->pc = 0x3199f4u;
    { uint32_t bits = FAST_READ32(0x754C48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3199f8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3199f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3199fc: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x3199fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x319a00: 0xc6000574  lwc1        $f0, 0x574($s0)
    ctx->pc = 0x319a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319a04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x319a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x319a08: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x319A08u;
    {
        const bool branch_taken_0x319a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A08u;
        // 0x319a0c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319a08) {
            ctx->pc = 0x319C28u;
            goto label_319c28;
        }
    }
    ctx->pc = 0x319A10u;
    // 0x319a10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x319a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319a14: 0xc052d8e  jal         func_14B638
    ctx->pc = 0x319A14u;
    SET_GPR_U32(ctx, 31, 0x319A1Cu);
    ctx->pc = 0x319A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319A14u;
    // 0x319a18: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B638u, 0x319A14u, 0x319A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319A1Cu;
label_319a1c:
    // 0x319a1c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x319a1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319a20: 0x1a800097  blez        $s4, . + 4 + (0x97 << 2)
    ctx->pc = 0x319A20u;
    {
        const bool branch_taken_0x319a20 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x319A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A20u;
        // 0x319a24: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319a20) {
            ctx->pc = 0x319C80u;
            goto label_319c80;
        }
    }
    ctx->pc = 0x319A28u;
    // 0x319a28: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x319a28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x319a2c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x319a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x319a30: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x319a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x319a34: 0x24130e10  addiu       $s3, $zero, 0xE10
    ctx->pc = 0x319a34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x319a38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x319a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x319a3c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x319a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x319a40: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x319a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x319a44: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x319a44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x319a48: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x319a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x319a4c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x319a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x319a50: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x319a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x319a54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x319a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_319a58:
    // 0x319a58: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x319A58u;
    SET_GPR_U32(ctx, 31, 0x319A60u);
    ctx->pc = 0x319A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319A58u;
    // 0x319a5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x319A58u, 0x319A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319A60u;
label_319a60:
    // 0x319a60: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x319a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x319a64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x319a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319a68: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x319a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x319a6c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x319a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x319a70: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x319A70u;
    {
        const bool branch_taken_0x319a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319a70) {
            ctx->pc = 0x319A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319A70u;
            // 0x319a74: 0x8ea20210  lw          $v0, 0x210($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 528)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319AD0u;
            goto label_319ad0;
        }
    }
    ctx->pc = 0x319A78u;
    // 0x319a78: 0xc6200324  lwc1        $f0, 0x324($s1)
    ctx->pc = 0x319a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319a7c: 0xc602038c  lwc1        $f2, 0x38C($s0)
    ctx->pc = 0x319a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x319a80: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x319a80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x319a84: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x319a84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x319a88: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x319a88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x319a8c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x319A8Cu;
    {
        const bool branch_taken_0x319a8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A8Cu;
        // 0x319a90: 0xe600038c  swc1        $f0, 0x38C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 908), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319a8c) {
            ctx->pc = 0x319AACu;
            goto label_319aac;
        }
    }
    ctx->pc = 0x319A94u;
    // 0x319a94: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x319a94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x319a98: 0x0  nop
    ctx->pc = 0x319a98u;
    // NOP
    // 0x319a9c: 0x45020027  bc1fl       . + 4 + (0x27 << 2)
    ctx->pc = 0x319A9Cu;
    {
        const bool branch_taken_0x319a9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x319a9c) {
            ctx->pc = 0x319AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319A9Cu;
            // 0x319aa0: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319B3Cu;
            goto label_319b3c;
        }
    }
    ctx->pc = 0x319AA4u;
    // 0x319aa4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x319AA4u;
    {
        const bool branch_taken_0x319aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AA4u;
        // 0x319aa8: 0x46170000  add.s       $f0, $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319aa4) {
            ctx->pc = 0x319B34u;
            goto label_319b34;
        }
    }
    ctx->pc = 0x319AACu;
label_319aac:
    // 0x319aac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x319aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x319ab0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x319ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x319ab4: 0x0  nop
    ctx->pc = 0x319ab4u;
    // NOP
    // 0x319ab8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x319ab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x319abc: 0x0  nop
    ctx->pc = 0x319abcu;
    // NOP
    // 0x319ac0: 0x4502001e  bc1fl       . + 4 + (0x1E << 2)
    ctx->pc = 0x319AC0u;
    {
        const bool branch_taken_0x319ac0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x319ac0) {
            ctx->pc = 0x319AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319AC0u;
            // 0x319ac4: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319B3Cu;
            goto label_319b3c;
        }
    }
    ctx->pc = 0x319AC8u;
    // 0x319ac8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x319AC8u;
    {
        const bool branch_taken_0x319ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AC8u;
        // 0x319acc: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ac8) {
            ctx->pc = 0x319B34u;
            goto label_319b34;
        }
    }
    ctx->pc = 0x319AD0u;
label_319ad0:
    // 0x319ad0: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x319AD0u;
    {
        const bool branch_taken_0x319ad0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x319ad0) {
            ctx->pc = 0x319AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319AD0u;
            // 0x319ad4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x319AD8u;
            goto label_319ad8;
        }
    }
    ctx->pc = 0x319AD8u;
label_319ad8:
    // 0x319ad8: 0xc6200324  lwc1        $f0, 0x324($s1)
    ctx->pc = 0x319ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319adc: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x319adcu;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x319ae0: 0x1010  mfhi        $v0
    ctx->pc = 0x319ae0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x319ae4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x319AE4u;
    {
        const bool branch_taken_0x319ae4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x319AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AE4u;
        // 0x319ae8: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ae4) {
            ctx->pc = 0x319B00u;
            goto label_319b00;
        }
    }
    ctx->pc = 0x319AECu;
    // 0x319aec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x319aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x319af0: 0x0  nop
    ctx->pc = 0x319af0u;
    // NOP
    // 0x319af4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x319af4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x319af8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x319AF8u;
    {
        const bool branch_taken_0x319af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AF8u;
        // 0x319afc: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319af8) {
            ctx->pc = 0x319B20u;
            goto label_319b20;
        }
    }
    ctx->pc = 0x319B00u;
label_319b00:
    // 0x319b00: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x319b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x319b04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x319b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x319b08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x319b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x319b0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x319b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x319b10: 0x0  nop
    ctx->pc = 0x319b10u;
    // NOP
    // 0x319b14: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x319b14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x319b18: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x319b18u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x319b1c: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x319b1cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
label_319b20:
    // 0x319b20: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x319B20u;
    SET_GPR_U32(ctx, 31, 0x319B28u);
    ctx->pc = 0x319B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319B20u;
    // 0x319b24: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x319B20u, 0x319B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B28u;
label_319b28:
    // 0x319b28: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x319B28u;
    SET_GPR_U32(ctx, 31, 0x319B30u);
    ctx->pc = 0x319B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319B28u;
    // 0x319b2c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x319B28u, 0x319B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B30u;
label_319b30:
    // 0x319b30: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x319b30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_319b34:
    // 0x319b34: 0xe600038c  swc1        $f0, 0x38C($s0)
    ctx->pc = 0x319b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 908), bits); }
    // 0x319b38: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x319b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_319b3c:
    // 0x319b3c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x319b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x319b40: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x319b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x319b44: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x319B44u;
    {
        const bool branch_taken_0x319b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319b44) {
            ctx->pc = 0x319B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319B44u;
            // 0x319b48: 0x8ea20210  lw          $v0, 0x210($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 528)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319BA4u;
            goto label_319ba4;
        }
    }
    ctx->pc = 0x319B4Cu;
    // 0x319b4c: 0xc6200328  lwc1        $f0, 0x328($s1)
    ctx->pc = 0x319b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319b50: 0xc6020390  lwc1        $f2, 0x390($s0)
    ctx->pc = 0x319b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x319b54: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x319b54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x319b58: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x319b58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x319b5c: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x319b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x319b60: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x319B60u;
    {
        const bool branch_taken_0x319b60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B60u;
        // 0x319b64: 0xe6000390  swc1        $f0, 0x390($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 912), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319b60) {
            ctx->pc = 0x319B80u;
            goto label_319b80;
        }
    }
    ctx->pc = 0x319B68u;
    // 0x319b68: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x319b68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x319b6c: 0x0  nop
    ctx->pc = 0x319b6cu;
    // NOP
    // 0x319b70: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
    ctx->pc = 0x319B70u;
    {
        const bool branch_taken_0x319b70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x319b70) {
            ctx->pc = 0x319B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319B70u;
            // 0x319b74: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319C14u;
            goto label_319c14;
        }
    }
    ctx->pc = 0x319B78u;
    // 0x319b78: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x319B78u;
    {
        const bool branch_taken_0x319b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B78u;
        // 0x319b7c: 0x46170000  add.s       $f0, $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319b78) {
            ctx->pc = 0x319C0Cu;
            goto label_319c0c;
        }
    }
    ctx->pc = 0x319B80u;
label_319b80:
    // 0x319b80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x319b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x319b84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x319b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x319b88: 0x0  nop
    ctx->pc = 0x319b88u;
    // NOP
    // 0x319b8c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x319b8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x319b90: 0x0  nop
    ctx->pc = 0x319b90u;
    // NOP
    // 0x319b94: 0x4502001f  bc1fl       . + 4 + (0x1F << 2)
    ctx->pc = 0x319B94u;
    {
        const bool branch_taken_0x319b94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x319b94) {
            ctx->pc = 0x319B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319B94u;
            // 0x319b98: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319C14u;
            goto label_319c14;
        }
    }
    ctx->pc = 0x319B9Cu;
    // 0x319b9c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x319B9Cu;
    {
        const bool branch_taken_0x319b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B9Cu;
        // 0x319ba0: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319b9c) {
            ctx->pc = 0x319C0Cu;
            goto label_319c0c;
        }
    }
    ctx->pc = 0x319BA4u;
label_319ba4:
    // 0x319ba4: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x319BA4u;
    {
        const bool branch_taken_0x319ba4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x319ba4) {
            ctx->pc = 0x319BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319BA4u;
            // 0x319ba8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x319BACu;
            goto label_319bac;
        }
    }
    ctx->pc = 0x319BACu;
label_319bac:
    // 0x319bac: 0xc6200328  lwc1        $f0, 0x328($s1)
    ctx->pc = 0x319bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319bb0: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x319bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x319bb4: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x319bb4u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x319bb8: 0x1010  mfhi        $v0
    ctx->pc = 0x319bb8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x319bbc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x319BBCu;
    {
        const bool branch_taken_0x319bbc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x319BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319BBCu;
        // 0x319bc0: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319bbc) {
            ctx->pc = 0x319BD8u;
            goto label_319bd8;
        }
    }
    ctx->pc = 0x319BC4u;
    // 0x319bc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x319bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x319bc8: 0x0  nop
    ctx->pc = 0x319bc8u;
    // NOP
    // 0x319bcc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x319bccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x319bd0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x319BD0u;
    {
        const bool branch_taken_0x319bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319BD0u;
        // 0x319bd4: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319bd0) {
            ctx->pc = 0x319BF8u;
            goto label_319bf8;
        }
    }
    ctx->pc = 0x319BD8u;
label_319bd8:
    // 0x319bd8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x319bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x319bdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x319bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x319be0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x319be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x319be4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x319be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x319be8: 0x0  nop
    ctx->pc = 0x319be8u;
    // NOP
    // 0x319bec: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x319becu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x319bf0: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x319bf0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x319bf4: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x319bf4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
label_319bf8:
    // 0x319bf8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x319BF8u;
    SET_GPR_U32(ctx, 31, 0x319C00u);
    ctx->pc = 0x319BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319BF8u;
    // 0x319bfc: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x319BF8u, 0x319C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319C00u;
label_319c00:
    // 0x319c00: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x319C00u;
    SET_GPR_U32(ctx, 31, 0x319C08u);
    ctx->pc = 0x319C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319C00u;
    // 0x319c04: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x319C00u, 0x319C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319C08u;
label_319c08:
    // 0x319c08: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x319c08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_319c0c:
    // 0x319c0c: 0xe6000390  swc1        $f0, 0x390($s0)
    ctx->pc = 0x319c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 912), bits); }
    // 0x319c10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x319c10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_319c14:
    // 0x319c14: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x319c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x319c18: 0x1440ff8f  bnez        $v0, . + 4 + (-0x71 << 2)
    ctx->pc = 0x319C18u;
    {
        const bool branch_taken_0x319c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C18u;
        // 0x319c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319c18) {
            ctx->pc = 0x319A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319a58;
        }
    }
    ctx->pc = 0x319C20u;
    // 0x319c20: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x319C20u;
    {
        const bool branch_taken_0x319c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C20u;
        // 0x319c24: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319c20) {
            ctx->pc = 0x319C84u;
            goto label_319c84;
        }
    }
    ctx->pc = 0x319C28u;
label_319c28:
    // 0x319c28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x319c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319c2c: 0xc052d8e  jal         func_14B638
    ctx->pc = 0x319C2Cu;
    SET_GPR_U32(ctx, 31, 0x319C34u);
    ctx->pc = 0x319C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319C2Cu;
    // 0x319c30: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B638u, 0x319C2Cu, 0x319C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319C34u;
label_319c34:
    // 0x319c34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x319c34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319c38: 0x5a400012  blezl       $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x319C38u;
    {
        const bool branch_taken_0x319c38 = (GPR_S64(ctx, 18) <= 0);
        if (branch_taken_0x319c38) {
            ctx->pc = 0x319C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319C38u;
            // 0x319c3c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319C84u;
            goto label_319c84;
        }
    }
    ctx->pc = 0x319C40u;
label_319c40:
    // 0x319c40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x319c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319c44: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x319C44u;
    SET_GPR_U32(ctx, 31, 0x319C4Cu);
    ctx->pc = 0x319C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319C44u;
    // 0x319c48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x319C44u, 0x319C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319C4Cu;
label_319c4c:
    // 0x319c4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x319c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x319c50: 0xc6200324  lwc1        $f0, 0x324($s1)
    ctx->pc = 0x319c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319c54: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x319c54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x319c58: 0xc441038c  lwc1        $f1, 0x38C($v0)
    ctx->pc = 0x319c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319c5c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x319c5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x319c60: 0xc4420390  lwc1        $f2, 0x390($v0)
    ctx->pc = 0x319c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x319c64: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x319c64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319c68: 0xe441038c  swc1        $f1, 0x38C($v0)
    ctx->pc = 0x319c68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 908), bits); }
    // 0x319c6c: 0xc6200328  lwc1        $f0, 0x328($s1)
    ctx->pc = 0x319c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x319c70: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x319c70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x319c74: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x319c74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x319c78: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x319C78u;
    {
        const bool branch_taken_0x319c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x319C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C78u;
        // 0x319c7c: 0xe4420390  swc1        $f2, 0x390($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 912), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319c78) {
            ctx->pc = 0x319C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319c40;
        }
    }
    ctx->pc = 0x319C80u;
label_319c80:
    // 0x319c80: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x319c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_319c84:
    // 0x319c84: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x319c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x319c88: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x319c88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x319c8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x319c8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x319c90: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x319c90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x319c94: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x319c94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319c98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319c9c: 0xc7b90098  lwc1        $f25, 0x98($sp)
    ctx->pc = 0x319c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x319ca0: 0xc7b80090  lwc1        $f24, 0x90($sp)
    ctx->pc = 0x319ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x319ca4: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x319ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x319ca8: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x319ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x319cac: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x319cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x319cb0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x319cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x319cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x319CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319CB4u;
        // 0x319cb8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319CBCu;
    // 0x319cbc: 0x0  nop
    ctx->pc = 0x319cbcu;
    // NOP
    ctx->pc = 0x319cc0u;
}
