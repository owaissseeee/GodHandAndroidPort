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

// Function: cHeatSys_AddHeatGage
// Address: 0x2a9978 - 0x2a9ad0
void cHeatSys_AddHeatGage_0x2a9978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cHeatSys_AddHeatGage_0x2a9978");
#endif

    switch (ctx->pc) {
        case 0x2a99e4u: goto label_2a99e4;
        case 0x2a9ab8u: goto label_2a9ab8;
        default: break;
    }

    ctx->pc = 0x2a9978u;

    // 0x2a9978: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a9978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a997c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a997cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a9980: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2a9980u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a9984: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a9984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a998c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2a998cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2a9990: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2a9990u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a9994: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A9994u;
    {
        const bool branch_taken_0x2a9994 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9994u;
        // 0x2a9998: 0xc6150004  lwc1        $f21, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9994) {
            ctx->pc = 0x2A99C0u;
            goto label_2a99c0;
        }
    }
    ctx->pc = 0x2A999Cu;
    // 0x2a999c: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x2a999cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a99a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A99A0u;
    {
        const bool branch_taken_0x2a99a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A99A0u;
        // 0x2a99a4: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a99a0) {
            ctx->pc = 0x2A99C4u;
            goto label_2a99c4;
        }
    }
    ctx->pc = 0x2A99A8u;
    // 0x2a99a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a99a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a99ac: 0x0  nop
    ctx->pc = 0x2a99acu;
    // NOP
    // 0x2a99b0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2a99b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a99b4: 0x0  nop
    ctx->pc = 0x2a99b4u;
    // NOP
    // 0x2a99b8: 0x45030040  bc1tl       . + 4 + (0x40 << 2)
    ctx->pc = 0x2A99B8u;
    {
        const bool branch_taken_0x2a99b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a99b8) {
            ctx->pc = 0x2A99BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A99B8u;
            // 0x2a99bc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9ABCu;
            goto label_2a9abc;
        }
    }
    ctx->pc = 0x2A99C0u;
label_2a99c0:
    // 0x2a99c0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2a99c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2a99c4:
    // 0x2a99c4: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x2a99c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x2a99c8: 0x8c839b70  lw          $v1, -0x6490($a0)
    ctx->pc = 0x2a99c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941552)));
    // 0x2a99cc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2a99ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a99d0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2a99d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2a99d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A99D4u;
    {
        const bool branch_taken_0x2a99d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A99D4u;
        // 0x2a99d8: 0x24869b70  addiu       $a2, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a99d4) {
            ctx->pc = 0x2A99FCu;
            goto label_2a99fc;
        }
    }
    ctx->pc = 0x2A99DCu;
    // 0x2a99dc: 0xc07e99e  jal         func_1FA678
    ctx->pc = 0x2A99DCu;
    SET_GPR_U32(ctx, 31, 0x2A99E4u);
    ctx->pc = 0x2A99E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A99DCu;
    // 0x2a99e0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x2A99DCu, 0x2A99E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A99E4u;
label_2a99e4:
    // 0x2a99e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A99E4u;
    {
        const bool branch_taken_0x2a99e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a99e4) {
            ctx->pc = 0x2A99FCu;
            goto label_2a99fc;
        }
    }
    ctx->pc = 0x2A99ECu;
    // 0x2a99ec: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x2a99ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x2a99f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a99f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a99f4: 0x0  nop
    ctx->pc = 0x2a99f4u;
    // NOP
    // 0x2a99f8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2a99f8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2a99fc:
    // 0x2a99fc: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x2a99fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x2a9a00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a9a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9a04: 0x0  nop
    ctx->pc = 0x2a9a04u;
    // NOP
    // 0x2a9a08: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2a9a08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9a0c: 0x0  nop
    ctx->pc = 0x2a9a0cu;
    // NOP
    // 0x2a9a10: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2A9A10u;
    {
        const bool branch_taken_0x2a9a10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A9A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A10u;
        // 0x2a9a14: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a10) {
            ctx->pc = 0x2A9A2Cu;
            goto label_2a9a2c;
        }
    }
    ctx->pc = 0x2A9A18u;
    // 0x2a9a18: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x2a9a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x2a9a1c: 0x8c64d6e8  lw          $a0, -0x2918($v1)
    ctx->pc = 0x2a9a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956776)));
    // 0x2a9a20: 0x8c8204f0  lw          $v0, 0x4F0($a0)
    ctx->pc = 0x2a9a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1264)));
    // 0x2a9a24: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2a9a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2a9a28: 0xac8204f0  sw          $v0, 0x4F0($a0)
    ctx->pc = 0x2a9a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1264), GPR_U32(ctx, 2));
label_2a9a2c:
    // 0x2a9a2c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2a9a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2a9a30: 0x24040801  addiu       $a0, $zero, 0x801
    ctx->pc = 0x2a9a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x2a9a34: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x2a9a34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x747A50u));
    // 0x2a9a38: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A9A38u;
    {
        const bool branch_taken_0x2a9a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a9a38) {
            ctx->pc = 0x2A9A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9A38u;
            // 0x2a9a3c: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9A54u;
            goto label_2a9a54;
        }
    }
    ctx->pc = 0x2A9A40u;
    // 0x2a9a40: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x2a9a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x2a9a44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a9a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9a48: 0x0  nop
    ctx->pc = 0x2a9a48u;
    // NOP
    // 0x2a9a4c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2a9a4cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a9a50: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2a9a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a9a54:
    // 0x2a9a54: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2a9a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9a58: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2a9a58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2a9a5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a9a5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9a60: 0x0  nop
    ctx->pc = 0x2a9a60u;
    // NOP
    // 0x2a9a64: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9A64u;
    {
        const bool branch_taken_0x2a9a64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A9A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A64u;
        // 0x2a9a68: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a64) {
            ctx->pc = 0x2A9A70u;
            goto label_2a9a70;
        }
    }
    ctx->pc = 0x2A9A6Cu;
    // 0x2a9a6c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2a9a6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2a9a70:
    // 0x2a9a70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a9a70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9a74: 0x0  nop
    ctx->pc = 0x2a9a74u;
    // NOP
    // 0x2a9a78: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2a9a78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9a7c: 0x0  nop
    ctx->pc = 0x2a9a7cu;
    // NOP
    // 0x2a9a80: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2A9A80u;
    {
        const bool branch_taken_0x2a9a80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a9a80) {
            ctx->pc = 0x2A9AB0u;
            goto label_2a9ab0;
        }
    }
    ctx->pc = 0x2A9A88u;
    // 0x2a9a88: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2a9a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9a8c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2a9a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9a90: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x2a9a90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x2a9a94: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2a9a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9a98: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a9a98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a9a9c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2a9a9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9aa0: 0x0  nop
    ctx->pc = 0x2a9aa0u;
    // NOP
    // 0x2a9aa4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9AA4u;
    {
        const bool branch_taken_0x2a9aa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A9AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9AA4u;
        // 0x2a9aa8: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9aa4) {
            ctx->pc = 0x2A9AB0u;
            goto label_2a9ab0;
        }
    }
    ctx->pc = 0x2A9AACu;
    // 0x2a9aac: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x2a9aacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2a9ab0:
    // 0x2a9ab0: 0xc0aa6d4  jal         func_2A9B50
    ctx->pc = 0x2A9AB0u;
    SET_GPR_U32(ctx, 31, 0x2A9AB8u);
    ctx->pc = 0x2A9AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9AB0u;
    // 0x2a9ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9B50u, 0x2A9AB0u, 0x2A9AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9AB8u;
label_2a9ab8:
    // 0x2a9ab8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a9ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a9abc:
    // 0x2a9abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9ac0: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2a9ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a9ac4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2a9ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a9ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9AC8u;
        // 0x2a9acc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9AD0u;
}
