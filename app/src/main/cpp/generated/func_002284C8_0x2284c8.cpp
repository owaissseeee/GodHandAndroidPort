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

// Function: func_002284C8
// Address: 0x2284c8 - 0x2289b8
void func_002284C8_0x2284c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002284C8_0x2284c8");
#endif

    switch (ctx->pc) {
        case 0x228508u: goto label_228508;
        case 0x22853cu: goto label_22853c;
        case 0x228568u: goto label_228568;
        case 0x228580u: goto label_228580;
        case 0x2285a0u: goto label_2285a0;
        case 0x2285a8u: goto label_2285a8;
        case 0x2285ccu: goto label_2285cc;
        case 0x2285f4u: goto label_2285f4;
        case 0x228610u: goto label_228610;
        case 0x228648u: goto label_228648;
        case 0x228658u: goto label_228658;
        case 0x2286f4u: goto label_2286f4;
        case 0x22870cu: goto label_22870c;
        case 0x228724u: goto label_228724;
        case 0x22875cu: goto label_22875c;
        case 0x228780u: goto label_228780;
        case 0x228798u: goto label_228798;
        case 0x2287b0u: goto label_2287b0;
        case 0x2287bcu: goto label_2287bc;
        case 0x2287d4u: goto label_2287d4;
        case 0x228894u: goto label_228894;
        case 0x2288a4u: goto label_2288a4;
        case 0x2288c4u: goto label_2288c4;
        case 0x2288d0u: goto label_2288d0;
        case 0x2288e4u: goto label_2288e4;
        case 0x228910u: goto label_228910;
        case 0x228924u: goto label_228924;
        case 0x228934u: goto label_228934;
        case 0x228948u: goto label_228948;
        case 0x228954u: goto label_228954;
        case 0x22895cu: goto label_22895c;
        default: break;
    }

    ctx->pc = 0x2284c8u;

    // 0x2284c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2284c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2284cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2284ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2284d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2284d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2284d4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2284d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2284d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2284d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2284dc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2284dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2284e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2284e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2284e4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2284e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2284e8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2284e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2284ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2284ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2284f0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2284f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2284f4: 0xa222186a  sb          $v0, 0x186A($s1)
    ctx->pc = 0x2284f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 2));
    // 0x2284f8: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x2284f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x2284fc: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x2284fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x228500: 0xc098a84  jal         func_262A10
    ctx->pc = 0x228500u;
    SET_GPR_U32(ctx, 31, 0x228508u);
    ctx->pc = 0x228504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228500u;
    // 0x228504: 0xae2316d4  sw          $v1, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x228500u, 0x228508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228508u;
label_228508:
    // 0x228508: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x228508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22850c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x22850cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x228510: 0x10400110  beqz        $v0, . + 4 + (0x110 << 2)
    ctx->pc = 0x228510u;
    {
        const bool branch_taken_0x228510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228510u;
        // 0x228514: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228510) {
            ctx->pc = 0x228954u;
            goto label_228954;
        }
    }
    ctx->pc = 0x228518u;
    // 0x228518: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x228518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22851c: 0x244286d0  addiu       $v0, $v0, -0x7930
    ctx->pc = 0x22851cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936272));
    // 0x228520: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x228520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228524: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x228524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x228528: 0x800008  jr          $a0
    ctx->pc = 0x228528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228530u: goto label_228530;
            case 0x228578u: goto label_228578;
            case 0x2285BCu: goto label_2285bc;
            case 0x228744u: goto label_228744;
            case 0x2288D8u: goto label_2288d8;
            case 0x22891Cu: goto label_22891c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228528u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x228530u;
label_228530:
    // 0x228530: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x228530u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x228534: 0xc09d91a  jal         func_276468
    ctx->pc = 0x228534u;
    SET_GPR_U32(ctx, 31, 0x22853Cu);
    ctx->pc = 0x228538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228534u;
    // 0x228538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x228534u, 0x22853Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22853Cu;
label_22853c:
    // 0x22853c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x228540: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x228540u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x228544: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x228544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x228548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22854c: 0x8c651e84  lw          $a1, 0x1E84($v1)
    ctx->pc = 0x22854cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7812)));
    // 0x228550: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x228550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x228554: 0x8c661e88  lw          $a2, 0x1E88($v1)
    ctx->pc = 0x228554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7816)));
    // 0x228558: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x228558u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22855c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22855cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x228560: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x228560u;
    SET_GPR_U32(ctx, 31, 0x228568u);
    ctx->pc = 0x228564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228560u;
    // 0x228564: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x228560u, 0x228568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228568u;
label_228568:
    // 0x228568: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x228568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22856c: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x22856cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x228570: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x228570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x228574: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x228574u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_228578:
    // 0x228578: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x228578u;
    SET_GPR_U32(ctx, 31, 0x228580u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x228578u, 0x228580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228580u;
label_228580:
    // 0x228580: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x228580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x228584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228588: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x228588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x22858c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22858cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x228590: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x228590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228594: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x228594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x228598: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x228598u;
    SET_GPR_U32(ctx, 31, 0x2285A0u);
    ctx->pc = 0x22859Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228598u;
    // 0x22859c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x228598u, 0x2285A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2285A0u;
label_2285a0:
    // 0x2285a0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2285A0u;
    SET_GPR_U32(ctx, 31, 0x2285A8u);
    ctx->pc = 0x2285A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2285A0u;
    // 0x2285a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2285A0u, 0x2285A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2285A8u;
label_2285a8:
    // 0x2285a8: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x2285A8u;
    {
        const bool branch_taken_0x2285a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2285a8) {
            ctx->pc = 0x2288B0u;
            goto label_2288b0;
        }
    }
    ctx->pc = 0x2285B0u;
    // 0x2285b0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2285b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2285b4: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x2285B4u;
    {
        const bool branch_taken_0x2285b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2285B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285B4u;
        // 0x2285b8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2285b4) {
            ctx->pc = 0x2288ACu;
            goto label_2288ac;
        }
    }
    ctx->pc = 0x2285BCu;
label_2285bc:
    // 0x2285bc: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x2285bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2285c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2285c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2285c4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2285C4u;
    SET_GPR_U32(ctx, 31, 0x2285CCu);
    ctx->pc = 0x2285C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2285C4u;
    // 0x2285c8: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2285C4u, 0x2285CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2285CCu;
label_2285cc:
    // 0x2285cc: 0x26149b70  addiu       $s4, $s0, -0x6490
    ctx->pc = 0x2285ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x2285d0: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x2285d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2285d4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2285d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2285d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2285d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2285dc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2285dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2285e0: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x2285e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2285e4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2285e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2285e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2285e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2285ec: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2285ECu;
    SET_GPR_U32(ctx, 31, 0x2285F4u);
    ctx->pc = 0x2285F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2285ECu;
    // 0x2285f0: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2285ECu, 0x2285F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2285F4u;
label_2285f4:
    // 0x2285f4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2285f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2285f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2285f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2285fc: 0x8c431e8c  lw          $v1, 0x1E8C($v0)
    ctx->pc = 0x2285fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7820)));
    // 0x228600: 0x8c451e90  lw          $a1, 0x1E90($v0)
    ctx->pc = 0x228600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7824)));
    // 0x228604: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x228604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228608: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x228608u;
    SET_GPR_U32(ctx, 31, 0x228610u);
    ctx->pc = 0x22860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228608u;
    // 0x22860c: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x228608u, 0x228610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228610u;
label_228610:
    // 0x228610: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x228610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x228614: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x228614u;
    {
        const bool branch_taken_0x228614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x228614) {
            ctx->pc = 0x228628u;
            goto label_228628;
        }
    }
    ctx->pc = 0x22861Cu;
    // 0x22861c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x22861cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x228620: 0x8c621e94  lw          $v0, 0x1E94($v1)
    ctx->pc = 0x228620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7828)));
    // 0x228624: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x228624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_228628:
    // 0x228628: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x228628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22862c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22862cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228630: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x228630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228634: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x228634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x228638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22863c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22863cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x228640: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x228640u;
    SET_GPR_U32(ctx, 31, 0x228648u);
    ctx->pc = 0x228644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228640u;
    // 0x228644: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x228640u, 0x228648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228648u;
label_228648:
    // 0x228648: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x228648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x22864c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22864cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228650: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x228650u;
    SET_GPR_U32(ctx, 31, 0x228658u);
    ctx->pc = 0x228654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228650u;
    // 0x228654: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x228650u, 0x228658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228658u;
label_228658:
    // 0x228658: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x228658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22865c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x22865cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x228660: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x228660u;
    {
        const bool branch_taken_0x228660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228660u;
        // 0x228664: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228660) {
            ctx->pc = 0x228680u;
            goto label_228680;
        }
    }
    ctx->pc = 0x228668u;
    // 0x228668: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x228668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22866c: 0x244286f0  addiu       $v0, $v0, -0x7910
    ctx->pc = 0x22866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936304));
    // 0x228670: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x228670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228674: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x228674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x228678: 0x800008  jr          $a0
    ctx->pc = 0x228678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228680u: goto label_228680;
            case 0x228698u: goto label_228698;
            case 0x2286B4u: goto label_2286b4;
            case 0x2286D8u: goto label_2286d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228678u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x228680u;
label_228680:
    // 0x228680: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x228680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228684: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228688: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x228688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x22868c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22868cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228690: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x228690u;
    {
        const bool branch_taken_0x228690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228690u;
        // 0x228694: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228690) {
            ctx->pc = 0x2286D0u;
            goto label_2286d0;
        }
    }
    ctx->pc = 0x228698u;
label_228698:
    // 0x228698: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x228698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22869c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22869cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2286a0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2286a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2286a4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2286a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2286a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2286a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2286ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2286ACu;
    {
        const bool branch_taken_0x2286ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2286B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286ACu;
        // 0x2286b0: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2286ac) {
            ctx->pc = 0x2286D0u;
            goto label_2286d0;
        }
    }
    ctx->pc = 0x2286B4u;
label_2286b4:
    // 0x2286b4: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x2286b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2286b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2286b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2286bc: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2286bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x2286c0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2286c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2286c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2286c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2286c8: 0x0  nop
    ctx->pc = 0x2286c8u;
    // NOP
    // 0x2286cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2286ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2286d0:
    // 0x2286d0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2286d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2286d4: 0xe62105f0  swc1        $f1, 0x5F0($s1)
    ctx->pc = 0x2286d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1520), bits); }
label_2286d8:
    // 0x2286d8: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x2286d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2286dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2286dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2286e0: 0x26b09b70  addiu       $s0, $s5, -0x6490
    ctx->pc = 0x2286e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    // 0x2286e4: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x2286e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x2286e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2286e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2286ec: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2286ECu;
    SET_GPR_U32(ctx, 31, 0x2286F4u);
    ctx->pc = 0x2286F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2286ECu;
    // 0x2286f0: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2286ECu, 0x2286F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2286F4u;
label_2286f4:
    // 0x2286f4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2286f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2286f8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2286F8u;
    {
        const bool branch_taken_0x2286f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2286FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2286F8u;
        // 0x2286fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2286f8) {
            ctx->pc = 0x228704u;
            goto label_228704;
        }
    }
    ctx->pc = 0x228700u;
    // 0x228700: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x228700u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_228704:
    // 0x228704: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x228704u;
    SET_GPR_U32(ctx, 31, 0x22870Cu);
    ctx->pc = 0x228708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228704u;
    // 0x228708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x228704u, 0x22870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22870Cu;
label_22870c:
    // 0x22870c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x22870cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x228710: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x228710u;
    {
        const bool branch_taken_0x228710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228710u;
        // 0x228714: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228710) {
            ctx->pc = 0x22871Cu;
            goto label_22871c;
        }
    }
    ctx->pc = 0x228718u;
    // 0x228718: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x228718u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_22871c:
    // 0x22871c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22871Cu;
    SET_GPR_U32(ctx, 31, 0x228724u);
    ctx->pc = 0x228720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22871Cu;
    // 0x228720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22871Cu, 0x228724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228724u;
label_228724:
    // 0x228724: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x228724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x228728: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x228728u;
    {
        const bool branch_taken_0x228728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228728) {
            ctx->pc = 0x22872Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228728u;
            // 0x22872c: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22873Cu;
            goto label_22873c;
        }
    }
    ctx->pc = 0x228730u;
    // 0x228730: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x228730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x228734: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x228734u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x228738: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x228738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_22873c:
    // 0x22873c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22873cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x228740: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x228740u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_228744:
    // 0x228744: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x228744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x228748: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x228748u;
    {
        const bool branch_taken_0x228748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228748u;
        // 0x22874c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228748) {
            ctx->pc = 0x2287B4u;
            goto label_2287b4;
        }
    }
    ctx->pc = 0x228750u;
    // 0x228750: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x228750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x228754: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x228754u;
    SET_GPR_U32(ctx, 31, 0x22875Cu);
    ctx->pc = 0x228758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228754u;
    // 0x228758: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x228754u, 0x22875Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22875Cu;
label_22875c:
    // 0x22875c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x22875cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228764: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x228764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x228768: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x228768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22876c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x22876cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x228770: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x228770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x228774: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x228774u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x228778: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x228778u;
    SET_GPR_U32(ctx, 31, 0x228780u);
    ctx->pc = 0x22877Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228778u;
    // 0x22877c: 0xc62c0600  lwc1        $f12, 0x600($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x228778u, 0x228780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228780u;
label_228780:
    // 0x228780: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x228780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228784: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x228784u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x228788: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x228788u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x22878c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x22878cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x228790: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x228790u;
    SET_GPR_U32(ctx, 31, 0x228798u);
    ctx->pc = 0x228794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228790u;
    // 0x228794: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x228790u, 0x228798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228798u;
label_228798:
    // 0x228798: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x228798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22879c: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x22879cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x2287a0: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x2287a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2287a4: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x2287a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x2287a8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2287A8u;
    SET_GPR_U32(ctx, 31, 0x2287B0u);
    ctx->pc = 0x2287ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2287A8u;
    // 0x2287ac: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2287A8u, 0x2287B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2287B0u;
label_2287b0:
    // 0x2287b0: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x2287b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_2287b4:
    // 0x2287b4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2287B4u;
    SET_GPR_U32(ctx, 31, 0x2287BCu);
    ctx->pc = 0x2287B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2287B4u;
    // 0x2287b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2287B4u, 0x2287BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2287BCu;
label_2287bc:
    // 0x2287bc: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2287BCu;
    {
        const bool branch_taken_0x2287bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2287C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287BCu;
        // 0x2287c0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2287bc) {
            ctx->pc = 0x2288B0u;
            goto label_2288b0;
        }
    }
    ctx->pc = 0x2287C4u;
    // 0x2287c4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2287c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2287c8: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x2287c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x2287cc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2287CCu;
    SET_GPR_U32(ctx, 31, 0x2287D4u);
    ctx->pc = 0x2287D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2287CCu;
    // 0x2287d0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2287CCu, 0x2287D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2287D4u;
label_2287d4:
    // 0x2287d4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2287d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2287d8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2287d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2287dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2287DCu;
    {
        const bool branch_taken_0x2287dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2287E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287DCu;
        // 0x2287e0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2287dc) {
            ctx->pc = 0x2287FCu;
            goto label_2287fc;
        }
    }
    ctx->pc = 0x2287E4u;
    // 0x2287e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2287e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2287e8: 0x24428710  addiu       $v0, $v0, -0x78F0
    ctx->pc = 0x2287e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936336));
    // 0x2287ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2287ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2287f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2287f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2287f4: 0x800008  jr          $a0
    ctx->pc = 0x2287F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2287FCu: goto label_2287fc;
            case 0x228814u: goto label_228814;
            case 0x228830u: goto label_228830;
            case 0x228854u: goto label_228854;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2287F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2287FCu;
label_2287fc:
    // 0x2287fc: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x2287fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228800: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228804: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x228804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x228808: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x228808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22880c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22880Cu;
    {
        const bool branch_taken_0x22880c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22880Cu;
        // 0x228810: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22880c) {
            ctx->pc = 0x22884Cu;
            goto label_22884c;
        }
    }
    ctx->pc = 0x228814u;
label_228814:
    // 0x228814: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x228814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228818: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228818u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22881c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x22881cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x228820: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x228820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x228824: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x228824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228828: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x228828u;
    {
        const bool branch_taken_0x228828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228828u;
        // 0x22882c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228828) {
            ctx->pc = 0x22884Cu;
            goto label_22884c;
        }
    }
    ctx->pc = 0x228830u;
label_228830:
    // 0x228830: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x228830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228834: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228838: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x228838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x22883c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x22883cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x228840: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x228840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228844: 0x0  nop
    ctx->pc = 0x228844u;
    // NOP
    // 0x228848: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22884c:
    // 0x22884c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22884cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x228850: 0xe62105f0  swc1        $f1, 0x5F0($s1)
    ctx->pc = 0x228850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1520), bits); }
label_228854:
    // 0x228854: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x228854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228858: 0x92221864  lbu         $v0, 0x1864($s1)
    ctx->pc = 0x228858u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
    // 0x22885c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22885Cu;
    {
        const bool branch_taken_0x22885c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22885Cu;
        // 0x228860: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22885c) {
            ctx->pc = 0x228868u;
            goto label_228868;
        }
    }
    ctx->pc = 0x228864u;
    // 0x228864: 0xa6200568  sh          $zero, 0x568($s1)
    ctx->pc = 0x228864u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 0));
label_228868:
    // 0x228868: 0x96220568  lhu         $v0, 0x568($s1)
    ctx->pc = 0x228868u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x22886c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22886cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x228870: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x228870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x228874: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x228874u;
    {
        const bool branch_taken_0x228874 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x228878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228874u;
        // 0x228878: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228874) {
            ctx->pc = 0x228884u;
            goto label_228884;
        }
    }
    ctx->pc = 0x22887Cu;
    // 0x22887c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22887cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x228880: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x228880u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_228884:
    // 0x228884: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x228884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x228888: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x228888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x22888c: 0xc0a4c48  jal         func_293120
    ctx->pc = 0x22888Cu;
    SET_GPR_U32(ctx, 31, 0x228894u);
    ctx->pc = 0x228890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22888Cu;
    // 0x228890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293120u, 0x22888Cu, 0x228894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228894u;
label_228894:
    // 0x228894: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x228894u;
    {
        const bool branch_taken_0x228894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228894u;
        // 0x228898: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228894) {
            ctx->pc = 0x2288ACu;
            goto label_2288ac;
        }
    }
    ctx->pc = 0x22889Cu;
    // 0x22889c: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x22889Cu;
    SET_GPR_U32(ctx, 31, 0x2288A4u);
    ctx->pc = 0x2288A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22889Cu;
    // 0x2288a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x22889Cu, 0x2288A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2288A4u;
label_2288a4:
    // 0x2288a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2288A4u;
    {
        const bool branch_taken_0x2288a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2288A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2288A4u;
        // 0x2288a8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2288a4) {
            ctx->pc = 0x2288B0u;
            goto label_2288b0;
        }
    }
    ctx->pc = 0x2288ACu;
label_2288ac:
    // 0x2288ac: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2288acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2288b0:
    // 0x2288b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2288b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2288b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2288b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2288b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2288b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2288bc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2288BCu;
    SET_GPR_U32(ctx, 31, 0x2288C4u);
    ctx->pc = 0x2288C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2288BCu;
    // 0x2288c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2288BCu, 0x2288C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2288C4u;
label_2288c4:
    // 0x2288c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2288c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2288c8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2288C8u;
    SET_GPR_U32(ctx, 31, 0x2288D0u);
    ctx->pc = 0x2288CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2288C8u;
    // 0x2288cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2288C8u, 0x2288D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2288D0u;
label_2288d0:
    // 0x2288d0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2288D0u;
    {
        const bool branch_taken_0x2288d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2288d0) {
            ctx->pc = 0x228954u;
            goto label_228954;
        }
    }
    ctx->pc = 0x2288D8u;
label_2288d8:
    // 0x2288d8: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x2288d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2288dc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2288DCu;
    SET_GPR_U32(ctx, 31, 0x2288E4u);
    ctx->pc = 0x2288E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2288DCu;
    // 0x2288e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2288DCu, 0x2288E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2288E4u;
label_2288e4:
    // 0x2288e4: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2288e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2288e8: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2288e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2288ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2288ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2288f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2288f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2288f4: 0x8c651e98  lw          $a1, 0x1E98($v1)
    ctx->pc = 0x2288f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7832)));
    // 0x2288f8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2288f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2288fc: 0x8c661e9c  lw          $a2, 0x1E9C($v1)
    ctx->pc = 0x2288fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7836)));
    // 0x228900: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x228900u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228904: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x228904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x228908: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x228908u;
    SET_GPR_U32(ctx, 31, 0x228910u);
    ctx->pc = 0x22890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228908u;
    // 0x22890c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x228908u, 0x228910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228910u;
label_228910:
    // 0x228910: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x228910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x228914: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x228914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x228918: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x228918u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_22891c:
    // 0x22891c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22891Cu;
    SET_GPR_U32(ctx, 31, 0x228924u);
    ctx->pc = 0x228920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22891Cu;
    // 0x228920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22891Cu, 0x228924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228924u;
label_228924:
    // 0x228924: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x228924u;
    {
        const bool branch_taken_0x228924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228924) {
            ctx->pc = 0x228934u;
            goto label_228934;
        }
    }
    ctx->pc = 0x22892Cu;
    // 0x22892c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x22892Cu;
    SET_GPR_U32(ctx, 31, 0x228934u);
    ctx->pc = 0x228930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22892Cu;
    // 0x228930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x22892Cu, 0x228934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228934u;
label_228934:
    // 0x228934: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x228934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x228938: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x228938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22893c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22893cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228940: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x228940u;
    SET_GPR_U32(ctx, 31, 0x228948u);
    ctx->pc = 0x228944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228940u;
    // 0x228944: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x228940u, 0x228948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228948u;
label_228948:
    // 0x228948: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x228948u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22894c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22894Cu;
    SET_GPR_U32(ctx, 31, 0x228954u);
    ctx->pc = 0x228950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22894Cu;
    // 0x228950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22894Cu, 0x228954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228954u;
label_228954:
    // 0x228954: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x228954u;
    SET_GPR_U32(ctx, 31, 0x22895Cu);
    ctx->pc = 0x228958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228954u;
    // 0x228958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x228954u, 0x22895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22895Cu;
label_22895c:
    // 0x22895c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22895cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x228960: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x228960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x228964: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x228964u;
    {
        const bool branch_taken_0x228964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228964u;
        // 0x228968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228964) {
            ctx->pc = 0x228970u;
            goto label_228970;
        }
    }
    ctx->pc = 0x22896Cu;
    // 0x22896c: 0xae2205fc  sw          $v0, 0x5FC($s1)
    ctx->pc = 0x22896cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 2));
label_228970:
    // 0x228970: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x228970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x228974: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x228974u;
    {
        const bool branch_taken_0x228974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228974u;
        // 0x228978: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228974) {
            ctx->pc = 0x228990u;
            goto label_228990;
        }
    }
    ctx->pc = 0x22897Cu;
    // 0x22897c: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x22897cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x228980: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x228980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x228984: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x228984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x228988: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x228988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22898c: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x22898cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_228990:
    // 0x228990: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x228990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228994: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x228994u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228998: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x228998u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22899c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x22899cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2289a0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2289a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2289a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2289a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2289a8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2289a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2289ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2289ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2289B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2289ACu;
        // 0x2289b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2289ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2289B4u;
    // 0x2289b4: 0x0  nop
    ctx->pc = 0x2289b4u;
    // NOP
    ctx->pc = 0x2289b8u;
}
