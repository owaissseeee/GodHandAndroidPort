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

// Function: func_00226450
// Address: 0x226450 - 0x2266f0
void func_00226450_0x226450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00226450_0x226450");
#endif

    switch (ctx->pc) {
        case 0x2264a4u: goto label_2264a4;
        case 0x2264c4u: goto label_2264c4;
        case 0x2264f8u: goto label_2264f8;
        case 0x226504u: goto label_226504;
        case 0x2265a0u: goto label_2265a0;
        case 0x2265c0u: goto label_2265c0;
        case 0x2265e0u: goto label_2265e0;
        case 0x226630u: goto label_226630;
        case 0x226640u: goto label_226640;
        case 0x226654u: goto label_226654;
        case 0x226660u: goto label_226660;
        case 0x22667cu: goto label_22667c;
        case 0x226684u: goto label_226684;
        case 0x22669cu: goto label_22669c;
        default: break;
    }

    ctx->pc = 0x226450u;

    // 0x226450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x226450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x226454: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x226454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x226458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22645c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22645cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x226460: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x226460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226468: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x226468u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22646c: 0xa223186a  sb          $v1, 0x186A($s1)
    ctx->pc = 0x22646cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x226470: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x226470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x226474: 0x922402f6  lbu         $a0, 0x2F6($s1)
    ctx->pc = 0x226474u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x226478: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x226478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x22647c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22647Cu;
    {
        const bool branch_taken_0x22647c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22647Cu;
        // 0x226480: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22647c) {
            ctx->pc = 0x226498u;
            goto label_226498;
        }
    }
    ctx->pc = 0x226484u;
    // 0x226484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226488: 0x10820048  beq         $a0, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x226488u;
    {
        const bool branch_taken_0x226488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226488u;
        // 0x22648c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226488) {
            ctx->pc = 0x2265ACu;
            goto label_2265ac;
        }
    }
    ctx->pc = 0x226490u;
    // 0x226490: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x226490u;
    {
        const bool branch_taken_0x226490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226490u;
        // 0x226494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226490) {
            ctx->pc = 0x226668u;
            goto label_226668;
        }
    }
    ctx->pc = 0x226498u;
label_226498:
    // 0x226498: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x226498u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22649c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22649Cu;
    SET_GPR_U32(ctx, 31, 0x2264A4u);
    ctx->pc = 0x2264A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22649Cu;
    // 0x2264a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22649Cu, 0x2264A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2264A4u;
label_2264a4:
    // 0x2264a4: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x2264a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2264a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2264a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2264ac: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2264acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2264b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2264b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2264b4: 0x2407004b  addiu       $a3, $zero, 0x4B
    ctx->pc = 0x2264b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x2264b8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2264b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2264bc: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2264BCu;
    SET_GPR_U32(ctx, 31, 0x2264C4u);
    ctx->pc = 0x2264C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2264BCu;
    // 0x2264c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2264BCu, 0x2264C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2264C4u;
label_2264c4:
    // 0x2264c4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2264c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2264c8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2264c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2264cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2264ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2264d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2264d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2264d4: 0x8c4519b4  lw          $a1, 0x19B4($v0)
    ctx->pc = 0x2264d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6580)));
    // 0x2264d8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2264d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2264dc: 0x8c4619b8  lw          $a2, 0x19B8($v0)
    ctx->pc = 0x2264dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6584)));
    // 0x2264e0: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2264e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2264e4: 0xae2305f0  sw          $v1, 0x5F0($s1)
    ctx->pc = 0x2264e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 3));
    // 0x2264e8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2264e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2264ec: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2264ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2264f0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2264F0u;
    SET_GPR_U32(ctx, 31, 0x2264F8u);
    ctx->pc = 0x2264F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2264F0u;
    // 0x2264f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2264F0u, 0x2264F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2264F8u;
label_2264f8:
    // 0x2264f8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2264f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2264fc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2264FCu;
    SET_GPR_U32(ctx, 31, 0x226504u);
    ctx->pc = 0x226500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2264FCu;
    // 0x226500: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2264FCu, 0x226504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226504u;
label_226504:
    // 0x226504: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x226504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x226508: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x226508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x22650c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22650Cu;
    {
        const bool branch_taken_0x22650c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22650Cu;
        // 0x226510: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22650c) {
            ctx->pc = 0x22652Cu;
            goto label_22652c;
        }
    }
    ctx->pc = 0x226514u;
    // 0x226514: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x226514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x226518: 0x244285b0  addiu       $v0, $v0, -0x7A50
    ctx->pc = 0x226518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935984));
    // 0x22651c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22651cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226520: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x226520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x226524: 0x800008  jr          $a0
    ctx->pc = 0x226524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22652Cu: goto label_22652c;
            case 0x226544u: goto label_226544;
            case 0x226560u: goto label_226560;
            case 0x226584u: goto label_226584;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226524u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22652Cu;
label_22652c:
    // 0x22652c: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x22652cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226530: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x226530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x226534: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x226534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x226538: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x226538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22653c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22653Cu;
    {
        const bool branch_taken_0x22653c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22653Cu;
        // 0x226540: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22653c) {
            ctx->pc = 0x22657Cu;
            goto label_22657c;
        }
    }
    ctx->pc = 0x226544u;
label_226544:
    // 0x226544: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x226544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226548: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x226548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22654c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x22654cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x226550: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x226550u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x226554: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x226554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226558: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x226558u;
    {
        const bool branch_taken_0x226558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226558u;
        // 0x22655c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x226558) {
            ctx->pc = 0x22657Cu;
            goto label_22657c;
        }
    }
    ctx->pc = 0x226560u;
label_226560:
    // 0x226560: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x226560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226564: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x226564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x226568: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x226568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x22656c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x22656cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x226570: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x226570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226574: 0x0  nop
    ctx->pc = 0x226574u;
    // NOP
    // 0x226578: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x226578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22657c:
    // 0x22657c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22657cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x226580: 0xe62105f0  swc1        $f1, 0x5F0($s1)
    ctx->pc = 0x226580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1520), bits); }
label_226584:
    // 0x226584: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x226584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x226588: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x226588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x22658c: 0xae2205f4  sw          $v0, 0x5F4($s1)
    ctx->pc = 0x22658cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
    // 0x226590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226594: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226598: 0xc09bb90  jal         func_26EE40
    ctx->pc = 0x226598u;
    SET_GPR_U32(ctx, 31, 0x2265A0u);
    ctx->pc = 0x22659Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226598u;
    // 0x22659c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EE40u, 0x226598u, 0x2265A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2265A0u;
label_2265a0:
    // 0x2265a0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2265a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2265a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2265a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2265a8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2265a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2265ac:
    // 0x2265ac: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x2265acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x2265b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2265B0u;
    {
        const bool branch_taken_0x2265b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2265B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2265B0u;
        // 0x2265b4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2265b0) {
            ctx->pc = 0x2265E0u;
            goto label_2265e0;
        }
    }
    ctx->pc = 0x2265B8u;
    // 0x2265b8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2265B8u;
    SET_GPR_U32(ctx, 31, 0x2265C0u);
    ctx->pc = 0x2265BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2265B8u;
    // 0x2265bc: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2265B8u, 0x2265C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2265C0u;
label_2265c0:
    // 0x2265c0: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2265c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2265c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2265c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2265c8: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x2265c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x2265cc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2265ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2265d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2265d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2265d4: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2265d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2265d8: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2265D8u;
    SET_GPR_U32(ctx, 31, 0x2265E0u);
    ctx->pc = 0x2265DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2265D8u;
    // 0x2265dc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2265D8u, 0x2265E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2265E0u;
label_2265e0:
    // 0x2265e0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2265e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2265e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2265e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2265e8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2265E8u;
    {
        const bool branch_taken_0x2265e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2265e8) {
            ctx->pc = 0x2265ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2265E8u;
            // 0x2265ec: 0x8e2405f4  lw          $a0, 0x5F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22660Cu;
            goto label_22660c;
        }
    }
    ctx->pc = 0x2265F0u;
    // 0x2265f0: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x2265f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x2265f4: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x2265f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2265f8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2265F8u;
    {
        const bool branch_taken_0x2265f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2265f8) {
            ctx->pc = 0x2265FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2265F8u;
            // 0x2265fc: 0x8e2405f4  lw          $a0, 0x5F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22660Cu;
            goto label_22660c;
        }
    }
    ctx->pc = 0x226600u;
    // 0x226600: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x226600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x226604: 0xae2205f4  sw          $v0, 0x5F4($s1)
    ctx->pc = 0x226604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
    // 0x226608: 0x8e2405f4  lw          $a0, 0x5F4($s1)
    ctx->pc = 0x226608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
label_22660c:
    // 0x22660c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22660Cu;
    {
        const bool branch_taken_0x22660c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22660Cu;
        // 0x226610: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22660c) {
            ctx->pc = 0x226628u;
            goto label_226628;
        }
    }
    ctx->pc = 0x226614u;
    // 0x226614: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x226614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x226618: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x226618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x22661c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22661cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x226620: 0xae2405f4  sw          $a0, 0x5F4($s1)
    ctx->pc = 0x226620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 4));
    // 0x226624: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x226624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
label_226628:
    // 0x226628: 0xc055f06  jal         func_157C18
    ctx->pc = 0x226628u;
    SET_GPR_U32(ctx, 31, 0x226630u);
    ctx->pc = 0x22662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226628u;
    // 0x22662c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x226628u, 0x226630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226630u;
label_226630:
    // 0x226630: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226630u;
    {
        const bool branch_taken_0x226630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226630) {
            ctx->pc = 0x226640u;
            goto label_226640;
        }
    }
    ctx->pc = 0x226638u;
    // 0x226638: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x226638u;
    SET_GPR_U32(ctx, 31, 0x226640u);
    ctx->pc = 0x22663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226638u;
    // 0x22663c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x226638u, 0x226640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226640u;
label_226640:
    // 0x226640: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x226640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x226644: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x226644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x226648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22664c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22664Cu;
    SET_GPR_U32(ctx, 31, 0x226654u);
    ctx->pc = 0x226650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22664Cu;
    // 0x226650: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22664Cu, 0x226654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226654u;
label_226654:
    // 0x226654: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x226654u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x226658: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x226658u;
    SET_GPR_U32(ctx, 31, 0x226660u);
    ctx->pc = 0x22665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226658u;
    // 0x22665c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x226658u, 0x226660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226660u;
label_226660:
    // 0x226660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226668:
    // 0x226668: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x226668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22666c: 0x2407004b  addiu       $a3, $zero, 0x4B
    ctx->pc = 0x22666cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x226670: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x226670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226674: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x226674u;
    SET_GPR_U32(ctx, 31, 0x22667Cu);
    ctx->pc = 0x226678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226674u;
    // 0x226678: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x226674u, 0x22667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22667Cu;
label_22667c:
    // 0x22667c: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x22667Cu;
    SET_GPR_U32(ctx, 31, 0x226684u);
    ctx->pc = 0x226680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22667Cu;
    // 0x226680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x22667Cu, 0x226684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226684u;
label_226684:
    // 0x226684: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x226684u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x226688: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x226688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x22668c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22668Cu;
    {
        const bool branch_taken_0x22668c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22668c) {
            ctx->pc = 0x226690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22668Cu;
            // 0x226690: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2266A8u;
            goto label_2266a8;
        }
    }
    ctx->pc = 0x226694u;
    // 0x226694: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x226694u;
    SET_GPR_U32(ctx, 31, 0x22669Cu);
    ctx->pc = 0x226698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226694u;
    // 0x226698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x226694u, 0x22669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22669Cu;
label_22669c:
    // 0x22669c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22669Cu;
    {
        const bool branch_taken_0x22669c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2266A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22669Cu;
        // 0x2266a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22669c) {
            ctx->pc = 0x2266D8u;
            goto label_2266d8;
        }
    }
    ctx->pc = 0x2266A4u;
    // 0x2266a4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2266a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_2266a8:
    // 0x2266a8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2266a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2266ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2266ACu;
    {
        const bool branch_taken_0x2266ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2266B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2266ACu;
        // 0x2266b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2266ac) {
            ctx->pc = 0x2266B8u;
            goto label_2266b8;
        }
    }
    ctx->pc = 0x2266B4u;
    // 0x2266b4: 0xae2205fc  sw          $v0, 0x5FC($s1)
    ctx->pc = 0x2266b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 2));
label_2266b8:
    // 0x2266b8: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x2266b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x2266bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2266BCu;
    {
        const bool branch_taken_0x2266bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2266C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2266BCu;
        // 0x2266c0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2266bc) {
            ctx->pc = 0x2266D8u;
            goto label_2266d8;
        }
    }
    ctx->pc = 0x2266C4u;
    // 0x2266c4: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x2266c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x2266c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2266c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2266cc: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x2266ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x2266d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2266d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2266d4: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x2266d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_2266d8:
    // 0x2266d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2266d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2266dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2266dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2266e0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2266e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2266e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2266E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2266E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2266E4u;
        // 0x2266e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2266E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2266ECu;
    // 0x2266ec: 0x0  nop
    ctx->pc = 0x2266ecu;
    // NOP
    ctx->pc = 0x2266f0u;
}
