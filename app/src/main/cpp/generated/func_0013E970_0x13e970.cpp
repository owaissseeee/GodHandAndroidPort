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

// Function: func_0013E970
// Address: 0x13e970 - 0x13eba0
void func_0013E970_0x13e970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013E970_0x13e970");
#endif

    switch (ctx->pc) {
        case 0x13eb90u: goto label_13eb90;
        default: break;
    }

    ctx->pc = 0x13e970u;

    // 0x13e970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e974: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13e974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e97c: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x13e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x13e980: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x13E980u;
    {
        const bool branch_taken_0x13e980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E980u;
        // 0x13e984: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e980) {
            ctx->pc = 0x13EB94u;
            goto label_13eb94;
        }
    }
    ctx->pc = 0x13E988u;
    // 0x13e988: 0x8cc4009c  lw          $a0, 0x9C($a2)
    ctx->pc = 0x13e988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 156)));
    // 0x13e98c: 0x10800081  beqz        $a0, . + 4 + (0x81 << 2)
    ctx->pc = 0x13E98Cu;
    {
        const bool branch_taken_0x13e98c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E98Cu;
        // 0x13e990: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e98c) {
            ctx->pc = 0x13EB94u;
            goto label_13eb94;
        }
    }
    ctx->pc = 0x13E994u;
    // 0x13e994: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x13e994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
    // 0x13e998: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x13e998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x13e99c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13e99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13e9a0: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x13E9A0u;
    {
        const bool branch_taken_0x13e9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E9A0u;
        // 0x13e9a4: 0x24657a24  addiu       $a1, $v1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 31268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e9a0) {
            ctx->pc = 0x13EB94u;
            goto label_13eb94;
        }
    }
    ctx->pc = 0x13E9A8u;
    // 0x13e9a8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x13e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13e9ac: 0x4400079  bltz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x13E9ACu;
    {
        const bool branch_taken_0x13e9ac = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x13e9ac) {
            ctx->pc = 0x13EB94u;
            goto label_13eb94;
        }
    }
    ctx->pc = 0x13E9B4u;
    // 0x13e9b4: 0x84820548  lh          $v0, 0x548($a0)
    ctx->pc = 0x13e9b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1352)));
    // 0x13e9b8: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x13E9B8u;
    {
        const bool branch_taken_0x13e9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E9B8u;
        // 0x13e9bc: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e9b8) {
            ctx->pc = 0x13EB94u;
            goto label_13eb94;
        }
    }
    ctx->pc = 0x13E9C0u;
    // 0x13e9c0: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x13e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x13e9c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13e9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13e9c8: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x13E9C8u;
    {
        const bool branch_taken_0x13e9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E9C8u;
        // 0x13e9cc: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e9c8) {
            ctx->pc = 0x13EB94u;
            goto label_13eb94;
        }
    }
    ctx->pc = 0x13E9D0u;
    // 0x13e9d0: 0x8cc200a0  lw          $v0, 0xA0($a2)
    ctx->pc = 0x13e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x13e9d4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x13e9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x13e9d8: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x13E9D8u;
    {
        const bool branch_taken_0x13e9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e9d8) {
            ctx->pc = 0x13E9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E9D8u;
            // 0x13e9dc: 0x8cc2009c  lw          $v0, 0x9C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EA2Cu;
            goto label_13ea2c;
        }
    }
    ctx->pc = 0x13E9E0u;
    // 0x13e9e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13e9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13e9e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13e9e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e9e8: 0x8cc300c0  lw          $v1, 0xC0($a2)
    ctx->pc = 0x13e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x13e9ec: 0xe4c000a8  swc1        $f0, 0xA8($a2)
    ctx->pc = 0x13e9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 168), bits); }
    // 0x13e9f0: 0xe4c000ac  swc1        $f0, 0xAC($a2)
    ctx->pc = 0x13e9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 172), bits); }
    // 0x13e9f4: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x13e9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x13e9f8: 0x8cc200c8  lw          $v0, 0xC8($a2)
    ctx->pc = 0x13e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 200)));
    // 0x13e9fc: 0xc4c000a8  lwc1        $f0, 0xA8($a2)
    ctx->pc = 0x13e9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ea00: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x13ea00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x13ea04: 0xc4c000a8  lwc1        $f0, 0xA8($a2)
    ctx->pc = 0x13ea04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ea08: 0x8cc300c4  lw          $v1, 0xC4($a2)
    ctx->pc = 0x13ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x13ea0c: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x13ea0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x13ea10: 0x8cc400cc  lw          $a0, 0xCC($a2)
    ctx->pc = 0x13ea10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
    // 0x13ea14: 0xc4c000a8  lwc1        $f0, 0xA8($a2)
    ctx->pc = 0x13ea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ea18: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x13ea18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x13ea1c: 0x8cc200a0  lw          $v0, 0xA0($a2)
    ctx->pc = 0x13ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x13ea20: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x13ea20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x13ea24: 0xacc200a0  sw          $v0, 0xA0($a2)
    ctx->pc = 0x13ea24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 160), GPR_U32(ctx, 2));
    // 0x13ea28: 0x8cc2009c  lw          $v0, 0x9C($a2)
    ctx->pc = 0x13ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 156)));
label_13ea2c:
    // 0x13ea2c: 0xc4c200ac  lwc1        $f2, 0xAC($a2)
    ctx->pc = 0x13ea2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13ea30: 0x84430548  lh          $v1, 0x548($v0)
    ctx->pc = 0x13ea30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
    // 0x13ea34: 0x8444054a  lh          $a0, 0x54A($v0)
    ctx->pc = 0x13ea34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    // 0x13ea38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13ea38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13ea3c: 0x0  nop
    ctx->pc = 0x13ea3cu;
    // NOP
    // 0x13ea40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13ea40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13ea44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13ea44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ea48: 0x0  nop
    ctx->pc = 0x13ea48u;
    // NOP
    // 0x13ea4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13ea4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13ea50: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x13ea50u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x13ea54: 0x46000100  add.s       $f4, $f0, $f0
    ctx->pc = 0x13ea54u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x13ea58: 0x46041032  c.eq.s      $f2, $f4
    ctx->pc = 0x13ea58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ea5c: 0x0  nop
    ctx->pc = 0x13ea5cu;
    // NOP
    // 0x13ea60: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x13EA60u;
    {
        const bool branch_taken_0x13ea60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13ea60) {
            ctx->pc = 0x13EA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EA60u;
            // 0x13ea64: 0x94c200be  lhu         $v0, 0xBE($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 190)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EA74u;
            goto label_13ea74;
        }
    }
    ctx->pc = 0x13EA68u;
    // 0x13ea68: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x13ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x13ea6c: 0xa4c200be  sh          $v0, 0xBE($a2)
    ctx->pc = 0x13ea6cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 190), (uint16_t)GPR_U32(ctx, 2));
    // 0x13ea70: 0x94c200be  lhu         $v0, 0xBE($a2)
    ctx->pc = 0x13ea70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 190)));
label_13ea74:
    // 0x13ea74: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13EA74u;
    {
        const bool branch_taken_0x13ea74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA74u;
        // 0x13ea78: 0xe4c400b4  swc1        $f4, 0xB4($a2) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea74) {
            ctx->pc = 0x13EAA4u;
            goto label_13eaa4;
        }
    }
    ctx->pc = 0x13EA7Cu;
    // 0x13ea7c: 0xc4c000a8  lwc1        $f0, 0xA8($a2)
    ctx->pc = 0x13ea7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ea80: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x13ea80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x13ea84: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x13ea84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x13ea88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13ea88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13ea8c: 0x46040041  sub.s       $f1, $f0, $f4
    ctx->pc = 0x13ea8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x13ea90: 0xe4c000b8  swc1        $f0, 0xB8($a2)
    ctx->pc = 0x13ea90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 184), bits); }
    // 0x13ea94: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x13ea94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x13ea98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13ea98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13ea9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13EA9Cu;
    {
        const bool branch_taken_0x13ea9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA9Cu;
        // 0x13eaa0: 0xe4c000a8  swc1        $f0, 0xA8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ea9c) {
            ctx->pc = 0x13EAACu;
            goto label_13eaac;
        }
    }
    ctx->pc = 0x13EAA4u;
label_13eaa4:
    // 0x13eaa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13eaa8: 0xa4c200be  sh          $v0, 0xBE($a2)
    ctx->pc = 0x13eaa8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 190), (uint16_t)GPR_U32(ctx, 2));
label_13eaac:
    // 0x13eaac: 0xc4c000a8  lwc1        $f0, 0xA8($a2)
    ctx->pc = 0x13eaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13eab0: 0xc4c100b0  lwc1        $f1, 0xB0($a2)
    ctx->pc = 0x13eab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13eab4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x13eab4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x13eab8: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x13eab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x13eabc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13eabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13eac0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x13eac0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x13eac4: 0xc4c300b4  lwc1        $f3, 0xB4($a2)
    ctx->pc = 0x13eac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13eac8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13eac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13eacc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x13eaccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x13ead0: 0xe4c400ac  swc1        $f4, 0xAC($a2)
    ctx->pc = 0x13ead0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 172), bits); }
    // 0x13ead4: 0x0  nop
    ctx->pc = 0x13ead4u;
    // NOP
    // 0x13ead8: 0x0  nop
    ctx->pc = 0x13ead8u;
    // NOP
    // 0x13eadc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x13eadcu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x13eae0: 0x46032834  c.lt.s      $f5, $f3
    ctx->pc = 0x13eae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13eae4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13eae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x13eae8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13eae8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x13eaec: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x13eaecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13eaf0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13EAF0u;
    {
        const bool branch_taken_0x13eaf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EAF0u;
        // 0x13eaf4: 0xa0c200bc  sb          $v0, 0xBC($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 188), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eaf0) {
            ctx->pc = 0x13EB04u;
            goto label_13eb04;
        }
    }
    ctx->pc = 0x13EAF8u;
    // 0x13eaf8: 0x46051901  sub.s       $f4, $f3, $f5
    ctx->pc = 0x13eaf8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x13eafc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13EAFCu;
    {
        const bool branch_taken_0x13eafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EAFCu;
        // 0x13eb00: 0x460028c6  mov.s       $f3, $f5 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eafc) {
            ctx->pc = 0x13EB08u;
            goto label_13eb08;
        }
    }
    ctx->pc = 0x13EB04u;
label_13eb04:
    // 0x13eb04: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x13eb04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_13eb08:
    // 0x13eb08: 0xc4c000b8  lwc1        $f0, 0xB8($a2)
    ctx->pc = 0x13eb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13eb0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13eb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13eb10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13eb10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13eb14: 0x0  nop
    ctx->pc = 0x13eb14u;
    // NOP
    // 0x13eb18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13eb18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13eb1c: 0x0  nop
    ctx->pc = 0x13eb1cu;
    // NOP
    // 0x13eb20: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13EB20u;
    {
        const bool branch_taken_0x13eb20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13eb20) {
            ctx->pc = 0x13EB34u;
            goto label_13eb34;
        }
    }
    ctx->pc = 0x13EB28u;
    // 0x13eb28: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x13eb28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13eb2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13EB2Cu;
    {
        const bool branch_taken_0x13eb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB2Cu;
        // 0x13eb30: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb2c) {
            ctx->pc = 0x13EB38u;
            goto label_13eb38;
        }
    }
    ctx->pc = 0x13EB34u;
label_13eb34:
    // 0x13eb34: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x13eb34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_13eb38:
    // 0x13eb38: 0x8cc300c0  lw          $v1, 0xC0($a2)
    ctx->pc = 0x13eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x13eb3c: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x13eb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x13eb40: 0xe4640044  swc1        $f4, 0x44($v1)
    ctx->pc = 0x13eb40u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x13eb44: 0x8cc200c8  lw          $v0, 0xC8($a2)
    ctx->pc = 0x13eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 200)));
    // 0x13eb48: 0xe4430044  swc1        $f3, 0x44($v0)
    ctx->pc = 0x13eb48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x13eb4c: 0x8cc300c4  lw          $v1, 0xC4($a2)
    ctx->pc = 0x13eb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x13eb50: 0xe4620044  swc1        $f2, 0x44($v1)
    ctx->pc = 0x13eb50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x13eb54: 0x8cc200cc  lw          $v0, 0xCC($a2)
    ctx->pc = 0x13eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
    // 0x13eb58: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x13eb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x13eb5c: 0x8cc300c4  lw          $v1, 0xC4($a2)
    ctx->pc = 0x13eb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x13eb60: 0x90c200bc  lbu         $v0, 0xBC($a2)
    ctx->pc = 0x13eb60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 188)));
    // 0x13eb64: 0xa062004f  sb          $v0, 0x4F($v1)
    ctx->pc = 0x13eb64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x13eb68: 0x8cc400cc  lw          $a0, 0xCC($a2)
    ctx->pc = 0x13eb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
    // 0x13eb6c: 0x90c200bc  lbu         $v0, 0xBC($a2)
    ctx->pc = 0x13eb6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 188)));
    // 0x13eb70: 0xa082004f  sb          $v0, 0x4F($a0)
    ctx->pc = 0x13eb70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x13eb74: 0x94c300be  lhu         $v1, 0xBE($a2)
    ctx->pc = 0x13eb74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 190)));
    // 0x13eb78: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EB78u;
    {
        const bool branch_taken_0x13eb78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x13eb78) {
            ctx->pc = 0x13EB88u;
            goto label_13eb88;
        }
    }
    ctx->pc = 0x13EB80u;
    // 0x13eb80: 0xc4c000a8  lwc1        $f0, 0xA8($a2)
    ctx->pc = 0x13eb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13eb84: 0xe4c000b0  swc1        $f0, 0xB0($a2)
    ctx->pc = 0x13eb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 176), bits); }
label_13eb88:
    // 0x13eb88: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x13EB88u;
    SET_GPR_U32(ctx, 31, 0x13EB90u);
    ctx->pc = 0x13EB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EB88u;
    // 0x13eb8c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x13EB88u, 0x13EB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EB90u;
label_13eb90:
    // 0x13eb90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13eb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13eb94:
    // 0x13eb94: 0x3e00008  jr          $ra
    ctx->pc = 0x13EB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB94u;
        // 0x13eb98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EB9Cu;
    // 0x13eb9c: 0x0  nop
    ctx->pc = 0x13eb9cu;
    // NOP
    ctx->pc = 0x13eba0u;
}
