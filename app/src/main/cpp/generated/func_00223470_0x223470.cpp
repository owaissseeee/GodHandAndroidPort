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

// Function: func_00223470
// Address: 0x223470 - 0x2236e8
void func_00223470_0x223470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00223470_0x223470");
#endif

    switch (ctx->pc) {
        case 0x2234ccu: goto label_2234cc;
        case 0x2234f0u: goto label_2234f0;
        case 0x223528u: goto label_223528;
        case 0x223548u: goto label_223548;
        case 0x223568u: goto label_223568;
        case 0x223588u: goto label_223588;
        case 0x223590u: goto label_223590;
        case 0x2235a4u: goto label_2235a4;
        case 0x2235acu: goto label_2235ac;
        case 0x2235bcu: goto label_2235bc;
        case 0x2235d0u: goto label_2235d0;
        case 0x2235dcu: goto label_2235dc;
        case 0x223614u: goto label_223614;
        case 0x223638u: goto label_223638;
        case 0x223650u: goto label_223650;
        case 0x22365cu: goto label_22365c;
        case 0x223670u: goto label_223670;
        case 0x22368cu: goto label_22368c;
        default: break;
    }

    ctx->pc = 0x223470u;

    // 0x223470: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x223470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x223474: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x223474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x223478: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x223478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x22347c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22347cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x223480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x223480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223484: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x223484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x223488: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x223488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x22348c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22348cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223490: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x223490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x223494: 0xa203186a  sb          $v1, 0x186A($s0)
    ctx->pc = 0x223494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x223498: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x223498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x22349c: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x22349cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2234a0: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2234a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2234a4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2234A4u;
    {
        const bool branch_taken_0x2234a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234A4u;
        // 0x2234a8: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234a4) {
            ctx->pc = 0x2234C0u;
            goto label_2234c0;
        }
    }
    ctx->pc = 0x2234ACu;
    // 0x2234ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2234acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2234b0: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2234B0u;
    {
        const bool branch_taken_0x2234b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2234B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234B0u;
        // 0x2234b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234b0) {
            ctx->pc = 0x223554u;
            goto label_223554;
        }
    }
    ctx->pc = 0x2234B8u;
    // 0x2234b8: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2234B8u;
    {
        const bool branch_taken_0x2234b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2234BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2234B8u;
        // 0x2234bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2234b8) {
            ctx->pc = 0x223624u;
            goto label_223624;
        }
    }
    ctx->pc = 0x2234C0u;
label_2234c0:
    // 0x2234c0: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x2234c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2234c4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2234C4u;
    SET_GPR_U32(ctx, 31, 0x2234CCu);
    ctx->pc = 0x2234C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2234C4u;
    // 0x2234c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2234C4u, 0x2234CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2234CCu;
label_2234cc:
    // 0x2234cc: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x2234ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2234d0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2234d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2234d4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2234d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2234d8: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x2234d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2234dc: 0x8c4306ec  lw          $v1, 0x6EC($v0)
    ctx->pc = 0x2234dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1772)));
    // 0x2234e0: 0x8c4506e8  lw          $a1, 0x6E8($v0)
    ctx->pc = 0x2234e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1768)));
    // 0x2234e4: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2234e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2234e8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2234E8u;
    SET_GPR_U32(ctx, 31, 0x2234F0u);
    ctx->pc = 0x2234ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2234E8u;
    // 0x2234ec: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2234E8u, 0x2234F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2234F0u;
label_2234f0:
    // 0x2234f0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2234f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2234f4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2234F4u;
    {
        const bool branch_taken_0x2234f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2234f4) {
            ctx->pc = 0x223508u;
            goto label_223508;
        }
    }
    ctx->pc = 0x2234FCu;
    // 0x2234fc: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2234fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x223500: 0x8c6206f0  lw          $v0, 0x6F0($v1)
    ctx->pc = 0x223500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1776)));
    // 0x223504: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x223504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_223508:
    // 0x223508: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x223508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22350c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22350cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223510: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x223510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223514: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x223514u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22351c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22351cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x223520: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x223520u;
    SET_GPR_U32(ctx, 31, 0x223528u);
    ctx->pc = 0x223524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223520u;
    // 0x223524: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x223520u, 0x223528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223528u;
label_223528:
    // 0x223528: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x223528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x22352c: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x22352cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x223530: 0xae0005fc  sw          $zero, 0x5FC($s0)
    ctx->pc = 0x223530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 0));
    // 0x223534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223538: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x223538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x22353c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22353cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223540: 0xc09bb90  jal         func_26EE40
    ctx->pc = 0x223540u;
    SET_GPR_U32(ctx, 31, 0x223548u);
    ctx->pc = 0x223544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223540u;
    // 0x223544: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EE40u, 0x223540u, 0x223548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223548u;
label_223548:
    // 0x223548: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x223548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22354c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x223550: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x223550u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_223554:
    // 0x223554: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x223554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x223558: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x223558u;
    {
        const bool branch_taken_0x223558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223558u;
        // 0x22355c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223558) {
            ctx->pc = 0x223588u;
            goto label_223588;
        }
    }
    ctx->pc = 0x223560u;
    // 0x223560: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x223560u;
    SET_GPR_U32(ctx, 31, 0x223568u);
    ctx->pc = 0x223564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223560u;
    // 0x223564: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x223560u, 0x223568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223568u;
label_223568:
    // 0x223568: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x223568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22356c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22356cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223570: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x223570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x223574: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x223574u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x223578: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x223578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22357c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22357cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x223580: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x223580u;
    SET_GPR_U32(ctx, 31, 0x223588u);
    ctx->pc = 0x223584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223580u;
    // 0x223584: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x223580u, 0x223588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223588u;
label_223588:
    // 0x223588: 0xc055f06  jal         func_157C18
    ctx->pc = 0x223588u;
    SET_GPR_U32(ctx, 31, 0x223590u);
    ctx->pc = 0x22358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223588u;
    // 0x22358c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x223588u, 0x223590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223590u;
label_223590:
    // 0x223590: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x223590u;
    {
        const bool branch_taken_0x223590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223590u;
        // 0x223594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223590) {
            ctx->pc = 0x2235BCu;
            goto label_2235bc;
        }
    }
    ctx->pc = 0x223598u;
    // 0x223598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22359c: 0xc09bb90  jal         func_26EE40
    ctx->pc = 0x22359Cu;
    SET_GPR_U32(ctx, 31, 0x2235A4u);
    ctx->pc = 0x2235A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22359Cu;
    // 0x2235a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EE40u, 0x22359Cu, 0x2235A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2235A4u;
label_2235a4:
    // 0x2235a4: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x2235A4u;
    SET_GPR_U32(ctx, 31, 0x2235ACu);
    ctx->pc = 0x2235A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2235A4u;
    // 0x2235a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x2235A4u, 0x2235ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2235ACu;
label_2235ac:
    // 0x2235ac: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x2235ACu;
    {
        const bool branch_taken_0x2235ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2235ac) {
            ctx->pc = 0x2235B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2235ACu;
            // 0x2235b0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2236CCu;
            goto label_2236cc;
        }
    }
    ctx->pc = 0x2235B4u;
    // 0x2235b4: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2235B4u;
    SET_GPR_U32(ctx, 31, 0x2235BCu);
    ctx->pc = 0x2235B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2235B4u;
    // 0x2235b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2235B4u, 0x2235BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2235BCu;
label_2235bc:
    // 0x2235bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2235bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2235c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2235c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2235c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2235c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2235c8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2235C8u;
    SET_GPR_U32(ctx, 31, 0x2235D0u);
    ctx->pc = 0x2235CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2235C8u;
    // 0x2235cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2235C8u, 0x2235D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2235D0u;
label_2235d0:
    // 0x2235d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2235d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2235d4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2235D4u;
    SET_GPR_U32(ctx, 31, 0x2235DCu);
    ctx->pc = 0x2235D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2235D4u;
    // 0x2235d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2235D4u, 0x2235DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2235DCu;
label_2235dc:
    // 0x2235dc: 0x8e0205f4  lw          $v0, 0x5F4($s0)
    ctx->pc = 0x2235dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
    // 0x2235e0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2235E0u;
    {
        const bool branch_taken_0x2235e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2235E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235E0u;
        // 0x2235e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235e0) {
            ctx->pc = 0x223620u;
            goto label_223620;
        }
    }
    ctx->pc = 0x2235E8u;
    // 0x2235e8: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x2235e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x2235ec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2235ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2235f0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2235F0u;
    {
        const bool branch_taken_0x2235f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2235F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235F0u;
        // 0x2235f4: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235f0) {
            ctx->pc = 0x22361Cu;
            goto label_22361c;
        }
    }
    ctx->pc = 0x2235F8u;
    // 0x2235f8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2235f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2235fc: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x2235fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x223600: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x223600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223604: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x223604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223608: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x223608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22360c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x22360Cu;
    SET_GPR_U32(ctx, 31, 0x223614u);
    ctx->pc = 0x223610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22360Cu;
    // 0x223610: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x22360Cu, 0x223614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223614u;
label_223614:
    // 0x223614: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x223614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223618: 0xae0305f4  sw          $v1, 0x5F4($s0)
    ctx->pc = 0x223618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 3));
label_22361c:
    // 0x22361c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22361cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223620:
    // 0x223620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x223620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223624:
    // 0x223624: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x223624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x223628: 0x2407004a  addiu       $a3, $zero, 0x4A
    ctx->pc = 0x223628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x22362c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x22362cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x223630: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x223630u;
    SET_GPR_U32(ctx, 31, 0x223638u);
    ctx->pc = 0x223634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223630u;
    // 0x223634: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x223630u, 0x223638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223638u;
label_223638:
    // 0x223638: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x223638u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x22363c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22363cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x223640: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x223640u;
    {
        const bool branch_taken_0x223640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223640) {
            ctx->pc = 0x223644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223640u;
            // 0x223644: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223654u;
            goto label_223654;
        }
    }
    ctx->pc = 0x223648u;
    // 0x223648: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x223648u;
    SET_GPR_U32(ctx, 31, 0x223650u);
    ctx->pc = 0x22364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223648u;
    // 0x22364c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x223648u, 0x223650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223650u;
label_223650:
    // 0x223650: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x223650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_223654:
    // 0x223654: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x223654u;
    SET_GPR_U32(ctx, 31, 0x22365Cu);
    ctx->pc = 0x223658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223654u;
    // 0x223658: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x223654u, 0x22365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22365Cu;
label_22365c:
    // 0x22365c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x22365cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x223660: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x223660u;
    {
        const bool branch_taken_0x223660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223660) {
            ctx->pc = 0x223664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223660u;
            // 0x223664: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223698u;
            goto label_223698;
        }
    }
    ctx->pc = 0x223668u;
    // 0x223668: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x223668u;
    SET_GPR_U32(ctx, 31, 0x223670u);
    ctx->pc = 0x22366Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223668u;
    // 0x22366c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x223668u, 0x223670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223670u;
label_223670:
    // 0x223670: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x223670u;
    {
        const bool branch_taken_0x223670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223670u;
        // 0x223674: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223670) {
            ctx->pc = 0x223698u;
            goto label_223698;
        }
    }
    ctx->pc = 0x223678u;
    // 0x223678: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x223678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x22367c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22367Cu;
    {
        const bool branch_taken_0x22367c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22367c) {
            ctx->pc = 0x223680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22367Cu;
            // 0x223680: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223698u;
            goto label_223698;
        }
    }
    ctx->pc = 0x223684u;
    // 0x223684: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x223684u;
    SET_GPR_U32(ctx, 31, 0x22368Cu);
    ctx->pc = 0x223688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223684u;
    // 0x223688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x223684u, 0x22368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22368Cu;
label_22368c:
    // 0x22368c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x22368Cu;
    {
        const bool branch_taken_0x22368c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22368c) {
            ctx->pc = 0x223690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22368Cu;
            // 0x223690: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2236CCu;
            goto label_2236cc;
        }
    }
    ctx->pc = 0x223694u;
    // 0x223694: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x223694u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_223698:
    // 0x223698: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x223698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x22369c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22369Cu;
    {
        const bool branch_taken_0x22369c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2236A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22369Cu;
        // 0x2236a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22369c) {
            ctx->pc = 0x2236A8u;
            goto label_2236a8;
        }
    }
    ctx->pc = 0x2236A4u;
    // 0x2236a4: 0xae0205fc  sw          $v0, 0x5FC($s0)
    ctx->pc = 0x2236a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 2));
label_2236a8:
    // 0x2236a8: 0x8e0205fc  lw          $v0, 0x5FC($s0)
    ctx->pc = 0x2236a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1532)));
    // 0x2236ac: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2236ACu;
    {
        const bool branch_taken_0x2236ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2236ac) {
            ctx->pc = 0x2236B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2236ACu;
            // 0x2236b0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2236CCu;
            goto label_2236cc;
        }
    }
    ctx->pc = 0x2236B4u;
    // 0x2236b4: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x2236b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x2236b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2236b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2236bc: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x2236bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x2236c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2236c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2236c4: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x2236c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x2236c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2236c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2236cc:
    // 0x2236cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2236ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2236d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2236d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2236d4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2236d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2236d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2236d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2236dc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2236dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2236e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2236E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2236E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2236E0u;
        // 0x2236e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2236E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2236E8u;
}
