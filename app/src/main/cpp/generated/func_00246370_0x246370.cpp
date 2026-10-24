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

// Function: func_00246370
// Address: 0x246370 - 0x2464e0
void func_00246370_0x246370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00246370_0x246370");
#endif

    switch (ctx->pc) {
        case 0x2463e4u: goto label_2463e4;
        case 0x246404u: goto label_246404;
        case 0x246458u: goto label_246458;
        case 0x246478u: goto label_246478;
        case 0x246480u: goto label_246480;
        case 0x2464a0u: goto label_2464a0;
        case 0x2464b4u: goto label_2464b4;
        case 0x2464c0u: goto label_2464c0;
        default: break;
    }

    ctx->pc = 0x246370u;

    // 0x246370: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x246370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x246374: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x246374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x246378: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x246378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24637c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24637cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246380: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x246380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x246384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x246384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x246388: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x246388u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24638c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x24638cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x246390: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x246390u;
    {
        const bool branch_taken_0x246390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246390u;
        // 0x246394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246390) {
            ctx->pc = 0x2463A8u;
            goto label_2463a8;
        }
    }
    ctx->pc = 0x246398u;
    // 0x246398: 0x50620021  beql        $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x246398u;
    {
        const bool branch_taken_0x246398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x246398) {
            ctx->pc = 0x24639Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246398u;
            // 0x24639c: 0xc6010600  lwc1        $f1, 0x600($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x246420u;
            goto label_246420;
        }
    }
    ctx->pc = 0x2463A0u;
    // 0x2463a0: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2463A0u;
    {
        const bool branch_taken_0x2463a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2463A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463A0u;
        // 0x2463a4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463a0) {
            ctx->pc = 0x2464C4u;
            goto label_2464c4;
        }
    }
    ctx->pc = 0x2463A8u;
label_2463a8:
    // 0x2463a8: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x2463a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x2463ac: 0x24020256  addiu       $v0, $zero, 0x256
    ctx->pc = 0x2463acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x2463b0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2463B0u;
    {
        const bool branch_taken_0x2463b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2463B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463B0u;
        // 0x2463b4: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463b0) {
            ctx->pc = 0x2463C8u;
            goto label_2463c8;
        }
    }
    ctx->pc = 0x2463B8u;
    // 0x2463b8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2463b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2463bc: 0x8c432b84  lw          $v1, 0x2B84($v0)
    ctx->pc = 0x2463bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11140)));
    // 0x2463c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2463C0u;
    {
        const bool branch_taken_0x2463c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2463C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2463C0u;
        // 0x2463c4: 0x8c442b88  lw          $a0, 0x2B88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2463c0) {
            ctx->pc = 0x2463D4u;
            goto label_2463d4;
        }
    }
    ctx->pc = 0x2463C8u;
label_2463c8:
    // 0x2463c8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2463c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2463cc: 0x8c432c38  lw          $v1, 0x2C38($v0)
    ctx->pc = 0x2463ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11320)));
    // 0x2463d0: 0x8c442c3c  lw          $a0, 0x2C3C($v0)
    ctx->pc = 0x2463d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11324)));
label_2463d4:
    // 0x2463d4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2463d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2463d8: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x2463d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2463dc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2463DCu;
    SET_GPR_U32(ctx, 31, 0x2463E4u);
    ctx->pc = 0x2463E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2463DCu;
    // 0x2463e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2463DCu, 0x2463E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2463E4u;
label_2463e4:
    // 0x2463e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2463e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2463e8: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2463e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2463ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2463ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2463f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2463f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2463f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2463f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2463f8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2463f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2463fc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2463FCu;
    SET_GPR_U32(ctx, 31, 0x246404u);
    ctx->pc = 0x246400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2463FCu;
    // 0x246400: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2463FCu, 0x246404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246404u;
label_246404:
    // 0x246404: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x246404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x246408: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x246408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x24640c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24640cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246410: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x246410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x246414: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x246414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x246418: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x246418u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x24641c: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x24641cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246420:
    // 0x246420: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246424: 0x0  nop
    ctx->pc = 0x246424u;
    // NOP
    // 0x246428: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x246428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24642c: 0x0  nop
    ctx->pc = 0x24642cu;
    // NOP
    // 0x246430: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x246430u;
    {
        const bool branch_taken_0x246430 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x246434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246430u;
        // 0x246434: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246430) {
            ctx->pc = 0x246450u;
            goto label_246450;
        }
    }
    ctx->pc = 0x246438u;
    // 0x246438: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x246438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24643c: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x24643cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x246440: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x246440u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x246444: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x246444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x246448: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x246448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x24644c: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x24644cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_246450:
    // 0x246450: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x246450u;
    SET_GPR_U32(ctx, 31, 0x246458u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x246450u, 0x246458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246458u;
label_246458:
    // 0x246458: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x246458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24645c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24645cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246460: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x246460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x246464: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x246464u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x246468: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x246468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24646c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x24646cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x246470: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x246470u;
    SET_GPR_U32(ctx, 31, 0x246478u);
    ctx->pc = 0x246474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246470u;
    // 0x246474: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x246470u, 0x246478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246478u;
label_246478:
    // 0x246478: 0xc055f06  jal         func_157C18
    ctx->pc = 0x246478u;
    SET_GPR_U32(ctx, 31, 0x246480u);
    ctx->pc = 0x24647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246478u;
    // 0x24647c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x246478u, 0x246480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246480u;
label_246480:
    // 0x246480: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x246480u;
    {
        const bool branch_taken_0x246480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246480) {
            ctx->pc = 0x246498u;
            goto label_246498;
        }
    }
    ctx->pc = 0x246488u;
    // 0x246488: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x246488u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x24648c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x24648cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x246490: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246490u;
    {
        const bool branch_taken_0x246490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246490) {
            ctx->pc = 0x2464A0u;
            goto label_2464a0;
        }
    }
    ctx->pc = 0x246498u;
label_246498:
    // 0x246498: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x246498u;
    SET_GPR_U32(ctx, 31, 0x2464A0u);
    ctx->pc = 0x24649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246498u;
    // 0x24649c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x246498u, 0x2464A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464A0u;
label_2464a0:
    // 0x2464a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2464a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2464a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2464a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2464a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2464a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2464ac: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2464ACu;
    SET_GPR_U32(ctx, 31, 0x2464B4u);
    ctx->pc = 0x2464B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2464ACu;
    // 0x2464b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2464ACu, 0x2464B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464B4u;
label_2464b4:
    // 0x2464b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2464b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2464b8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2464B8u;
    SET_GPR_U32(ctx, 31, 0x2464C0u);
    ctx->pc = 0x2464BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2464B8u;
    // 0x2464bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2464B8u, 0x2464C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464C0u;
label_2464c0:
    // 0x2464c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2464c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2464c4:
    // 0x2464c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2464c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2464c8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2464c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2464cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2464ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2464d0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2464d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2464d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2464D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2464D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2464D4u;
        // 0x2464d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2464D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2464DCu;
    // 0x2464dc: 0x0  nop
    ctx->pc = 0x2464dcu;
    // NOP
    ctx->pc = 0x2464e0u;
}
