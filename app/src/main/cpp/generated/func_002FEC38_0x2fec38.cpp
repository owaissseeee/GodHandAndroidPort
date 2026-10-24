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

// Function: func_002FEC38
// Address: 0x2fec38 - 0x2ff748
void func_002FEC38_0x2fec38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FEC38_0x2fec38");
#endif

    switch (ctx->pc) {
        case 0x2fece0u: goto label_2fece0;
        case 0x2fed28u: goto label_2fed28;
        case 0x2fed74u: goto label_2fed74;
        case 0x2fed94u: goto label_2fed94;
        case 0x2feda8u: goto label_2feda8;
        case 0x2fedc0u: goto label_2fedc0;
        case 0x2feec8u: goto label_2feec8;
        case 0x2fef2cu: goto label_2fef2c;
        case 0x2fef64u: goto label_2fef64;
        case 0x2ff22cu: goto label_2ff22c;
        case 0x2ff478u: goto label_2ff478;
        case 0x2ff494u: goto label_2ff494;
        case 0x2ff704u: goto label_2ff704;
        default: break;
    }

    ctx->pc = 0x2fec38u;

    // 0x2fec38: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2fec38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2fec3c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2fec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x2fec40: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2fec40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x2fec44: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2fec44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2fec48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fec48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fec4c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2fec4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x2fec50: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2fec50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x2fec54: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2fec54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x2fec58: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2fec58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2fec5c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2fec5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2fec60: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2fec60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x2fec64: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x2fec64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x2fec68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fec68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2fec6c: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x2fec6cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2fec70: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x2fec70u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2fec74: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x2fec74u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2fec78: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x2fec78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2fec7c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2fec7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2fec80: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x2fec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x2fec84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fec84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2fec88: 0x1440029f  bnez        $v0, . + 4 + (0x29F << 2)
    ctx->pc = 0x2FEC88u;
    {
        const bool branch_taken_0x2fec88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC88u;
        // 0x2fec8c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fec88) {
            ctx->pc = 0x2FF708u;
            goto label_2ff708;
        }
    }
    ctx->pc = 0x2FEC90u;
    // 0x2fec90: 0xc6410194  lwc1        $f1, 0x194($s2)
    ctx->pc = 0x2fec90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fec94: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2fec94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2fec98: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2fec98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2fec9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fec9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2feca0: 0x0  nop
    ctx->pc = 0x2feca0u;
    // NOP
    // 0x2feca4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2feca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2feca8: 0x0  nop
    ctx->pc = 0x2feca8u;
    // NOP
    // 0x2fecac: 0x45010297  bc1t        . + 4 + (0x297 << 2)
    ctx->pc = 0x2FECACu;
    {
        const bool branch_taken_0x2fecac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FECACu;
        // 0x2fecb0: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fecac) {
            ctx->pc = 0x2FF70Cu;
            goto label_2ff70c;
        }
    }
    ctx->pc = 0x2FECB4u;
    // 0x2fecb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2fecb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fecb8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2fecb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2fecbc: 0x8e440120  lw          $a0, 0x120($s2)
    ctx->pc = 0x2fecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x2fecc0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FECC0u;
    {
        const bool branch_taken_0x2fecc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FECC0u;
        // 0x2fecc4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fecc0) {
            ctx->pc = 0x2FECF8u;
            goto label_2fecf8;
        }
    }
    ctx->pc = 0x2FECC8u;
    // 0x2fecc8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2fecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2feccc: 0x8c430250  lw          $v1, 0x250($v0)
    ctx->pc = 0x2fecccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2fecd0: 0x4620008  bltzl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FECD0u;
    {
        const bool branch_taken_0x2fecd0 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2fecd0) {
            ctx->pc = 0x2FECD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FECD0u;
            // 0x2fecd4: 0xae400120  sw          $zero, 0x120($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FECF4u;
            goto label_2fecf4;
        }
    }
    ctx->pc = 0x2FECD8u;
    // 0x2fecd8: 0xc0c1c46  jal         func_307118
    ctx->pc = 0x2FECD8u;
    SET_GPR_U32(ctx, 31, 0x2FECE0u);
    ctx->pc = 0x307118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307118u, 0x2FECD8u, 0x2FECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FECE0u;
label_2fece0:
    // 0x2fece0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fece0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fece4: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FECE4u;
    {
        const bool branch_taken_0x2fece4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fece4) {
            ctx->pc = 0x2FECE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FECE4u;
            // 0x2fece8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FECF8u;
            goto label_2fecf8;
        }
    }
    ctx->pc = 0x2FECECu;
    // 0x2fecec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FECECu;
    {
        const bool branch_taken_0x2fecec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FECECu;
        // 0x2fecf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fecec) {
            ctx->pc = 0x2FECFCu;
            goto label_2fecfc;
        }
    }
    ctx->pc = 0x2FECF4u;
label_2fecf4:
    // 0x2fecf4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2fecf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fecf8:
    // 0x2fecf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fecfc:
    // 0x2fecfc: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2FECFCu;
    {
        const bool branch_taken_0x2fecfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fecfc) {
            ctx->pc = 0x2FED00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FECFCu;
            // 0x2fed00: 0x8e42011c  lw          $v0, 0x11C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FED78u;
            goto label_2fed78;
        }
    }
    ctx->pc = 0x2FED04u;
    // 0x2fed04: 0x8e430120  lw          $v1, 0x120($s2)
    ctx->pc = 0x2fed04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x2fed08: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2fed08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fed0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fed0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fed10: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FED10u;
    {
        const bool branch_taken_0x2fed10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED10u;
        // 0x2fed14: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fed10) {
            ctx->pc = 0x2FED74u;
            goto label_2fed74;
        }
    }
    ctx->pc = 0x2FED18u;
    // 0x2fed18: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2fed18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fed1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fed1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fed20: 0xc0ad8b8  jal         func_2B62E0
    ctx->pc = 0x2FED20u;
    SET_GPR_U32(ctx, 31, 0x2FED28u);
    ctx->pc = 0x2FED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FED20u;
    // 0x2fed24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62E0u, 0x2FED20u, 0x2FED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED28u;
label_2fed28:
    // 0x2fed28: 0x13b00006  beq         $sp, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FED28u;
    {
        const bool branch_taken_0x2fed28 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 16));
        ctx->pc = 0x2FED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED28u;
        // 0x2fed2c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fed28) {
            ctx->pc = 0x2FED44u;
            goto label_2fed44;
        }
    }
    ctx->pc = 0x2FED30u;
    // 0x2fed30: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2fed30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fed34: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2fed34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fed38: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2fed38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fed3c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2fed3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fed40: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2fed40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2fed44:
    // 0x2fed44: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2fed44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fed48: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2fed48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fed4c: 0x8e420120  lw          $v0, 0x120($s2)
    ctx->pc = 0x2fed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x2fed50: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2fed50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fed54: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2fed54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fed58: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2fed58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2fed5c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2fed5cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2fed60: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2fed60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2fed64: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2fed64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fed68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fed68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fed6c: 0xc0ad876  jal         func_2B61D8
    ctx->pc = 0x2FED6Cu;
    SET_GPR_U32(ctx, 31, 0x2FED74u);
    ctx->pc = 0x2FED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FED6Cu;
    // 0x2fed70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61D8u, 0x2FED6Cu, 0x2FED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED74u;
label_2fed74:
    // 0x2fed74: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x2fed74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_2fed78:
    // 0x2fed78: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2fed78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2fed7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fed7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2fed80: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FED80u;
    {
        const bool branch_taken_0x2fed80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED80u;
        // 0x2fed84: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fed80) {
            ctx->pc = 0x2FED9Cu;
            goto label_2fed9c;
        }
    }
    ctx->pc = 0x2FED88u;
    // 0x2fed88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fed88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fed8c: 0xc0bfa28  jal         func_2FE8A0
    ctx->pc = 0x2FED8Cu;
    SET_GPR_U32(ctx, 31, 0x2FED94u);
    ctx->pc = 0x2FED90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FED8Cu;
    // 0x2fed90: 0x2445b760  addiu       $a1, $v0, -0x48A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE8A0u, 0x2FED8Cu, 0x2FED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED94u;
label_2fed94:
    // 0x2fed94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FED94u;
    {
        const bool branch_taken_0x2fed94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED94u;
        // 0x2fed98: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fed94) {
            ctx->pc = 0x2FEDACu;
            goto label_2fedac;
        }
    }
    ctx->pc = 0x2FED9Cu;
label_2fed9c:
    // 0x2fed9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fed9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feda0: 0xc0bf836  jal         func_2FE0D8
    ctx->pc = 0x2FEDA0u;
    SET_GPR_U32(ctx, 31, 0x2FEDA8u);
    ctx->pc = 0x2FEDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEDA0u;
    // 0x2feda4: 0x2445b760  addiu       $a1, $v0, -0x48A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D8u, 0x2FEDA0u, 0x2FEDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEDA8u;
label_2feda8:
    // 0x2feda8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2feda8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fedac:
    // 0x2fedac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fedacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fedb0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEDB0u;
    {
        const bool branch_taken_0x2fedb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDB0u;
        // 0x2fedb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fedb0) {
            ctx->pc = 0x2FEDC0u;
            goto label_2fedc0;
        }
    }
    ctx->pc = 0x2FEDB8u;
    // 0x2fedb8: 0xc0ad876  jal         func_2B61D8
    ctx->pc = 0x2FEDB8u;
    SET_GPR_U32(ctx, 31, 0x2FEDC0u);
    ctx->pc = 0x2FEDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEDB8u;
    // 0x2fedbc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61D8u, 0x2FEDB8u, 0x2FEDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEDC0u;
label_2fedc0:
    // 0x2fedc0: 0x6800251  bltz        $s4, . + 4 + (0x251 << 2)
    ctx->pc = 0x2FEDC0u;
    {
        const bool branch_taken_0x2fedc0 = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x2FEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDC0u;
        // 0x2fedc4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fedc0) {
            ctx->pc = 0x2FF708u;
            goto label_2ff708;
        }
    }
    ctx->pc = 0x2FEDC8u;
    // 0x2fedc8: 0x9242024b  lbu         $v0, 0x24B($s2)
    ctx->pc = 0x2fedc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 587)));
    // 0x2fedcc: 0x9243024a  lbu         $v1, 0x24A($s2)
    ctx->pc = 0x2fedccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 586)));
    // 0x2fedd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2fedd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fedd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fedd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fedd8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2fedd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2feddc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2feddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fede0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FEDE0u;
    {
        const bool branch_taken_0x2fede0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDE0u;
        // 0x2fede4: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fede0) {
            ctx->pc = 0x2FEE24u;
            goto label_2fee24;
        }
    }
    ctx->pc = 0x2FEDE8u;
    // 0x2fede8: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x2fede8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2fedec: 0x285102a  slt         $v0, $s4, $a1
    ctx->pc = 0x2fedecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2fedf0: 0x14400246  bnez        $v0, . + 4 + (0x246 << 2)
    ctx->pc = 0x2FEDF0u;
    {
        const bool branch_taken_0x2fedf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDF0u;
        // 0x2fedf4: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fedf0) {
            ctx->pc = 0x2FF70Cu;
            goto label_2ff70c;
        }
    }
    ctx->pc = 0x2FEDF8u;
    // 0x2fedf8: 0x284102a  slt         $v0, $s4, $a0
    ctx->pc = 0x2fedf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2fedfc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FEDFCu;
    {
        const bool branch_taken_0x2fedfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEDFCu;
        // 0x2fee00: 0x2851023  subu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fedfc) {
            ctx->pc = 0x2FEE24u;
            goto label_2fee24;
        }
    }
    ctx->pc = 0x2FEE04u;
    // 0x2fee04: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2fee04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2fee08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fee08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fee0c: 0x0  nop
    ctx->pc = 0x2fee0cu;
    // NOP
    // 0x2fee10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2fee10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fee14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fee14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fee18: 0x0  nop
    ctx->pc = 0x2fee18u;
    // NOP
    // 0x2fee1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fee1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fee20: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2fee20u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
label_2fee24:
    // 0x2fee24: 0x96430276  lhu         $v1, 0x276($s2)
    ctx->pc = 0x2fee24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 630)));
    // 0x2fee28: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x2fee28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2fee2c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FEE2Cu;
    {
        const bool branch_taken_0x2fee2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE2Cu;
        // 0x2fee30: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fee2c) {
            ctx->pc = 0x2FEE74u;
            goto label_2fee74;
        }
    }
    ctx->pc = 0x2FEE34u;
    // 0x2fee34: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2fee34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2fee38: 0x94102a  slt         $v0, $a0, $s4
    ctx->pc = 0x2fee38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2fee3c: 0x54400232  bnel        $v0, $zero, . + 4 + (0x232 << 2)
    ctx->pc = 0x2FEE3Cu;
    {
        const bool branch_taken_0x2fee3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fee3c) {
            ctx->pc = 0x2FEE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEE3Cu;
            // 0x2fee40: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF708u;
            goto label_2ff708;
        }
    }
    ctx->pc = 0x2FEE44u;
    // 0x2fee44: 0xb4102a  slt         $v0, $a1, $s4
    ctx->pc = 0x2fee44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2fee48: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FEE48u;
    {
        const bool branch_taken_0x2fee48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE48u;
        // 0x2fee4c: 0x2841023  subu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fee48) {
            ctx->pc = 0x2FEE74u;
            goto label_2fee74;
        }
    }
    ctx->pc = 0x2FEE50u;
    // 0x2fee50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fee50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fee54: 0x0  nop
    ctx->pc = 0x2fee54u;
    // NOP
    // 0x2fee58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fee58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fee5c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2fee5cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2fee60: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2fee60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2fee64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fee64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fee68: 0x0  nop
    ctx->pc = 0x2fee68u;
    // NOP
    // 0x2fee6c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2fee6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fee70: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x2fee70u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_2fee74:
    // 0x2fee74: 0x9242024c  lbu         $v0, 0x24C($s2)
    ctx->pc = 0x2fee74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 588)));
    // 0x2fee78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FEE78u;
    {
        const bool branch_taken_0x2fee78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE78u;
        // 0x2fee7c: 0x8e440120  lw          $a0, 0x120($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fee78) {
            ctx->pc = 0x2FEEA8u;
            goto label_2feea8;
        }
    }
    ctx->pc = 0x2FEE80u;
    // 0x2fee80: 0x9243024d  lbu         $v1, 0x24D($s2)
    ctx->pc = 0x2fee80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 589)));
    // 0x2fee84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fee84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fee88: 0x0  nop
    ctx->pc = 0x2fee88u;
    // NOP
    // 0x2fee8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2fee8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fee90: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2fee90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fee94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fee94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fee98: 0x0  nop
    ctx->pc = 0x2fee98u;
    // NOP
    // 0x2fee9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fee9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2feea0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2feea0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2feea4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2feea4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2feea8:
    // 0x2feea8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FEEA8u;
    {
        const bool branch_taken_0x2feea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEEA8u;
        // 0x2feeac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feea8) {
            ctx->pc = 0x2FEEE0u;
            goto label_2feee0;
        }
    }
    ctx->pc = 0x2FEEB0u;
    // 0x2feeb0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2feeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2feeb4: 0x8c430250  lw          $v1, 0x250($v0)
    ctx->pc = 0x2feeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2feeb8: 0x4620008  bltzl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FEEB8u;
    {
        const bool branch_taken_0x2feeb8 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2feeb8) {
            ctx->pc = 0x2FEEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEEB8u;
            // 0x2feebc: 0xae400120  sw          $zero, 0x120($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEEDCu;
            goto label_2feedc;
        }
    }
    ctx->pc = 0x2FEEC0u;
    // 0x2feec0: 0xc0c1c46  jal         func_307118
    ctx->pc = 0x2FEEC0u;
    SET_GPR_U32(ctx, 31, 0x2FEEC8u);
    ctx->pc = 0x307118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307118u, 0x2FEEC0u, 0x2FEEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEEC8u;
label_2feec8:
    // 0x2feec8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2feec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2feecc: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FEECCu;
    {
        const bool branch_taken_0x2feecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2feecc) {
            ctx->pc = 0x2FEED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEECCu;
            // 0x2feed0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEEE0u;
            goto label_2feee0;
        }
    }
    ctx->pc = 0x2FEED4u;
    // 0x2feed4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEED4u;
    {
        const bool branch_taken_0x2feed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEED4u;
        // 0x2feed8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feed4) {
            ctx->pc = 0x2FEEE4u;
            goto label_2feee4;
        }
    }
    ctx->pc = 0x2FEEDCu;
label_2feedc:
    // 0x2feedc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2feedcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2feee0:
    // 0x2feee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2feee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2feee4:
    // 0x2feee4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FEEE4u;
    {
        const bool branch_taken_0x2feee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2feee4) {
            ctx->pc = 0x2FEEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEEE4u;
            // 0x2feee8: 0x82420101  lb          $v0, 0x101($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 257)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEF0Cu;
            goto label_2fef0c;
        }
    }
    ctx->pc = 0x2FEEECu;
    // 0x2feeec: 0x8e430120  lw          $v1, 0x120($s2)
    ctx->pc = 0x2feeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x2feef0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2feef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2feef4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2feef4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2feef8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2feef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2feefc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEEFCu;
    {
        const bool branch_taken_0x2feefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEEFCu;
        // 0x2fef00: 0x82420101  lb          $v0, 0x101($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 257)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feefc) {
            ctx->pc = 0x2FEF0Cu;
            goto label_2fef0c;
        }
    }
    ctx->pc = 0x2FEF04u;
    // 0x2fef04: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2fef04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fef08: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2fef08u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2fef0c:
    // 0x2fef0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fef10: 0x8e450118  lw          $a1, 0x118($s2)
    ctx->pc = 0x2fef10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
    // 0x2fef14: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2fef14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2fef18: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2fef18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2fef1c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2fef1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fef20: 0x248464a0  addiu       $a0, $a0, 0x64A0
    ctx->pc = 0x2fef20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25760));
    // 0x2fef24: 0xc0544e6  jal         func_151398
    ctx->pc = 0x2FEF24u;
    SET_GPR_U32(ctx, 31, 0x2FEF2Cu);
    ctx->pc = 0x2FEF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEF24u;
    // 0x2fef28: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151398u, 0x2FEF24u, 0x2FEF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEF2Cu;
label_2fef2c:
    // 0x2fef2c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2fef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2fef30: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x2fef30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x2fef34: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2fef34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2fef38: 0x24634128  addiu       $v1, $v1, 0x4128
    ctx->pc = 0x2fef38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16680));
    // 0x2fef3c: 0x8c4476b0  lw          $a0, 0x76B0($v0)
    ctx->pc = 0x2fef3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7476B0u));
    // 0x2fef40: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x2fef40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2fef44: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2fef44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fef48: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2fef48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2fef4c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2fef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fef50: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2fef50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2fef54: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2fef54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2fef58: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2fef58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fef5c: 0xc0b5420  jal         func_2D5080
    ctx->pc = 0x2FEF5Cu;
    SET_GPR_U32(ctx, 31, 0x2FEF64u);
    ctx->pc = 0x2FEF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEF5Cu;
    // 0x2fef60: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5080u, 0x2FEF5Cu, 0x2FEF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEF64u;
label_2fef64:
    // 0x2fef64: 0x92440245  lbu         $a0, 0x245($s2)
    ctx->pc = 0x2fef64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 581)));
    // 0x2fef68: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2fef68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2fef6c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2fef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fef70: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FEF70u;
    {
        const bool branch_taken_0x2fef70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fef70) {
            ctx->pc = 0x2FEF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEF70u;
            // 0x2fef74: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEF78u;
            goto label_2fef78;
        }
    }
    ctx->pc = 0x2FEF78u;
label_2fef78:
    // 0x2fef78: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2fef78u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fef7c: 0x92450246  lbu         $a1, 0x246($s2)
    ctx->pc = 0x2fef7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 582)));
    // 0x2fef80: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2fef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2fef84: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2fef84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2fef88: 0x0  nop
    ctx->pc = 0x2fef88u;
    // NOP
    // 0x2fef8c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2fef8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2fef90: 0x82420244  lb          $v0, 0x244($s2)
    ctx->pc = 0x2fef90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 580)));
    // 0x2fef94: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2fef94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fef98: 0x0  nop
    ctx->pc = 0x2fef98u;
    // NOP
    // 0x2fef9c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2fef9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2fefa0: 0x8e48011c  lw          $t0, 0x11C($s2)
    ctx->pc = 0x2fefa0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x2fefa4: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x2fefa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x2fefa8: 0x3812  mflo        $a3
    ctx->pc = 0x2fefa8u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2fefac: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x2fefacu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fefb0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2fefb0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fefb4: 0x0  nop
    ctx->pc = 0x2fefb4u;
    // NOP
    // 0x2fefb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fefb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fefbc: 0x46030543  div.s       $f21, $f0, $f3
    ctx->pc = 0x2fefbcu;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2fefc0: 0x2812  mflo        $a1
    ctx->pc = 0x2fefc0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2fefc4: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2fefc4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2fefc8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2fefc8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fefcc: 0x0  nop
    ctx->pc = 0x2fefccu;
    // NOP
    // 0x2fefd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2fefd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fefd4: 0x46020d83  div.s       $f22, $f1, $f2
    ctx->pc = 0x2fefd4u;
    ctx->f[22] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x2fefd8: 0x1012  mflo        $v0
    ctx->pc = 0x2fefd8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fefdc: 0x1810  mfhi        $v1
    ctx->pc = 0x2fefdcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2fefe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fefe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fefe4: 0x0  nop
    ctx->pc = 0x2fefe4u;
    // NOP
    // 0x2fefe8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fefe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fefec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fefecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2feff0: 0x0  nop
    ctx->pc = 0x2feff0u;
    // NOP
    // 0x2feff4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2feff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2feff8: 0x46150602  mul.s       $f24, $f0, $f21
    ctx->pc = 0x2feff8u;
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2feffc: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEFFCu;
    {
        const bool branch_taken_0x2feffc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEFFCu;
        // 0x2ff000: 0x46160dc2  mul.s       $f23, $f1, $f22 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feffc) {
            ctx->pc = 0x2FF00Cu;
            goto label_2ff00c;
        }
    }
    ctx->pc = 0x2FF004u;
    // 0x2ff004: 0x4615c600  add.s       $f24, $f24, $f21
    ctx->pc = 0x2ff004u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
    // 0x2ff008: 0x4600ad47  neg.s       $f21, $f21
    ctx->pc = 0x2ff008u;
    ctx->f[21] = FPU_NEG_S(ctx->f[21]);
label_2ff00c:
    // 0x2ff00c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2ff00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2ff010: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2ff010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2ff014: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF014u;
    {
        const bool branch_taken_0x2ff014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff014) {
            ctx->pc = 0x2FF024u;
            goto label_2ff024;
        }
    }
    ctx->pc = 0x2FF01Cu;
    // 0x2ff01c: 0x4616bdc0  add.s       $f23, $f23, $f22
    ctx->pc = 0x2ff01cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
    // 0x2ff020: 0x4600b587  neg.s       $f22, $f22
    ctx->pc = 0x2ff020u;
    ctx->f[22] = FPU_NEG_S(ctx->f[22]);
label_2ff024:
    // 0x2ff024: 0x6a42018f  ldl         $v0, 0x18F($s2)
    ctx->pc = 0x2ff024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ff028: 0x6e420188  ldr         $v0, 0x188($s2)
    ctx->pc = 0x2ff028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ff02c: 0x6a430197  ldl         $v1, 0x197($s2)
    ctx->pc = 0x2ff02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ff030: 0x6e430190  ldr         $v1, 0x190($s2)
    ctx->pc = 0x2ff030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ff034: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2ff034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ff038: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2ff038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ff03c: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x2ff03cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ff040: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x2ff040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ff044: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2ff044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2ff048: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ff048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff04c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2ff04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ff050: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x2ff050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ff054: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x2ff054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ff058: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2ff058u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ff05c: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2ff05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ff060: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2ff060u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ff064: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2ff064u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2ff068: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2ff068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2ff06c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2ff06cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2ff070: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ff070u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff074: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2ff074u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ff078: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x2ff078u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ff07c: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x2ff07cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ff080: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2ff080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2ff084: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x2ff084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2ff088: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x2ff088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2ff08c: 0x6bac001f  ldl         $t4, 0x1F($sp)
    ctx->pc = 0x2ff08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2ff090: 0x6fac0018  ldr         $t4, 0x18($sp)
    ctx->pc = 0x2ff090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2ff094: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x2ff094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ff098: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x2ff098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ff09c: 0xb3ac000f  sdl         $t4, 0xF($sp)
    ctx->pc = 0x2ff09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ff0a0: 0xb7ac0008  sdr         $t4, 0x8($sp)
    ctx->pc = 0x2ff0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ff0a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2ff0a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff0a8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2ff0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ff0ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ff0acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ff0b0: 0x0  nop
    ctx->pc = 0x2ff0b0u;
    // NOP
    // 0x2ff0b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FF0B4u;
    {
        const bool branch_taken_0x2ff0b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff0b4) {
            ctx->pc = 0x2FF0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF0B4u;
            // 0x2ff0b8: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF0BCu;
            goto label_2ff0bc;
        }
    }
    ctx->pc = 0x2FF0BCu;
label_2ff0bc:
    // 0x2ff0bc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2ff0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ff0c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ff0c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ff0c4: 0x0  nop
    ctx->pc = 0x2ff0c4u;
    // NOP
    // 0x2ff0c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FF0C8u;
    {
        const bool branch_taken_0x2ff0c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff0c8) {
            ctx->pc = 0x2FF0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF0C8u;
            // 0x2ff0cc: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF0D0u;
            goto label_2ff0d0;
        }
    }
    ctx->pc = 0x2FF0D0u;
label_2ff0d0:
    // 0x2ff0d0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ff0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ff0d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ff0d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ff0d8: 0x0  nop
    ctx->pc = 0x2ff0d8u;
    // NOP
    // 0x2ff0dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FF0DCu;
    {
        const bool branch_taken_0x2ff0dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff0dc) {
            ctx->pc = 0x2FF0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF0DCu;
            // 0x2ff0e0: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF0E4u;
            goto label_2ff0e4;
        }
    }
    ctx->pc = 0x2FF0E4u;
label_2ff0e4:
    // 0x2ff0e4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2ff0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ff0e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ff0e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ff0ec: 0x0  nop
    ctx->pc = 0x2ff0ecu;
    // NOP
    // 0x2ff0f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FF0F0u;
    {
        const bool branch_taken_0x2ff0f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff0f0) {
            ctx->pc = 0x2FF0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF0F0u;
            // 0x2ff0f4: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF0F8u;
            goto label_2ff0f8;
        }
    }
    ctx->pc = 0x2FF0F8u;
label_2ff0f8:
    // 0x2ff0f8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2ff0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ff0fc: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2ff0fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ff100: 0x0  nop
    ctx->pc = 0x2ff100u;
    // NOP
    // 0x2ff104: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FF104u;
    {
        const bool branch_taken_0x2ff104 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff104) {
            ctx->pc = 0x2FF108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF104u;
            // 0x2ff108: 0xe7a50000  swc1        $f5, 0x0($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF10Cu;
            goto label_2ff10c;
        }
    }
    ctx->pc = 0x2FF10Cu;
label_2ff10c:
    // 0x2ff10c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2ff10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ff110: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2ff110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ff114: 0x0  nop
    ctx->pc = 0x2ff114u;
    // NOP
    // 0x2ff118: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FF118u;
    {
        const bool branch_taken_0x2ff118 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff118) {
            ctx->pc = 0x2FF11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF118u;
            // 0x2ff11c: 0xe7a50004  swc1        $f5, 0x4($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF120u;
            goto label_2ff120;
        }
    }
    ctx->pc = 0x2FF120u;
label_2ff120:
    // 0x2ff120: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ff120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ff124: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2ff124u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ff128: 0x0  nop
    ctx->pc = 0x2ff128u;
    // NOP
    // 0x2ff12c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FF12Cu;
    {
        const bool branch_taken_0x2ff12c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff12c) {
            ctx->pc = 0x2FF130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF12Cu;
            // 0x2ff130: 0xe7a50008  swc1        $f5, 0x8($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF134u;
            goto label_2ff134;
        }
    }
    ctx->pc = 0x2FF134u;
label_2ff134:
    // 0x2ff134: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2ff134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ff138: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2ff138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ff13c: 0x0  nop
    ctx->pc = 0x2ff13cu;
    // NOP
    // 0x2ff140: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FF140u;
    {
        const bool branch_taken_0x2ff140 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff140) {
            ctx->pc = 0x2FF144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF140u;
            // 0x2ff144: 0xe7a5000c  swc1        $f5, 0xC($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF148u;
            goto label_2ff148;
        }
    }
    ctx->pc = 0x2FF148u;
label_2ff148:
    // 0x2ff148: 0x8e440114  lw          $a0, 0x114($s2)
    ctx->pc = 0x2ff148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x2ff14c: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2FF14Cu;
    {
        const bool branch_taken_0x2ff14c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF14Cu;
        // 0x2ff150: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff14c) {
            ctx->pc = 0x2FF1DCu;
            goto label_2ff1dc;
        }
    }
    ctx->pc = 0x2FF154u;
    // 0x2ff154: 0x9242011c  lbu         $v0, 0x11C($s2)
    ctx->pc = 0x2ff154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x2ff158: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x2ff158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x2ff15c: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2FF15Cu;
    {
        const bool branch_taken_0x2ff15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff15c) {
            ctx->pc = 0x2FF160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF15Cu;
            // 0x2ff160: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF1E0u;
            goto label_2ff1e0;
        }
    }
    ctx->pc = 0x2FF164u;
    // 0x2ff164: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x2ff164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x2ff168: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ff168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2ff16c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF16Cu;
    {
        const bool branch_taken_0x2ff16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff16c) {
            ctx->pc = 0x2FF170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF16Cu;
            // 0x2ff170: 0x908202b6  lbu         $v0, 0x2B6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 694)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF17Cu;
            goto label_2ff17c;
        }
    }
    ctx->pc = 0x2FF174u;
    // 0x2ff174: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2FF174u;
    {
        const bool branch_taken_0x2ff174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF174u;
        // 0x2ff178: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff174) {
            ctx->pc = 0x2FF1E4u;
            goto label_2ff1e4;
        }
    }
    ctx->pc = 0x2FF17Cu;
label_2ff17c:
    // 0x2ff17c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2ff17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2ff180: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2ff180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ff184: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x2ff184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2ff188: 0x0  nop
    ctx->pc = 0x2ff188u;
    // NOP
    // 0x2ff18c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2ff18cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2ff190: 0x908302b7  lbu         $v1, 0x2B7($a0)
    ctx->pc = 0x2ff190u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 695)));
    // 0x2ff194: 0x908202bc  lbu         $v0, 0x2BC($a0)
    ctx->pc = 0x2ff194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 700)));
    // 0x2ff198: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2ff198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ff19c: 0x0  nop
    ctx->pc = 0x2ff19cu;
    // NOP
    // 0x2ff1a0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ff1a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ff1a4: 0xc480024c  lwc1        $f0, 0x24C($a0)
    ctx->pc = 0x2ff1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ff1a8: 0x46042943  div.s       $f5, $f5, $f4
    ctx->pc = 0x2ff1a8u;
    ctx->f[5] = ps2FpuDivide(ctx->fcr31, ctx->f[5], ctx->f[4]);
    // 0x2ff1ac: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2ff1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ff1b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff1b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff1b4: 0x0  nop
    ctx->pc = 0x2ff1b4u;
    // NOP
    // 0x2ff1b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ff1b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ff1bc: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x2ff1bcu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[4]);
    // 0x2ff1c0: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x2ff1c0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[4]);
    // 0x2ff1c4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2ff1c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2ff1c8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ff1c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ff1cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ff1ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ff1d0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2ff1d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ff1d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF1D4u;
    {
        const bool branch_taken_0x2ff1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1D4u;
        // 0x2ff1d8: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff1d4) {
            ctx->pc = 0x2FF1E4u;
            goto label_2ff1e4;
        }
    }
    ctx->pc = 0x2FF1DCu;
label_2ff1dc:
    // 0x2ff1dc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2ff1dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2ff1e0:
    // 0x2ff1e0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2ff1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2ff1e4:
    // 0x2ff1e4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2ff1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ff1e8: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x2ff1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2ff1ec: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2ff1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ff1f0: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ff1f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2ff1f4: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x2ff1f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ff1f8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2ff1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ff1fc: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2ff1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ff200: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ff200u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ff204: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2ff204u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2ff208: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ff208u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ff20c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2ff20cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2ff210: 0x307e00ff  andi        $fp, $v1, 0xFF
    ctx->pc = 0x2ff210u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ff214: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ff214u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ff218: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2ff218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ff21c: 0x30b500ff  andi        $s5, $a1, 0xFF
    ctx->pc = 0x2ff21cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ff220: 0x30d600ff  andi        $s6, $a2, 0xFF
    ctx->pc = 0x2ff220u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2ff224: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x2FF224u;
    SET_GPR_U32(ctx, 31, 0x2FF22Cu);
    ctx->pc = 0x2FF228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF224u;
    // 0x2ff228: 0x305700ff  andi        $s7, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x2FF224u, 0x2FF22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF22Cu;
label_2ff22c:
    // 0x2ff22c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ff22cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff230: 0x12600134  beqz        $s3, . + 4 + (0x134 << 2)
    ctx->pc = 0x2FF230u;
    {
        const bool branch_taken_0x2ff230 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF230u;
        // 0x2ff234: 0x3c025000  lui         $v0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff230) {
            ctx->pc = 0x2FF704u;
            goto label_2ff704;
        }
    }
    ctx->pc = 0x2FF238u;
    // 0x2ff238: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2ff238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2ff23c: 0x34630017  ori         $v1, $v1, 0x17
    ctx->pc = 0x2ff23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23);
    // 0x2ff240: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x2ff240u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x2ff244: 0x34420017  ori         $v0, $v0, 0x17
    ctx->pc = 0x2ff244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23);
    // 0x2ff248: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x2ff248u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x2ff24c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2ff24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2ff250: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x2ff250u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x2ff254: 0x34028152  ori         $v0, $zero, 0x8152
    ctx->pc = 0x2ff254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33106);
    // 0x2ff258: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x2ff258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x2ff25c: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2ff25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2ff260: 0xac60b7a0  sw          $zero, -0x4860($v1)
    ctx->pc = 0x2ff260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948768), GPR_U32(ctx, 0));
    // 0x2ff264: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x2ff264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2ff268: 0xfe620010  sd          $v0, 0x10($s3)
    ctx->pc = 0x2ff268u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 2));
    // 0x2ff26c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2ff26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ff270: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2ff270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2ff274: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2ff274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2ff278: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x2ff278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x2ff27c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ff27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ff280: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2ff280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2ff284: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF284u;
    {
        const bool branch_taken_0x2ff284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF284u;
        // 0x2ff288: 0x26710020  addiu       $s1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff284) {
            ctx->pc = 0x2FF2A0u;
            goto label_2ff2a0;
        }
    }
    ctx->pc = 0x2FF28Cu;
    // 0x2ff28c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ff28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2ff290: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2ff290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff294: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2ff294u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2ff298: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF298u;
    {
        const bool branch_taken_0x2ff298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF298u;
        // 0x2ff29c: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff298) {
            ctx->pc = 0x2FF2B8u;
            goto label_2ff2b8;
        }
    }
    ctx->pc = 0x2FF2A0u;
label_2ff2a0:
    // 0x2ff2a0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ff2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2ff2a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2ff2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff2a8: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2ff2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2ff2ac: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x2ff2acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2ff2b0: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x2ff2b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2ff2b4: 0x34a50070  ori         $a1, $a1, 0x70
    ctx->pc = 0x2ff2b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)112);
label_2ff2b8:
    // 0x2ff2b8: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x2ff2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2ff2bc: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2ff2bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ff2c0: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2ff2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2ff2c4: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2ff2c4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2ff2c8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2ff2c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2ff2cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ff2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ff2d0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ff2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2ff2d4: 0xfe620020  sd          $v0, 0x20($s3)
    ctx->pc = 0x2ff2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 2));
    // 0x2ff2d8: 0xfe260008  sd          $a2, 0x8($s1)
    ctx->pc = 0x2ff2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 6));
    // 0x2ff2dc: 0x26710030  addiu       $s1, $s3, 0x30
    ctx->pc = 0x2ff2dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x2ff2e0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2ff2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ff2e4: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x2ff2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x2ff2e8: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x2ff2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x2ff2ec: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x2ff2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x2ff2f0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2ff2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2ff2f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF2F4u;
    {
        const bool branch_taken_0x2ff2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF2F4u;
        // 0x2ff2f8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff2f4) {
            ctx->pc = 0x2FF30Cu;
            goto label_2ff30c;
        }
    }
    ctx->pc = 0x2FF2FCu;
    // 0x2ff2fc: 0x82430101  lb          $v1, 0x101($s2)
    ctx->pc = 0x2ff2fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 257)));
    // 0x2ff300: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ff300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ff304: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF304u;
    {
        const bool branch_taken_0x2ff304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF304u;
        // 0x2ff308: 0x24030047  addiu       $v1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff304) {
            ctx->pc = 0x2FF31Cu;
            goto label_2ff31c;
        }
    }
    ctx->pc = 0x2FF30Cu;
label_2ff30c:
    // 0x2ff30c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2ff30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2ff310: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x2ff310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x2ff314: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF314u;
    {
        const bool branch_taken_0x2ff314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF314u;
        // 0x2ff318: 0x24030047  addiu       $v1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff314) {
            ctx->pc = 0x2FF324u;
            goto label_2ff324;
        }
    }
    ctx->pc = 0x2FF31Cu;
label_2ff31c:
    // 0x2ff31c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2ff31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2ff320: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x2ff320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_2ff324:
    // 0x2ff324: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x2ff324u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x2ff328: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x2ff328u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x2ff32c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2ff32cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2ff330: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x2ff330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x2ff334: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x2ff334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x2ff338: 0x3c053a00  lui         $a1, 0x3A00
    ctx->pc = 0x2ff338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14848 << 16));
    // 0x2ff33c: 0x34a500f8  ori         $a1, $a1, 0xF8
    ctx->pc = 0x2ff33cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)248);
    // 0x2ff340: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x2ff340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2ff344: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ff344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2ff348: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x2ff348u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x2ff34c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ff34cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ff350: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ff350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ff354: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ff354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2ff358: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x2ff358u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x2ff35c: 0x92470247  lbu         $a3, 0x247($s2)
    ctx->pc = 0x2ff35cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 583)));
    // 0x2ff360: 0x2ce2000b  sltiu       $v0, $a3, 0xB
    ctx->pc = 0x2ff360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2ff364: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2FF364u;
    {
        const bool branch_taken_0x2ff364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF364u;
        // 0x2ff368: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff364) {
            ctx->pc = 0x2FF464u;
            goto label_2ff464;
        }
    }
    ctx->pc = 0x2FF36Cu;
    // 0x2ff36c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2ff36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2ff370: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2ff370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ff374: 0x2442fa60  addiu       $v0, $v0, -0x5A0
    ctx->pc = 0x2ff374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965856));
    // 0x2ff378: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ff378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ff37c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ff37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ff380: 0x800008  jr          $a0
    ctx->pc = 0x2FF380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FF388u: goto label_2ff388;
            case 0x2FF39Cu: goto label_2ff39c;
            case 0x2FF3B0u: goto label_2ff3b0;
            case 0x2FF3C4u: goto label_2ff3c4;
            case 0x2FF3D8u: goto label_2ff3d8;
            case 0x2FF3ECu: goto label_2ff3ec;
            case 0x2FF400u: goto label_2ff400;
            case 0x2FF414u: goto label_2ff414;
            case 0x2FF428u: goto label_2ff428;
            case 0x2FF43Cu: goto label_2ff43c;
            case 0x2FF450u: goto label_2ff450;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF380u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2FF388u;
label_2ff388:
    // 0x2ff388: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2ff388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ff38c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2ff38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ff390: 0x34420044  ori         $v0, $v0, 0x44
    ctx->pc = 0x2ff390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)68);
    // 0x2ff394: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2FF394u;
    {
        const bool branch_taken_0x2ff394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF394u;
        // 0x2ff398: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff394) {
            ctx->pc = 0x2FF478u;
            goto label_2ff478;
        }
    }
    ctx->pc = 0x2FF39Cu;
label_2ff39c:
    // 0x2ff39c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2ff39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ff3a0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2ff3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ff3a4: 0x34420048  ori         $v0, $v0, 0x48
    ctx->pc = 0x2ff3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)72);
    // 0x2ff3a8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2FF3A8u;
    {
        const bool branch_taken_0x2ff3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3A8u;
        // 0x2ff3ac: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff3a8) {
            ctx->pc = 0x2FF478u;
            goto label_2ff478;
        }
    }
    ctx->pc = 0x2FF3B0u;
label_2ff3b0:
    // 0x2ff3b0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2ff3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ff3b4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2ff3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ff3b8: 0x344200a1  ori         $v0, $v0, 0xA1
    ctx->pc = 0x2ff3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)161);
    // 0x2ff3bc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2FF3BCu;
    {
        const bool branch_taken_0x2ff3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3BCu;
        // 0x2ff3c0: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff3bc) {
            ctx->pc = 0x2FF478u;
            goto label_2ff478;
        }
    }
    ctx->pc = 0x2FF3C4u;
label_2ff3c4:
    // 0x2ff3c4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2ff3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ff3c8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2ff3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ff3cc: 0x34420041  ori         $v0, $v0, 0x41
    ctx->pc = 0x2ff3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65);
    // 0x2ff3d0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2FF3D0u;
    {
        const bool branch_taken_0x2ff3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3D0u;
        // 0x2ff3d4: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff3d0) {
            ctx->pc = 0x2FF478u;
            goto label_2ff478;
        }
    }
    ctx->pc = 0x2FF3D8u;
label_2ff3d8:
    // 0x2ff3d8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2ff3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ff3dc: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2ff3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ff3e0: 0x34420049  ori         $v0, $v0, 0x49
    ctx->pc = 0x2ff3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)73);
    // 0x2ff3e4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2FF3E4u;
    {
        const bool branch_taken_0x2ff3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3E4u;
        // 0x2ff3e8: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff3e4) {
            ctx->pc = 0x2FF478u;
            goto label_2ff478;
        }
    }
    ctx->pc = 0x2FF3ECu;
label_2ff3ec:
    // 0x2ff3ec: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2ff3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ff3f0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2ff3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ff3f4: 0x34420068  ori         $v0, $v0, 0x68
    ctx->pc = 0x2ff3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)104);
    // 0x2ff3f8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2FF3F8u;
    {
        const bool branch_taken_0x2ff3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3F8u;
        // 0x2ff3fc: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff3f8) {
            ctx->pc = 0x2FF478u;
            goto label_2ff478;
        }
    }
    ctx->pc = 0x2FF400u;
label_2ff400:
    // 0x2ff400: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2ff400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ff404: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2ff404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ff408: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x2ff408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x2ff40c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2FF40Cu;
    {
        const bool branch_taken_0x2ff40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF40Cu;
        // 0x2ff410: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff40c) {
            ctx->pc = 0x2FF478u;
            goto label_2ff478;
        }
    }
    ctx->pc = 0x2FF414u;
label_2ff414:
    // 0x2ff414: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2ff414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ff418: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2ff418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ff41c: 0x34420046  ori         $v0, $v0, 0x46
    ctx->pc = 0x2ff41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)70);
    // 0x2ff420: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2FF420u;
    {
        const bool branch_taken_0x2ff420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF420u;
        // 0x2ff424: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff420) {
            ctx->pc = 0x2FF478u;
            goto label_2ff478;
        }
    }
    ctx->pc = 0x2FF428u;
label_2ff428:
    // 0x2ff428: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2ff428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ff42c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2ff42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ff430: 0x344200a4  ori         $v0, $v0, 0xA4
    ctx->pc = 0x2ff430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)164);
    // 0x2ff434: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2FF434u;
    {
        const bool branch_taken_0x2ff434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF434u;
        // 0x2ff438: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff434) {
            ctx->pc = 0x2FF478u;
            goto label_2ff478;
        }
    }
    ctx->pc = 0x2FF43Cu;
label_2ff43c:
    // 0x2ff43c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2ff43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ff440: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2ff440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ff444: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x2ff444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x2ff448: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2FF448u;
    {
        const bool branch_taken_0x2ff448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF448u;
        // 0x2ff44c: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff448) {
            ctx->pc = 0x2FF478u;
            goto label_2ff478;
        }
    }
    ctx->pc = 0x2FF450u;
label_2ff450:
    // 0x2ff450: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2ff450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ff454: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2ff454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ff458: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2ff458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2ff45c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF45Cu;
    {
        const bool branch_taken_0x2ff45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF45Cu;
        // 0x2ff460: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff45c) {
            ctx->pc = 0x2FF478u;
            goto label_2ff478;
        }
    }
    ctx->pc = 0x2FF464u;
label_2ff464:
    // 0x2ff464: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2ff464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2ff468: 0x92460102  lbu         $a2, 0x102($s2)
    ctx->pc = 0x2ff468u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 258)));
    // 0x2ff46c: 0x24a5fa38  addiu       $a1, $a1, -0x5C8
    ctx->pc = 0x2ff46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965816));
    // 0x2ff470: 0xc0b67da  jal         func_2D9F68
    ctx->pc = 0x2FF470u;
    SET_GPR_U32(ctx, 31, 0x2FF478u);
    ctx->pc = 0x2FF474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF470u;
    // 0x2ff474: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2FF470u, 0x2FF478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF478u;
label_2ff478:
    // 0x2ff478: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x2ff478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2ff47c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2ff47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2ff480: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x2ff480u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x2ff484: 0x246464a0  addiu       $a0, $v1, 0x64A0
    ctx->pc = 0x2ff484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 25760));
    // 0x2ff488: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x2ff488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2ff48c: 0xc0544da  jal         func_151368
    ctx->pc = 0x2FF48Cu;
    SET_GPR_U32(ctx, 31, 0x2FF494u);
    ctx->pc = 0x2FF490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF48Cu;
    // 0x2ff490: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151368u, 0x2FF48Cu, 0x2FF494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF494u;
label_2ff494:
    // 0x2ff494: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x2ff494u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x2ff498: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2ff498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2ff49c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2ff49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ff4a0: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x2ff4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x2ff4a4: 0x8c83b7a0  lw          $v1, -0x4860($a0)
    ctx->pc = 0x2ff4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B7A0u));
    // 0x2ff4a8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF4A8u;
    {
        const bool branch_taken_0x2ff4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF4A8u;
        // 0x2ff4ac: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff4a8) {
            ctx->pc = 0x2FF4BCu;
            goto label_2ff4bc;
        }
    }
    ctx->pc = 0x2FF4B0u;
    // 0x2ff4b0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2ff4b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ff4b4: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x2ff4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x2ff4b8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2ff4b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_2ff4bc:
    // 0x2ff4bc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2ff4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ff4c0: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x2ff4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x2ff4c4: 0x3442800c  ori         $v0, $v0, 0x800C
    ctx->pc = 0x2ff4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32780);
    // 0x2ff4c8: 0x240b000e  addiu       $t3, $zero, 0xE
    ctx->pc = 0x2ff4c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ff4cc: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x2ff4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x2ff4d0: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2ff4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2ff4d4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2ff4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2ff4d8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2ff4d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ff4dc: 0xae2b0008  sw          $t3, 0x8($s1)
    ctx->pc = 0x2ff4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 11));
    // 0x2ff4e0: 0x153238  dsll        $a2, $s5, 8
    ctx->pc = 0x2ff4e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << 8);
    // 0x2ff4e4: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x2ff4e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2ff4e8: 0x161438  dsll        $v0, $s6, 16
    ctx->pc = 0x2ff4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << 16);
    // 0x2ff4ec: 0xc480b7a8  lwc1        $f0, -0x4858($a0)
    ctx->pc = 0x2ff4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294948776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ff4f0: 0x3c63025  or          $a2, $fp, $a2
    ctx->pc = 0x2ff4f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) | GPR_U64(ctx, 6));
    // 0x2ff4f4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2ff4f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2ff4f8: 0x171e38  dsll        $v1, $s7, 24
    ctx->pc = 0x2ff4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << 24);
    // 0x2ff4fc: 0x4600c042  mul.s       $f1, $f24, $f0
    ctx->pc = 0x2ff4fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x2ff500: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2ff500u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2ff504: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x2ff504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x2ff508: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ff508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff50c: 0x3c0c0062  lui         $t4, 0x62
    ctx->pc = 0x2ff50cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)98 << 16));
    // 0x2ff510: 0x2487b7a8  addiu       $a3, $a0, -0x4858
    ctx->pc = 0x2ff510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948776));
    // 0x2ff514: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x2ff514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2ff518: 0x2585b760  addiu       $a1, $t4, -0x48A0
    ctx->pc = 0x2ff518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 4294948704));
    // 0x2ff51c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2ff51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2ff520: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x2ff520u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ff524: 0xfe290008  sd          $t1, 0x8($s1)
    ctx->pc = 0x2ff524u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 9));
    // 0x2ff528: 0x4615c0c0  add.s       $f3, $f24, $f21
    ctx->pc = 0x2ff528u;
    ctx->f[3] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
    // 0x2ff52c: 0x26110060  addiu       $s1, $s0, 0x60
    ctx->pc = 0x2ff52cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2ff530: 0x4616b880  add.s       $f2, $f23, $f22
    ctx->pc = 0x2ff530u;
    ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
    // 0x2ff534: 0x9c82b7a8  lwu         $v0, -0x4858($a0)
    ctx->pc = 0x2ff534u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294948776)));
    // 0x2ff538: 0xfe080048  sd          $t0, 0x48($s0)
    ctx->pc = 0x2ff538u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 8));
    // 0x2ff53c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ff53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ff540: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x2ff540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2ff544: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x2ff544u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
    // 0x2ff548: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2ff548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ff54c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2ff54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2ff550: 0x8d83b760  lw          $v1, -0x48A0($t4)
    ctx->pc = 0x2ff550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294948704)));
    // 0x2ff554: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2ff554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ff558: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2ff558u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2ff55c: 0xfe0a0058  sd          $t2, 0x58($s0)
    ctx->pc = 0x2ff55cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 10));
    // 0x2ff560: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ff560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ff564: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ff564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ff568: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ff568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ff56c: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x2ff56cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x2ff570: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2ff570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ff574: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x2ff574u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ff578: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x2ff578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x2ff57c: 0xe6010060  swc1        $f1, 0x60($s0)
    ctx->pc = 0x2ff57cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ff580: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2ff580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2ff584: 0xfe290008  sd          $t1, 0x8($s1)
    ctx->pc = 0x2ff584u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 9));
    // 0x2ff588: 0x26110090  addiu       $s1, $s0, 0x90
    ctx->pc = 0x2ff588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2ff58c: 0x9ce20004  lwu         $v0, 0x4($a3)
    ctx->pc = 0x2ff58cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2ff590: 0xfe080078  sd          $t0, 0x78($s0)
    ctx->pc = 0x2ff590u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 8));
    // 0x2ff594: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ff594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ff598: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x2ff598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2ff59c: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x2ff59cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x2ff5a0: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x2ff5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2ff5a4: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x2ff5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2ff5a8: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2ff5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2ff5ac: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2ff5acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ff5b0: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2ff5b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2ff5b4: 0xfe0a0088  sd          $t2, 0x88($s0)
    ctx->pc = 0x2ff5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 10));
    // 0x2ff5b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ff5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ff5bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ff5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ff5c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ff5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ff5c4: 0xfe030080  sd          $v1, 0x80($s0)
    ctx->pc = 0x2ff5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 3));
    // 0x2ff5c8: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2ff5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ff5cc: 0x4600c042  mul.s       $f1, $f24, $f0
    ctx->pc = 0x2ff5ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x2ff5d0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2ff5d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ff5d4: 0xe6010090  swc1        $f1, 0x90($s0)
    ctx->pc = 0x2ff5d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ff5d8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2ff5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2ff5dc: 0xfe290008  sd          $t1, 0x8($s1)
    ctx->pc = 0x2ff5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 9));
    // 0x2ff5e0: 0x261100c0  addiu       $s1, $s0, 0xC0
    ctx->pc = 0x2ff5e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x2ff5e4: 0x9ce20008  lwu         $v0, 0x8($a3)
    ctx->pc = 0x2ff5e4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2ff5e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ff5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ff5ec: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x2ff5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2ff5f0: 0xfe0200a0  sd          $v0, 0xA0($s0)
    ctx->pc = 0x2ff5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 160), GPR_U64(ctx, 2));
    // 0x2ff5f4: 0xfe0800a8  sd          $t0, 0xA8($s0)
    ctx->pc = 0x2ff5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 168), GPR_U64(ctx, 8));
    // 0x2ff5f8: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x2ff5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2ff5fc: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x2ff5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2ff600: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x2ff600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2ff604: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2ff604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ff608: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2ff608u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2ff60c: 0xfe0a00b8  sd          $t2, 0xB8($s0)
    ctx->pc = 0x2ff60cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 184), GPR_U64(ctx, 10));
    // 0x2ff610: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ff610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ff614: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ff614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ff618: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ff618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ff61c: 0xfe0300b0  sd          $v1, 0xB0($s0)
    ctx->pc = 0x2ff61cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 176), GPR_U64(ctx, 3));
    // 0x2ff620: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x2ff620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ff624: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2ff624u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ff628: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2ff628u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ff62c: 0xe60300c0  swc1        $f3, 0xC0($s0)
    ctx->pc = 0x2ff62cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x2ff630: 0xfe290008  sd          $t1, 0x8($s1)
    ctx->pc = 0x2ff630u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 9));
    // 0x2ff634: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x2ff634u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2ff638: 0x9ce2000c  lwu         $v0, 0xC($a3)
    ctx->pc = 0x2ff638u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2ff63c: 0xfe0800d8  sd          $t0, 0xD8($s0)
    ctx->pc = 0x2ff63cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 216), GPR_U64(ctx, 8));
    // 0x2ff640: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ff640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ff644: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2ff644u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2ff648: 0xfe0600d0  sd          $a2, 0xD0($s0)
    ctx->pc = 0x2ff648u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 208), GPR_U64(ctx, 6));
    // 0x2ff64c: 0x8ca40038  lw          $a0, 0x38($a1)
    ctx->pc = 0x2ff64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x2ff650: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x2ff650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2ff654: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x2ff654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2ff658: 0x4213b  dsra        $a0, $a0, 4
    ctx->pc = 0x2ff658u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 4);
    // 0x2ff65c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2ff65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2ff660: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2ff660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2ff664: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ff664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ff668: 0xfe0a00e8  sd          $t2, 0xE8($s0)
    ctx->pc = 0x2ff668u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 232), GPR_U64(ctx, 10));
    // 0x2ff66c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ff66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2ff670: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x2ff670u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
    // 0x2ff674: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2ff674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2ff678: 0x8c43b7a0  lw          $v1, -0x4860($v0)
    ctx->pc = 0x2ff678u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B7A0u));
    // 0x2ff67c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF67Cu;
    {
        const bool branch_taken_0x2ff67c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF67Cu;
        // 0x2ff680: 0x261100f0  addiu       $s1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff67c) {
            ctx->pc = 0x2FF690u;
            goto label_2ff690;
        }
    }
    ctx->pc = 0x2FF684u;
    // 0x2ff684: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2ff684u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ff688: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x2ff688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x2ff68c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2ff68cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_2ff690:
    // 0x2ff690: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2ff690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ff694: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x2ff694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x2ff698: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x2ff698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x2ff69c: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x2ff69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2ff6a0: 0xfe0200f0  sd          $v0, 0xF0($s0)
    ctx->pc = 0x2ff6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 240), GPR_U64(ctx, 2));
    // 0x2ff6a4: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2ff6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2ff6a8: 0xae2b0008  sw          $t3, 0x8($s1)
    ctx->pc = 0x2ff6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 11));
    // 0x2ff6ac: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x2ff6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x2ff6b0: 0x344200f8  ori         $v0, $v0, 0xF8
    ctx->pc = 0x2ff6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)248);
    // 0x2ff6b4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2ff6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2ff6b8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ff6b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff6bc: 0xfe020100  sd          $v0, 0x100($s0)
    ctx->pc = 0x2ff6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 256), GPR_U64(ctx, 2));
    // 0x2ff6c0: 0x24090070  addiu       $t1, $zero, 0x70
    ctx->pc = 0x2ff6c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2ff6c4: 0xfe030108  sd          $v1, 0x108($s0)
    ctx->pc = 0x2ff6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 264), GPR_U64(ctx, 3));
    // 0x2ff6c8: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x2ff6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2ff6cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ff6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff6d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ff6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff6d4: 0x8cc31180  lw          $v1, 0x1180($a2)
    ctx->pc = 0x2ff6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2ff6d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ff6d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff6dc: 0xfe020118  sd          $v0, 0x118($s0)
    ctx->pc = 0x2ff6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 280), GPR_U64(ctx, 2));
    // 0x2ff6e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ff6e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff6e4: 0x103402a  slt         $t0, $t0, $v1
    ctx->pc = 0x2ff6e4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ff6e8: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2ff6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2ff6ec: 0x68100b  movn        $v0, $v1, $t0
    ctx->pc = 0x2ff6ecu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2ff6f0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2ff6f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2ff6f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ff6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ff6f8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2ff6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2ff6fc: 0xc0bfdd2  jal         func_2FF748
    ctx->pc = 0x2FF6FCu;
    SET_GPR_U32(ctx, 31, 0x2FF704u);
    ctx->pc = 0x2FF700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF6FCu;
    // 0x2ff700: 0xfe020110  sd          $v0, 0x110($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 272), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF748u, 0x2FF6FCu, 0x2FF704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF704u;
label_2ff704:
    // 0x2ff704: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2ff704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2ff708:
    // 0x2ff708: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2ff708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2ff70c:
    // 0x2ff70c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2ff70cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ff710: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2ff710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ff714: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2ff714u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ff718: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2ff718u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ff71c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ff71cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ff720: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x2ff720u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ff724: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x2ff724u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ff728: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ff728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ff72c: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x2ff72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2ff730: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x2ff730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2ff734: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x2ff734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ff738: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x2ff738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ff73c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2ff73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ff740: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF740u;
        // 0x2ff744: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF748u;
}
