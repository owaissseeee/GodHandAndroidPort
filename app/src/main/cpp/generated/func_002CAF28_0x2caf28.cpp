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

// Function: func_002CAF28
// Address: 0x2caf28 - 0x2cb070
void func_002CAF28_0x2caf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CAF28_0x2caf28");
#endif

    switch (ctx->pc) {
        case 0x2caff8u: goto label_2caff8;
        default: break;
    }

    ctx->pc = 0x2caf28u;

    // 0x2caf28: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2caf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2caf2c: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x2caf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x2caf30: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2caf30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x2caf34: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2caf34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2caf38: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2CAF38u;
    {
        const bool branch_taken_0x2caf38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF38u;
        // 0x2caf3c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caf38) {
            ctx->pc = 0x2CAFB8u;
            goto label_2cafb8;
        }
    }
    ctx->pc = 0x2CAF40u;
    // 0x2caf40: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2caf40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2caf44: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2caf44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2caf48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2caf48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2caf4c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2caf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2caf50: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x2caf50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
    // 0x2caf54: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2caf54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2caf58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2caf58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2caf5c: 0xe4c10090  swc1        $f1, 0x90($a2)
    ctx->pc = 0x2caf5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 144), bits); }
    // 0x2caf60: 0xe4c0007c  swc1        $f0, 0x7C($a2)
    ctx->pc = 0x2caf60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 124), bits); }
    // 0x2caf64: 0xacc00078  sw          $zero, 0x78($a2)
    ctx->pc = 0x2caf64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 0));
    // 0x2caf68: 0xe4c1008c  swc1        $f1, 0x8C($a2)
    ctx->pc = 0x2caf68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 140), bits); }
    // 0x2caf6c: 0x8c82d930  lw          $v0, -0x26D0($a0)
    ctx->pc = 0x2caf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BD930u));
    // 0x2caf70: 0x8c430ee8  lw          $v1, 0xEE8($v0)
    ctx->pc = 0x2caf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3816)));
    // 0x2caf74: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CAF74u;
    {
        const bool branch_taken_0x2caf74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF74u;
        // 0x2caf78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caf74) {
            ctx->pc = 0x2CAF80u;
            goto label_2caf80;
        }
    }
    ctx->pc = 0x2CAF7Cu;
    // 0x2caf7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2caf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2caf80:
    // 0x2caf80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2caf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2caf84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2caf84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2caf88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2caf88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2caf8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAF8Cu;
    {
        const bool branch_taken_0x2caf8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caf8c) {
            ctx->pc = 0x2CAFA0u;
            goto label_2cafa0;
        }
    }
    ctx->pc = 0x2CAF94u;
    // 0x2caf94: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x2caf94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
    // 0x2caf98: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2caf98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2caf9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2caf9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cafa0:
    // 0x2cafa0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2cafa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2cafa4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2cafa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2cafa8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cafa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cafac: 0xe4c00080  swc1        $f0, 0x80($a2)
    ctx->pc = 0x2cafacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 128), bits); }
    // 0x2cafb0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CAFB0u;
    {
        const bool branch_taken_0x2cafb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAFB0u;
        // 0x2cafb4: 0xe4c10094  swc1        $f1, 0x94($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cafb0) {
            ctx->pc = 0x2CAFE4u;
            goto label_2cafe4;
        }
    }
    ctx->pc = 0x2CAFB8u;
label_2cafb8:
    // 0x2cafb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cafb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cafbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cafbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cafc0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2cafc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2cafc4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2cafc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2cafc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cafc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cafcc: 0xe4c00080  swc1        $f0, 0x80($a2)
    ctx->pc = 0x2cafccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 128), bits); }
    // 0x2cafd0: 0xe4c10094  swc1        $f1, 0x94($a2)
    ctx->pc = 0x2cafd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 148), bits); }
    // 0x2cafd4: 0xe4c00078  swc1        $f0, 0x78($a2)
    ctx->pc = 0x2cafd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 120), bits); }
    // 0x2cafd8: 0xe4c1008c  swc1        $f1, 0x8C($a2)
    ctx->pc = 0x2cafd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 140), bits); }
    // 0x2cafdc: 0xe4c0007c  swc1        $f0, 0x7C($a2)
    ctx->pc = 0x2cafdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 124), bits); }
    // 0x2cafe0: 0xe4c10090  swc1        $f1, 0x90($a2)
    ctx->pc = 0x2cafe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 144), bits); }
label_2cafe4:
    // 0x2cafe4: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x2cafe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x2cafe8: 0x24c30088  addiu       $v1, $a2, 0x88
    ctx->pc = 0x2cafe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 136));
    // 0x2cafec: 0x24c40074  addiu       $a0, $a2, 0x74
    ctx->pc = 0x2cafecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 116));
    // 0x2caff0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2caff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2caff4: 0x0  nop
    ctx->pc = 0x2caff4u;
    // NOP
label_2caff8:
    // 0x2caff8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2caff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2caffc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2caffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb000: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2cb000u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cb004: 0x0  nop
    ctx->pc = 0x2cb004u;
    // NOP
    // 0x2cb008: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x2CB008u;
    {
        const bool branch_taken_0x2cb008 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CB00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB008u;
        // 0x2cb00c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb008) {
            ctx->pc = 0x2CB054u;
            goto label_2cb054;
        }
    }
    ctx->pc = 0x2CB010u;
    // 0x2cb010: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cb010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cb014: 0x0  nop
    ctx->pc = 0x2cb014u;
    // NOP
    // 0x2cb018: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB018u;
    {
        const bool branch_taken_0x2cb018 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CB01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB018u;
        // 0x2cb01c: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb018) {
            ctx->pc = 0x2CB038u;
            goto label_2cb038;
        }
    }
    ctx->pc = 0x2CB020u;
    // 0x2cb020: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cb020u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cb024: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2cb024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2cb028: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2cb028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb02c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cb02cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cb030: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB030u;
    {
        const bool branch_taken_0x2cb030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb030) {
            ctx->pc = 0x2CB048u;
            goto label_2cb048;
        }
    }
    ctx->pc = 0x2CB038u;
label_2cb038:
    // 0x2cb038: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cb038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cb03c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2cb03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2cb040: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2cb040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb044: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cb044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cb048:
    // 0x2cb048: 0x0  nop
    ctx->pc = 0x2cb048u;
    // NOP
    // 0x2cb04c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2CB04Cu;
    {
        const bool branch_taken_0x2cb04c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb04c) {
            ctx->pc = 0x2CB050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB04Cu;
            // 0x2cb050: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB054u;
            goto label_2cb054;
        }
    }
    ctx->pc = 0x2CB054u;
label_2cb054:
    // 0x2cb054: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2cb054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2cb058: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2cb058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2cb05c: 0x4a1ffe6  bgez        $a1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2CB05Cu;
    {
        const bool branch_taken_0x2cb05c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x2CB060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB05Cu;
        // 0x2cb060: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb05c) {
            ctx->pc = 0x2CAFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2caff8;
        }
    }
    ctx->pc = 0x2CB064u;
    // 0x2cb064: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB06Cu;
    // 0x2cb06c: 0x0  nop
    ctx->pc = 0x2cb06cu;
    // NOP
    ctx->pc = 0x2cb070u;
}
