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

// Function: CustomIDWork_Main
// Address: 0x2d5de0 - 0x2d6490
void CustomIDWork_Main_0x2d5de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_Main_0x2d5de0");
#endif

    switch (ctx->pc) {
        case 0x2d5fecu: goto label_2d5fec;
        case 0x2d6034u: goto label_2d6034;
        case 0x2d61f8u: goto label_2d61f8;
        case 0x2d624cu: goto label_2d624c;
        case 0x2d62a0u: goto label_2d62a0;
        case 0x2d62f4u: goto label_2d62f4;
        case 0x2d642cu: goto label_2d642c;
        case 0x2d6460u: goto label_2d6460;
        default: break;
    }

    ctx->pc = 0x2d5de0u;

    // 0x2d5de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d5de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d5de4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d5de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d5de8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d5dec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d5decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5df0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2d5df0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d5df4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2d5df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d5df8: 0x50a001a1  beql        $a1, $zero, . + 4 + (0x1A1 << 2)
    ctx->pc = 0x2D5DF8u;
    {
        const bool branch_taken_0x2d5df8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5df8) {
            ctx->pc = 0x2D5DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5DF8u;
            // 0x2d5dfc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6480u;
            goto label_2d6480;
        }
    }
    ctx->pc = 0x2D5E00u;
    // 0x2d5e00: 0x9e030008  lwu         $v1, 0x8($s0)
    ctx->pc = 0x2d5e00u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d5e04: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2d5e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d5e08: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2D5E08u;
    {
        const bool branch_taken_0x2d5e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E08u;
        // 0x2d5e0c: 0x3187b  dsra        $v1, $v1, 1 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5e08) {
            ctx->pc = 0x2D5EA8u;
            goto label_2d5ea8;
        }
    }
    ctx->pc = 0x2D5E10u;
    // 0x2d5e10: 0x96020026  lhu         $v0, 0x26($s0)
    ctx->pc = 0x2d5e10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x2d5e14: 0x96040024  lhu         $a0, 0x24($s0)
    ctx->pc = 0x2d5e14u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2d5e18: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d5e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d5e1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d5e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d5e20: 0xa6020026  sh          $v0, 0x26($s0)
    ctx->pc = 0x2d5e20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d5e24: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2d5e24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d5e28: 0x0  nop
    ctx->pc = 0x2d5e28u;
    // NOP
    // 0x2d5e2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d5e2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d5e30: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d5e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d5e34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d5e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5e38: 0x0  nop
    ctx->pc = 0x2d5e38u;
    // NOP
    // 0x2d5e3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d5e3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d5e40: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x2d5e40u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2d5e44: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D5E44u;
    {
        const bool branch_taken_0x2d5e44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5e44) {
            ctx->pc = 0x2D5E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5E44u;
            // 0x2d5e48: 0x9e020008  lwu         $v0, 0x8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5E68u;
            goto label_2d5e68;
        }
    }
    ctx->pc = 0x2D5E4Cu;
    // 0x2d5e4c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2d5e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5e50: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2d5e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5e54: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d5e54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d5e58: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d5e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d5e5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d5e5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d5e60: 0xe4a10038  swc1        $f1, 0x38($a1)
    ctx->pc = 0x2d5e60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x2d5e64: 0x9e020008  lwu         $v0, 0x8($s0)
    ctx->pc = 0x2d5e64u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d5e68:
    // 0x2d5e68: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x2d5e68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x2d5e6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d5e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d5e70: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D5E70u;
    {
        const bool branch_taken_0x2d5e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5e70) {
            ctx->pc = 0x2D5E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5E70u;
            // 0x2d5e74: 0x96030024  lhu         $v1, 0x24($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5E98u;
            goto label_2d5e98;
        }
    }
    ctx->pc = 0x2D5E78u;
    // 0x2d5e78: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2d5e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5e7c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x2d5e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5e80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d5e84: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d5e84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d5e88: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d5e88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d5e8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d5e8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d5e90: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2d5e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2d5e94: 0x96030024  lhu         $v1, 0x24($s0)
    ctx->pc = 0x2d5e94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_2d5e98:
    // 0x2d5e98: 0x96020026  lhu         $v0, 0x26($s0)
    ctx->pc = 0x2d5e98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x2d5e9c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2d5e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d5ea0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D5EA0u;
    {
        const bool branch_taken_0x2d5ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5ea0) {
            ctx->pc = 0x2D5EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5EA0u;
            // 0x2d5ea4: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5EA8u;
            goto label_2d5ea8;
        }
    }
    ctx->pc = 0x2D5EA8u;
label_2d5ea8:
    // 0x2d5ea8: 0x9e030028  lwu         $v1, 0x28($s0)
    ctx->pc = 0x2d5ea8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2d5eac: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2d5eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d5eb0: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2D5EB0u;
    {
        const bool branch_taken_0x2d5eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EB0u;
        // 0x2d5eb4: 0x3107b  dsra        $v0, $v1, 1 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5eb0) {
            ctx->pc = 0x2D6044u;
            goto label_2d6044;
        }
    }
    ctx->pc = 0x2D5EB8u;
    // 0x2d5eb8: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x2d5eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d5ebc: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D5EBCu;
    {
        const bool branch_taken_0x2d5ebc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5ebc) {
            ctx->pc = 0x2D5EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5EBCu;
            // 0x2d5ec0: 0x96020046  lhu         $v0, 0x46($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5ED8u;
            goto label_2d5ed8;
        }
    }
    ctx->pc = 0x2D5EC4u;
    // 0x2d5ec4: 0x310fb  dsra        $v0, $v1, 3
    ctx->pc = 0x2d5ec4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 3);
    // 0x2d5ec8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d5ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d5ecc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D5ECCu;
    {
        const bool branch_taken_0x2d5ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5ECCu;
        // 0x2d5ed0: 0x310bb  dsra        $v0, $v1, 2 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5ecc) {
            ctx->pc = 0x2D5F74u;
            goto label_2d5f74;
        }
    }
    ctx->pc = 0x2D5ED4u;
    // 0x2d5ed4: 0x96020046  lhu         $v0, 0x46($s0)
    ctx->pc = 0x2d5ed4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
label_2d5ed8:
    // 0x2d5ed8: 0x96030044  lhu         $v1, 0x44($s0)
    ctx->pc = 0x2d5ed8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2d5edc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d5ee0: 0xa6020046  sh          $v0, 0x46($s0)
    ctx->pc = 0x2d5ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d5ee4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d5ee4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d5ee8: 0x0  nop
    ctx->pc = 0x2d5ee8u;
    // NOP
    // 0x2d5eec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d5eecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d5ef0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d5ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d5ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d5ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5ef8: 0x0  nop
    ctx->pc = 0x2d5ef8u;
    // NOP
    // 0x2d5efc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d5efcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d5f00: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x2d5f00u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2d5f04: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D5F04u;
    {
        const bool branch_taken_0x2d5f04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5f04) {
            ctx->pc = 0x2D5F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5F04u;
            // 0x2d5f08: 0x9e020028  lwu         $v0, 0x28($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5F2Cu;
            goto label_2d5f2c;
        }
    }
    ctx->pc = 0x2D5F0Cu;
    // 0x2d5f0c: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x2d5f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5f10: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2d5f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5f14: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d5f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d5f18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d5f18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d5f1c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d5f1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d5f20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d5f20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d5f24: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2d5f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2d5f28: 0x9e020028  lwu         $v0, 0x28($s0)
    ctx->pc = 0x2d5f28u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2d5f2c:
    // 0x2d5f2c: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x2d5f2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
    // 0x2d5f30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d5f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d5f34: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D5F34u;
    {
        const bool branch_taken_0x2d5f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5f34) {
            ctx->pc = 0x2D5F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5F34u;
            // 0x2d5f38: 0x96030044  lhu         $v1, 0x44($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5F5Cu;
            goto label_2d5f5c;
        }
    }
    ctx->pc = 0x2D5F3Cu;
    // 0x2d5f3c: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2d5f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5f40: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2d5f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5f44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d5f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d5f48: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d5f48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d5f4c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d5f4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d5f50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d5f50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d5f54: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x2d5f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2d5f58: 0x96030044  lhu         $v1, 0x44($s0)
    ctx->pc = 0x2d5f58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
label_2d5f5c:
    // 0x2d5f5c: 0x96020046  lhu         $v0, 0x46($s0)
    ctx->pc = 0x2d5f5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2d5f60: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2d5f60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d5f64: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x2D5F64u;
    {
        const bool branch_taken_0x2d5f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5f64) {
            ctx->pc = 0x2D5F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5F64u;
            // 0x2d5f68: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6044u;
            goto label_2d6044;
        }
    }
    ctx->pc = 0x2D5F6Cu;
    // 0x2d5f6c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2D5F6Cu;
    {
        const bool branch_taken_0x2d5f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F6Cu;
        // 0x2d5f70: 0x9e030048  lwu         $v1, 0x48($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5f6c) {
            ctx->pc = 0x2D6048u;
            goto label_2d6048;
        }
    }
    ctx->pc = 0x2D5F74u;
label_2d5f74:
    // 0x2d5f74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d5f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d5f78: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D5F78u;
    {
        const bool branch_taken_0x2d5f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5f78) {
            ctx->pc = 0x2D5F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5F78u;
            // 0x2d5f7c: 0x96040046  lhu         $a0, 0x46($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5F94u;
            goto label_2d5f94;
        }
    }
    ctx->pc = 0x2D5F80u;
    // 0x2d5f80: 0x3113b  dsra        $v0, $v1, 4
    ctx->pc = 0x2d5f80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 4);
    // 0x2d5f84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d5f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d5f88: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x2D5F88u;
    {
        const bool branch_taken_0x2d5f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5f88) {
            ctx->pc = 0x2D5F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5F88u;
            // 0x2d5f8c: 0x9e030048  lwu         $v1, 0x48($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6048u;
            goto label_2d6048;
        }
    }
    ctx->pc = 0x2D5F90u;
    // 0x2d5f90: 0x96040046  lhu         $a0, 0x46($s0)
    ctx->pc = 0x2d5f90u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
label_2d5f94:
    // 0x2d5f94: 0x96030044  lhu         $v1, 0x44($s0)
    ctx->pc = 0x2d5f94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2d5f98: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d5f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d5f9c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2d5f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2d5fa0: 0x2c4200b4  sltiu       $v0, $v0, 0xB4
    ctx->pc = 0x2d5fa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)180) ? 1 : 0);
    // 0x2d5fa4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5FA4u;
    {
        const bool branch_taken_0x2d5fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5FA4u;
        // 0x2d5fa8: 0xa6040046  sh          $a0, 0x46($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5fa4) {
            ctx->pc = 0x2D5FB4u;
            goto label_2d5fb4;
        }
    }
    ctx->pc = 0x2D5FACu;
    // 0x2d5fac: 0x2482ff4c  addiu       $v0, $a0, -0xB4
    ctx->pc = 0x2d5facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967116));
    // 0x2d5fb0: 0xa6020046  sh          $v0, 0x46($s0)
    ctx->pc = 0x2d5fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 2));
label_2d5fb4:
    // 0x2d5fb4: 0x9e020028  lwu         $v0, 0x28($s0)
    ctx->pc = 0x2d5fb4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2d5fb8: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x2d5fb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x2d5fbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d5fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d5fc0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2D5FC0u;
    {
        const bool branch_taken_0x2d5fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5fc0) {
            ctx->pc = 0x2D5FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5FC0u;
            // 0x2d5fc4: 0x9e020028  lwu         $v0, 0x28($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6000u;
            goto label_2d6000;
        }
    }
    ctx->pc = 0x2D5FC8u;
    // 0x2d5fc8: 0x96020046  lhu         $v0, 0x46($s0)
    ctx->pc = 0x2d5fc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2d5fcc: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2d5fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2d5fd0: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x2d5fd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x2d5fd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d5fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5fd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d5fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d5fdc: 0x0  nop
    ctx->pc = 0x2d5fdcu;
    // NOP
    // 0x2d5fe0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2d5fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2d5fe4: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2D5FE4u;
    SET_GPR_U32(ctx, 31, 0x2D5FECu);
    ctx->pc = 0x2D5FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5FE4u;
    // 0x2d5fe8: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2D5FE4u, 0x2D5FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5FECu;
label_2d5fec:
    // 0x2d5fec: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x2d5fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5ff0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d5ff4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d5ff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d5ff8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2d5ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2d5ffc: 0x9e020028  lwu         $v0, 0x28($s0)
    ctx->pc = 0x2d5ffcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2d6000:
    // 0x2d6000: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2d6000u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2d6004: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d6004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d6008: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2D6008u;
    {
        const bool branch_taken_0x2d6008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6008) {
            ctx->pc = 0x2D600Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6008u;
            // 0x2d600c: 0x9e030048  lwu         $v1, 0x48($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6048u;
            goto label_2d6048;
        }
    }
    ctx->pc = 0x2D6010u;
    // 0x2d6010: 0x96020046  lhu         $v0, 0x46($s0)
    ctx->pc = 0x2d6010u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x2d6014: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2d6014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2d6018: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x2d6018u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x2d601c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d601cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6020: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d6020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d6024: 0x0  nop
    ctx->pc = 0x2d6024u;
    // NOP
    // 0x2d6028: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2d6028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2d602c: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2D602Cu;
    SET_GPR_U32(ctx, 31, 0x2D6034u);
    ctx->pc = 0x2D6030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D602Cu;
    // 0x2d6030: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2D602Cu, 0x2D6034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6034u;
label_2d6034:
    // 0x2d6034: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x2d6034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6038: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d6038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d603c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d603cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d6040: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x2d6040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_2d6044:
    // 0x2d6044: 0x9e030048  lwu         $v1, 0x48($s0)
    ctx->pc = 0x2d6044u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2d6048:
    // 0x2d6048: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2d6048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d604c: 0x104000b8  beqz        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x2D604Cu;
    {
        const bool branch_taken_0x2d604c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D604Cu;
        // 0x2d6050: 0x3107b  dsra        $v0, $v1, 1 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d604c) {
            ctx->pc = 0x2D6330u;
            goto label_2d6330;
        }
    }
    ctx->pc = 0x2D6054u;
    // 0x2d6054: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d6054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d6058: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2D6058u;
    {
        const bool branch_taken_0x2d6058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6058u;
        // 0x2d605c: 0x310bb  dsra        $v0, $v1, 2 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6058) {
            ctx->pc = 0x2D61A4u;
            goto label_2d61a4;
        }
    }
    ctx->pc = 0x2D6060u;
    // 0x2d6060: 0x9602005a  lhu         $v0, 0x5A($s0)
    ctx->pc = 0x2d6060u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x2d6064: 0x96030058  lhu         $v1, 0x58($s0)
    ctx->pc = 0x2d6064u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2d6068: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d6068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d606c: 0x92040050  lbu         $a0, 0x50($s0)
    ctx->pc = 0x2d606cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2d6070: 0xa602005a  sh          $v0, 0x5A($s0)
    ctx->pc = 0x2d6070u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d6074: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2d6074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d6078: 0x0  nop
    ctx->pc = 0x2d6078u;
    // NOP
    // 0x2d607c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2d607cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2d6080: 0x92020054  lbu         $v0, 0x54($s0)
    ctx->pc = 0x2d6080u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2d6084: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2d6084u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6088: 0x0  nop
    ctx->pc = 0x2d6088u;
    // NOP
    // 0x2d608c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d608cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d6090: 0x9603005a  lhu         $v1, 0x5A($s0)
    ctx->pc = 0x2d6090u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x2d6094: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2d6094u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d6098: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2d6098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d609c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2d609cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d60a0: 0x0  nop
    ctx->pc = 0x2d60a0u;
    // NOP
    // 0x2d60a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2d60a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2d60a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d60a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d60ac: 0x0  nop
    ctx->pc = 0x2d60acu;
    // NOP
    // 0x2d60b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d60b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d60b4: 0x0  nop
    ctx->pc = 0x2d60b4u;
    // NOP
    // 0x2d60b8: 0x0  nop
    ctx->pc = 0x2d60b8u;
    // NOP
    // 0x2d60bc: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x2d60bcu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[3]);
    // 0x2d60c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d60c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d60c4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d60c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d60c8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d60c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d60cc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2d60ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d60d0: 0xa0a2004c  sb          $v0, 0x4C($a1)
    ctx->pc = 0x2d60d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 76), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d60d4: 0x92030051  lbu         $v1, 0x51($s0)
    ctx->pc = 0x2d60d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 81)));
    // 0x2d60d8: 0x92020055  lbu         $v0, 0x55($s0)
    ctx->pc = 0x2d60d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 85)));
    // 0x2d60dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d60dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d60e0: 0x0  nop
    ctx->pc = 0x2d60e0u;
    // NOP
    // 0x2d60e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d60e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d60e8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d60e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d60ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d60ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d60f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d60f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d60f4: 0x0  nop
    ctx->pc = 0x2d60f4u;
    // NOP
    // 0x2d60f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d60f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d60fc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d60fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d6100: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d6100u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d6104: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d6104u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d6108: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2d6108u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d610c: 0xa082004d  sb          $v0, 0x4D($a0)
    ctx->pc = 0x2d610cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d6110: 0x92030052  lbu         $v1, 0x52($s0)
    ctx->pc = 0x2d6110u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x2d6114: 0x92020056  lbu         $v0, 0x56($s0)
    ctx->pc = 0x2d6114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 86)));
    // 0x2d6118: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d6118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d611c: 0x0  nop
    ctx->pc = 0x2d611cu;
    // NOP
    // 0x2d6120: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d6120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d6124: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d6124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d6128: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d6128u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d612c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d612cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6130: 0x0  nop
    ctx->pc = 0x2d6130u;
    // NOP
    // 0x2d6134: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d6134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d6138: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d6138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d613c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d613cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d6140: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d6140u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d6144: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2d6144u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d6148: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2d6148u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d614c: 0x92030053  lbu         $v1, 0x53($s0)
    ctx->pc = 0x2d614cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 83)));
    // 0x2d6150: 0x92020057  lbu         $v0, 0x57($s0)
    ctx->pc = 0x2d6150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 87)));
    // 0x2d6154: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d6154u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6158: 0x0  nop
    ctx->pc = 0x2d6158u;
    // NOP
    // 0x2d615c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d615cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d6160: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d6160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d6164: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d6164u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d6168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d6168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d616c: 0x0  nop
    ctx->pc = 0x2d616cu;
    // NOP
    // 0x2d6170: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d6170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d6174: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d6174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d6178: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d6178u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d617c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d617cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d6180: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2d6180u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d6184: 0xa082004f  sb          $v0, 0x4F($a0)
    ctx->pc = 0x2d6184u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d6188: 0x96030058  lhu         $v1, 0x58($s0)
    ctx->pc = 0x2d6188u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2d618c: 0x9602005a  lhu         $v0, 0x5A($s0)
    ctx->pc = 0x2d618cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x2d6190: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2d6190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d6194: 0x50400066  beql        $v0, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x2D6194u;
    {
        const bool branch_taken_0x2d6194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6194) {
            ctx->pc = 0x2D6198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6194u;
            // 0x2d6198: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6330u;
            goto label_2d6330;
        }
    }
    ctx->pc = 0x2D619Cu;
    // 0x2d619c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2D619Cu;
    {
        const bool branch_taken_0x2d619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D61A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D619Cu;
        // 0x2d61a0: 0x9e03005c  lwu         $v1, 0x5C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d619c) {
            ctx->pc = 0x2D6334u;
            goto label_2d6334;
        }
    }
    ctx->pc = 0x2D61A4u;
label_2d61a4:
    // 0x2d61a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d61a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d61a8: 0x50400062  beql        $v0, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x2D61A8u;
    {
        const bool branch_taken_0x2d61a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d61a8) {
            ctx->pc = 0x2D61ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D61A8u;
            // 0x2d61ac: 0x9e03005c  lwu         $v1, 0x5C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6334u;
            goto label_2d6334;
        }
    }
    ctx->pc = 0x2D61B0u;
    // 0x2d61b0: 0x9604005a  lhu         $a0, 0x5A($s0)
    ctx->pc = 0x2d61b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x2d61b4: 0x96030058  lhu         $v1, 0x58($s0)
    ctx->pc = 0x2d61b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2d61b8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d61b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d61bc: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2d61bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2d61c0: 0x2c4200b4  sltiu       $v0, $v0, 0xB4
    ctx->pc = 0x2d61c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)180) ? 1 : 0);
    // 0x2d61c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D61C4u;
    {
        const bool branch_taken_0x2d61c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D61C4u;
        // 0x2d61c8: 0xa604005a  sh          $a0, 0x5A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d61c4) {
            ctx->pc = 0x2D61D4u;
            goto label_2d61d4;
        }
    }
    ctx->pc = 0x2D61CCu;
    // 0x2d61cc: 0x2482ff4c  addiu       $v0, $a0, -0xB4
    ctx->pc = 0x2d61ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967116));
    // 0x2d61d0: 0xa602005a  sh          $v0, 0x5A($s0)
    ctx->pc = 0x2d61d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 2));
label_2d61d4:
    // 0x2d61d4: 0x9602005a  lhu         $v0, 0x5A($s0)
    ctx->pc = 0x2d61d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x2d61d8: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2d61d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2d61dc: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x2d61dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x2d61e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d61e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d61e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d61e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d61e8: 0x0  nop
    ctx->pc = 0x2d61e8u;
    // NOP
    // 0x2d61ec: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2d61ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2d61f0: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2D61F0u;
    SET_GPR_U32(ctx, 31, 0x2D61F8u);
    ctx->pc = 0x2D61F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D61F0u;
    // 0x2d61f4: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2D61F0u, 0x2D61F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D61F8u;
label_2d61f8:
    // 0x2d61f8: 0x92030050  lbu         $v1, 0x50($s0)
    ctx->pc = 0x2d61f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2d61fc: 0x92020054  lbu         $v0, 0x54($s0)
    ctx->pc = 0x2d61fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2d6200: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2d6200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d6204: 0x0  nop
    ctx->pc = 0x2d6204u;
    // NOP
    // 0x2d6208: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2d6208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2d620c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d620cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d6210: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d6210u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d6214: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d6214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6218: 0x0  nop
    ctx->pc = 0x2d6218u;
    // NOP
    // 0x2d621c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d621cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d6220: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d6220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d6224: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d6224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d6228: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d6228u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d622c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2d622cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d6230: 0xa082004c  sb          $v0, 0x4C($a0)
    ctx->pc = 0x2d6230u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 76), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d6234: 0x9603005a  lhu         $v1, 0x5A($s0)
    ctx->pc = 0x2d6234u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x2d6238: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2d6238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d623c: 0x0  nop
    ctx->pc = 0x2d623cu;
    // NOP
    // 0x2d6240: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2d6240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2d6244: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2D6244u;
    SET_GPR_U32(ctx, 31, 0x2D624Cu);
    ctx->pc = 0x2D6248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6244u;
    // 0x2d6248: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2D6244u, 0x2D624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D624Cu;
label_2d624c:
    // 0x2d624c: 0x92030051  lbu         $v1, 0x51($s0)
    ctx->pc = 0x2d624cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 81)));
    // 0x2d6250: 0x92020055  lbu         $v0, 0x55($s0)
    ctx->pc = 0x2d6250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 85)));
    // 0x2d6254: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2d6254u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d6258: 0x0  nop
    ctx->pc = 0x2d6258u;
    // NOP
    // 0x2d625c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2d625cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2d6260: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d6260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d6264: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d6264u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d6268: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d6268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d626c: 0x0  nop
    ctx->pc = 0x2d626cu;
    // NOP
    // 0x2d6270: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d6270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d6274: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d6274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d6278: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d6278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d627c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d627cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d6280: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2d6280u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d6284: 0xa082004d  sb          $v0, 0x4D($a0)
    ctx->pc = 0x2d6284u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d6288: 0x9603005a  lhu         $v1, 0x5A($s0)
    ctx->pc = 0x2d6288u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x2d628c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2d628cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d6290: 0x0  nop
    ctx->pc = 0x2d6290u;
    // NOP
    // 0x2d6294: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2d6294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2d6298: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2D6298u;
    SET_GPR_U32(ctx, 31, 0x2D62A0u);
    ctx->pc = 0x2D629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6298u;
    // 0x2d629c: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2D6298u, 0x2D62A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D62A0u;
label_2d62a0:
    // 0x2d62a0: 0x92030052  lbu         $v1, 0x52($s0)
    ctx->pc = 0x2d62a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x2d62a4: 0x92020056  lbu         $v0, 0x56($s0)
    ctx->pc = 0x2d62a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 86)));
    // 0x2d62a8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2d62a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d62ac: 0x0  nop
    ctx->pc = 0x2d62acu;
    // NOP
    // 0x2d62b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2d62b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2d62b4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d62b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d62b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d62b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d62bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d62bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d62c0: 0x0  nop
    ctx->pc = 0x2d62c0u;
    // NOP
    // 0x2d62c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d62c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d62c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d62c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d62cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d62ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d62d0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d62d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d62d4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2d62d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d62d8: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2d62d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d62dc: 0x9603005a  lhu         $v1, 0x5A($s0)
    ctx->pc = 0x2d62dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x2d62e0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2d62e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d62e4: 0x0  nop
    ctx->pc = 0x2d62e4u;
    // NOP
    // 0x2d62e8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2d62e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2d62ec: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2D62ECu;
    SET_GPR_U32(ctx, 31, 0x2D62F4u);
    ctx->pc = 0x2D62F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D62ECu;
    // 0x2d62f0: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2D62ECu, 0x2D62F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D62F4u;
label_2d62f4:
    // 0x2d62f4: 0x92030053  lbu         $v1, 0x53($s0)
    ctx->pc = 0x2d62f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 83)));
    // 0x2d62f8: 0x92020057  lbu         $v0, 0x57($s0)
    ctx->pc = 0x2d62f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 87)));
    // 0x2d62fc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2d62fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d6300: 0x0  nop
    ctx->pc = 0x2d6300u;
    // NOP
    // 0x2d6304: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2d6304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2d6308: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d6308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d630c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d630cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d6310: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d6310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6314: 0x0  nop
    ctx->pc = 0x2d6314u;
    // NOP
    // 0x2d6318: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d6318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d631c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d631cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d6320: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d6320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d6324: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d6324u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d6328: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2d6328u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d632c: 0xa082004f  sb          $v0, 0x4F($a0)
    ctx->pc = 0x2d632cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 2));
label_2d6330:
    // 0x2d6330: 0x9e03005c  lwu         $v1, 0x5C($s0)
    ctx->pc = 0x2d6330u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2d6334:
    // 0x2d6334: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2d6334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d6338: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2D6338u;
    {
        const bool branch_taken_0x2d6338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6338u;
        // 0x2d633c: 0x3107b  dsra        $v0, $v1, 1 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6338) {
            ctx->pc = 0x2D647Cu;
            goto label_2d647c;
        }
    }
    ctx->pc = 0x2D6340u;
    // 0x2d6340: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d6340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d6344: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D6344u;
    {
        const bool branch_taken_0x2d6344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6344u;
        // 0x2d6348: 0x310bb  dsra        $v0, $v1, 2 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6344) {
            ctx->pc = 0x2D63D8u;
            goto label_2d63d8;
        }
    }
    ctx->pc = 0x2D634Cu;
    // 0x2d634c: 0x96020076  lhu         $v0, 0x76($s0)
    ctx->pc = 0x2d634cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 118)));
    // 0x2d6350: 0x96030074  lhu         $v1, 0x74($s0)
    ctx->pc = 0x2d6350u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2d6354: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d6354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d6358: 0xc6030064  lwc1        $f3, 0x64($s0)
    ctx->pc = 0x2d6358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d635c: 0xa6020076  sh          $v0, 0x76($s0)
    ctx->pc = 0x2d635cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 118), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d6360: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d6360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6364: 0x0  nop
    ctx->pc = 0x2d6364u;
    // NOP
    // 0x2d6368: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d6368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d636c: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x2d636cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6370: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d6370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d6374: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d6374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d6378: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2d6378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d637c: 0x0  nop
    ctx->pc = 0x2d637cu;
    // NOP
    // 0x2d6380: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2d6380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2d6384: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2d6384u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2d6388: 0x0  nop
    ctx->pc = 0x2d6388u;
    // NOP
    // 0x2d638c: 0x0  nop
    ctx->pc = 0x2d638cu;
    // NOP
    // 0x2d6390: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x2d6390u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[1]);
    // 0x2d6394: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d6394u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d6398: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d6398u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d639c: 0xe4630040  swc1        $f3, 0x40($v1)
    ctx->pc = 0x2d639cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x2d63a0: 0xc601006c  lwc1        $f1, 0x6C($s0)
    ctx->pc = 0x2d63a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d63a4: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x2d63a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d63a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d63a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d63ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d63acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d63b0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d63b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d63b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d63b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d63b8: 0xe4410044  swc1        $f1, 0x44($v0)
    ctx->pc = 0x2d63b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2d63bc: 0x96030074  lhu         $v1, 0x74($s0)
    ctx->pc = 0x2d63bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2d63c0: 0x96020076  lhu         $v0, 0x76($s0)
    ctx->pc = 0x2d63c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 118)));
    // 0x2d63c4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2d63c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d63c8: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D63C8u;
    {
        const bool branch_taken_0x2d63c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d63c8) {
            ctx->pc = 0x2D63CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D63C8u;
            // 0x2d63cc: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D647Cu;
            goto label_2d647c;
        }
    }
    ctx->pc = 0x2D63D0u;
    // 0x2d63d0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2D63D0u;
    {
        const bool branch_taken_0x2d63d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D63D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D63D0u;
        // 0x2d63d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d63d0) {
            ctx->pc = 0x2D6480u;
            goto label_2d6480;
        }
    }
    ctx->pc = 0x2D63D8u;
label_2d63d8:
    // 0x2d63d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d63d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d63dc: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D63DCu;
    {
        const bool branch_taken_0x2d63dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d63dc) {
            ctx->pc = 0x2D63E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D63DCu;
            // 0x2d63e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6480u;
            goto label_2d6480;
        }
    }
    ctx->pc = 0x2D63E4u;
    // 0x2d63e4: 0x96040076  lhu         $a0, 0x76($s0)
    ctx->pc = 0x2d63e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 118)));
    // 0x2d63e8: 0x96030074  lhu         $v1, 0x74($s0)
    ctx->pc = 0x2d63e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2d63ec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d63ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d63f0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2d63f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2d63f4: 0x2c4200b4  sltiu       $v0, $v0, 0xB4
    ctx->pc = 0x2d63f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)180) ? 1 : 0);
    // 0x2d63f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D63F8u;
    {
        const bool branch_taken_0x2d63f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D63F8u;
        // 0x2d63fc: 0xa6040076  sh          $a0, 0x76($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 118), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d63f8) {
            ctx->pc = 0x2D6408u;
            goto label_2d6408;
        }
    }
    ctx->pc = 0x2D6400u;
    // 0x2d6400: 0x2482ff4c  addiu       $v0, $a0, -0xB4
    ctx->pc = 0x2d6400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967116));
    // 0x2d6404: 0xa6020076  sh          $v0, 0x76($s0)
    ctx->pc = 0x2d6404u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 118), (uint16_t)GPR_U32(ctx, 2));
label_2d6408:
    // 0x2d6408: 0x96020076  lhu         $v0, 0x76($s0)
    ctx->pc = 0x2d6408u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 118)));
    // 0x2d640c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2d640cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2d6410: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x2d6410u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x2d6414: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d6414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d6418: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d6418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d641c: 0x0  nop
    ctx->pc = 0x2d641cu;
    // NOP
    // 0x2d6420: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2d6420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2d6424: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2D6424u;
    SET_GPR_U32(ctx, 31, 0x2D642Cu);
    ctx->pc = 0x2D6428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6424u;
    // 0x2d6428: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2D6424u, 0x2D642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D642Cu;
label_2d642c:
    // 0x2d642c: 0xc6020064  lwc1        $f2, 0x64($s0)
    ctx->pc = 0x2d642cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d6430: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2d6430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6434: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d6434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d6438: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2d6438u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2d643c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d643cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d6440: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d6440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d6444: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x2d6444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x2d6448: 0x96020076  lhu         $v0, 0x76($s0)
    ctx->pc = 0x2d6448u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 118)));
    // 0x2d644c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d644cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d6450: 0x0  nop
    ctx->pc = 0x2d6450u;
    // NOP
    // 0x2d6454: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2d6454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2d6458: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2D6458u;
    SET_GPR_U32(ctx, 31, 0x2D6460u);
    ctx->pc = 0x2D645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6458u;
    // 0x2d645c: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2D6458u, 0x2D6460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6460u;
label_2d6460:
    // 0x2d6460: 0xc602006c  lwc1        $f2, 0x6C($s0)
    ctx->pc = 0x2d6460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d6464: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x2d6464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6468: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d6468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d646c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2d646cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2d6470: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d6470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d6474: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d6474u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d6478: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2d6478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_2d647c:
    // 0x2d647c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d647cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d6480:
    // 0x2d6480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6484: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2d6484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d6488: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6488u;
        // 0x2d648c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6490u;
}
