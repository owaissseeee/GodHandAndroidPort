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

// Function: func_00372CB0
// Address: 0x372cb0 - 0x373118
void func_00372CB0_0x372cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00372CB0_0x372cb0");
#endif

    switch (ctx->pc) {
        case 0x372cd8u: goto label_372cd8;
        case 0x372ce8u: goto label_372ce8;
        case 0x372d18u: goto label_372d18;
        case 0x372da8u: goto label_372da8;
        case 0x372e10u: goto label_372e10;
        case 0x372e50u: goto label_372e50;
        case 0x372ea0u: goto label_372ea0;
        case 0x372eb8u: goto label_372eb8;
        case 0x372ed0u: goto label_372ed0;
        case 0x372ee4u: goto label_372ee4;
        case 0x372f00u: goto label_372f00;
        case 0x372f34u: goto label_372f34;
        case 0x372f50u: goto label_372f50;
        case 0x373028u: goto label_373028;
        case 0x373060u: goto label_373060;
        case 0x373078u: goto label_373078;
        case 0x3730a0u: goto label_3730a0;
        case 0x3730c8u: goto label_3730c8;
        case 0x3730d8u: goto label_3730d8;
        case 0x3730f4u: goto label_3730f4;
        default: break;
    }

    ctx->pc = 0x372cb0u;

    // 0x372cb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x372cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x372cb4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x372cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x372cb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x372cb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372cbc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x372cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x372cc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x372cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x372cc4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x372cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x372cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x372cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x372ccc: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x372cccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x372cd0: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x372CD0u;
    SET_GPR_U32(ctx, 31, 0x372CD8u);
    ctx->pc = 0x372CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372CD0u;
    // 0x372cd4: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x372CD0u, 0x372CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372CD8u;
label_372cd8:
    // 0x372cd8: 0x10400107  beqz        $v0, . + 4 + (0x107 << 2)
    ctx->pc = 0x372CD8u;
    {
        const bool branch_taken_0x372cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372CD8u;
        // 0x372cdc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372cd8) {
            ctx->pc = 0x3730F8u;
            goto label_3730f8;
        }
    }
    ctx->pc = 0x372CE0u;
    // 0x372ce0: 0xc0dcec8  jal         func_373B20
    ctx->pc = 0x372CE0u;
    SET_GPR_U32(ctx, 31, 0x372CE8u);
    ctx->pc = 0x372CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372CE0u;
    // 0x372ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B20u, 0x372CE0u, 0x372CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372CE8u;
label_372ce8:
    // 0x372ce8: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x372CE8u;
    {
        const bool branch_taken_0x372ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372CE8u;
        // 0x372cec: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372ce8) {
            ctx->pc = 0x372F08u;
            goto label_372f08;
        }
    }
    ctx->pc = 0x372CF0u;
    // 0x372cf0: 0x10400101  beqz        $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x372CF0u;
    {
        const bool branch_taken_0x372cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372CF0u;
        // 0x372cf4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372cf0) {
            ctx->pc = 0x3730F8u;
            goto label_3730f8;
        }
    }
    ctx->pc = 0x372CF8u;
    // 0x372cf8: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x372cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x372cfc: 0x14600087  bnez        $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x372CFCu;
    {
        const bool branch_taken_0x372cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x372D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372CFCu;
        // 0x372d00: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372cfc) {
            ctx->pc = 0x372F1Cu;
            goto label_372f1c;
        }
    }
    ctx->pc = 0x372D04u;
    // 0x372d04: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x372d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x372d08: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x372D08u;
    {
        const bool branch_taken_0x372d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372d08) {
            ctx->pc = 0x372D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372D08u;
            // 0x372d0c: 0xc621003c  lwc1        $f1, 0x3C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x372D1Cu;
            goto label_372d1c;
        }
    }
    ctx->pc = 0x372D10u;
    // 0x372d10: 0xc0dcd3c  jal         func_3734F0
    ctx->pc = 0x372D10u;
    SET_GPR_U32(ctx, 31, 0x372D18u);
    ctx->pc = 0x372D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372D10u;
    // 0x372d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3734F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3734F0u, 0x372D10u, 0x372D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372D18u;
label_372d18:
    // 0x372d18: 0xc621003c  lwc1        $f1, 0x3C($s1)
    ctx->pc = 0x372d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_372d1c:
    // 0x372d1c: 0xc6230040  lwc1        $f3, 0x40($s1)
    ctx->pc = 0x372d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x372d20: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x372d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x372d24: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x372d24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x372d28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x372d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372d2c: 0x46030881  sub.s       $f2, $f1, $f3
    ctx->pc = 0x372d2cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x372d30: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x372d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372d34: 0x0  nop
    ctx->pc = 0x372d34u;
    // NOP
    // 0x372d38: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x372D38u;
    {
        const bool branch_taken_0x372d38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x372d38) {
            ctx->pc = 0x372D5Cu;
            goto label_372d5c;
        }
    }
    ctx->pc = 0x372D40u;
    // 0x372d40: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x372d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x372d44: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x372d44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x372d48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x372d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372d4c: 0x0  nop
    ctx->pc = 0x372d4cu;
    // NOP
    // 0x372d50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x372d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x372d54: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x372D54u;
    {
        const bool branch_taken_0x372d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372D54u;
        // 0x372d58: 0xe620003c  swc1        $f0, 0x3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x372d54) {
            ctx->pc = 0x372D84u;
            goto label_372d84;
        }
    }
    ctx->pc = 0x372D5Cu;
label_372d5c:
    // 0x372d5c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x372d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x372d60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x372d60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x372d64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x372d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372d68: 0x0  nop
    ctx->pc = 0x372d68u;
    // NOP
    // 0x372d6c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x372d6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372d70: 0x0  nop
    ctx->pc = 0x372d70u;
    // NOP
    // 0x372d74: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x372D74u;
    {
        const bool branch_taken_0x372d74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x372d74) {
            ctx->pc = 0x372D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372D74u;
            // 0x372d78: 0xe623003c  swc1        $f3, 0x3C($s1) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x372D84u;
            goto label_372d84;
        }
    }
    ctx->pc = 0x372D7Cu;
    // 0x372d7c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x372d7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x372d80: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x372d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_372d84:
    // 0x372d84: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x372d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x372d88: 0x18400026  blez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x372D88u;
    {
        const bool branch_taken_0x372d88 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x372D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372D88u;
        // 0x372d8c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372d88) {
            ctx->pc = 0x372E24u;
            goto label_372e24;
        }
    }
    ctx->pc = 0x372D90u;
    // 0x372d90: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x372d90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x372d94: 0x26300014  addiu       $s0, $s1, 0x14
    ctx->pc = 0x372d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x372d98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x372d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x372d9c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x372d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x372da0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x372da0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372da4: 0x0  nop
    ctx->pc = 0x372da4u;
    // NOP
label_372da8:
    // 0x372da8: 0xc6040010  lwc1        $f4, 0x10($s0)
    ctx->pc = 0x372da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x372dac: 0x4604a834  c.lt.s      $f21, $f4
    ctx->pc = 0x372dacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372db0: 0x0  nop
    ctx->pc = 0x372db0u;
    // NOP
    // 0x372db4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x372DB4u;
    {
        const bool branch_taken_0x372db4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x372DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372DB4u;
        // 0x372db8: 0x26220014  addiu       $v0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372db4) {
            ctx->pc = 0x372DE4u;
            goto label_372de4;
        }
    }
    ctx->pc = 0x372DBCu;
    // 0x372dbc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x372dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372dc0: 0x461420c1  sub.s       $f3, $f4, $f20
    ctx->pc = 0x372dc0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[20]);
    // 0x372dc4: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x372dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372dc8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x372dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372dcc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x372dccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x372dd0: 0xe6030010  swc1        $f3, 0x10($s0)
    ctx->pc = 0x372dd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x372dd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x372dd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x372dd8: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x372dd8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
    // 0x372ddc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x372DDCu;
    {
        const bool branch_taken_0x372ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372DDCu;
        // 0x372de0: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x372ddc) {
            ctx->pc = 0x372DF0u;
            goto label_372df0;
        }
    }
    ctx->pc = 0x372DE4u;
label_372de4:
    // 0x372de4: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x372de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372de8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x372de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372dec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x372decu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_372df0:
    // 0x372df0: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x372df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x372df4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x372df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x372df8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x372df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372dfc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x372dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x372e00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x372e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372e04: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x372e04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x372e08: 0xc0dcd58  jal         func_373560
    ctx->pc = 0x372E08u;
    SET_GPR_U32(ctx, 31, 0x372E10u);
    ctx->pc = 0x372E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372E08u;
    // 0x372e0c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373560u, 0x372E08u, 0x372E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372E10u;
label_372e10:
    // 0x372e10: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x372e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x372e14: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x372e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x372e18: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x372E18u;
    {
        const bool branch_taken_0x372e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372E18u;
        // 0x372e1c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372e18) {
            ctx->pc = 0x372DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372da8;
        }
    }
    ctx->pc = 0x372E20u;
    // 0x372e20: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x372e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_372e24:
    // 0x372e24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x372e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372e28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x372e28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372e2c: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x372e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x372e30: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x372E30u;
    {
        const bool branch_taken_0x372e30 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x372E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372E30u;
        // 0x372e34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372e30) {
            ctx->pc = 0x372E7Cu;
            goto label_372e7c;
        }
    }
    ctx->pc = 0x372E38u;
    // 0x372e38: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x372e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372e3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x372e3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372e40: 0x0  nop
    ctx->pc = 0x372e40u;
    // NOP
    // 0x372e44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x372e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372e48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x372E48u;
    {
        const bool branch_taken_0x372e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372e48) {
            ctx->pc = 0x372E6Cu;
            goto label_372e6c;
        }
    }
    ctx->pc = 0x372E50u;
label_372e50:
    // 0x372e50: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x372e50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x372e54: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x372E54u;
    {
        const bool branch_taken_0x372e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372E54u;
        // 0x372e58: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372e54) {
            ctx->pc = 0x372E7Cu;
            goto label_372e7c;
        }
    }
    ctx->pc = 0x372E5Cu;
    // 0x372e5c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x372e5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x372e60: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x372e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x372e64: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x372e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372e68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x372e68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_372e6c:
    // 0x372e6c: 0x0  nop
    ctx->pc = 0x372e6cu;
    // NOP
    // 0x372e70: 0x4502fff7  bc1fl       . + 4 + (-0x9 << 2)
    ctx->pc = 0x372E70u;
    {
        const bool branch_taken_0x372e70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x372e70) {
            ctx->pc = 0x372E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372E70u;
            // 0x372e74: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372e50;
        }
    }
    ctx->pc = 0x372E78u;
    // 0x372e78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x372e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_372e7c:
    // 0x372e7c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x372e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x372e80: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x372E80u;
    {
        const bool branch_taken_0x372e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372E80u;
        // 0x372e84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372e80) {
            ctx->pc = 0x372EC0u;
            goto label_372ec0;
        }
    }
    ctx->pc = 0x372E88u;
    // 0x372e88: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x372E88u;
    {
        const bool branch_taken_0x372e88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x372E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372E88u;
        // 0x372e8c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x372e88) {
            ctx->pc = 0x372EA8u;
            goto label_372ea8;
        }
    }
    ctx->pc = 0x372E90u;
    // 0x372e90: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x372E90u;
    {
        const bool branch_taken_0x372e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x372e90) {
            ctx->pc = 0x372E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372E90u;
            // 0x372e94: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372ED4u;
            goto label_372ed4;
        }
    }
    ctx->pc = 0x372E98u;
    // 0x372e98: 0xc0dcd22  jal         func_373488
    ctx->pc = 0x372E98u;
    SET_GPR_U32(ctx, 31, 0x372EA0u);
    ctx->pc = 0x372E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372E98u;
    // 0x372e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373488u, 0x372E98u, 0x372EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372EA0u;
label_372ea0:
    // 0x372ea0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x372EA0u;
    {
        const bool branch_taken_0x372ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372EA0u;
        // 0x372ea4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372ea0) {
            ctx->pc = 0x372ED4u;
            goto label_372ed4;
        }
    }
    ctx->pc = 0x372EA8u;
label_372ea8:
    // 0x372ea8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x372EA8u;
    {
        const bool branch_taken_0x372ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372ea8) {
            ctx->pc = 0x372EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372EA8u;
            // 0x372eac: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372ED4u;
            goto label_372ed4;
        }
    }
    ctx->pc = 0x372EB0u;
    // 0x372eb0: 0xc0dcd3c  jal         func_3734F0
    ctx->pc = 0x372EB0u;
    SET_GPR_U32(ctx, 31, 0x372EB8u);
    ctx->pc = 0x372EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372EB0u;
    // 0x372eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3734F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3734F0u, 0x372EB0u, 0x372EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372EB8u;
label_372eb8:
    // 0x372eb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x372EB8u;
    {
        const bool branch_taken_0x372eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372EB8u;
        // 0x372ebc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372eb8) {
            ctx->pc = 0x372ED4u;
            goto label_372ed4;
        }
    }
    ctx->pc = 0x372EC0u;
label_372ec0:
    // 0x372ec0: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x372EC0u;
    {
        const bool branch_taken_0x372ec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x372ec0) {
            ctx->pc = 0x372EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372EC0u;
            // 0x372ec4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372ED4u;
            goto label_372ed4;
        }
    }
    ctx->pc = 0x372EC8u;
    // 0x372ec8: 0xc0dcd0c  jal         func_373430
    ctx->pc = 0x372EC8u;
    SET_GPR_U32(ctx, 31, 0x372ED0u);
    ctx->pc = 0x372ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372EC8u;
    // 0x372ecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373430u, 0x372EC8u, 0x372ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372ED0u;
label_372ed0:
    // 0x372ed0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x372ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_372ed4:
    // 0x372ed4: 0x50400076  beql        $v0, $zero, . + 4 + (0x76 << 2)
    ctx->pc = 0x372ED4u;
    {
        const bool branch_taken_0x372ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372ed4) {
            ctx->pc = 0x372ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372ED4u;
            // 0x372ed8: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3730B0u;
            goto label_3730b0;
        }
    }
    ctx->pc = 0x372EDCu;
    // 0x372edc: 0xc0dd22a  jal         func_3748A8
    ctx->pc = 0x372EDCu;
    SET_GPR_U32(ctx, 31, 0x372EE4u);
    ctx->pc = 0x372EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372EDCu;
    // 0x372ee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3748A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748A8u, 0x372EDCu, 0x372EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372EE4u;
label_372ee4:
    // 0x372ee4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x372ee4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372ee8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x372EE8u;
    {
        const bool branch_taken_0x372ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x372EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372EE8u;
        // 0x372eec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372ee8) {
            ctx->pc = 0x372EF8u;
            goto label_372ef8;
        }
    }
    ctx->pc = 0x372EF0u;
    // 0x372ef0: 0x14620081  bne         $v1, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x372EF0u;
    {
        const bool branch_taken_0x372ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x372EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372EF0u;
        // 0x372ef4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372ef0) {
            ctx->pc = 0x3730F8u;
            goto label_3730f8;
        }
    }
    ctx->pc = 0x372EF8u;
label_372ef8:
    // 0x372ef8: 0xc0dccf2  jal         func_3733C8
    ctx->pc = 0x372EF8u;
    SET_GPR_U32(ctx, 31, 0x372F00u);
    ctx->pc = 0x372EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372EF8u;
    // 0x372efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3733C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3733C8u, 0x372EF8u, 0x372F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372F00u;
label_372f00:
    // 0x372f00: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x372F00u;
    {
        const bool branch_taken_0x372f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F00u;
        // 0x372f04: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372f00) {
            ctx->pc = 0x3730F8u;
            goto label_3730f8;
        }
    }
    ctx->pc = 0x372F08u;
label_372f08:
    // 0x372f08: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x372F08u;
    {
        const bool branch_taken_0x372f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F08u;
        // 0x372f0c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372f08) {
            ctx->pc = 0x3730F8u;
            goto label_3730f8;
        }
    }
    ctx->pc = 0x372F10u;
    // 0x372f10: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x372f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x372f14: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x372F14u;
    {
        const bool branch_taken_0x372f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x372F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F14u;
        // 0x372f18: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372f14) {
            ctx->pc = 0x372F3Cu;
            goto label_372f3c;
        }
    }
    ctx->pc = 0x372F1Cu;
label_372f1c:
    // 0x372f1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x372f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x372f20: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x372f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x372f24: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x372F24u;
    {
        const bool branch_taken_0x372f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F24u;
        // 0x372f28: 0xae230050  sw          $v1, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372f24) {
            ctx->pc = 0x3730F4u;
            goto label_3730f4;
        }
    }
    ctx->pc = 0x372F2Cu;
    // 0x372f2c: 0xc0dcd22  jal         func_373488
    ctx->pc = 0x372F2Cu;
    SET_GPR_U32(ctx, 31, 0x372F34u);
    ctx->pc = 0x372F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372F2Cu;
    // 0x372f30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373488u, 0x372F2Cu, 0x372F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372F34u;
label_372f34:
    // 0x372f34: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x372F34u;
    {
        const bool branch_taken_0x372f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F34u;
        // 0x372f38: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372f34) {
            ctx->pc = 0x3730F8u;
            goto label_3730f8;
        }
    }
    ctx->pc = 0x372F3Cu;
label_372f3c:
    // 0x372f3c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x372f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x372f40: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x372F40u;
    {
        const bool branch_taken_0x372f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372f40) {
            ctx->pc = 0x372F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372F40u;
            // 0x372f44: 0xc621002c  lwc1        $f1, 0x2C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x372F54u;
            goto label_372f54;
        }
    }
    ctx->pc = 0x372F48u;
    // 0x372f48: 0xc0dcd3c  jal         func_3734F0
    ctx->pc = 0x372F48u;
    SET_GPR_U32(ctx, 31, 0x372F50u);
    ctx->pc = 0x372F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372F48u;
    // 0x372f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3734F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3734F0u, 0x372F48u, 0x372F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372F50u;
label_372f50:
    // 0x372f50: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x372f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_372f54:
    // 0x372f54: 0xc6230030  lwc1        $f3, 0x30($s1)
    ctx->pc = 0x372f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x372f58: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x372f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x372f5c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x372f5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x372f60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x372f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372f64: 0x46030881  sub.s       $f2, $f1, $f3
    ctx->pc = 0x372f64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x372f68: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x372f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372f6c: 0x0  nop
    ctx->pc = 0x372f6cu;
    // NOP
    // 0x372f70: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x372F70u;
    {
        const bool branch_taken_0x372f70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x372f70) {
            ctx->pc = 0x372F94u;
            goto label_372f94;
        }
    }
    ctx->pc = 0x372F78u;
    // 0x372f78: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x372f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x372f7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x372f7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x372f80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x372f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372f84: 0x0  nop
    ctx->pc = 0x372f84u;
    // NOP
    // 0x372f88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x372f88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x372f8c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x372F8Cu;
    {
        const bool branch_taken_0x372f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F8Cu;
        // 0x372f90: 0xe620002c  swc1        $f0, 0x2C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x372f8c) {
            ctx->pc = 0x372FBCu;
            goto label_372fbc;
        }
    }
    ctx->pc = 0x372F94u;
label_372f94:
    // 0x372f94: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x372f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x372f98: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x372f98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x372f9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x372f9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372fa0: 0x0  nop
    ctx->pc = 0x372fa0u;
    // NOP
    // 0x372fa4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x372fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372fa8: 0x0  nop
    ctx->pc = 0x372fa8u;
    // NOP
    // 0x372fac: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x372FACu;
    {
        const bool branch_taken_0x372fac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x372fac) {
            ctx->pc = 0x372FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372FACu;
            // 0x372fb0: 0xe623002c  swc1        $f3, 0x2C($s1) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x372FBCu;
            goto label_372fbc;
        }
    }
    ctx->pc = 0x372FB4u;
    // 0x372fb4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x372fb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x372fb8: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x372fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_372fbc:
    // 0x372fbc: 0xc624001c  lwc1        $f4, 0x1C($s1)
    ctx->pc = 0x372fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x372fc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x372fc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372fc4: 0x0  nop
    ctx->pc = 0x372fc4u;
    // NOP
    // 0x372fc8: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x372fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x372fcc: 0x0  nop
    ctx->pc = 0x372fccu;
    // NOP
    // 0x372fd0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x372FD0u;
    {
        const bool branch_taken_0x372fd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x372FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372FD0u;
        // 0x372fd4: 0xc6200020  lwc1        $f0, 0x20($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x372fd0) {
            ctx->pc = 0x37300Cu;
            goto label_37300c;
        }
    }
    ctx->pc = 0x372FD8u;
    // 0x372fd8: 0xc6230018  lwc1        $f3, 0x18($s1)
    ctx->pc = 0x372fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x372fdc: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x372fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372fe0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x372fe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x372fe4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x372fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x372fe8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x372fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x372fec: 0x0  nop
    ctx->pc = 0x372fecu;
    // NOP
    // 0x372ff0: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x372ff0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x372ff4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x372ff4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x372ff8: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x372ff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x372ffc: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x372ffcu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
    // 0x373000: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x373000u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x373004: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x373004u;
    {
        const bool branch_taken_0x373004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373004u;
        // 0x373008: 0xe6220014  swc1        $f2, 0x14($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373004) {
            ctx->pc = 0x373018u;
            goto label_373018;
        }
    }
    ctx->pc = 0x37300Cu;
label_37300c:
    // 0x37300c: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x37300cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373010: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x373010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x373014: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x373014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_373018:
    // 0x373018: 0xc62c0014  lwc1        $f12, 0x14($s1)
    ctx->pc = 0x373018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37301c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37301cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373020: 0xc0dcd58  jal         func_373560
    ctx->pc = 0x373020u;
    SET_GPR_U32(ctx, 31, 0x373028u);
    ctx->pc = 0x373024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373020u;
    // 0x373024: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373560u, 0x373020u, 0x373028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373028u;
label_373028:
    // 0x373028: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x373028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x37302c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x37302cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x373030: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x373030u;
    {
        const bool branch_taken_0x373030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x373034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373030u;
        // 0x373034: 0xc6210014  lwc1        $f1, 0x14($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373030) {
            ctx->pc = 0x373080u;
            goto label_373080;
        }
    }
    ctx->pc = 0x373038u;
    // 0x373038: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x373038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37303c: 0x0  nop
    ctx->pc = 0x37303cu;
    // NOP
    // 0x373040: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x373040u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x373044: 0x0  nop
    ctx->pc = 0x373044u;
    // NOP
    // 0x373048: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x373048u;
    {
        const bool branch_taken_0x373048 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373048u;
        // 0x37304c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x373048) {
            ctx->pc = 0x373068u;
            goto label_373068;
        }
    }
    ctx->pc = 0x373050u;
    // 0x373050: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x373050u;
    {
        const bool branch_taken_0x373050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x373050) {
            ctx->pc = 0x373054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373050u;
            // 0x373054: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3730A4u;
            goto label_3730a4;
        }
    }
    ctx->pc = 0x373058u;
    // 0x373058: 0xc0dcd22  jal         func_373488
    ctx->pc = 0x373058u;
    SET_GPR_U32(ctx, 31, 0x373060u);
    ctx->pc = 0x37305Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373058u;
    // 0x37305c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373488u, 0x373058u, 0x373060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373060u;
label_373060:
    // 0x373060: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x373060u;
    {
        const bool branch_taken_0x373060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373060u;
        // 0x373064: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373060) {
            ctx->pc = 0x3730A4u;
            goto label_3730a4;
        }
    }
    ctx->pc = 0x373068u;
label_373068:
    // 0x373068: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x373068u;
    {
        const bool branch_taken_0x373068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x373068) {
            ctx->pc = 0x37306Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373068u;
            // 0x37306c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3730A4u;
            goto label_3730a4;
        }
    }
    ctx->pc = 0x373070u;
    // 0x373070: 0xc0dcd3c  jal         func_3734F0
    ctx->pc = 0x373070u;
    SET_GPR_U32(ctx, 31, 0x373078u);
    ctx->pc = 0x373074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373070u;
    // 0x373074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3734F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3734F0u, 0x373070u, 0x373078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373078u;
label_373078:
    // 0x373078: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x373078u;
    {
        const bool branch_taken_0x373078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373078u;
        // 0x37307c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373078) {
            ctx->pc = 0x3730A4u;
            goto label_3730a4;
        }
    }
    ctx->pc = 0x373080u;
label_373080:
    // 0x373080: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x373080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373084: 0x0  nop
    ctx->pc = 0x373084u;
    // NOP
    // 0x373088: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x373088u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37308c: 0x0  nop
    ctx->pc = 0x37308cu;
    // NOP
    // 0x373090: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x373090u;
    {
        const bool branch_taken_0x373090 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x373090) {
            ctx->pc = 0x373094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373090u;
            // 0x373094: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3730A4u;
            goto label_3730a4;
        }
    }
    ctx->pc = 0x373098u;
    // 0x373098: 0xc0dcd0c  jal         func_373430
    ctx->pc = 0x373098u;
    SET_GPR_U32(ctx, 31, 0x3730A0u);
    ctx->pc = 0x37309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373098u;
    // 0x37309c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373430u, 0x373098u, 0x3730A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3730A0u;
label_3730a0:
    // 0x3730a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3730a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3730a4:
    // 0x3730a4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3730A4u;
    {
        const bool branch_taken_0x3730a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3730a4) {
            ctx->pc = 0x3730D0u;
            goto label_3730d0;
        }
    }
    ctx->pc = 0x3730ACu;
    // 0x3730ac: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x3730acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_3730b0:
    // 0x3730b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3730b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3730b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3730B4u;
    {
        const bool branch_taken_0x3730b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3730B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3730B4u;
        // 0x3730b8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3730b4) {
            ctx->pc = 0x3730F8u;
            goto label_3730f8;
        }
    }
    ctx->pc = 0x3730BCu;
    // 0x3730bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3730bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3730c0: 0xc0dcca6  jal         func_373298
    ctx->pc = 0x3730C0u;
    SET_GPR_U32(ctx, 31, 0x3730C8u);
    ctx->pc = 0x3730C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3730C0u;
    // 0x3730c4: 0x8c850078  lw          $a1, 0x78($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373298u, 0x3730C0u, 0x3730C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3730C8u;
label_3730c8:
    // 0x3730c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3730C8u;
    {
        const bool branch_taken_0x3730c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3730CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3730C8u;
        // 0x3730cc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3730c8) {
            ctx->pc = 0x3730F8u;
            goto label_3730f8;
        }
    }
    ctx->pc = 0x3730D0u;
label_3730d0:
    // 0x3730d0: 0xc0dd05c  jal         func_374170
    ctx->pc = 0x3730D0u;
    SET_GPR_U32(ctx, 31, 0x3730D8u);
    ctx->pc = 0x3730D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3730D0u;
    // 0x3730d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374170u, 0x3730D0u, 0x3730D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3730D8u;
label_3730d8:
    // 0x3730d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3730d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3730dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3730DCu;
    {
        const bool branch_taken_0x3730dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3730E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3730DCu;
        // 0x3730e0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3730dc) {
            ctx->pc = 0x3730ECu;
            goto label_3730ec;
        }
    }
    ctx->pc = 0x3730E4u;
    // 0x3730e4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3730E4u;
    {
        const bool branch_taken_0x3730e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3730E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3730E4u;
        // 0x3730e8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3730e4) {
            ctx->pc = 0x3730F8u;
            goto label_3730f8;
        }
    }
    ctx->pc = 0x3730ECu;
label_3730ec:
    // 0x3730ec: 0xc0dccf2  jal         func_3733C8
    ctx->pc = 0x3730ECu;
    SET_GPR_U32(ctx, 31, 0x3730F4u);
    ctx->pc = 0x3730F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3730ECu;
    // 0x3730f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3733C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3733C8u, 0x3730ECu, 0x3730F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3730F4u;
label_3730f4:
    // 0x3730f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3730f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3730f8:
    // 0x3730f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3730f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3730fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3730fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373100: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x373100u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373108: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x373108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x37310c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x37310cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x373110: 0x3e00008  jr          $ra
    ctx->pc = 0x373110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373110u;
        // 0x373114: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373118u;
}
