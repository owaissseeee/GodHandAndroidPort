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

// Function: cEm00_stepCircleTargetTurn
// Address: 0x242388 - 0x2426a0
void cEm00_stepCircleTargetTurn_0x242388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepCircleTargetTurn_0x242388");
#endif

    switch (ctx->pc) {
        case 0x2423e4u: goto label_2423e4;
        case 0x242410u: goto label_242410;
        case 0x242430u: goto label_242430;
        case 0x242450u: goto label_242450;
        case 0x242470u: goto label_242470;
        case 0x242500u: goto label_242500;
        case 0x242550u: goto label_242550;
        case 0x242560u: goto label_242560;
        case 0x242594u: goto label_242594;
        case 0x2425a8u: goto label_2425a8;
        case 0x2425c8u: goto label_2425c8;
        case 0x2425e8u: goto label_2425e8;
        case 0x242618u: goto label_242618;
        case 0x242630u: goto label_242630;
        case 0x242664u: goto label_242664;
        case 0x24267cu: goto label_24267c;
        default: break;
    }

    ctx->pc = 0x242388u;

    // 0x242388: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x242388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24238c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x24238cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x242390: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x242390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x242394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x242394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24239c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x24239cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2423a0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2423a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2423a4: 0x10710020  beq         $v1, $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2423A4u;
    {
        const bool branch_taken_0x2423a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2423A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423A4u;
        // 0x2423a8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2423a4) {
            ctx->pc = 0x242428u;
            goto label_242428;
        }
    }
    ctx->pc = 0x2423ACu;
    // 0x2423ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2423ACu;
    {
        const bool branch_taken_0x2423ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2423B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423ACu;
        // 0x2423b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2423ac) {
            ctx->pc = 0x2423C4u;
            goto label_2423c4;
        }
    }
    ctx->pc = 0x2423B4u;
    // 0x2423b4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2423B4u;
    {
        const bool branch_taken_0x2423b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2423b4) {
            ctx->pc = 0x2423DCu;
            goto label_2423dc;
        }
    }
    ctx->pc = 0x2423BCu;
    // 0x2423bc: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x2423BCu;
    {
        const bool branch_taken_0x2423bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2423C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423BCu;
        // 0x2423c0: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2423bc) {
            ctx->pc = 0x2425F4u;
            goto label_2425f4;
        }
    }
    ctx->pc = 0x2423C4u;
label_2423c4:
    // 0x2423c4: 0x10620064  beq         $v1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2423C4u;
    {
        const bool branch_taken_0x2423c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2423C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423C4u;
        // 0x2423c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2423c4) {
            ctx->pc = 0x242558u;
            goto label_242558;
        }
    }
    ctx->pc = 0x2423CCu;
    // 0x2423cc: 0x10620074  beq         $v1, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x2423CCu;
    {
        const bool branch_taken_0x2423cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2423cc) {
            ctx->pc = 0x2425A0u;
            goto label_2425a0;
        }
    }
    ctx->pc = 0x2423D4u;
    // 0x2423d4: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x2423D4u;
    {
        const bool branch_taken_0x2423d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2423D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423D4u;
        // 0x2423d8: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2423d4) {
            ctx->pc = 0x2425F4u;
            goto label_2425f4;
        }
    }
    ctx->pc = 0x2423DCu;
label_2423dc:
    // 0x2423dc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2423DCu;
    SET_GPR_U32(ctx, 31, 0x2423E4u);
    ctx->pc = 0x2423E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2423DCu;
    // 0x2423e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2423DCu, 0x2423E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2423E4u;
label_2423e4:
    // 0x2423e4: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2423e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2423e8: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2423e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2423ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2423ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2423f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2423f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2423f4: 0x8c651560  lw          $a1, 0x1560($v1)
    ctx->pc = 0x2423f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5472)));
    // 0x2423f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2423f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2423fc: 0x8c661564  lw          $a2, 0x1564($v1)
    ctx->pc = 0x2423fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5476)));
    // 0x242400: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x242400u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242404: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x242404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x242408: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x242408u;
    SET_GPR_U32(ctx, 31, 0x242410u);
    ctx->pc = 0x24240Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242408u;
    // 0x24240c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x242408u, 0x242410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242410u;
label_242410:
    // 0x242410: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x242410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x242414: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x242414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x242418: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24241c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24241cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x242420: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x242420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x242424: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x242424u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_242428:
    // 0x242428: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x242428u;
    SET_GPR_U32(ctx, 31, 0x242430u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x242428u, 0x242430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242430u;
label_242430:
    // 0x242430: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x242430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242438: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x242438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x24243c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24243cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x242440: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x242440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x242444: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x242444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x242448: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x242448u;
    SET_GPR_U32(ctx, 31, 0x242450u);
    ctx->pc = 0x24244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242448u;
    // 0x24244c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x242448u, 0x242450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242450u;
label_242450:
    // 0x242450: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x242450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x242454: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x242454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x242458: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x242458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x24245c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24245cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242460: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x242460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x242464: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x242464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x242468: 0xc055f06  jal         func_157C18
    ctx->pc = 0x242468u;
    SET_GPR_U32(ctx, 31, 0x242470u);
    ctx->pc = 0x24246Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242468u;
    // 0x24246c: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x242468u, 0x242470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242470u;
label_242470:
    // 0x242470: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x242470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242474: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x242474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242478: 0x0  nop
    ctx->pc = 0x242478u;
    // NOP
    // 0x24247c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24247cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242480: 0x0  nop
    ctx->pc = 0x242480u;
    // NOP
    // 0x242484: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x242484u;
    {
        const bool branch_taken_0x242484 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242484) {
            ctx->pc = 0x242488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242484u;
            // 0x242488: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24249Cu;
            goto label_24249c;
        }
    }
    ctx->pc = 0x24248Cu;
    // 0x24248c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x24248cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242490: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x242490u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x242494: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x242494u;
    {
        const bool branch_taken_0x242494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242494u;
        // 0x242498: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x242494) {
            ctx->pc = 0x2424C4u;
            goto label_2424c4;
        }
    }
    ctx->pc = 0x24249Cu;
label_24249c:
    // 0x24249c: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x24249cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x2424a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2424a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2424a4: 0x0  nop
    ctx->pc = 0x2424a4u;
    // NOP
    // 0x2424a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2424a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2424ac: 0x0  nop
    ctx->pc = 0x2424acu;
    // NOP
    // 0x2424b0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2424B0u;
    {
        const bool branch_taken_0x2424b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2424B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424B0u;
        // 0x2424b4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2424b0) {
            ctx->pc = 0x2424C8u;
            goto label_2424c8;
        }
    }
    ctx->pc = 0x2424B8u;
    // 0x2424b8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2424b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2424bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2424bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2424c0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2424c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2424c4:
    // 0x2424c4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2424c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2424c8:
    // 0x2424c8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2424c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2424cc: 0x90437a51  lbu         $v1, 0x7A51($v0)
    ctx->pc = 0x2424ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 31313)));
    // 0x2424d0: 0x54640048  bnel        $v1, $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2424D0u;
    {
        const bool branch_taken_0x2424d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2424d0) {
            ctx->pc = 0x2424D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2424D0u;
            // 0x2424d4: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2425F4u;
            goto label_2425f4;
        }
    }
    ctx->pc = 0x2424D8u;
    // 0x2424d8: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x2424d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2424dc: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x2424dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x2424e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2424e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2424e4: 0x0  nop
    ctx->pc = 0x2424e4u;
    // NOP
    // 0x2424e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2424e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2424ec: 0x0  nop
    ctx->pc = 0x2424ecu;
    // NOP
    // 0x2424f0: 0x45020040  bc1fl       . + 4 + (0x40 << 2)
    ctx->pc = 0x2424F0u;
    {
        const bool branch_taken_0x2424f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2424f0) {
            ctx->pc = 0x2424F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2424F0u;
            // 0x2424f4: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2425F4u;
            goto label_2425f4;
        }
    }
    ctx->pc = 0x2424F8u;
    // 0x2424f8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2424F8u;
    SET_GPR_U32(ctx, 31, 0x242500u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2424F8u, 0x242500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242500u;
label_242500:
    // 0x242500: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x242500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x242504: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x242504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x242508: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x242508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24250c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24250cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242510: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x242510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x242514: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x242514u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x242518: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x242518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24251c: 0x0  nop
    ctx->pc = 0x24251cu;
    // NOP
    // 0x242520: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x242520u;
    {
        const bool branch_taken_0x242520 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x242524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242520u;
        // 0x242524: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242520) {
            ctx->pc = 0x24252Cu;
            goto label_24252c;
        }
    }
    ctx->pc = 0x242528u;
    // 0x242528: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x242528u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
label_24252c:
    // 0x24252c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x24252cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x242530: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242534: 0x0  nop
    ctx->pc = 0x242534u;
    // NOP
    // 0x242538: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x242538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24253c: 0x0  nop
    ctx->pc = 0x24253cu;
    // NOP
    // 0x242540: 0x4502002c  bc1fl       . + 4 + (0x2C << 2)
    ctx->pc = 0x242540u;
    {
        const bool branch_taken_0x242540 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242540) {
            ctx->pc = 0x242544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242540u;
            // 0x242544: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2425F4u;
            goto label_2425f4;
        }
    }
    ctx->pc = 0x242548u;
    // 0x242548: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x242548u;
    SET_GPR_U32(ctx, 31, 0x242550u);
    ctx->pc = 0x24254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242548u;
    // 0x24254c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x242548u, 0x242550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242550u;
label_242550:
    // 0x242550: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x242550u;
    {
        const bool branch_taken_0x242550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242550u;
        // 0x242554: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242550) {
            ctx->pc = 0x2425F4u;
            goto label_2425f4;
        }
    }
    ctx->pc = 0x242558u;
label_242558:
    // 0x242558: 0xc09d91a  jal         func_276468
    ctx->pc = 0x242558u;
    SET_GPR_U32(ctx, 31, 0x242560u);
    ctx->pc = 0x24255Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242558u;
    // 0x24255c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x242558u, 0x242560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242560u;
label_242560:
    // 0x242560: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x242560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x242564: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x242564u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x242568: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x242568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24256c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24256cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242570: 0x8c651678  lw          $a1, 0x1678($v1)
    ctx->pc = 0x242570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5752)));
    // 0x242574: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x242574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242578: 0x8c66167c  lw          $a2, 0x167C($v1)
    ctx->pc = 0x242578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5756)));
    // 0x24257c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24257cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242580: 0xae1105fc  sw          $s1, 0x5FC($s0)
    ctx->pc = 0x242580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 17));
    // 0x242584: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x242584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x242588: 0xae1105f8  sw          $s1, 0x5F8($s0)
    ctx->pc = 0x242588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1528), GPR_U32(ctx, 17));
    // 0x24258c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24258Cu;
    SET_GPR_U32(ctx, 31, 0x242594u);
    ctx->pc = 0x242590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24258Cu;
    // 0x242590: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24258Cu, 0x242594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242594u;
label_242594:
    // 0x242594: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x242594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x242598: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x242598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24259c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x24259cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2425a0:
    // 0x2425a0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2425A0u;
    SET_GPR_U32(ctx, 31, 0x2425A8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2425A0u, 0x2425A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2425A8u;
label_2425a8:
    // 0x2425a8: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2425a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2425ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2425acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2425b0: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x2425b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x2425b4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2425b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2425b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2425b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2425bc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2425bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2425c0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2425C0u;
    SET_GPR_U32(ctx, 31, 0x2425C8u);
    ctx->pc = 0x2425C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2425C0u;
    // 0x2425c4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2425C0u, 0x2425C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2425C8u;
label_2425c8:
    // 0x2425c8: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x2425c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x2425cc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2425ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2425d0: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2425d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2425d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2425d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2425d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2425d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2425dc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2425dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2425e0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2425E0u;
    SET_GPR_U32(ctx, 31, 0x2425E8u);
    ctx->pc = 0x2425E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2425E0u;
    // 0x2425e4: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2425E0u, 0x2425E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2425E8u;
label_2425e8:
    // 0x2425e8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2425E8u;
    {
        const bool branch_taken_0x2425e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2425e8) {
            ctx->pc = 0x2425ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2425E8u;
            // 0x2425ec: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2425F0u;
            goto label_2425f0;
        }
    }
    ctx->pc = 0x2425F0u;
label_2425f0:
    // 0x2425f0: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x2425f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_2425f4:
    // 0x2425f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2425f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2425f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2425F8u;
    {
        const bool branch_taken_0x2425f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2425FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2425F8u;
        // 0x2425fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2425f8) {
            ctx->pc = 0x242638u;
            goto label_242638;
        }
    }
    ctx->pc = 0x242600u;
    // 0x242600: 0x8e0205f8  lw          $v0, 0x5F8($s0)
    ctx->pc = 0x242600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1528)));
    // 0x242604: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x242604u;
    {
        const bool branch_taken_0x242604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242604u;
        // 0x242608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242604) {
            ctx->pc = 0x24263Cu;
            goto label_24263c;
        }
    }
    ctx->pc = 0x24260Cu;
    // 0x24260c: 0xae0005f8  sw          $zero, 0x5F8($s0)
    ctx->pc = 0x24260cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1528), GPR_U32(ctx, 0));
    // 0x242610: 0xc09aa8c  jal         func_26AA30
    ctx->pc = 0x242610u;
    SET_GPR_U32(ctx, 31, 0x242618u);
    ctx->pc = 0x242614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242610u;
    // 0x242614: 0x24050365  addiu       $a1, $zero, 0x365 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 869));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AA30u, 0x242610u, 0x242618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242618u;
label_242618:
    // 0x242618: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x242618u;
    {
        const bool branch_taken_0x242618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242618u;
        // 0x24261c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242618) {
            ctx->pc = 0x24263Cu;
            goto label_24263c;
        }
    }
    ctx->pc = 0x242620u;
    // 0x242620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242624: 0x24060365  addiu       $a2, $zero, 0x365
    ctx->pc = 0x242624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 869));
    // 0x242628: 0xc09ac90  jal         func_26B240
    ctx->pc = 0x242628u;
    SET_GPR_U32(ctx, 31, 0x242630u);
    ctx->pc = 0x24262Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242628u;
    // 0x24262c: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B240u, 0x242628u, 0x242630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242630u;
label_242630:
    // 0x242630: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x242630u;
    {
        const bool branch_taken_0x242630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242630u;
        // 0x242634: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242630) {
            ctx->pc = 0x242640u;
            goto label_242640;
        }
    }
    ctx->pc = 0x242638u;
label_242638:
    // 0x242638: 0xae0205f8  sw          $v0, 0x5F8($s0)
    ctx->pc = 0x242638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1528), GPR_U32(ctx, 2));
label_24263c:
    // 0x24263c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x24263cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_242640:
    // 0x242640: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x242640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x242644: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x242644u;
    {
        const bool branch_taken_0x242644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242644u;
        // 0x242648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242644) {
            ctx->pc = 0x242684u;
            goto label_242684;
        }
    }
    ctx->pc = 0x24264Cu;
    // 0x24264c: 0x8e0205fc  lw          $v0, 0x5FC($s0)
    ctx->pc = 0x24264cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1532)));
    // 0x242650: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x242650u;
    {
        const bool branch_taken_0x242650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242650u;
        // 0x242654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242650) {
            ctx->pc = 0x242688u;
            goto label_242688;
        }
    }
    ctx->pc = 0x242658u;
    // 0x242658: 0xae0005fc  sw          $zero, 0x5FC($s0)
    ctx->pc = 0x242658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 0));
    // 0x24265c: 0xc09aa8c  jal         func_26AA30
    ctx->pc = 0x24265Cu;
    SET_GPR_U32(ctx, 31, 0x242664u);
    ctx->pc = 0x242660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24265Cu;
    // 0x242660: 0x24050365  addiu       $a1, $zero, 0x365 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 869));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AA30u, 0x24265Cu, 0x242664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242664u;
label_242664:
    // 0x242664: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x242664u;
    {
        const bool branch_taken_0x242664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242664u;
        // 0x242668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242664) {
            ctx->pc = 0x242688u;
            goto label_242688;
        }
    }
    ctx->pc = 0x24266Cu;
    // 0x24266c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24266cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242670: 0x24060365  addiu       $a2, $zero, 0x365
    ctx->pc = 0x242670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 869));
    // 0x242674: 0xc09ac90  jal         func_26B240
    ctx->pc = 0x242674u;
    SET_GPR_U32(ctx, 31, 0x24267Cu);
    ctx->pc = 0x242678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242674u;
    // 0x242678: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B240u, 0x242674u, 0x24267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24267Cu;
label_24267c:
    // 0x24267c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24267Cu;
    {
        const bool branch_taken_0x24267c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24267Cu;
        // 0x242680: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24267c) {
            ctx->pc = 0x24268Cu;
            goto label_24268c;
        }
    }
    ctx->pc = 0x242684u;
label_242684:
    // 0x242684: 0xae0205fc  sw          $v0, 0x5FC($s0)
    ctx->pc = 0x242684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 2));
label_242688:
    // 0x242688: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x242688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24268c:
    // 0x24268c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24268cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242694: 0x3e00008  jr          $ra
    ctx->pc = 0x242694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242694u;
        // 0x242698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24269Cu;
    // 0x24269c: 0x0  nop
    ctx->pc = 0x24269cu;
    // NOP
    ctx->pc = 0x2426a0u;
}
