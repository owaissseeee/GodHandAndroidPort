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

// Function: func_00234368
// Address: 0x234368 - 0x2349f8
void func_00234368_0x234368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00234368_0x234368");
#endif

    switch (ctx->pc) {
        case 0x2343acu: goto label_2343ac;
        case 0x2343c4u: goto label_2343c4;
        case 0x2343f8u: goto label_2343f8;
        case 0x234424u: goto label_234424;
        case 0x234438u: goto label_234438;
        case 0x234454u: goto label_234454;
        case 0x234474u: goto label_234474;
        case 0x23447cu: goto label_23447c;
        case 0x2344a0u: goto label_2344a0;
        case 0x2344a8u: goto label_2344a8;
        case 0x2344e8u: goto label_2344e8;
        case 0x23450cu: goto label_23450c;
        case 0x234530u: goto label_234530;
        case 0x234548u: goto label_234548;
        case 0x234568u: goto label_234568;
        case 0x23457cu: goto label_23457c;
        case 0x23459cu: goto label_23459c;
        case 0x2345a4u: goto label_2345a4;
        case 0x2345e0u: goto label_2345e0;
        case 0x2345f4u: goto label_2345f4;
        case 0x234618u: goto label_234618;
        case 0x234624u: goto label_234624;
        case 0x234678u: goto label_234678;
        case 0x2346a4u: goto label_2346a4;
        case 0x2346b8u: goto label_2346b8;
        case 0x2346ccu: goto label_2346cc;
        case 0x2346ecu: goto label_2346ec;
        case 0x2346f4u: goto label_2346f4;
        case 0x23470cu: goto label_23470c;
        case 0x234718u: goto label_234718;
        case 0x234720u: goto label_234720;
        case 0x234734u: goto label_234734;
        case 0x234750u: goto label_234750;
        case 0x23475cu: goto label_23475c;
        case 0x234770u: goto label_234770;
        case 0x23479cu: goto label_23479c;
        case 0x2347b0u: goto label_2347b0;
        case 0x2347ccu: goto label_2347cc;
        case 0x2347ecu: goto label_2347ec;
        case 0x2347f4u: goto label_2347f4;
        case 0x234814u: goto label_234814;
        case 0x234820u: goto label_234820;
        case 0x234848u: goto label_234848;
        case 0x23485cu: goto label_23485c;
        case 0x234888u: goto label_234888;
        case 0x23489cu: goto label_23489c;
        case 0x2348b8u: goto label_2348b8;
        case 0x2348d8u: goto label_2348d8;
        case 0x2348e0u: goto label_2348e0;
        case 0x23490cu: goto label_23490c;
        case 0x234918u: goto label_234918;
        case 0x23495cu: goto label_23495c;
        case 0x234978u: goto label_234978;
        case 0x234988u: goto label_234988;
        case 0x234998u: goto label_234998;
        case 0x2349a8u: goto label_2349a8;
        case 0x2349b8u: goto label_2349b8;
        case 0x2349ccu: goto label_2349cc;
        default: break;
    }

    ctx->pc = 0x234368u;

    // 0x234368: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x234368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23436c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23436cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234370: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x234370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x234374: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x234374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x234378: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23437c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23437cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x234380: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x234380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x234384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234388: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x234388u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23438c: 0xa202186a  sb          $v0, 0x186A($s0)
    ctx->pc = 0x23438cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 2));
    // 0x234390: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x234390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x234394: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x234394u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x234398: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x234398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x23439c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23439Cu;
    {
        const bool branch_taken_0x23439c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2343A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23439Cu;
        // 0x2343a0: 0xae0316d4  sw          $v1, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23439c) {
            ctx->pc = 0x2343BCu;
            goto label_2343bc;
        }
    }
    ctx->pc = 0x2343A4u;
    // 0x2343a4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2343A4u;
    SET_GPR_U32(ctx, 31, 0x2343ACu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2343A4u, 0x2343ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2343ACu;
label_2343ac:
    // 0x2343ac: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2343acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2343b0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2343B0u;
    {
        const bool branch_taken_0x2343b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2343B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343B0u;
        // 0x2343b4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2343b0) {
            ctx->pc = 0x2343BCu;
            goto label_2343bc;
        }
    }
    ctx->pc = 0x2343B8u;
    // 0x2343b8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2343b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2343bc:
    // 0x2343bc: 0xc098a84  jal         func_262A10
    ctx->pc = 0x2343BCu;
    SET_GPR_U32(ctx, 31, 0x2343C4u);
    ctx->pc = 0x2343C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2343BCu;
    // 0x2343c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x2343BCu, 0x2343C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2343C4u;
label_2343c4:
    // 0x2343c4: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2343c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2343c8: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x2343c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2343cc: 0x10400182  beqz        $v0, . + 4 + (0x182 << 2)
    ctx->pc = 0x2343CCu;
    {
        const bool branch_taken_0x2343cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2343D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343CCu;
        // 0x2343d0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2343cc) {
            ctx->pc = 0x2349D8u;
            goto label_2349d8;
        }
    }
    ctx->pc = 0x2343D4u;
    // 0x2343d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2343d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2343d8: 0x24429d70  addiu       $v0, $v0, -0x6290
    ctx->pc = 0x2343d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942064));
    // 0x2343dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2343dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2343e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2343e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2343e4: 0x800008  jr          $a0
    ctx->pc = 0x2343E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2343ECu: goto label_2343ec;
            case 0x23444Cu: goto label_23444c;
            case 0x234494u: goto label_234494;
            case 0x234574u: goto label_234574;
            case 0x23466Cu: goto label_23466c;
            case 0x2346C4u: goto label_2346c4;
            case 0x234764u: goto label_234764;
            case 0x2347C4u: goto label_2347c4;
            case 0x234850u: goto label_234850;
            case 0x2348B0u: goto label_2348b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2343E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2343ECu;
label_2343ec:
    // 0x2343ec: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x2343ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2343f0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2343F0u;
    SET_GPR_U32(ctx, 31, 0x2343F8u);
    ctx->pc = 0x2343F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2343F0u;
    // 0x2343f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2343F0u, 0x2343F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2343F8u;
label_2343f8:
    // 0x2343f8: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2343f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2343fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2343fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234400: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x234400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x234404: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x234404u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x234408: 0x8c652f24  lw          $a1, 0x2F24($v1)
    ctx->pc = 0x234408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12068)));
    // 0x23440c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x23440cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x234410: 0x8c662f28  lw          $a2, 0x2F28($v1)
    ctx->pc = 0x234410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12072)));
    // 0x234414: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x234414u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234418: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x234418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x23441c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23441Cu;
    SET_GPR_U32(ctx, 31, 0x234424u);
    ctx->pc = 0x234420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23441Cu;
    // 0x234420: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23441Cu, 0x234424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234424u;
label_234424:
    // 0x234424: 0x8e040708  lw          $a0, 0x708($s0)
    ctx->pc = 0x234424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
    // 0x234428: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x234428u;
    {
        const bool branch_taken_0x234428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x234428) {
            ctx->pc = 0x23442Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234428u;
            // 0x23442c: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23443Cu;
            goto label_23443c;
        }
    }
    ctx->pc = 0x234430u;
    // 0x234430: 0xc074176  jal         func_1D05D8
    ctx->pc = 0x234430u;
    SET_GPR_U32(ctx, 31, 0x234438u);
    ctx->pc = 0x1D05D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05D8u, 0x234430u, 0x234438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234438u;
label_234438:
    // 0x234438: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x234438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_23443c:
    // 0x23443c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23443cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234440: 0xae0305f4  sw          $v1, 0x5F4($s0)
    ctx->pc = 0x234440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 3));
    // 0x234444: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x234444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x234448: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x234448u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_23444c:
    // 0x23444c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x23444Cu;
    SET_GPR_U32(ctx, 31, 0x234454u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x23444Cu, 0x234454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234454u;
label_234454:
    // 0x234454: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x234454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23445c: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x23445cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x234460: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x234460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x234464: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x234464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x234468: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x234468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x23446c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x23446Cu;
    SET_GPR_U32(ctx, 31, 0x234474u);
    ctx->pc = 0x234470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23446Cu;
    // 0x234470: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x23446Cu, 0x234474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234474u;
label_234474:
    // 0x234474: 0xc055f06  jal         func_157C18
    ctx->pc = 0x234474u;
    SET_GPR_U32(ctx, 31, 0x23447Cu);
    ctx->pc = 0x234478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234474u;
    // 0x234478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x234474u, 0x23447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23447Cu;
label_23447c:
    // 0x23447c: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x23447Cu;
    {
        const bool branch_taken_0x23447c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23447c) {
            ctx->pc = 0x23473Cu;
            goto label_23473c;
        }
    }
    ctx->pc = 0x234484u;
    // 0x234484: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x234484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x234488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x234488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23448c: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x23448Cu;
    {
        const bool branch_taken_0x23448c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23448Cu;
        // 0x234490: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23448c) {
            ctx->pc = 0x23473Cu;
            goto label_23473c;
        }
    }
    ctx->pc = 0x234494u;
label_234494:
    // 0x234494: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x234494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x234498: 0xc09d91a  jal         func_276468
    ctx->pc = 0x234498u;
    SET_GPR_U32(ctx, 31, 0x2344A0u);
    ctx->pc = 0x23449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234498u;
    // 0x23449c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x234498u, 0x2344A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2344A0u;
label_2344a0:
    // 0x2344a0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2344A0u;
    SET_GPR_U32(ctx, 31, 0x2344A8u);
    ctx->pc = 0x2344A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2344A0u;
    // 0x2344a4: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2344A0u, 0x2344A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2344A8u;
label_2344a8:
    // 0x2344a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2344a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2344ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2344acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2344b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2344B0u;
    {
        const bool branch_taken_0x2344b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2344B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344B0u;
        // 0x2344b4: 0xa20202f7  sb          $v0, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344b0) {
            ctx->pc = 0x2344C4u;
            goto label_2344c4;
        }
    }
    ctx->pc = 0x2344B8u;
    // 0x2344b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2344b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2344bc: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2344BCu;
    {
        const bool branch_taken_0x2344bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2344bc) {
            ctx->pc = 0x2344C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2344BCu;
            // 0x2344c0: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2344F0u;
            goto label_2344f0;
        }
    }
    ctx->pc = 0x2344C4u;
label_2344c4:
    // 0x2344c4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2344c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2344c8: 0x8e070708  lw          $a3, 0x708($s0)
    ctx->pc = 0x2344c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
    // 0x2344cc: 0x8c432f4c  lw          $v1, 0x2F4C($v0)
    ctx->pc = 0x2344ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12108)));
    // 0x2344d0: 0x8c442f50  lw          $a0, 0x2F50($v0)
    ctx->pc = 0x2344d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12112)));
    // 0x2344d4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2344d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2344d8: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x2344D8u;
    {
        const bool branch_taken_0x2344d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2344DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344D8u;
        // 0x2344dc: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344d8) {
            ctx->pc = 0x234548u;
            goto label_234548;
        }
    }
    ctx->pc = 0x2344E0u;
    // 0x2344e0: 0xc074186  jal         func_1D0618
    ctx->pc = 0x2344E0u;
    SET_GPR_U32(ctx, 31, 0x2344E8u);
    ctx->pc = 0x2344E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2344E0u;
    // 0x2344e4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0618u, 0x2344E0u, 0x2344E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2344E8u;
label_2344e8:
    // 0x2344e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2344E8u;
    {
        const bool branch_taken_0x2344e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2344e8) {
            ctx->pc = 0x234548u;
            goto label_234548;
        }
    }
    ctx->pc = 0x2344F0u;
label_2344f0:
    // 0x2344f0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2344f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2344f4: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2344f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2344f8: 0x8c432f54  lw          $v1, 0x2F54($v0)
    ctx->pc = 0x2344f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12116)));
    // 0x2344fc: 0x8c452f58  lw          $a1, 0x2F58($v0)
    ctx->pc = 0x2344fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12120)));
    // 0x234500: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x234500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x234504: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x234504u;
    SET_GPR_U32(ctx, 31, 0x23450Cu);
    ctx->pc = 0x234508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234504u;
    // 0x234508: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x234504u, 0x23450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23450Cu;
label_23450c:
    // 0x23450c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23450cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x234510: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x234510u;
    {
        const bool branch_taken_0x234510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x234514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234510u;
        // 0x234514: 0x8e040708  lw          $a0, 0x708($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234510) {
            ctx->pc = 0x234538u;
            goto label_234538;
        }
    }
    ctx->pc = 0x234518u;
    // 0x234518: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x234518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23451c: 0x8c622f5c  lw          $v0, 0x2F5C($v1)
    ctx->pc = 0x23451cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12124)));
    // 0x234520: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x234520u;
    {
        const bool branch_taken_0x234520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x234524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234520u;
        // 0x234524: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234520) {
            ctx->pc = 0x234548u;
            goto label_234548;
        }
    }
    ctx->pc = 0x234528u;
    // 0x234528: 0xc074196  jal         func_1D0658
    ctx->pc = 0x234528u;
    SET_GPR_U32(ctx, 31, 0x234530u);
    ctx->pc = 0x23452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234528u;
    // 0x23452c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0658u, 0x234528u, 0x234530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234530u;
label_234530:
    // 0x234530: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x234530u;
    {
        const bool branch_taken_0x234530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234530) {
            ctx->pc = 0x234548u;
            goto label_234548;
        }
    }
    ctx->pc = 0x234538u;
label_234538:
    // 0x234538: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x234538u;
    {
        const bool branch_taken_0x234538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x234538) {
            ctx->pc = 0x234548u;
            goto label_234548;
        }
    }
    ctx->pc = 0x234540u;
    // 0x234540: 0xc074196  jal         func_1D0658
    ctx->pc = 0x234540u;
    SET_GPR_U32(ctx, 31, 0x234548u);
    ctx->pc = 0x234544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234540u;
    // 0x234544: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0658u, 0x234540u, 0x234548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234548u;
label_234548:
    // 0x234548: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x234548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23454c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23454cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234550: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x234550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234554: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x234554u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23455c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23455cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x234560: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x234560u;
    SET_GPR_U32(ctx, 31, 0x234568u);
    ctx->pc = 0x234564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234560u;
    // 0x234564: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x234560u, 0x234568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234568u;
label_234568:
    // 0x234568: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x234568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23456c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23456cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x234570: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x234570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_234574:
    // 0x234574: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x234574u;
    SET_GPR_U32(ctx, 31, 0x23457Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x234574u, 0x23457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23457Cu;
label_23457c:
    // 0x23457c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x23457cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234584: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x234584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x234588: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x234588u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x23458c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23458cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x234590: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x234590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x234594: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x234594u;
    SET_GPR_U32(ctx, 31, 0x23459Cu);
    ctx->pc = 0x234598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234594u;
    // 0x234598: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x234594u, 0x23459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23459Cu;
label_23459c:
    // 0x23459c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23459Cu;
    SET_GPR_U32(ctx, 31, 0x2345A4u);
    ctx->pc = 0x2345A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23459Cu;
    // 0x2345a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23459Cu, 0x2345A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2345A4u;
label_2345a4:
    // 0x2345a4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2345A4u;
    {
        const bool branch_taken_0x2345a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2345a4) {
            ctx->pc = 0x234604u;
            goto label_234604;
        }
    }
    ctx->pc = 0x2345ACu;
    // 0x2345ac: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x2345acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2345b0: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x2345b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x2345b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2345b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2345b8: 0x0  nop
    ctx->pc = 0x2345b8u;
    // NOP
    // 0x2345bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2345bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2345c0: 0x0  nop
    ctx->pc = 0x2345c0u;
    // NOP
    // 0x2345c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2345C4u;
    {
        const bool branch_taken_0x2345c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2345C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345C4u;
        // 0x2345c8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2345c4) {
            ctx->pc = 0x2345D0u;
            goto label_2345d0;
        }
    }
    ctx->pc = 0x2345CCu;
    // 0x2345cc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2345ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2345d0:
    // 0x2345d0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2345d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2345d4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2345d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2345d8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2345D8u;
    SET_GPR_U32(ctx, 31, 0x2345E0u);
    ctx->pc = 0x2345DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2345D8u;
    // 0x2345dc: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2345D8u, 0x2345E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2345E0u;
label_2345e0:
    // 0x2345e0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2345e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2345e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2345E4u;
    {
        const bool branch_taken_0x2345e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2345e4) {
            ctx->pc = 0x234604u;
            goto label_234604;
        }
    }
    ctx->pc = 0x2345ECu;
    // 0x2345ec: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2345ECu;
    SET_GPR_U32(ctx, 31, 0x2345F4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2345ECu, 0x2345F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2345F4u;
label_2345f4:
    // 0x2345f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2345f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2345f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2345F8u;
    {
        const bool branch_taken_0x2345f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2345FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345F8u;
        // 0x2345fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2345f8) {
            ctx->pc = 0x234604u;
            goto label_234604;
        }
    }
    ctx->pc = 0x234600u;
    // 0x234600: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x234600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_234604:
    // 0x234604: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x234604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x234608: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x234608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23460c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23460cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234610: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x234610u;
    SET_GPR_U32(ctx, 31, 0x234618u);
    ctx->pc = 0x234614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234610u;
    // 0x234614: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x234610u, 0x234618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234618u;
label_234618:
    // 0x234618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23461c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23461Cu;
    SET_GPR_U32(ctx, 31, 0x234624u);
    ctx->pc = 0x234620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23461Cu;
    // 0x234620: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23461Cu, 0x234624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234624u;
label_234624:
    // 0x234624: 0x960403ac  lhu         $a0, 0x3AC($s0)
    ctx->pc = 0x234624u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x234628: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x234628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x23462c: 0x104000e9  beqz        $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x23462Cu;
    {
        const bool branch_taken_0x23462c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23462Cu;
        // 0x234630: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23462c) {
            ctx->pc = 0x2349D4u;
            goto label_2349d4;
        }
    }
    ctx->pc = 0x234634u;
    // 0x234634: 0x8e0205f4  lw          $v0, 0x5F4($s0)
    ctx->pc = 0x234634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
    // 0x234638: 0x504000e8  beql        $v0, $zero, . + 4 + (0xE8 << 2)
    ctx->pc = 0x234638u;
    {
        const bool branch_taken_0x234638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234638) {
            ctx->pc = 0x23463Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234638u;
            // 0x23463c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2349DCu;
            goto label_2349dc;
        }
    }
    ctx->pc = 0x234640u;
    // 0x234640: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x234640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x234644: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x234644u;
    {
        const bool branch_taken_0x234644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x234648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234644u;
        // 0x234648: 0xae0005f4  sw          $zero, 0x5F4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234644) {
            ctx->pc = 0x234658u;
            goto label_234658;
        }
    }
    ctx->pc = 0x23464Cu;
    // 0x23464c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23464cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234650: 0x506200c6  beql        $v1, $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x234650u;
    {
        const bool branch_taken_0x234650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x234650) {
            ctx->pc = 0x234654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234650u;
            // 0x234654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23496Cu;
            goto label_23496c;
        }
    }
    ctx->pc = 0x234658u;
label_234658:
    // 0x234658: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x234658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x23465c: 0x144000c3  bnez        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x23465Cu;
    {
        const bool branch_taken_0x23465c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23465Cu;
        // 0x234660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23465c) {
            ctx->pc = 0x23496Cu;
            goto label_23496c;
        }
    }
    ctx->pc = 0x234664u;
    // 0x234664: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x234664u;
    {
        const bool branch_taken_0x234664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234664u;
        // 0x234668: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234664) {
            ctx->pc = 0x2349C4u;
            goto label_2349c4;
        }
    }
    ctx->pc = 0x23466Cu;
label_23466c:
    // 0x23466c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x23466cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x234670: 0xc09d91a  jal         func_276468
    ctx->pc = 0x234670u;
    SET_GPR_U32(ctx, 31, 0x234678u);
    ctx->pc = 0x234674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234670u;
    // 0x234674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x234670u, 0x234678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234678u;
label_234678:
    // 0x234678: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x234678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23467c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23467cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234680: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x234680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x234684: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x234684u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x234688: 0x8c652f2c  lw          $a1, 0x2F2C($v1)
    ctx->pc = 0x234688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12076)));
    // 0x23468c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23468cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x234690: 0x8c662f30  lw          $a2, 0x2F30($v1)
    ctx->pc = 0x234690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12080)));
    // 0x234694: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x234694u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234698: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x234698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x23469c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23469Cu;
    SET_GPR_U32(ctx, 31, 0x2346A4u);
    ctx->pc = 0x2346A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23469Cu;
    // 0x2346a0: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23469Cu, 0x2346A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2346A4u;
label_2346a4:
    // 0x2346a4: 0x8e040708  lw          $a0, 0x708($s0)
    ctx->pc = 0x2346a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
    // 0x2346a8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2346A8u;
    {
        const bool branch_taken_0x2346a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2346a8) {
            ctx->pc = 0x2346ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2346A8u;
            // 0x2346ac: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2346BCu;
            goto label_2346bc;
        }
    }
    ctx->pc = 0x2346B0u;
    // 0x2346b0: 0xc07417e  jal         func_1D05F8
    ctx->pc = 0x2346B0u;
    SET_GPR_U32(ctx, 31, 0x2346B8u);
    ctx->pc = 0x1D05F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05F8u, 0x2346B0u, 0x2346B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2346B8u;
label_2346b8:
    // 0x2346b8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2346b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_2346bc:
    // 0x2346bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2346bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2346c0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2346c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2346c4:
    // 0x2346c4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2346C4u;
    SET_GPR_U32(ctx, 31, 0x2346CCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2346C4u, 0x2346CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2346CCu;
label_2346cc:
    // 0x2346cc: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2346ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2346d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2346d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2346d4: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x2346d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x2346d8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2346d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2346dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2346dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2346e0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2346e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2346e4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2346E4u;
    SET_GPR_U32(ctx, 31, 0x2346ECu);
    ctx->pc = 0x2346E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2346E4u;
    // 0x2346e8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2346E4u, 0x2346ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2346ECu;
label_2346ec:
    // 0x2346ec: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2346ECu;
    SET_GPR_U32(ctx, 31, 0x2346F4u);
    ctx->pc = 0x2346F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2346ECu;
    // 0x2346f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2346ECu, 0x2346F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2346F4u;
label_2346f4:
    // 0x2346f4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2346F4u;
    {
        const bool branch_taken_0x2346f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2346F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346F4u;
        // 0x2346f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346f4) {
            ctx->pc = 0x23473Cu;
            goto label_23473c;
        }
    }
    ctx->pc = 0x2346FCu;
    // 0x2346fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2346fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x234700: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x234700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x234704: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x234704u;
    SET_GPR_U32(ctx, 31, 0x23470Cu);
    ctx->pc = 0x234708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234704u;
    // 0x234708: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x234704u, 0x23470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23470Cu;
label_23470c:
    // 0x23470c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23470cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x234710: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x234710u;
    SET_GPR_U32(ctx, 31, 0x234718u);
    ctx->pc = 0x234714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234710u;
    // 0x234714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x234710u, 0x234718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234718u;
label_234718:
    // 0x234718: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x234718u;
    SET_GPR_U32(ctx, 31, 0x234720u);
    ctx->pc = 0x23471Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234718u;
    // 0x23471c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x234718u, 0x234720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234720u;
label_234720:
    // 0x234720: 0x8e040708  lw          $a0, 0x708($s0)
    ctx->pc = 0x234720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
    // 0x234724: 0x108000ad  beqz        $a0, . + 4 + (0xAD << 2)
    ctx->pc = 0x234724u;
    {
        const bool branch_taken_0x234724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x234728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234724u;
        // 0x234728: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234724) {
            ctx->pc = 0x2349DCu;
            goto label_2349dc;
        }
    }
    ctx->pc = 0x23472Cu;
    // 0x23472c: 0xc074170  jal         func_1D05C0
    ctx->pc = 0x23472Cu;
    SET_GPR_U32(ctx, 31, 0x234734u);
    ctx->pc = 0x1D05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05C0u, 0x23472Cu, 0x234734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234734u;
label_234734:
    // 0x234734: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x234734u;
    {
        const bool branch_taken_0x234734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234734u;
        // 0x234738: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234734) {
            ctx->pc = 0x2349DCu;
            goto label_2349dc;
        }
    }
    ctx->pc = 0x23473Cu;
label_23473c:
    // 0x23473c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23473cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x234740: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x234740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x234744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234748: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x234748u;
    SET_GPR_U32(ctx, 31, 0x234750u);
    ctx->pc = 0x23474Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234748u;
    // 0x23474c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x234748u, 0x234750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234750u;
label_234750:
    // 0x234750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234754: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x234754u;
    SET_GPR_U32(ctx, 31, 0x23475Cu);
    ctx->pc = 0x234758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234754u;
    // 0x234758: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x234754u, 0x23475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23475Cu;
label_23475c:
    // 0x23475c: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x23475Cu;
    {
        const bool branch_taken_0x23475c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23475Cu;
        // 0x234760: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23475c) {
            ctx->pc = 0x2349DCu;
            goto label_2349dc;
        }
    }
    ctx->pc = 0x234764u;
label_234764:
    // 0x234764: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x234764u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x234768: 0xc09d91a  jal         func_276468
    ctx->pc = 0x234768u;
    SET_GPR_U32(ctx, 31, 0x234770u);
    ctx->pc = 0x23476Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234768u;
    // 0x23476c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x234768u, 0x234770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234770u;
label_234770:
    // 0x234770: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x234770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x234774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234778: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x234778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23477c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23477cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x234780: 0x8c652f9c  lw          $a1, 0x2F9C($v1)
    ctx->pc = 0x234780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12188)));
    // 0x234784: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x234784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x234788: 0x8c662fa0  lw          $a2, 0x2FA0($v1)
    ctx->pc = 0x234788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12192)));
    // 0x23478c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23478cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234790: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x234790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x234794: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x234794u;
    SET_GPR_U32(ctx, 31, 0x23479Cu);
    ctx->pc = 0x234798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234794u;
    // 0x234798: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x234794u, 0x23479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23479Cu;
label_23479c:
    // 0x23479c: 0x8e040708  lw          $a0, 0x708($s0)
    ctx->pc = 0x23479cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
    // 0x2347a0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2347A0u;
    {
        const bool branch_taken_0x2347a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2347a0) {
            ctx->pc = 0x2347A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2347A0u;
            // 0x2347a4: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2347B4u;
            goto label_2347b4;
        }
    }
    ctx->pc = 0x2347A8u;
    // 0x2347a8: 0xc07418e  jal         func_1D0638
    ctx->pc = 0x2347A8u;
    SET_GPR_U32(ctx, 31, 0x2347B0u);
    ctx->pc = 0x1D0638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0638u, 0x2347A8u, 0x2347B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2347B0u;
label_2347b0:
    // 0x2347b0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2347b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_2347b4:
    // 0x2347b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2347b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2347b8: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x2347b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x2347bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2347bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2347c0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2347c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2347c4:
    // 0x2347c4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2347C4u;
    SET_GPR_U32(ctx, 31, 0x2347CCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2347C4u, 0x2347CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2347CCu;
label_2347cc:
    // 0x2347cc: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2347ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2347d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2347d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2347d4: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x2347d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x2347d8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2347d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2347dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2347dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2347e0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2347e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2347e4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2347E4u;
    SET_GPR_U32(ctx, 31, 0x2347ECu);
    ctx->pc = 0x2347E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2347E4u;
    // 0x2347e8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2347E4u, 0x2347ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2347ECu;
label_2347ec:
    // 0x2347ec: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2347ECu;
    SET_GPR_U32(ctx, 31, 0x2347F4u);
    ctx->pc = 0x2347F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2347ECu;
    // 0x2347f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2347ECu, 0x2347F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2347F4u;
label_2347f4:
    // 0x2347f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2347F4u;
    {
        const bool branch_taken_0x2347f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2347F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347F4u;
        // 0x2347f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347f4) {
            ctx->pc = 0x234800u;
            goto label_234800;
        }
    }
    ctx->pc = 0x2347FCu;
    // 0x2347fc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2347fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_234800:
    // 0x234800: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x234800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x234804: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x234804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x234808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23480c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23480Cu;
    SET_GPR_U32(ctx, 31, 0x234814u);
    ctx->pc = 0x234810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23480Cu;
    // 0x234810: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23480Cu, 0x234814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234814u;
label_234814:
    // 0x234814: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x234814u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x234818: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x234818u;
    SET_GPR_U32(ctx, 31, 0x234820u);
    ctx->pc = 0x23481Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234818u;
    // 0x23481c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x234818u, 0x234820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234820u;
label_234820:
    // 0x234820: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x234820u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x234824: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x234824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x234828: 0x5040006c  beql        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x234828u;
    {
        const bool branch_taken_0x234828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234828) {
            ctx->pc = 0x23482Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234828u;
            // 0x23482c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2349DCu;
            goto label_2349dc;
        }
    }
    ctx->pc = 0x234830u;
    // 0x234830: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x234830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x234834: 0x50400069  beql        $v0, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x234834u;
    {
        const bool branch_taken_0x234834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234834) {
            ctx->pc = 0x234838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234834u;
            // 0x234838: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2349DCu;
            goto label_2349dc;
        }
    }
    ctx->pc = 0x23483Cu;
    // 0x23483c: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x23483cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x234840: 0xc09d138  jal         func_2744E0
    ctx->pc = 0x234840u;
    SET_GPR_U32(ctx, 31, 0x234848u);
    ctx->pc = 0x234844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234840u;
    // 0x234844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2744E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744E0u, 0x234840u, 0x234848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234848u;
label_234848:
    // 0x234848: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x234848u;
    {
        const bool branch_taken_0x234848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234848u;
        // 0x23484c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234848) {
            ctx->pc = 0x2349DCu;
            goto label_2349dc;
        }
    }
    ctx->pc = 0x234850u;
label_234850:
    // 0x234850: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x234850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x234854: 0xc09d91a  jal         func_276468
    ctx->pc = 0x234854u;
    SET_GPR_U32(ctx, 31, 0x23485Cu);
    ctx->pc = 0x234858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234854u;
    // 0x234858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x234854u, 0x23485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23485Cu;
label_23485c:
    // 0x23485c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x23485cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x234860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234864: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x234864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x234868: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x234868u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23486c: 0x8c652f40  lw          $a1, 0x2F40($v1)
    ctx->pc = 0x23486cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12096)));
    // 0x234870: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x234870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x234874: 0x8c662f44  lw          $a2, 0x2F44($v1)
    ctx->pc = 0x234874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12100)));
    // 0x234878: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x234878u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23487c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x23487cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x234880: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x234880u;
    SET_GPR_U32(ctx, 31, 0x234888u);
    ctx->pc = 0x234884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234880u;
    // 0x234884: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x234880u, 0x234888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234888u;
label_234888:
    // 0x234888: 0x8e040708  lw          $a0, 0x708($s0)
    ctx->pc = 0x234888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
    // 0x23488c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23488Cu;
    {
        const bool branch_taken_0x23488c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23488c) {
            ctx->pc = 0x234890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23488Cu;
            // 0x234890: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2348A0u;
            goto label_2348a0;
        }
    }
    ctx->pc = 0x234894u;
    // 0x234894: 0xc0741ce  jal         func_1D0738
    ctx->pc = 0x234894u;
    SET_GPR_U32(ctx, 31, 0x23489Cu);
    ctx->pc = 0x1D0738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0738u, 0x234894u, 0x23489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23489Cu;
label_23489c:
    // 0x23489c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x23489cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_2348a0:
    // 0x2348a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2348a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2348a4: 0xae0305f4  sw          $v1, 0x5F4($s0)
    ctx->pc = 0x2348a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 3));
    // 0x2348a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2348a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2348ac: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2348acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2348b0:
    // 0x2348b0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2348B0u;
    SET_GPR_U32(ctx, 31, 0x2348B8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2348B0u, 0x2348B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2348B8u;
label_2348b8:
    // 0x2348b8: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2348b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2348bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2348bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2348c0: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x2348c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x2348c4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2348c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2348c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2348c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2348cc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2348ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2348d0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2348D0u;
    SET_GPR_U32(ctx, 31, 0x2348D8u);
    ctx->pc = 0x2348D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2348D0u;
    // 0x2348d4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2348D0u, 0x2348D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2348D8u;
label_2348d8:
    // 0x2348d8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2348D8u;
    SET_GPR_U32(ctx, 31, 0x2348E0u);
    ctx->pc = 0x2348DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2348D8u;
    // 0x2348dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2348D8u, 0x2348E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2348E0u;
label_2348e0:
    // 0x2348e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2348E0u;
    {
        const bool branch_taken_0x2348e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2348E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348E0u;
        // 0x2348e4: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348e0) {
            ctx->pc = 0x2348F8u;
            goto label_2348f8;
        }
    }
    ctx->pc = 0x2348E8u;
    // 0x2348e8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2348e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2348ec: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2348ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2348f0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2348f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2348f4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2348f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_2348f8:
    // 0x2348f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2348f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2348fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2348fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x234900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234904: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x234904u;
    SET_GPR_U32(ctx, 31, 0x23490Cu);
    ctx->pc = 0x234908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234904u;
    // 0x234908: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x234904u, 0x23490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23490Cu;
label_23490c:
    // 0x23490c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23490cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x234910: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x234910u;
    SET_GPR_U32(ctx, 31, 0x234918u);
    ctx->pc = 0x234914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234910u;
    // 0x234914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x234910u, 0x234918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234918u;
label_234918:
    // 0x234918: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x234918u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x23491c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x23491cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x234920: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x234920u;
    {
        const bool branch_taken_0x234920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234920u;
        // 0x234924: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234920) {
            ctx->pc = 0x2349D4u;
            goto label_2349d4;
        }
    }
    ctx->pc = 0x234928u;
    // 0x234928: 0x8e0205f4  lw          $v0, 0x5F4($s0)
    ctx->pc = 0x234928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
    // 0x23492c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x23492Cu;
    {
        const bool branch_taken_0x23492c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23492Cu;
        // 0x234930: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23492c) {
            ctx->pc = 0x2349D8u;
            goto label_2349d8;
        }
    }
    ctx->pc = 0x234934u;
    // 0x234934: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x234934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x234938: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x234938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x23493c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23493cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234940: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x234940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x234944: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x234944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234948: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x234948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23494c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23494cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234950: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x234950u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234954: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x234954u;
    SET_GPR_U32(ctx, 31, 0x23495Cu);
    ctx->pc = 0x234958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234954u;
    // 0x234958: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x234954u, 0x23495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23495Cu;
label_23495c:
    // 0x23495c: 0x960303ac  lhu         $v1, 0x3AC($s0)
    ctx->pc = 0x23495cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x234960: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x234960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x234964: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x234964u;
    {
        const bool branch_taken_0x234964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x234968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234964u;
        // 0x234968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234964) {
            ctx->pc = 0x2349C0u;
            goto label_2349c0;
        }
    }
    ctx->pc = 0x23496Cu;
label_23496c:
    // 0x23496c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x23496cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x234970: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x234970u;
    SET_GPR_U32(ctx, 31, 0x234978u);
    ctx->pc = 0x234974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234970u;
    // 0x234974: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x234970u, 0x234978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234978u;
label_234978:
    // 0x234978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23497c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x23497cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x234980: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x234980u;
    SET_GPR_U32(ctx, 31, 0x234988u);
    ctx->pc = 0x234984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234980u;
    // 0x234984: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x234980u, 0x234988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234988u;
label_234988:
    // 0x234988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23498c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x23498cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x234990: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x234990u;
    SET_GPR_U32(ctx, 31, 0x234998u);
    ctx->pc = 0x234994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234990u;
    // 0x234994: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x234990u, 0x234998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234998u;
label_234998:
    // 0x234998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23499c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x23499cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2349a0: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x2349A0u;
    SET_GPR_U32(ctx, 31, 0x2349A8u);
    ctx->pc = 0x2349A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2349A0u;
    // 0x2349a4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x2349A0u, 0x2349A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349A8u;
label_2349a8:
    // 0x2349a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2349a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2349ac: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2349acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2349b0: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x2349B0u;
    SET_GPR_U32(ctx, 31, 0x2349B8u);
    ctx->pc = 0x2349B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2349B0u;
    // 0x2349b4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x2349B0u, 0x2349B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349B8u;
label_2349b8:
    // 0x2349b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2349B8u;
    {
        const bool branch_taken_0x2349b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2349BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349B8u;
        // 0x2349bc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349b8) {
            ctx->pc = 0x2349DCu;
            goto label_2349dc;
        }
    }
    ctx->pc = 0x2349C0u;
label_2349c0:
    // 0x2349c0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2349c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2349c4:
    // 0x2349c4: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x2349C4u;
    SET_GPR_U32(ctx, 31, 0x2349CCu);
    ctx->pc = 0x2349C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2349C4u;
    // 0x2349c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x2349C4u, 0x2349CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349CCu;
label_2349cc:
    // 0x2349cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2349CCu;
    {
        const bool branch_taken_0x2349cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2349D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349CCu;
        // 0x2349d0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349cc) {
            ctx->pc = 0x2349DCu;
            goto label_2349dc;
        }
    }
    ctx->pc = 0x2349D4u;
label_2349d4:
    // 0x2349d4: 0xae0205f4  sw          $v0, 0x5F4($s0)
    ctx->pc = 0x2349d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 2));
label_2349d8:
    // 0x2349d8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2349d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2349dc:
    // 0x2349dc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2349dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2349e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2349e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2349e4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2349e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2349e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2349e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2349ec: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2349ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2349f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2349F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2349F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349F0u;
        // 0x2349f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2349F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2349F8u;
}
