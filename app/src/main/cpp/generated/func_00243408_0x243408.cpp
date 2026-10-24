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

// Function: func_00243408
// Address: 0x243408 - 0x2439a0
void func_00243408_0x243408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00243408_0x243408");
#endif

    switch (ctx->pc) {
        case 0x243430u: goto label_243430;
        case 0x243474u: goto label_243474;
        case 0x2434a0u: goto label_2434a0;
        case 0x2434c0u: goto label_2434c0;
        case 0x2434e0u: goto label_2434e0;
        case 0x2434e8u: goto label_2434e8;
        case 0x243510u: goto label_243510;
        case 0x24351cu: goto label_24351c;
        case 0x243544u: goto label_243544;
        case 0x243554u: goto label_243554;
        case 0x243580u: goto label_243580;
        case 0x2435a4u: goto label_2435a4;
        case 0x2435d0u: goto label_2435d0;
        case 0x2435ecu: goto label_2435ec;
        case 0x24360cu: goto label_24360c;
        case 0x243614u: goto label_243614;
        case 0x243650u: goto label_243650;
        case 0x24365cu: goto label_24365c;
        case 0x243688u: goto label_243688;
        case 0x2436b4u: goto label_2436b4;
        case 0x2436d4u: goto label_2436d4;
        case 0x2436fcu: goto label_2436fc;
        case 0x243704u: goto label_243704;
        case 0x243710u: goto label_243710;
        case 0x24371cu: goto label_24371c;
        case 0x243754u: goto label_243754;
        case 0x243780u: goto label_243780;
        case 0x24379cu: goto label_24379c;
        case 0x2437bcu: goto label_2437bc;
        case 0x2437c4u: goto label_2437c4;
        case 0x2437ecu: goto label_2437ec;
        case 0x2437f8u: goto label_2437f8;
        case 0x24382cu: goto label_24382c;
        case 0x24384cu: goto label_24384c;
        case 0x243864u: goto label_243864;
        case 0x243890u: goto label_243890;
        case 0x2438b0u: goto label_2438b0;
        case 0x2438d8u: goto label_2438d8;
        case 0x2438e0u: goto label_2438e0;
        case 0x2438ecu: goto label_2438ec;
        case 0x2438f8u: goto label_2438f8;
        case 0x243934u: goto label_243934;
        case 0x243970u: goto label_243970;
        default: break;
    }

    ctx->pc = 0x243408u;

    // 0x243408: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24340c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24340cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243410: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x243410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x243414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x243414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24341c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x24341cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x243420: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x243420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243424: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x243424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x243428: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x243428u;
    SET_GPR_U32(ctx, 31, 0x243430u);
    ctx->pc = 0x24342Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243428u;
    // 0x24342c: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x243428u, 0x243430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243430u;
label_243430:
    // 0x243430: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x243430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x243434: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x243434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x243438: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x243438u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24343c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24343cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x243440: 0x2ca4000c  sltiu       $a0, $a1, 0xC
    ctx->pc = 0x243440u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x243444: 0x10800139  beqz        $a0, . + 4 + (0x139 << 2)
    ctx->pc = 0x243444u;
    {
        const bool branch_taken_0x243444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x243448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243444u;
        // 0x243448: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243444) {
            ctx->pc = 0x24392Cu;
            goto label_24392c;
        }
    }
    ctx->pc = 0x24344Cu;
    // 0x24344c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x24344cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x243450: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x243450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x243454: 0x2442c8b0  addiu       $v0, $v0, -0x3750
    ctx->pc = 0x243454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953136));
    // 0x243458: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x243458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24345c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24345cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x243460: 0x800008  jr          $a0
    ctx->pc = 0x243460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x243468u: goto label_243468;
            case 0x2434B8u: goto label_2434b8;
            case 0x24354Cu: goto label_24354c;
            case 0x24359Cu: goto label_24359c;
            case 0x2435E4u: goto label_2435e4;
            case 0x243680u: goto label_243680;
            case 0x2436CCu: goto label_2436cc;
            case 0x24374Cu: goto label_24374c;
            case 0x243794u: goto label_243794;
            case 0x24385Cu: goto label_24385c;
            case 0x2438A8u: goto label_2438a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243460u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x243468u;
label_243468:
    // 0x243468: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x243468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24346c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24346Cu;
    SET_GPR_U32(ctx, 31, 0x243474u);
    ctx->pc = 0x243470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24346Cu;
    // 0x243470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24346Cu, 0x243474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243474u;
label_243474:
    // 0x243474: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x243474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x243478: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x243478u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24347c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24347cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243480: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x243480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x243484: 0x8c652474  lw          $a1, 0x2474($v1)
    ctx->pc = 0x243484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9332)));
    // 0x243488: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x243488u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24348c: 0x8c662478  lw          $a2, 0x2478($v1)
    ctx->pc = 0x24348cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9336)));
    // 0x243490: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x243490u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243494: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x243494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x243498: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x243498u;
    SET_GPR_U32(ctx, 31, 0x2434A0u);
    ctx->pc = 0x24349Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243498u;
    // 0x24349c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x243498u, 0x2434A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2434A0u;
label_2434a0:
    // 0x2434a0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2434a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2434a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2434a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2434a8: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x2434a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x2434ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2434acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2434b0: 0xe614060c  swc1        $f20, 0x60C($s0)
    ctx->pc = 0x2434b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1548), bits); }
    // 0x2434b4: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x2434b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_2434b8:
    // 0x2434b8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2434B8u;
    SET_GPR_U32(ctx, 31, 0x2434C0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2434B8u, 0x2434C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2434C0u;
label_2434c0:
    // 0x2434c0: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2434c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2434c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2434c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2434c8: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x2434c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x2434cc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2434ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2434d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2434d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2434d4: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2434d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2434d8: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2434D8u;
    SET_GPR_U32(ctx, 31, 0x2434E0u);
    ctx->pc = 0x2434DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2434D8u;
    // 0x2434dc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2434D8u, 0x2434E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2434E0u;
label_2434e0:
    // 0x2434e0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2434E0u;
    SET_GPR_U32(ctx, 31, 0x2434E8u);
    ctx->pc = 0x2434E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2434E0u;
    // 0x2434e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2434E0u, 0x2434E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2434E8u;
label_2434e8:
    // 0x2434e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2434E8u;
    {
        const bool branch_taken_0x2434e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2434e8) {
            ctx->pc = 0x2434FCu;
            goto label_2434fc;
        }
    }
    ctx->pc = 0x2434F0u;
    // 0x2434f0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2434f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2434f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2434f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2434f8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2434f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2434fc:
    // 0x2434fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2434fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x243500: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x243500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x243504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243508: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x243508u;
    SET_GPR_U32(ctx, 31, 0x243510u);
    ctx->pc = 0x24350Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243508u;
    // 0x24350c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x243508u, 0x243510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243510u;
label_243510:
    // 0x243510: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x243510u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x243514: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x243514u;
    SET_GPR_U32(ctx, 31, 0x24351Cu);
    ctx->pc = 0x243518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243514u;
    // 0x243518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x243514u, 0x24351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24351Cu;
label_24351c:
    // 0x24351c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x24351cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x243520: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x243520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x243524: 0x10400101  beqz        $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x243524u;
    {
        const bool branch_taken_0x243524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243524) {
            ctx->pc = 0x24392Cu;
            goto label_24392c;
        }
    }
    ctx->pc = 0x24352Cu;
    // 0x24352c: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x24352cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x243530: 0x104000fe  beqz        $v0, . + 4 + (0xFE << 2)
    ctx->pc = 0x243530u;
    {
        const bool branch_taken_0x243530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243530) {
            ctx->pc = 0x24392Cu;
            goto label_24392c;
        }
    }
    ctx->pc = 0x243538u;
    // 0x243538: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x243538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x24353c: 0xc09ad80  jal         func_26B600
    ctx->pc = 0x24353Cu;
    SET_GPR_U32(ctx, 31, 0x243544u);
    ctx->pc = 0x243540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24353Cu;
    // 0x243540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B600u, 0x24353Cu, 0x243544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243544u;
label_243544:
    // 0x243544: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x243544u;
    {
        const bool branch_taken_0x243544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243544) {
            ctx->pc = 0x24392Cu;
            goto label_24392c;
        }
    }
    ctx->pc = 0x24354Cu;
label_24354c:
    // 0x24354c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24354Cu;
    SET_GPR_U32(ctx, 31, 0x243554u);
    ctx->pc = 0x243550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24354Cu;
    // 0x243550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24354Cu, 0x243554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243554u;
label_243554:
    // 0x243554: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x243554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x243558: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x243558u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24355c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24355cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x243560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243564: 0x8c65247c  lw          $a1, 0x247C($v1)
    ctx->pc = 0x243564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9340)));
    // 0x243568: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x243568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24356c: 0x8c662480  lw          $a2, 0x2480($v1)
    ctx->pc = 0x24356cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9344)));
    // 0x243570: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x243570u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243574: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x243574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x243578: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x243578u;
    SET_GPR_U32(ctx, 31, 0x243580u);
    ctx->pc = 0x24357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243578u;
    // 0x24357c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x243578u, 0x243580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243580u;
label_243580:
    // 0x243580: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x243580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x243584: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x243584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x243588: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x243588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x24358c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24358cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243590: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x243594: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x243594u;
    {
        const bool branch_taken_0x243594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243594u;
        // 0x243598: 0xa6030568  sh          $v1, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243594) {
            ctx->pc = 0x2436C4u;
            goto label_2436c4;
        }
    }
    ctx->pc = 0x24359Cu;
label_24359c:
    // 0x24359c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24359Cu;
    SET_GPR_U32(ctx, 31, 0x2435A4u);
    ctx->pc = 0x2435A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24359Cu;
    // 0x2435a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24359Cu, 0x2435A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2435A4u;
label_2435a4:
    // 0x2435a4: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2435a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2435a8: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2435a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2435ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2435acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2435b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2435b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2435b4: 0x8c652484  lw          $a1, 0x2484($v1)
    ctx->pc = 0x2435b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9348)));
    // 0x2435b8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2435b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2435bc: 0x8c662488  lw          $a2, 0x2488($v1)
    ctx->pc = 0x2435bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9352)));
    // 0x2435c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2435c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2435c4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2435c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2435c8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2435C8u;
    SET_GPR_U32(ctx, 31, 0x2435D0u);
    ctx->pc = 0x2435CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2435C8u;
    // 0x2435cc: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2435C8u, 0x2435D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2435D0u;
label_2435d0:
    // 0x2435d0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2435d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2435d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2435d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2435d8: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x2435d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x2435dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2435dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2435e0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2435e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2435e4:
    // 0x2435e4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2435E4u;
    SET_GPR_U32(ctx, 31, 0x2435ECu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2435E4u, 0x2435ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2435ECu;
label_2435ec:
    // 0x2435ec: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2435ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2435f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2435f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2435f4: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x2435f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x2435f8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2435f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2435fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2435fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x243600: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x243600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x243604: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x243604u;
    SET_GPR_U32(ctx, 31, 0x24360Cu);
    ctx->pc = 0x243608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243604u;
    // 0x243608: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x243604u, 0x24360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24360Cu;
label_24360c:
    // 0x24360c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24360Cu;
    SET_GPR_U32(ctx, 31, 0x243614u);
    ctx->pc = 0x243610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24360Cu;
    // 0x243610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24360Cu, 0x243614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243614u;
label_243614:
    // 0x243614: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x243614u;
    {
        const bool branch_taken_0x243614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243614) {
            ctx->pc = 0x24363Cu;
            goto label_24363c;
        }
    }
    ctx->pc = 0x24361Cu;
    // 0x24361c: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x24361cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x243620: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x243620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x243624: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x243624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x243628: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x243628u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x24362c: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x24362Cu;
    {
        const bool branch_taken_0x24362c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x243630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24362Cu;
        // 0x243630: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24362c) {
            ctx->pc = 0x243638u;
            goto label_243638;
        }
    }
    ctx->pc = 0x243634u;
    // 0x243634: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x243634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_243638:
    // 0x243638: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x243638u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_24363c:
    // 0x24363c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24363cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x243640: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x243640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x243644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243648: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x243648u;
    SET_GPR_U32(ctx, 31, 0x243650u);
    ctx->pc = 0x24364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243648u;
    // 0x24364c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x243648u, 0x243650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243650u;
label_243650:
    // 0x243650: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x243650u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x243654: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x243654u;
    SET_GPR_U32(ctx, 31, 0x24365Cu);
    ctx->pc = 0x243658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243654u;
    // 0x243658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x243654u, 0x24365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24365Cu;
label_24365c:
    // 0x24365c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x24365cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x243660: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x243660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x243664: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x243664u;
    {
        const bool branch_taken_0x243664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243664u;
        // 0x243668: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243664) {
            ctx->pc = 0x243854u;
            goto label_243854;
        }
    }
    ctx->pc = 0x24366Cu;
    // 0x24366c: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x24366cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x243670: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x243670u;
    {
        const bool branch_taken_0x243670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243670) {
            ctx->pc = 0x24392Cu;
            goto label_24392c;
        }
    }
    ctx->pc = 0x243678u;
    // 0x243678: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x243678u;
    {
        const bool branch_taken_0x243678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243678u;
        // 0x24367c: 0xae0005f0  sw          $zero, 0x5F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243678) {
            ctx->pc = 0x24383Cu;
            goto label_24383c;
        }
    }
    ctx->pc = 0x243680u;
label_243680:
    // 0x243680: 0xc09d91a  jal         func_276468
    ctx->pc = 0x243680u;
    SET_GPR_U32(ctx, 31, 0x243688u);
    ctx->pc = 0x243684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243680u;
    // 0x243684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x243680u, 0x243688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243688u;
label_243688:
    // 0x243688: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x243688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x24368c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24368cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x243690: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x243690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x243694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243698: 0x8c65247c  lw          $a1, 0x247C($v1)
    ctx->pc = 0x243698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9340)));
    // 0x24369c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x24369cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2436a0: 0x8c662480  lw          $a2, 0x2480($v1)
    ctx->pc = 0x2436a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9344)));
    // 0x2436a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2436a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2436a8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2436a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2436ac: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2436ACu;
    SET_GPR_U32(ctx, 31, 0x2436B4u);
    ctx->pc = 0x2436B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2436ACu;
    // 0x2436b0: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2436ACu, 0x2436B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2436B4u;
label_2436b4:
    // 0x2436b4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2436b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2436b8: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x2436b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x2436bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2436bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2436c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2436c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2436c4:
    // 0x2436c4: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x2436c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x2436c8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2436c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2436cc:
    // 0x2436cc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2436CCu;
    SET_GPR_U32(ctx, 31, 0x2436D4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2436CCu, 0x2436D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2436D4u;
label_2436d4:
    // 0x2436d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2436d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2436d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2436d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2436dc: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2436dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2436e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2436e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2436e4: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x2436e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x2436e8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2436e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2436ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2436ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2436f0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2436f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2436f4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2436F4u;
    SET_GPR_U32(ctx, 31, 0x2436FCu);
    ctx->pc = 0x2436F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2436F4u;
    // 0x2436f8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2436F4u, 0x2436FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2436FCu;
label_2436fc:
    // 0x2436fc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2436FCu;
    SET_GPR_U32(ctx, 31, 0x243704u);
    ctx->pc = 0x243700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2436FCu;
    // 0x243700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2436FCu, 0x243704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243704u;
label_243704:
    // 0x243704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243708: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x243708u;
    SET_GPR_U32(ctx, 31, 0x243710u);
    ctx->pc = 0x24370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243708u;
    // 0x24370c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x243708u, 0x243710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243710u;
label_243710:
    // 0x243710: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x243710u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x243714: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x243714u;
    SET_GPR_U32(ctx, 31, 0x24371Cu);
    ctx->pc = 0x243718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243714u;
    // 0x243718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x243714u, 0x24371Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24371Cu;
label_24371c:
    // 0x24371c: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x24371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243720: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x243720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243724: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x243724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x243728: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x243728u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24372c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24372cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243730: 0x0  nop
    ctx->pc = 0x243730u;
    // NOP
    // 0x243734: 0x4500007d  bc1f        . + 4 + (0x7D << 2)
    ctx->pc = 0x243734u;
    {
        const bool branch_taken_0x243734 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243734u;
        // 0x243738: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x243734) {
            ctx->pc = 0x24392Cu;
            goto label_24392c;
        }
    }
    ctx->pc = 0x24373Cu;
    // 0x24373c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x24373cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x243740: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x243744: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x243744u;
    {
        const bool branch_taken_0x243744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243744u;
        // 0x243748: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243744) {
            ctx->pc = 0x24392Cu;
            goto label_24392c;
        }
    }
    ctx->pc = 0x24374Cu;
label_24374c:
    // 0x24374c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24374Cu;
    SET_GPR_U32(ctx, 31, 0x243754u);
    ctx->pc = 0x243750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24374Cu;
    // 0x243750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24374Cu, 0x243754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243754u;
label_243754:
    // 0x243754: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x243754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x243758: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x243758u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24375c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24375cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x243760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243764: 0x8c65248c  lw          $a1, 0x248C($v1)
    ctx->pc = 0x243764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9356)));
    // 0x243768: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x243768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24376c: 0x8c662490  lw          $a2, 0x2490($v1)
    ctx->pc = 0x24376cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9360)));
    // 0x243770: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x243770u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243774: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x243774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x243778: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x243778u;
    SET_GPR_U32(ctx, 31, 0x243780u);
    ctx->pc = 0x24377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243778u;
    // 0x24377c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x243778u, 0x243780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243780u;
label_243780:
    // 0x243780: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x243780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x243784: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243788: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x243788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x24378c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x243790: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x243790u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_243794:
    // 0x243794: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x243794u;
    SET_GPR_U32(ctx, 31, 0x24379Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x243794u, 0x24379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24379Cu;
label_24379c:
    // 0x24379c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x24379cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2437a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2437a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2437a4: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x2437a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x2437a8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2437a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2437ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2437acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2437b0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2437b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2437b4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2437B4u;
    SET_GPR_U32(ctx, 31, 0x2437BCu);
    ctx->pc = 0x2437B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2437B4u;
    // 0x2437b8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2437B4u, 0x2437BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2437BCu;
label_2437bc:
    // 0x2437bc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2437BCu;
    SET_GPR_U32(ctx, 31, 0x2437C4u);
    ctx->pc = 0x2437C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2437BCu;
    // 0x2437c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2437BCu, 0x2437C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2437C4u;
label_2437c4:
    // 0x2437c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2437C4u;
    {
        const bool branch_taken_0x2437c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2437c4) {
            ctx->pc = 0x2437D8u;
            goto label_2437d8;
        }
    }
    ctx->pc = 0x2437CCu;
    // 0x2437cc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2437ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2437d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2437d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2437d4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2437d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2437d8:
    // 0x2437d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2437d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2437dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2437dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2437e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2437e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2437e4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2437E4u;
    SET_GPR_U32(ctx, 31, 0x2437ECu);
    ctx->pc = 0x2437E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2437E4u;
    // 0x2437e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2437E4u, 0x2437ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2437ECu;
label_2437ec:
    // 0x2437ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2437ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2437f0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2437F0u;
    SET_GPR_U32(ctx, 31, 0x2437F8u);
    ctx->pc = 0x2437F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2437F0u;
    // 0x2437f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2437F0u, 0x2437F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2437F8u;
label_2437f8:
    // 0x2437f8: 0x960303ac  lhu         $v1, 0x3AC($s0)
    ctx->pc = 0x2437f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x2437fc: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x2437fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x243800: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x243800u;
    {
        const bool branch_taken_0x243800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243800u;
        // 0x243804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243800) {
            ctx->pc = 0x243854u;
            goto label_243854;
        }
    }
    ctx->pc = 0x243808u;
    // 0x243808: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x243808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x24380c: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x24380Cu;
    {
        const bool branch_taken_0x24380c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24380Cu;
        // 0x243810: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24380c) {
            ctx->pc = 0x24392Cu;
            goto label_24392c;
        }
    }
    ctx->pc = 0x243814u;
    // 0x243814: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x243814u;
    {
        const bool branch_taken_0x243814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243814u;
        // 0x243818: 0xae0005f0  sw          $zero, 0x5F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243814) {
            ctx->pc = 0x24382Cu;
            goto label_24382c;
        }
    }
    ctx->pc = 0x24381Cu;
    // 0x24381c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24381cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243820: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x243820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243824: 0xc09aeb6  jal         func_26BAD8
    ctx->pc = 0x243824u;
    SET_GPR_U32(ctx, 31, 0x24382Cu);
    ctx->pc = 0x243828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243824u;
    // 0x243828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BAD8u, 0x243824u, 0x24382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24382Cu;
label_24382c:
    // 0x24382c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x24382cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x243830: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x243830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x243834: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x243834u;
    {
        const bool branch_taken_0x243834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243834) {
            ctx->pc = 0x24392Cu;
            goto label_24392c;
        }
    }
    ctx->pc = 0x24383Cu;
label_24383c:
    // 0x24383c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24383cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243840: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x243840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243844: 0xc09aeb6  jal         func_26BAD8
    ctx->pc = 0x243844u;
    SET_GPR_U32(ctx, 31, 0x24384Cu);
    ctx->pc = 0x243848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243844u;
    // 0x243848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BAD8u, 0x243844u, 0x24384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24384Cu;
label_24384c:
    // 0x24384c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x24384Cu;
    {
        const bool branch_taken_0x24384c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24384c) {
            ctx->pc = 0x24392Cu;
            goto label_24392c;
        }
    }
    ctx->pc = 0x243854u;
label_243854:
    // 0x243854: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x243854u;
    {
        const bool branch_taken_0x243854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243854u;
        // 0x243858: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243854) {
            ctx->pc = 0x24392Cu;
            goto label_24392c;
        }
    }
    ctx->pc = 0x24385Cu;
label_24385c:
    // 0x24385c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24385Cu;
    SET_GPR_U32(ctx, 31, 0x243864u);
    ctx->pc = 0x243860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24385Cu;
    // 0x243860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24385Cu, 0x243864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243864u;
label_243864:
    // 0x243864: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x243864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x243868: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x243868u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24386c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24386cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x243870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243874: 0x8c652464  lw          $a1, 0x2464($v1)
    ctx->pc = 0x243874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9316)));
    // 0x243878: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x243878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24387c: 0x8c662468  lw          $a2, 0x2468($v1)
    ctx->pc = 0x24387cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9320)));
    // 0x243880: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x243880u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243884: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x243884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x243888: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x243888u;
    SET_GPR_U32(ctx, 31, 0x243890u);
    ctx->pc = 0x24388Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243888u;
    // 0x24388c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x243888u, 0x243890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243890u;
label_243890:
    // 0x243890: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x243890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x243894: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x243894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x243898: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24389c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24389cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2438a0: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x2438a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x2438a4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2438a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2438a8:
    // 0x2438a8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2438A8u;
    SET_GPR_U32(ctx, 31, 0x2438B0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2438A8u, 0x2438B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2438B0u;
label_2438b0:
    // 0x2438b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2438b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2438b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2438b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2438b8: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2438b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2438bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2438bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2438c0: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x2438c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x2438c4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2438c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2438c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2438c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2438cc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2438ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2438d0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2438D0u;
    SET_GPR_U32(ctx, 31, 0x2438D8u);
    ctx->pc = 0x2438D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2438D0u;
    // 0x2438d4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2438D0u, 0x2438D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2438D8u;
label_2438d8:
    // 0x2438d8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2438D8u;
    SET_GPR_U32(ctx, 31, 0x2438E0u);
    ctx->pc = 0x2438DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2438D8u;
    // 0x2438dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2438D8u, 0x2438E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2438E0u;
label_2438e0:
    // 0x2438e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2438e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2438e4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2438E4u;
    SET_GPR_U32(ctx, 31, 0x2438ECu);
    ctx->pc = 0x2438E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2438E4u;
    // 0x2438e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2438E4u, 0x2438ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2438ECu;
label_2438ec:
    // 0x2438ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2438ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2438f0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2438F0u;
    SET_GPR_U32(ctx, 31, 0x2438F8u);
    ctx->pc = 0x2438F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2438F0u;
    // 0x2438f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2438F0u, 0x2438F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2438F8u;
label_2438f8:
    // 0x2438f8: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x2438f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2438fc: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x2438fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243900: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x243900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x243904: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x243904u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x243908: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x243908u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24390c: 0x0  nop
    ctx->pc = 0x24390cu;
    // NOP
    // 0x243910: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x243910u;
    {
        const bool branch_taken_0x243910 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243910u;
        // 0x243914: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x243910) {
            ctx->pc = 0x24392Cu;
            goto label_24392c;
        }
    }
    ctx->pc = 0x243918u;
    // 0x243918: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x243918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x24391c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x24391cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x243920: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x243920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x243924: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x243924u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x243928: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x243928u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_24392c:
    // 0x24392c: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x24392Cu;
    SET_GPR_U32(ctx, 31, 0x243934u);
    ctx->pc = 0x243930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24392Cu;
    // 0x243930: 0xc60c060c  lwc1        $f12, 0x60C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x24392Cu, 0x243934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243934u;
label_243934:
    // 0x243934: 0xc60305a8  lwc1        $f3, 0x5A8($s0)
    ctx->pc = 0x243934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x243938: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x243938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
    // 0x24393c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x24393cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x243940: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x243940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x243944: 0xc602060c  lwc1        $f2, 0x60C($s0)
    ctx->pc = 0x243944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x243948: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x243948u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x24394c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x24394cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x243950: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x243950u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x243954: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x243954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x243958: 0x0  nop
    ctx->pc = 0x243958u;
    // NOP
    // 0x24395c: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x24395cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x243960: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x243960u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x243964: 0xe602060c  swc1        $f2, 0x60C($s0)
    ctx->pc = 0x243964u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1548), bits); }
    // 0x243968: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x243968u;
    SET_GPR_U32(ctx, 31, 0x243970u);
    ctx->pc = 0x24396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243968u;
    // 0x24396c: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x243968u, 0x243970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243970u;
label_243970:
    // 0x243970: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x243970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243974: 0xe600060c  swc1        $f0, 0x60C($s0)
    ctx->pc = 0x243974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1548), bits); }
    // 0x243978: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x243978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x24397c: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x24397cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x243980: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x243980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243984: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x243984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24398c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x24398cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x243990: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x243990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x243994: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x243994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x243998: 0x3e00008  jr          $ra
    ctx->pc = 0x243998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243998u;
        // 0x24399c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2439A0u;
}
