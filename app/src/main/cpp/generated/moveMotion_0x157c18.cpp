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

// Function: moveMotion
// Address: 0x157c18 - 0x158198
void moveMotion_0x157c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("moveMotion_0x157c18");
#endif

    switch (ctx->pc) {
        case 0x157c5cu: goto label_157c5c;
        case 0x157c70u: goto label_157c70;
        case 0x157d08u: goto label_157d08;
        case 0x157d64u: goto label_157d64;
        case 0x157da8u: goto label_157da8;
        case 0x157e44u: goto label_157e44;
        case 0x157ea4u: goto label_157ea4;
        case 0x158074u: goto label_158074;
        default: break;
    }

    ctx->pc = 0x157c18u;

    // 0x157c18: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x157c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x157c1c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x157c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x157c20: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x157c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x157c24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x157c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c28: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x157c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x157c2c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x157c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x157c30: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x157c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x157c34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x157c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x157c38: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x157c38u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x157c3c: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x157c3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x157c40: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x157c40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x157c44: 0x8e240428  lw          $a0, 0x428($s1)
    ctx->pc = 0x157c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1064)));
    // 0x157c48: 0x1080010a  beqz        $a0, . + 4 + (0x10A << 2)
    ctx->pc = 0x157C48u;
    {
        const bool branch_taken_0x157c48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C48u;
        // 0x157c4c: 0x3c050042  lui         $a1, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c48) {
            ctx->pc = 0x158074u;
            goto label_158074;
        }
    }
    ctx->pc = 0x157C50u;
    // 0x157c50: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x157c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x157c54: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x157C54u;
    SET_GPR_U32(ctx, 31, 0x157C5Cu);
    ctx->pc = 0x157C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C54u;
    // 0x157c58: 0x24a5ee40  addiu       $a1, $a1, -0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x157C54u, 0x157C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C5Cu;
label_157c5c:
    // 0x157c5c: 0x14400142  bnez        $v0, . + 4 + (0x142 << 2)
    ctx->pc = 0x157C5Cu;
    {
        const bool branch_taken_0x157c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C5Cu;
        // 0x157c60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c5c) {
            ctx->pc = 0x158168u;
            goto label_158168;
        }
    }
    ctx->pc = 0x157C64u;
    // 0x157c64: 0x8e25042c  lw          $a1, 0x42C($s1)
    ctx->pc = 0x157c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1068)));
    // 0x157c68: 0xc0b1ff4  jal         func_2C7FD0
    ctx->pc = 0x157C68u;
    SET_GPR_U32(ctx, 31, 0x157C70u);
    ctx->pc = 0x157C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C68u;
    // 0x157c6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7FD0u, 0x157C68u, 0x157C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C70u;
label_157c70:
    // 0x157c70: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x157c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x157c74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x157c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157c78: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x157c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x157c7c: 0x90430569  lbu         $v1, 0x569($v0)
    ctx->pc = 0x157c7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x747A09u));
    // 0x157c80: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157C80u;
    {
        const bool branch_taken_0x157c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x157C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C80u;
        // 0x157c84: 0xc4560574  lwc1        $f22, 0x574($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c80) {
            ctx->pc = 0x157C98u;
            goto label_157c98;
        }
    }
    ctx->pc = 0x157C88u;
    // 0x157c88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x157c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x157c8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x157c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157c90: 0x0  nop
    ctx->pc = 0x157c90u;
    // NOP
    // 0x157c94: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x157c94u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_157c98:
    // 0x157c98: 0xc6200444  lwc1        $f0, 0x444($s1)
    ctx->pc = 0x157c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157c9c: 0x26300310  addiu       $s0, $s1, 0x310
    ctx->pc = 0x157c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x157ca0: 0xc6210440  lwc1        $f1, 0x440($s1)
    ctx->pc = 0x157ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157ca4: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x157ca4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x157ca8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x157ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x157cac: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x157cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x157cb0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x157CB0u;
    {
        const bool branch_taken_0x157cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CB0u;
        // 0x157cb4: 0x46160542  mul.s       $f21, $f0, $f22 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157cb0) {
            ctx->pc = 0x157D14u;
            goto label_157d14;
        }
    }
    ctx->pc = 0x157CB8u;
    // 0x157cb8: 0xc6210438  lwc1        $f1, 0x438($s1)
    ctx->pc = 0x157cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157cbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157cbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157cc0: 0x0  nop
    ctx->pc = 0x157cc0u;
    // NOP
    // 0x157cc4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x157cc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157cc8: 0x0  nop
    ctx->pc = 0x157cc8u;
    // NOP
    // 0x157ccc: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x157CCCu;
    {
        const bool branch_taken_0x157ccc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x157ccc) {
            ctx->pc = 0x157CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157CCCu;
            // 0x157cd0: 0xc6200438  lwc1        $f0, 0x438($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x157D18u;
            goto label_157d18;
        }
    }
    ctx->pc = 0x157CD4u;
    // 0x157cd4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x157cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x157cd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157CD8u;
    {
        const bool branch_taken_0x157cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CD8u;
        // 0x157cdc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157cd8) {
            ctx->pc = 0x157CECu;
            goto label_157cec;
        }
    }
    ctx->pc = 0x157CE0u;
    // 0x157ce0: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x157ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x157ce4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x157CE4u;
    {
        const bool branch_taken_0x157ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CE4u;
        // 0x157ce8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ce4) {
            ctx->pc = 0x157CF0u;
            goto label_157cf0;
        }
    }
    ctx->pc = 0x157CECu;
label_157cec:
    // 0x157cec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x157cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157cf0:
    // 0x157cf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157CF0u;
    {
        const bool branch_taken_0x157cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CF0u;
        // 0x157cf4: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157cf0) {
            ctx->pc = 0x157D08u;
            goto label_157d08;
        }
    }
    ctx->pc = 0x157CF8u;
    // 0x157cf8: 0x8c4400d0  lw          $a0, 0xD0($v0)
    ctx->pc = 0x157cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x157cfc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x157cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d00: 0xc0541de  jal         func_150778
    ctx->pc = 0x157D00u;
    SET_GPR_U32(ctx, 31, 0x157D08u);
    ctx->pc = 0x157D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D00u;
    // 0x157d04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150778u, 0x157D00u, 0x157D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D08u;
label_157d08:
    // 0x157d08: 0xae200310  sw          $zero, 0x310($s1)
    ctx->pc = 0x157d08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 784), GPR_U32(ctx, 0));
    // 0x157d0c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x157d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x157d10: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x157d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_157d14:
    // 0x157d14: 0xc6200438  lwc1        $f0, 0x438($s1)
    ctx->pc = 0x157d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_157d18:
    // 0x157d18: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x157d18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x157d1c: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x157d1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x157d20: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x157d20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157d24: 0x0  nop
    ctx->pc = 0x157d24u;
    // NOP
    // 0x157d28: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x157D28u;
    {
        const bool branch_taken_0x157d28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x157d28) {
            ctx->pc = 0x157D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157D28u;
            // 0x157d2c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x157D30u;
            goto label_157d30;
        }
    }
    ctx->pc = 0x157D30u;
label_157d30:
    // 0x157d30: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x157d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157d34: 0x0  nop
    ctx->pc = 0x157d34u;
    // NOP
    // 0x157d38: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x157D38u;
    {
        const bool branch_taken_0x157d38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x157D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D38u;
        // 0x157d3c: 0xe6200438  swc1        $f0, 0x438($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1080), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d38) {
            ctx->pc = 0x157D58u;
            goto label_157d58;
        }
    }
    ctx->pc = 0x157D40u;
    // 0x157d40: 0xc634043c  lwc1        $f20, 0x43C($s1)
    ctx->pc = 0x157d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x157d44: 0x0  nop
    ctx->pc = 0x157d44u;
    // NOP
    // 0x157d48: 0x0  nop
    ctx->pc = 0x157d48u;
    // NOP
    // 0x157d4c: 0x46140503  div.s       $f20, $f0, $f20
    ctx->pc = 0x157d4cu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[20]);
    // 0x157d50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x157D50u;
    {
        const bool branch_taken_0x157d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D50u;
        // 0x157d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d50) {
            ctx->pc = 0x157D5Cu;
            goto label_157d5c;
        }
    }
    ctx->pc = 0x157D58u;
label_157d58:
    // 0x157d58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x157d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_157d5c:
    // 0x157d5c: 0xc0560ca  jal         func_158328
    ctx->pc = 0x157D5Cu;
    SET_GPR_U32(ctx, 31, 0x157D64u);
    ctx->pc = 0x158328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158328u, 0x157D5Cu, 0x157D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D64u;
label_157d64:
    // 0x157d64: 0xe634027c  swc1        $f20, 0x27C($s1)
    ctx->pc = 0x157d64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 636), bits); }
    // 0x157d68: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x157d68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x157d6c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x157d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x157d70: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x157D70u;
    {
        const bool branch_taken_0x157d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D70u;
        // 0x157d74: 0x26320340  addiu       $s2, $s1, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d70) {
            ctx->pc = 0x157DB8u;
            goto label_157db8;
        }
    }
    ctx->pc = 0x157D78u;
    // 0x157d78: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x157d78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x157d7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157D7Cu;
    {
        const bool branch_taken_0x157d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D7Cu;
        // 0x157d80: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d7c) {
            ctx->pc = 0x157D90u;
            goto label_157d90;
        }
    }
    ctx->pc = 0x157D84u;
    // 0x157d84: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x157d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x157d88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x157D88u;
    {
        const bool branch_taken_0x157d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D88u;
        // 0x157d8c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d88) {
            ctx->pc = 0x157D94u;
            goto label_157d94;
        }
    }
    ctx->pc = 0x157D90u;
label_157d90:
    // 0x157d90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x157d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157d94:
    // 0x157d94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157D94u;
    {
        const bool branch_taken_0x157d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D94u;
        // 0x157d98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d94) {
            ctx->pc = 0x157DA8u;
            goto label_157da8;
        }
    }
    ctx->pc = 0x157D9Cu;
    // 0x157d9c: 0x8c4400d0  lw          $a0, 0xD0($v0)
    ctx->pc = 0x157d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x157da0: 0xc0541ce  jal         func_150738
    ctx->pc = 0x157DA0u;
    SET_GPR_U32(ctx, 31, 0x157DA8u);
    ctx->pc = 0x157DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DA0u;
    // 0x157da4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150738u, 0x157DA0u, 0x157DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DA8u;
label_157da8:
    // 0x157da8: 0xae200310  sw          $zero, 0x310($s1)
    ctx->pc = 0x157da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 784), GPR_U32(ctx, 0));
    // 0x157dac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x157dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x157db0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x157db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x157db4: 0x26320340  addiu       $s2, $s1, 0x340
    ctx->pc = 0x157db4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
label_157db8:
    // 0x157db8: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x157db8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x157dbc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x157dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157dc0: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x157dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157dc4: 0x26220320  addiu       $v0, $s1, 0x320
    ctx->pc = 0x157dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
    // 0x157dc8: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x157dc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x157dcc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x157dccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x157dd0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x157dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x157dd4: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x157dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x157dd8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x157dd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x157ddc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x157ddcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157de0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x157de0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157de4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x157de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157de8: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x157de8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x157dec: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x157decu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x157df0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x157df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157df4: 0x26240330  addiu       $a0, $s1, 0x330
    ctx->pc = 0x157df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
    // 0x157df8: 0x10930006  beq         $a0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x157DF8u;
    {
        const bool branch_taken_0x157df8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x157DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157DF8u;
        // 0x157dfc: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157df8) {
            ctx->pc = 0x157E14u;
            goto label_157e14;
        }
    }
    ctx->pc = 0x157E00u;
    // 0x157e00: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x157e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157e04: 0xe6200330  swc1        $f0, 0x330($s1)
    ctx->pc = 0x157e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
    // 0x157e08: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x157e08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x157e0c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x157e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157e10: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x157e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_157e14:
    // 0x157e14: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x157E14u;
    {
        const bool branch_taken_0x157e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x157E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E14u;
        // 0x157e18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e14) {
            ctx->pc = 0x157E34u;
            goto label_157e34;
        }
    }
    ctx->pc = 0x157E1Cu;
    // 0x157e1c: 0xc6200310  lwc1        $f0, 0x310($s1)
    ctx->pc = 0x157e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157e20: 0xe6200320  swc1        $f0, 0x320($s1)
    ctx->pc = 0x157e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 800), bits); }
    // 0x157e24: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x157e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157e28: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x157e28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x157e2c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x157e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157e30: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x157e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_157e34:
    // 0x157e34: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x157e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x157e38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x157e38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e3c: 0xc05420c  jal         func_150830
    ctx->pc = 0x157E3Cu;
    SET_GPR_U32(ctx, 31, 0x157E44u);
    ctx->pc = 0x157E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E3Cu;
    // 0x157e40: 0x26300350  addiu       $s0, $s1, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150830u, 0x157E3Cu, 0x157E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E44u;
label_157e44:
    // 0x157e44: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x157e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157e48: 0x26220360  addiu       $v0, $s1, 0x360
    ctx->pc = 0x157e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
    // 0x157e4c: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x157e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x157e50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x157e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e54: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x157e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x157e58: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x157e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x157e5c: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x157e5cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x157e60: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x157e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157e64: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x157e64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x157e68: 0xc605000c  lwc1        $f5, 0xC($s0)
    ctx->pc = 0x157e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x157e6c: 0xc6210340  lwc1        $f1, 0x340($s1)
    ctx->pc = 0x157e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157e70: 0xc6230350  lwc1        $f3, 0x350($s1)
    ctx->pc = 0x157e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x157e74: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x157e74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x157e78: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x157e78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x157e7c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x157e7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x157e80: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x157e80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x157e84: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x157e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x157e88: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x157e88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x157e8c: 0xe6210360  swc1        $f1, 0x360($s1)
    ctx->pc = 0x157e8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 864), bits); }
    // 0x157e90: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x157e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157e94: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x157e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x157e98: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x157e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157e9c: 0xc07df68  jal         func_1F7DA0
    ctx->pc = 0x157E9Cu;
    SET_GPR_U32(ctx, 31, 0x157EA4u);
    ctx->pc = 0x157EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E9Cu;
    // 0x157ea0: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x157E9Cu, 0x157EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157EA4u;
label_157ea4:
    // 0x157ea4: 0xc6200340  lwc1        $f0, 0x340($s1)
    ctx->pc = 0x157ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157ea8: 0x26230370  addiu       $v1, $s1, 0x370
    ctx->pc = 0x157ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
    // 0x157eac: 0x26240380  addiu       $a0, $s1, 0x380
    ctx->pc = 0x157eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
    // 0x157eb0: 0xe6200350  swc1        $f0, 0x350($s1)
    ctx->pc = 0x157eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 848), bits); }
    // 0x157eb4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x157eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157eb8: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x157eb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x157ebc: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x157ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157ec0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x157ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x157ec4: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x157ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157ec8: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x157ec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x157ecc: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x157eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x157ed0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x157ed0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157ed4: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x157ed4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157ed8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x157ed8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157edc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x157edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157ee0: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x157ee0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x157ee4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x157ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157ee8: 0x26220390  addiu       $v0, $s1, 0x390
    ctx->pc = 0x157ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x157eec: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x157EECu;
    {
        const bool branch_taken_0x157eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x157EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EECu;
        // 0x157ef0: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157eec) {
            ctx->pc = 0x157F08u;
            goto label_157f08;
        }
    }
    ctx->pc = 0x157EF4u;
    // 0x157ef4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x157ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157ef8: 0xe6200390  swc1        $f0, 0x390($s1)
    ctx->pc = 0x157ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 912), bits); }
    // 0x157efc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x157efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x157f00: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x157f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157f04: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x157f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_157f08:
    // 0x157f08: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x157F08u;
    {
        const bool branch_taken_0x157f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x157f08) {
            ctx->pc = 0x157F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157F08u;
            // 0x157f0c: 0x92220434  lbu         $v0, 0x434($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157F2Cu;
            goto label_157f2c;
        }
    }
    ctx->pc = 0x157F10u;
    // 0x157f10: 0xc6200370  lwc1        $f0, 0x370($s1)
    ctx->pc = 0x157f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157f14: 0xe6200380  swc1        $f0, 0x380($s1)
    ctx->pc = 0x157f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 896), bits); }
    // 0x157f18: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x157f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157f1c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x157f1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x157f20: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x157f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157f24: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x157f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x157f28: 0x92220434  lbu         $v0, 0x434($s1)
    ctx->pc = 0x157f28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1076)));
label_157f2c:
    // 0x157f2c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x157f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x157f30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x157f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x157f34: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x157F34u;
    {
        const bool branch_taken_0x157f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f34) {
            ctx->pc = 0x157F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157F34u;
            // 0x157f38: 0x96220434  lhu         $v0, 0x434($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157F8Cu;
            goto label_157f8c;
        }
    }
    ctx->pc = 0x157F3Cu;
    // 0x157f3c: 0xc6200430  lwc1        $f0, 0x430($s1)
    ctx->pc = 0x157f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157f40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x157f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x157f44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x157f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157f48: 0x46150080  add.s       $f2, $f0, $f21
    ctx->pc = 0x157f48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x157f4c: 0x4601a832  c.eq.s      $f21, $f1
    ctx->pc = 0x157f4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157f50: 0x0  nop
    ctx->pc = 0x157f50u;
    // NOP
    // 0x157f54: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x157F54u;
    {
        const bool branch_taken_0x157f54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x157F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F54u;
        // 0x157f58: 0xe6220430  swc1        $f2, 0x430($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1072), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f54) {
            ctx->pc = 0x157F88u;
            goto label_157f88;
        }
    }
    ctx->pc = 0x157F5Cu;
    // 0x157f5c: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x157f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x157f60: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x157f60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x157f64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x157f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157f68: 0x0  nop
    ctx->pc = 0x157f68u;
    // NOP
    // 0x157f6c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x157f6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x157f70: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x157f70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x157f74: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x157f74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x157f78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157f7c: 0x0  nop
    ctx->pc = 0x157f7cu;
    // NOP
    // 0x157f80: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x157f80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x157f84: 0xe6210430  swc1        $f1, 0x430($s1)
    ctx->pc = 0x157f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1072), bits); }
label_157f88:
    // 0x157f88: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x157f88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
label_157f8c:
    // 0x157f8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x157f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f90: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x157f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x157f94: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x157F94u;
    {
        const bool branch_taken_0x157f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157F94u;
        // 0x157f98: 0x8e250428  lw          $a1, 0x428($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f94) {
            ctx->pc = 0x158038u;
            goto label_158038;
        }
    }
    ctx->pc = 0x157F9Cu;
    // 0x157f9c: 0x92220434  lbu         $v0, 0x434($s1)
    ctx->pc = 0x157f9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x157fa0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x157fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x157fa4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x157fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x157fa8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157FA8u;
    {
        const bool branch_taken_0x157fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FA8u;
        // 0x157fac: 0xc6210430  lwc1        $f1, 0x430($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157fa8) {
            ctx->pc = 0x157FC4u;
            goto label_157fc4;
        }
    }
    ctx->pc = 0x157FB0u;
    // 0x157fb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157fb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157fb4: 0x0  nop
    ctx->pc = 0x157fb4u;
    // NOP
    // 0x157fb8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x157fb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157fbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x157FBCu;
    {
        const bool branch_taken_0x157fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157fbc) {
            ctx->pc = 0x157FD0u;
            goto label_157fd0;
        }
    }
    ctx->pc = 0x157FC4u;
label_157fc4:
    // 0x157fc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157fc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157fc8: 0x0  nop
    ctx->pc = 0x157fc8u;
    // NOP
    // 0x157fcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x157fccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_157fd0:
    // 0x157fd0: 0x0  nop
    ctx->pc = 0x157fd0u;
    // NOP
    // 0x157fd4: 0x45000064  bc1f        . + 4 + (0x64 << 2)
    ctx->pc = 0x157FD4u;
    {
        const bool branch_taken_0x157fd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x157FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FD4u;
        // 0x157fd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157fd4) {
            ctx->pc = 0x158168u;
            goto label_158168;
        }
    }
    ctx->pc = 0x157FDCu;
    // 0x157fdc: 0x90a20007  lbu         $v0, 0x7($a1)
    ctx->pc = 0x157fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x157fe0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x157fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x157fe4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x157FE4u;
    {
        const bool branch_taken_0x157fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157FE4u;
        // 0x157fe8: 0x30c20008  andi        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x157fe4) {
            ctx->pc = 0x158030u;
            goto label_158030;
        }
    }
    ctx->pc = 0x157FECu;
    // 0x157fec: 0x54400058  bnel        $v0, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x157FECu;
    {
        const bool branch_taken_0x157fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157fec) {
            ctx->pc = 0x157FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157FECu;
            // 0x157ff0: 0xae200430  sw          $zero, 0x430($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1072), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158150u;
            goto label_158150;
        }
    }
    ctx->pc = 0x157FF4u;
    // 0x157ff4: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x157ff4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x157ff8: 0xc6210440  lwc1        $f1, 0x440($s1)
    ctx->pc = 0x157ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157ffc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x157ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x158000: 0xae200320  sw          $zero, 0x320($s1)
    ctx->pc = 0x158000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 0));
    // 0x158004: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x158004u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x158008: 0xae200324  sw          $zero, 0x324($s1)
    ctx->pc = 0x158008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 804), GPR_U32(ctx, 0));
    // 0x15800c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15800cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158010: 0x0  nop
    ctx->pc = 0x158010u;
    // NOP
    // 0x158014: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x158014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x158018: 0xae200328  sw          $zero, 0x328($s1)
    ctx->pc = 0x158018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 0));
    // 0x15801c: 0xae200350  sw          $zero, 0x350($s1)
    ctx->pc = 0x15801cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 848), GPR_U32(ctx, 0));
    // 0x158020: 0xae200354  sw          $zero, 0x354($s1)
    ctx->pc = 0x158020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 852), GPR_U32(ctx, 0));
    // 0x158024: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x158024u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x158028: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x158028u;
    {
        const bool branch_taken_0x158028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158028u;
        // 0x15802c: 0xae200358  sw          $zero, 0x358($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158028) {
            ctx->pc = 0x15814Cu;
            goto label_15814c;
        }
    }
    ctx->pc = 0x158030u;
label_158030:
    // 0x158030: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x158030u;
    {
        const bool branch_taken_0x158030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158030u;
        // 0x158034: 0xae200430  sw          $zero, 0x430($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1072), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158030) {
            ctx->pc = 0x158150u;
            goto label_158150;
        }
    }
    ctx->pc = 0x158038u;
label_158038:
    // 0x158038: 0x92220434  lbu         $v0, 0x434($s1)
    ctx->pc = 0x158038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x15803c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15803cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x158040: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x158040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x158044: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x158044u;
    {
        const bool branch_taken_0x158044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158044u;
        // 0x158048: 0x94a20004  lhu         $v0, 0x4($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158044) {
            ctx->pc = 0x15807Cu;
            goto label_15807c;
        }
    }
    ctx->pc = 0x15804Cu;
    // 0x15804c: 0xc6210430  lwc1        $f1, 0x430($s1)
    ctx->pc = 0x15804cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158050: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x158050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x158054: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x158054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158058: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158058u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15805c: 0x0  nop
    ctx->pc = 0x15805cu;
    // NOP
    // 0x158060: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x158060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x158064: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x158064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158068: 0x0  nop
    ctx->pc = 0x158068u;
    // NOP
    // 0x15806c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x15806Cu;
    {
        const bool branch_taken_0x15806c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15806Cu;
        // 0x158070: 0x46000906  mov.s       $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15806c) {
            ctx->pc = 0x1580A4u;
            goto label_1580a4;
        }
    }
    ctx->pc = 0x158074u;
label_158074:
    // 0x158074: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x158074u;
    {
        const bool branch_taken_0x158074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158074u;
        // 0x158078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158074) {
            ctx->pc = 0x158168u;
            goto label_158168;
        }
    }
    ctx->pc = 0x15807Cu;
label_15807c:
    // 0x15807c: 0xc6210430  lwc1        $f1, 0x430($s1)
    ctx->pc = 0x15807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158080: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x158080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x158084: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x158084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158088: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15808c: 0x0  nop
    ctx->pc = 0x15808cu;
    // NOP
    // 0x158090: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x158090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x158094: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x158094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158098: 0x0  nop
    ctx->pc = 0x158098u;
    // NOP
    // 0x15809c: 0x4500fff5  bc1f        . + 4 + (-0xB << 2)
    ctx->pc = 0x15809Cu;
    {
        const bool branch_taken_0x15809c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1580A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15809Cu;
        // 0x1580a0: 0x46000906  mov.s       $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15809c) {
            ctx->pc = 0x158074u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158074;
        }
    }
    ctx->pc = 0x1580A4u;
label_1580a4:
    // 0x1580a4: 0x90a20007  lbu         $v0, 0x7($a1)
    ctx->pc = 0x1580a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x1580a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1580a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1580ac: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1580ACu;
    {
        const bool branch_taken_0x1580ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1580B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580ACu;
        // 0x1580b0: 0x30c20008  andi        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1580ac) {
            ctx->pc = 0x158130u;
            goto label_158130;
        }
    }
    ctx->pc = 0x1580B4u;
    // 0x1580b4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1580B4u;
    {
        const bool branch_taken_0x1580b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1580B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580B4u;
        // 0x1580b8: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1580b4) {
            ctx->pc = 0x158130u;
            goto label_158130;
        }
    }
    ctx->pc = 0x1580BCu;
    // 0x1580bc: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x1580bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1580c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1580c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1580c4: 0x0  nop
    ctx->pc = 0x1580c4u;
    // NOP
    // 0x1580c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1580c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1580cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1580ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1580d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1580d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1580d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1580d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1580d8: 0x0  nop
    ctx->pc = 0x1580d8u;
    // NOP
    // 0x1580dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1580dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1580e0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1580e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1580e4: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x1580e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1580e8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1580e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1580ec: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1580ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1580f0: 0x0  nop
    ctx->pc = 0x1580f0u;
    // NOP
    // 0x1580f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1580F4u;
    {
        const bool branch_taken_0x1580f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1580F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580F4u;
        // 0x1580f8: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1580f4) {
            ctx->pc = 0x158100u;
            goto label_158100;
        }
    }
    ctx->pc = 0x1580FCu;
    // 0x1580fc: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x1580fcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_158100:
    // 0x158100: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x158100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158104: 0x0  nop
    ctx->pc = 0x158104u;
    // NOP
    // 0x158108: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x158108u;
    {
        const bool branch_taken_0x158108 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x158108) {
            ctx->pc = 0x15810Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158108u;
            // 0x15810c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x158110u;
            goto label_158110;
        }
    }
    ctx->pc = 0x158110u;
label_158110:
    // 0x158110: 0xe6210430  swc1        $f1, 0x430($s1)
    ctx->pc = 0x158110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1072), bits); }
    // 0x158114: 0xe6230358  swc1        $f3, 0x358($s1)
    ctx->pc = 0x158114u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 856), bits); }
    // 0x158118: 0xe6230320  swc1        $f3, 0x320($s1)
    ctx->pc = 0x158118u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 800), bits); }
    // 0x15811c: 0xe6230324  swc1        $f3, 0x324($s1)
    ctx->pc = 0x15811cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 804), bits); }
    // 0x158120: 0xe6230328  swc1        $f3, 0x328($s1)
    ctx->pc = 0x158120u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 808), bits); }
    // 0x158124: 0xe6230350  swc1        $f3, 0x350($s1)
    ctx->pc = 0x158124u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 848), bits); }
    // 0x158128: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x158128u;
    {
        const bool branch_taken_0x158128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158128u;
        // 0x15812c: 0xe6230354  swc1        $f3, 0x354($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 852), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158128) {
            ctx->pc = 0x158150u;
            goto label_158150;
        }
    }
    ctx->pc = 0x158130u;
label_158130:
    // 0x158130: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x158130u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158134: 0x0  nop
    ctx->pc = 0x158134u;
    // NOP
    // 0x158138: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x158138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15813c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15813cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x158140: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x158140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158144: 0x0  nop
    ctx->pc = 0x158144u;
    // NOP
    // 0x158148: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x158148u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_15814c:
    // 0x15814c: 0xe6200430  swc1        $f0, 0x430($s1)
    ctx->pc = 0x15814cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1072), bits); }
label_158150:
    // 0x158150: 0x92230436  lbu         $v1, 0x436($s1)
    ctx->pc = 0x158150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1078)));
    // 0x158154: 0x2c6200ff  sltiu       $v0, $v1, 0xFF
    ctx->pc = 0x158154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x158158: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x158158u;
    {
        const bool branch_taken_0x158158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158158u;
        // 0x15815c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158158) {
            ctx->pc = 0x158164u;
            goto label_158164;
        }
    }
    ctx->pc = 0x158160u;
    // 0x158160: 0xa2220436  sb          $v0, 0x436($s1)
    ctx->pc = 0x158160u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1078), (uint8_t)GPR_U32(ctx, 2));
label_158164:
    // 0x158164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x158164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158168:
    // 0x158168: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x158168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15816c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x15816cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x158170: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x158170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x158174: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x158174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x158178: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x158178u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15817c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15817cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x158180: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x158180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x158184: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x158184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x158188: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x158188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15818c: 0x3e00008  jr          $ra
    ctx->pc = 0x15818Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15818Cu;
        // 0x158190: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15818Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158194u;
    // 0x158194: 0x0  nop
    ctx->pc = 0x158194u;
    // NOP
    ctx->pc = 0x158198u;
}
