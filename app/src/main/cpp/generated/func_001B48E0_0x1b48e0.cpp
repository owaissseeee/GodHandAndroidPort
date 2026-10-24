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

// Function: func_001B48E0
// Address: 0x1b48e0 - 0x1b4a18
void func_001B48E0_0x1b48e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B48E0_0x1b48e0");
#endif

    switch (ctx->pc) {
        case 0x1b4954u: goto label_1b4954;
        case 0x1b4988u: goto label_1b4988;
        case 0x1b49dcu: goto label_1b49dc;
        default: break;
    }

    ctx->pc = 0x1b48e0u;

    // 0x1b48e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b48e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b48e4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b48e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1b48e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b48e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b48ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b48ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b48f0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1b48f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1b48f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b48f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b48f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b48f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b48fc: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x1b48fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    // 0x1b4900: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b4904: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1b4904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1b4908: 0x1064002b  beq         $v1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1B4908u;
    {
        const bool branch_taken_0x1b4908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4908u;
        // 0x1b490c: 0x3c130074  lui         $s3, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4908) {
            ctx->pc = 0x1B49B8u;
            goto label_1b49b8;
        }
    }
    ctx->pc = 0x1B4910u;
    // 0x1b4910: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1b4910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b4914: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4914u;
    {
        const bool branch_taken_0x1b4914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4914u;
        // 0x1b4918: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4914) {
            ctx->pc = 0x1B492Cu;
            goto label_1b492c;
        }
    }
    ctx->pc = 0x1B491Cu;
    // 0x1b491c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B491Cu;
    {
        const bool branch_taken_0x1b491c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b491c) {
            ctx->pc = 0x1B4920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B491Cu;
            // 0x1b4920: 0xa20402f6  sb          $a0, 0x2F6($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4944u;
            goto label_1b4944;
        }
    }
    ctx->pc = 0x1B4924u;
    // 0x1b4924: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1B4924u;
    {
        const bool branch_taken_0x1b4924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4924u;
        // 0x1b4928: 0x920202b4  lbu         $v0, 0x2B4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4924) {
            ctx->pc = 0x1B49BCu;
            goto label_1b49bc;
        }
    }
    ctx->pc = 0x1B492Cu;
label_1b492c:
    // 0x1b492c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B492Cu;
    {
        const bool branch_taken_0x1b492c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B492Cu;
        // 0x1b4930: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b492c) {
            ctx->pc = 0x1B494Cu;
            goto label_1b494c;
        }
    }
    ctx->pc = 0x1B4934u;
    // 0x1b4934: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B4934u;
    {
        const bool branch_taken_0x1b4934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4934) {
            ctx->pc = 0x1B4980u;
            goto label_1b4980;
        }
    }
    ctx->pc = 0x1B493Cu;
    // 0x1b493c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1B493Cu;
    {
        const bool branch_taken_0x1b493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B493Cu;
        // 0x1b4940: 0x920202b4  lbu         $v0, 0x2B4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b493c) {
            ctx->pc = 0x1B49BCu;
            goto label_1b49bc;
        }
    }
    ctx->pc = 0x1B4944u;
label_1b4944:
    // 0x1b4944: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1B4944u;
    {
        const bool branch_taken_0x1b4944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4944u;
        // 0x1b4948: 0xae000620  sw          $zero, 0x620($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4944) {
            ctx->pc = 0x1B49B8u;
            goto label_1b49b8;
        }
    }
    ctx->pc = 0x1B494Cu;
label_1b494c:
    // 0x1b494c: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1B494Cu;
    SET_GPR_U32(ctx, 31, 0x1B4954u);
    ctx->pc = 0x1B4950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B494Cu;
    // 0x1b4950: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1B494Cu, 0x1B4954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4954u;
label_1b4954:
    // 0x1b4954: 0xc6010624  lwc1        $f1, 0x624($s0)
    ctx->pc = 0x1b4954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4958: 0x266274a0  addiu       $v0, $s3, 0x74A0
    ctx->pc = 0x1b4958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
    // 0x1b495c: 0xc4420574  lwc1        $f2, 0x574($v0)
    ctx->pc = 0x1b495cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4960: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b4960u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4964: 0xc603061c  lwc1        $f3, 0x61C($s0)
    ctx->pc = 0x1b4964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b4968: 0xc6000620  lwc1        $f0, 0x620($s0)
    ctx->pc = 0x1b4968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b496c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b496cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b4970: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b4970u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b4974: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1b4974u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4978: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B4978u;
    {
        const bool branch_taken_0x1b4978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4978u;
        // 0x1b497c: 0xe6000620  swc1        $f0, 0x620($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4978) {
            ctx->pc = 0x1B49B0u;
            goto label_1b49b0;
        }
    }
    ctx->pc = 0x1B4980u;
label_1b4980:
    // 0x1b4980: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1B4980u;
    SET_GPR_U32(ctx, 31, 0x1B4988u);
    ctx->pc = 0x1B4984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4980u;
    // 0x1b4984: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1B4980u, 0x1B4988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4988u;
label_1b4988:
    // 0x1b4988: 0xc6010628  lwc1        $f1, 0x628($s0)
    ctx->pc = 0x1b4988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b498c: 0x266274a0  addiu       $v0, $s3, 0x74A0
    ctx->pc = 0x1b498cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
    // 0x1b4990: 0xc4420574  lwc1        $f2, 0x574($v0)
    ctx->pc = 0x1b4990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4994: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b4994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4998: 0xc6000620  lwc1        $f0, 0x620($s0)
    ctx->pc = 0x1b4998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b499c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1b499cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b49a0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b49a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b49a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b49a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b49a8: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1b49a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b49ac: 0xe6000620  swc1        $f0, 0x620($s0)
    ctx->pc = 0x1b49acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
label_1b49b0:
    // 0x1b49b0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B49B0u;
    {
        const bool branch_taken_0x1b49b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b49b0) {
            ctx->pc = 0x1B49B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B49B0u;
            // 0x1b49b4: 0xe6030620  swc1        $f3, 0x620($s0) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B49B8u;
            goto label_1b49b8;
        }
    }
    ctx->pc = 0x1B49B8u;
label_1b49b8:
    // 0x1b49b8: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1b49b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1b49bc:
    // 0x1b49bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B49BCu;
    {
        const bool branch_taken_0x1b49bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B49C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B49BCu;
        // 0x1b49c0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b49bc) {
            ctx->pc = 0x1B49D0u;
            goto label_1b49d0;
        }
    }
    ctx->pc = 0x1B49C4u;
    // 0x1b49c4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1b49c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1b49c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B49C8u;
    {
        const bool branch_taken_0x1b49c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B49CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B49C8u;
        // 0x1b49cc: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b49c8) {
            ctx->pc = 0x1B49D4u;
            goto label_1b49d4;
        }
    }
    ctx->pc = 0x1B49D0u;
label_1b49d0:
    // 0x1b49d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b49d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b49d4:
    // 0x1b49d4: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1B49D4u;
    SET_GPR_U32(ctx, 31, 0x1B49DCu);
    ctx->pc = 0x1B49D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B49D4u;
    // 0x1b49d8: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1B49D4u, 0x1B49DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B49DCu;
label_1b49dc:
    // 0x1b49dc: 0xc6010620  lwc1        $f1, 0x620($s0)
    ctx->pc = 0x1b49dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b49e0: 0x266274a0  addiu       $v0, $s3, 0x74A0
    ctx->pc = 0x1b49e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 29856));
    // 0x1b49e4: 0xc4420574  lwc1        $f2, 0x574($v0)
    ctx->pc = 0x1b49e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b49e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b49e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b49ec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b49ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b49f0: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x1b49f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b49f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b49f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b49f8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b49f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b49fc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1b49fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4a00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4a04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b4a04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b4a08: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x1b4a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x1b4a0c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b4a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b4a10: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A10u;
        // 0x1b4a14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4A18u;
}
