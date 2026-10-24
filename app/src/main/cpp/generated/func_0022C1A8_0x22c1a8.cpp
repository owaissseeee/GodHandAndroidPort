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

// Function: func_0022C1A8
// Address: 0x22c1a8 - 0x22c3f8
void func_0022C1A8_0x22c1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0022C1A8_0x22c1a8");
#endif

    switch (ctx->pc) {
        case 0x22c210u: goto label_22c210;
        case 0x22c218u: goto label_22c218;
        case 0x22c240u: goto label_22c240;
        case 0x22c278u: goto label_22c278;
        case 0x22c2d8u: goto label_22c2d8;
        case 0x22c2f8u: goto label_22c2f8;
        case 0x22c300u: goto label_22c300;
        case 0x22c310u: goto label_22c310;
        case 0x22c324u: goto label_22c324;
        case 0x22c330u: goto label_22c330;
        case 0x22c364u: goto label_22c364;
        case 0x22c378u: goto label_22c378;
        case 0x22c388u: goto label_22c388;
        default: break;
    }

    ctx->pc = 0x22c1a8u;

    // 0x22c1a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22c1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22c1ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22c1b0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22c1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x22c1b4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22c1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x22c1b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22c1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c1bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22c1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22c1c0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22c1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x22c1c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c1c8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x22c1c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x22c1cc: 0xa202186a  sb          $v0, 0x186A($s0)
    ctx->pc = 0x22c1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c1d0: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x22c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x22c1d4: 0x8e0416d4  lw          $a0, 0x16D4($s0)
    ctx->pc = 0x22c1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x22c1d8: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x22c1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x22c1dc: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x22c1dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22c1e0: 0x34840400  ori         $a0, $a0, 0x400
    ctx->pc = 0x22c1e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1024);
    // 0x22c1e4: 0xae0316d0  sw          $v1, 0x16D0($s0)
    ctx->pc = 0x22c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
    // 0x22c1e8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22C1E8u;
    {
        const bool branch_taken_0x22c1e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1E8u;
        // 0x22c1ec: 0xae0416d4  sw          $a0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c1e8) {
            ctx->pc = 0x22C204u;
            goto label_22c204;
        }
    }
    ctx->pc = 0x22C1F0u;
    // 0x22c1f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c1f4: 0x50a2002a  beql        $a1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x22C1F4u;
    {
        const bool branch_taken_0x22c1f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x22c1f4) {
            ctx->pc = 0x22C1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C1F4u;
            // 0x22c1f8: 0xc6010604  lwc1        $f1, 0x604($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C2A0u;
            goto label_22c2a0;
        }
    }
    ctx->pc = 0x22C1FCu;
    // 0x22c1fc: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x22C1FCu;
    {
        const bool branch_taken_0x22c1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C1FCu;
        // 0x22c200: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c1fc) {
            ctx->pc = 0x22C334u;
            goto label_22c334;
        }
    }
    ctx->pc = 0x22C204u;
label_22c204:
    // 0x22c204: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x22c204u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22c208: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22C208u;
    SET_GPR_U32(ctx, 31, 0x22C210u);
    ctx->pc = 0x22C20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C208u;
    // 0x22c20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22C208u, 0x22C210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C210u;
label_22c210:
    // 0x22c210: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x22C210u;
    SET_GPR_U32(ctx, 31, 0x22C218u);
    ctx->pc = 0x22C214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C210u;
    // 0x22c214: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x22C210u, 0x22C218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C218u;
label_22c218:
    // 0x22c218: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22c218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22c21c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x22c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22c220: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x22c220u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c224: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x22c224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x22c228: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x22c228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x22c22c: 0x8c6222e0  lw          $v0, 0x22E0($v1)
    ctx->pc = 0x22c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8928)));
    // 0x22c230: 0x8c6522e4  lw          $a1, 0x22E4($v1)
    ctx->pc = 0x22c230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8932)));
    // 0x22c234: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x22c234u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22c238: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22C238u;
    SET_GPR_U32(ctx, 31, 0x22C240u);
    ctx->pc = 0x22C23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C238u;
    // 0x22c23c: 0xa38821  addu        $s1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22C238u, 0x22C240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C240u;
label_22c240:
    // 0x22c240: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22c240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22c244: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C244u;
    {
        const bool branch_taken_0x22c244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22c244) {
            ctx->pc = 0x22C258u;
            goto label_22c258;
        }
    }
    ctx->pc = 0x22C24Cu;
    // 0x22c24c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x22c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22c250: 0x8c6222e8  lw          $v0, 0x22E8($v1)
    ctx->pc = 0x22c250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8936)));
    // 0x22c254: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x22c254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22c258:
    // 0x22c258: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22c258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22c25c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22c25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c260: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22c260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c264: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x22c264u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c26c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22c26cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22c270: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22C270u;
    SET_GPR_U32(ctx, 31, 0x22C278u);
    ctx->pc = 0x22C274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C270u;
    // 0x22c274: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22C270u, 0x22C278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C278u;
label_22c278:
    // 0x22c278: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22c278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22c27c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c280: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x22c280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x22c284: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22c284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c288: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22c28c: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x22c28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x22c290: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x22c290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
    // 0x22c294: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22c294u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c298: 0xae0005fc  sw          $zero, 0x5FC($s0)
    ctx->pc = 0x22c298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 0));
    // 0x22c29c: 0xc6010604  lwc1        $f1, 0x604($s0)
    ctx->pc = 0x22c29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22c2a0:
    // 0x22c2a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c2a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c2a4: 0x0  nop
    ctx->pc = 0x22c2a4u;
    // NOP
    // 0x22c2a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22c2a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c2ac: 0x0  nop
    ctx->pc = 0x22c2acu;
    // NOP
    // 0x22c2b0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x22C2B0u;
    {
        const bool branch_taken_0x22c2b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C2B0u;
        // 0x22c2b4: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c2b0) {
            ctx->pc = 0x22C2D0u;
            goto label_22c2d0;
        }
    }
    ctx->pc = 0x22C2B8u;
    // 0x22c2b8: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22c2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c2bc: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x22c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x22c2c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22c2c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22c2c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22c2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c2c8: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x22c2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x22c2cc: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x22c2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
label_22c2d0:
    // 0x22c2d0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22C2D0u;
    SET_GPR_U32(ctx, 31, 0x22C2D8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22C2D0u, 0x22C2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C2D8u;
label_22c2d8:
    // 0x22c2d8: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22c2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c2dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c2e0: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22c2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x22c2e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22c2e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22c2e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22c2e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22c2ec: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22c2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22c2f0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22C2F0u;
    SET_GPR_U32(ctx, 31, 0x22C2F8u);
    ctx->pc = 0x22C2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C2F0u;
    // 0x22c2f4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22C2F0u, 0x22C2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C2F8u;
label_22c2f8:
    // 0x22c2f8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22C2F8u;
    SET_GPR_U32(ctx, 31, 0x22C300u);
    ctx->pc = 0x22C2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C2F8u;
    // 0x22c2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22C2F8u, 0x22C300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C300u;
label_22c300:
    // 0x22c300: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22C300u;
    {
        const bool branch_taken_0x22c300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c300) {
            ctx->pc = 0x22C310u;
            goto label_22c310;
        }
    }
    ctx->pc = 0x22C308u;
    // 0x22c308: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x22C308u;
    SET_GPR_U32(ctx, 31, 0x22C310u);
    ctx->pc = 0x22C30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C308u;
    // 0x22c30c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x22C308u, 0x22C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C310u;
label_22c310:
    // 0x22c310: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22c310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22c314: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22c314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22c318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c31c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22C31Cu;
    SET_GPR_U32(ctx, 31, 0x22C324u);
    ctx->pc = 0x22C320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C31Cu;
    // 0x22c320: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22C31Cu, 0x22C324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C324u;
label_22c324:
    // 0x22c324: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22c324u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22c328: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22C328u;
    SET_GPR_U32(ctx, 31, 0x22C330u);
    ctx->pc = 0x22C32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C328u;
    // 0x22c32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22C328u, 0x22C330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C330u;
label_22c330:
    // 0x22c330: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x22c330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_22c334:
    // 0x22c334: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22c334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22c338: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22C338u;
    {
        const bool branch_taken_0x22c338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C338u;
        // 0x22c33c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c338) {
            ctx->pc = 0x22C39Cu;
            goto label_22c39c;
        }
    }
    ctx->pc = 0x22C340u;
    // 0x22c340: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x22c340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x22c344: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x22C344u;
    {
        const bool branch_taken_0x22c344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C344u;
        // 0x22c348: 0x24020276  addiu       $v0, $zero, 0x276 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c344) {
            ctx->pc = 0x22C3A0u;
            goto label_22c3a0;
        }
    }
    ctx->pc = 0x22C34Cu;
    // 0x22c34c: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x22c34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x22c350: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22C350u;
    {
        const bool branch_taken_0x22c350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C350u;
        // 0x22c354: 0xae0005f0  sw          $zero, 0x5F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c350) {
            ctx->pc = 0x22C36Cu;
            goto label_22c36c;
        }
    }
    ctx->pc = 0x22C358u;
    // 0x22c358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c35c: 0xc09aa8c  jal         func_26AA30
    ctx->pc = 0x22C35Cu;
    SET_GPR_U32(ctx, 31, 0x22C364u);
    ctx->pc = 0x22C360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C35Cu;
    // 0x22c360: 0x24050373  addiu       $a1, $zero, 0x373 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 883));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AA30u, 0x22C35Cu, 0x22C364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C364u;
label_22c364:
    // 0x22c364: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22C364u;
    {
        const bool branch_taken_0x22c364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c364) {
            ctx->pc = 0x22C378u;
            goto label_22c378;
        }
    }
    ctx->pc = 0x22C36Cu;
label_22c36c:
    // 0x22c36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c370: 0xc09aa8c  jal         func_26AA30
    ctx->pc = 0x22C370u;
    SET_GPR_U32(ctx, 31, 0x22C378u);
    ctx->pc = 0x22C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C370u;
    // 0x22c374: 0x2405036b  addiu       $a1, $zero, 0x36B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 875));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AA30u, 0x22C370u, 0x22C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C378u;
label_22c378:
    // 0x22c378: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22C378u;
    {
        const bool branch_taken_0x22c378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C378u;
        // 0x22c37c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c378) {
            ctx->pc = 0x22C3A0u;
            goto label_22c3a0;
        }
    }
    ctx->pc = 0x22C380u;
    // 0x22c380: 0xc09af74  jal         func_26BDD0
    ctx->pc = 0x22C380u;
    SET_GPR_U32(ctx, 31, 0x22C388u);
    ctx->pc = 0x22C384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C380u;
    // 0x22c384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BDD0u, 0x22C380u, 0x22C388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C388u;
label_22c388:
    // 0x22c388: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x22c388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x22c38c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x22c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x22c390: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22c390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22c394: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22C394u;
    {
        const bool branch_taken_0x22c394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C394u;
        // 0x22c398: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c394) {
            ctx->pc = 0x22C3A0u;
            goto label_22c3a0;
        }
    }
    ctx->pc = 0x22C39Cu;
label_22c39c:
    // 0x22c39c: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x22c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
label_22c3a0:
    // 0x22c3a0: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x22c3a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x22c3a4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22c3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x22c3a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22C3A8u;
    {
        const bool branch_taken_0x22c3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3A8u;
        // 0x22c3ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c3a8) {
            ctx->pc = 0x22C3B4u;
            goto label_22c3b4;
        }
    }
    ctx->pc = 0x22C3B0u;
    // 0x22c3b0: 0xae0205fc  sw          $v0, 0x5FC($s0)
    ctx->pc = 0x22c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 2));
label_22c3b4:
    // 0x22c3b4: 0x8e0205fc  lw          $v0, 0x5FC($s0)
    ctx->pc = 0x22c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1532)));
    // 0x22c3b8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22C3B8u;
    {
        const bool branch_taken_0x22c3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c3b8) {
            ctx->pc = 0x22C3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C3B8u;
            // 0x22c3bc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C3D8u;
            goto label_22c3d8;
        }
    }
    ctx->pc = 0x22C3C0u;
    // 0x22c3c0: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x22c3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x22c3c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22c3c8: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x22c3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x22c3cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x22c3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22c3d0: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x22c3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x22c3d4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22c3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22c3d8:
    // 0x22c3d8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22c3d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c3dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22c3dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c3e0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22c3e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c3e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c3e8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x22c3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22c3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x22C3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3ECu;
        // 0x22c3f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C3F4u;
    // 0x22c3f4: 0x0  nop
    ctx->pc = 0x22c3f4u;
    // NOP
    ctx->pc = 0x22c3f8u;
}
