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

// Function: func_002383D0
// Address: 0x2383d0 - 0x2387b8
void func_002383D0_0x2383d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002383D0_0x2383d0");
#endif

    switch (ctx->pc) {
        case 0x2383f4u: goto label_2383f4;
        case 0x23840cu: goto label_23840c;
        case 0x238454u: goto label_238454;
        case 0x23849cu: goto label_23849c;
        case 0x2384b8u: goto label_2384b8;
        case 0x2384d4u: goto label_2384d4;
        case 0x2385acu: goto label_2385ac;
        case 0x2385c4u: goto label_2385c4;
        case 0x2385d4u: goto label_2385d4;
        case 0x2385e0u: goto label_2385e0;
        case 0x2385ecu: goto label_2385ec;
        case 0x2386acu: goto label_2386ac;
        case 0x2386ccu: goto label_2386cc;
        case 0x2386e8u: goto label_2386e8;
        case 0x238754u: goto label_238754;
        case 0x238780u: goto label_238780;
        case 0x23878cu: goto label_23878c;
        case 0x238794u: goto label_238794;
        default: break;
    }

    ctx->pc = 0x2383d0u;

    // 0x2383d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2383d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2383d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2383d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2383d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2383d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2383dc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2383dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2383e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2383e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2383e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2383e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2383e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2383e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2383ec: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2383ECu;
    SET_GPR_U32(ctx, 31, 0x2383F4u);
    ctx->pc = 0x2383F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2383ECu;
    // 0x2383f0: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2383ECu, 0x2383F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2383F4u;
label_2383f4:
    // 0x2383f4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2383f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2383f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2383f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2383fc: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2383fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x238400: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x238400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238404: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x238404u;
    SET_GPR_U32(ctx, 31, 0x23840Cu);
    ctx->pc = 0x238408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238404u;
    // 0x238408: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x238404u, 0x23840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23840Cu;
label_23840c:
    // 0x23840c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x23840cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x238410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238414: 0x1062004e  beq         $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x238414u;
    {
        const bool branch_taken_0x238414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x238418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238414u;
        // 0x238418: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238414) {
            ctx->pc = 0x238550u;
            goto label_238550;
        }
    }
    ctx->pc = 0x23841Cu;
    // 0x23841c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23841Cu;
    {
        const bool branch_taken_0x23841c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23841Cu;
        // 0x238420: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23841c) {
            ctx->pc = 0x238434u;
            goto label_238434;
        }
    }
    ctx->pc = 0x238424u;
    // 0x238424: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x238424u;
    {
        const bool branch_taken_0x238424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x238424) {
            ctx->pc = 0x238428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238424u;
            // 0x238428: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23844Cu;
            goto label_23844c;
        }
    }
    ctx->pc = 0x23842Cu;
    // 0x23842c: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x23842Cu;
    {
        const bool branch_taken_0x23842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23842c) {
            ctx->pc = 0x23878Cu;
            goto label_23878c;
        }
    }
    ctx->pc = 0x238434u;
label_238434:
    // 0x238434: 0x10620091  beq         $v1, $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x238434u;
    {
        const bool branch_taken_0x238434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x238438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238434u;
        // 0x238438: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238434) {
            ctx->pc = 0x23867Cu;
            goto label_23867c;
        }
    }
    ctx->pc = 0x23843Cu;
    // 0x23843c: 0x506200b3  beql        $v1, $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x23843Cu;
    {
        const bool branch_taken_0x23843c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23843c) {
            ctx->pc = 0x238440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23843Cu;
            // 0x238440: 0x8e0205f0  lw          $v0, 0x5F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23870Cu;
            goto label_23870c;
        }
    }
    ctx->pc = 0x238444u;
    // 0x238444: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x238444u;
    {
        const bool branch_taken_0x238444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x238444) {
            ctx->pc = 0x23878Cu;
            goto label_23878c;
        }
    }
    ctx->pc = 0x23844Cu;
label_23844c:
    // 0x23844c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23844Cu;
    SET_GPR_U32(ctx, 31, 0x238454u);
    ctx->pc = 0x238450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23844Cu;
    // 0x238450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23844Cu, 0x238454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238454u;
label_238454:
    // 0x238454: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x238454u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x238458: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x238458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x23845c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23845Cu;
    {
        const bool branch_taken_0x23845c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23845Cu;
        // 0x238460: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23845c) {
            ctx->pc = 0x238470u;
            goto label_238470;
        }
    }
    ctx->pc = 0x238464u;
    // 0x238464: 0x8c432b24  lw          $v1, 0x2B24($v0)
    ctx->pc = 0x238464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11044)));
    // 0x238468: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x238468u;
    {
        const bool branch_taken_0x238468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238468u;
        // 0x23846c: 0x8c442b28  lw          $a0, 0x2B28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238468) {
            ctx->pc = 0x238478u;
            goto label_238478;
        }
    }
    ctx->pc = 0x238470u;
label_238470:
    // 0x238470: 0x8c432b40  lw          $v1, 0x2B40($v0)
    ctx->pc = 0x238470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11072)));
    // 0x238474: 0x8c442b44  lw          $a0, 0x2B44($v0)
    ctx->pc = 0x238474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11076)));
label_238478:
    // 0x238478: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x238478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23847c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x23847cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x238480: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x238480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x238484: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x238484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238488: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x238488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23848c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23848cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238490: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x238490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238494: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x238494u;
    SET_GPR_U32(ctx, 31, 0x23849Cu);
    ctx->pc = 0x238498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238494u;
    // 0x238498: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x238494u, 0x23849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23849Cu;
label_23849c:
    // 0x23849c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23849cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2384a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2384a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2384a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2384a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2384a8: 0x2407003d  addiu       $a3, $zero, 0x3D
    ctx->pc = 0x2384a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2384ac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2384acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2384b0: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2384B0u;
    SET_GPR_U32(ctx, 31, 0x2384B8u);
    ctx->pc = 0x2384B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2384B0u;
    // 0x2384b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2384B0u, 0x2384B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2384B8u;
label_2384b8:
    // 0x2384b8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2384b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2384bc: 0xa600056a  sh          $zero, 0x56A($s0)
    ctx->pc = 0x2384bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
    // 0x2384c0: 0xa600056c  sh          $zero, 0x56C($s0)
    ctx->pc = 0x2384c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1388), (uint16_t)GPR_U32(ctx, 0));
    // 0x2384c4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2384c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2384c8: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x2384c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x2384cc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2384CCu;
    SET_GPR_U32(ctx, 31, 0x2384D4u);
    ctx->pc = 0x2384D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2384CCu;
    // 0x2384d0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2384CCu, 0x2384D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2384D4u;
label_2384d4:
    // 0x2384d4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2384d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2384d8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2384d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2384dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2384DCu;
    {
        const bool branch_taken_0x2384dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2384E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384DCu;
        // 0x2384e0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384dc) {
            ctx->pc = 0x2384FCu;
            goto label_2384fc;
        }
    }
    ctx->pc = 0x2384E4u;
    // 0x2384e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2384e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2384e8: 0x2442a360  addiu       $v0, $v0, -0x5CA0
    ctx->pc = 0x2384e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943584));
    // 0x2384ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2384ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2384f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2384f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2384f4: 0x800008  jr          $a0
    ctx->pc = 0x2384F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2384FCu: goto label_2384fc;
            case 0x238504u: goto label_238504;
            case 0x23850Cu: goto label_23850c;
            case 0x238514u: goto label_238514;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2384F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2384FCu;
label_2384fc:
    // 0x2384fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2384FCu;
    {
        const bool branch_taken_0x2384fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384FCu;
        // 0x238500: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384fc) {
            ctx->pc = 0x238518u;
            goto label_238518;
        }
    }
    ctx->pc = 0x238504u;
label_238504:
    // 0x238504: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x238504u;
    {
        const bool branch_taken_0x238504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238504u;
        // 0x238508: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238504) {
            ctx->pc = 0x238518u;
            goto label_238518;
        }
    }
    ctx->pc = 0x23850Cu;
label_23850c:
    // 0x23850c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23850Cu;
    {
        const bool branch_taken_0x23850c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23850Cu;
        // 0x238510: 0x24070019  addiu       $a3, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23850c) {
            ctx->pc = 0x238518u;
            goto label_238518;
        }
    }
    ctx->pc = 0x238514u;
label_238514:
    // 0x238514: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x238514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_238518:
    // 0x238518: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x238518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x23851c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x23851cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x238520: 0x24e50005  addiu       $a1, $a3, 0x5
    ctx->pc = 0x238520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
    // 0x238524: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x238524u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x238528: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x238528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23852c: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x23852cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x238530: 0xa2380b  movn        $a3, $a1, $v0
    ctx->pc = 0x238530u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x238534: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x238534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x238538: 0x28e20024  slti        $v0, $a3, 0x24
    ctx->pc = 0x238538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x23853c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x23853cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x238540: 0xc2380a  movz        $a3, $a2, $v0
    ctx->pc = 0x238540u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
    // 0x238544: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x238544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x238548: 0xa607056e  sh          $a3, 0x56E($s0)
    ctx->pc = 0x238548u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 7));
    // 0x23854c: 0xa20402f6  sb          $a0, 0x2F6($s0)
    ctx->pc = 0x23854cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 4));
label_238550:
    // 0x238550: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x238550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x238554: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x238554u;
    {
        const bool branch_taken_0x238554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238554u;
        // 0x238558: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238554) {
            ctx->pc = 0x238578u;
            goto label_238578;
        }
    }
    ctx->pc = 0x23855Cu;
    // 0x23855c: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x23855cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x238560: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x238560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x238564: 0x26630550  addiu       $v1, $s3, 0x550
    ctx->pc = 0x238564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1360));
    // 0x238568: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x238568u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23856c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x23856cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x238570: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x238570u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x238574: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x238574u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_238578:
    // 0x238578: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x238578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x23857c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23857cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238580: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x238580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x238584: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x238584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x238588: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x238588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23858c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23858Cu;
    {
        const bool branch_taken_0x23858c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23858Cu;
        // 0x238590: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23858c) {
            ctx->pc = 0x2385B4u;
            goto label_2385b4;
        }
    }
    ctx->pc = 0x238594u;
    // 0x238594: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x238594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23859c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x23859cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2385a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2385a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2385a4: 0xc0560a2  jal         func_158288
    ctx->pc = 0x2385A4u;
    SET_GPR_U32(ctx, 31, 0x2385ACu);
    ctx->pc = 0x2385A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385A4u;
    // 0x2385a8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x2385A4u, 0x2385ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2385ACu;
label_2385ac:
    // 0x2385ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2385ACu;
    {
        const bool branch_taken_0x2385ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2385ac) {
            ctx->pc = 0x2385C4u;
            goto label_2385c4;
        }
    }
    ctx->pc = 0x2385B4u;
label_2385b4:
    // 0x2385b4: 0xc60c05a8  lwc1        $f12, 0x5A8($s0)
    ctx->pc = 0x2385b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2385b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2385b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2385bc: 0xc0560a2  jal         func_158288
    ctx->pc = 0x2385BCu;
    SET_GPR_U32(ctx, 31, 0x2385C4u);
    ctx->pc = 0x2385C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385BCu;
    // 0x2385c0: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x2385BCu, 0x2385C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2385C4u;
label_2385c4:
    // 0x2385c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2385c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2385c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2385c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2385cc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2385CCu;
    SET_GPR_U32(ctx, 31, 0x2385D4u);
    ctx->pc = 0x2385D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385CCu;
    // 0x2385d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2385CCu, 0x2385D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2385D4u;
label_2385d4:
    // 0x2385d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2385d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2385d8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2385D8u;
    SET_GPR_U32(ctx, 31, 0x2385E0u);
    ctx->pc = 0x2385DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385D8u;
    // 0x2385dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2385D8u, 0x2385E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2385E0u;
label_2385e0:
    // 0x2385e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2385e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2385e4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2385E4u;
    SET_GPR_U32(ctx, 31, 0x2385ECu);
    ctx->pc = 0x2385E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385E4u;
    // 0x2385e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2385E4u, 0x2385ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2385ECu;
label_2385ec:
    // 0x2385ec: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x2385ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x2385f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2385f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2385f4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2385f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2385f8: 0x1c60000e  bgtz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2385F8u;
    {
        const bool branch_taken_0x2385f8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x2385FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385F8u;
        // 0x2385fc: 0xa6020568  sh          $v0, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2385f8) {
            ctx->pc = 0x238634u;
            goto label_238634;
        }
    }
    ctx->pc = 0x238600u;
    // 0x238600: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x238600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x238604: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x238604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x238608: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x238608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x23860c: 0xa26302f6  sb          $v1, 0x2F6($s3)
    ctx->pc = 0x23860cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x238610: 0x8602056a  lh          $v0, 0x56A($s0)
    ctx->pc = 0x238610u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
    // 0x238614: 0x8603056e  lh          $v1, 0x56E($s0)
    ctx->pc = 0x238614u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
    // 0x238618: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x238618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23861c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23861Cu;
    {
        const bool branch_taken_0x23861c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23861Cu;
        // 0x238620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23861c) {
            ctx->pc = 0x23862Cu;
            goto label_23862c;
        }
    }
    ctx->pc = 0x238624u;
    // 0x238624: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x238624u;
    {
        const bool branch_taken_0x238624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238624u;
        // 0x238628: 0xa662056c  sh          $v0, 0x56C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1388), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238624) {
            ctx->pc = 0x23878Cu;
            goto label_23878c;
        }
    }
    ctx->pc = 0x23862Cu;
label_23862c:
    // 0x23862c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x23862Cu;
    {
        const bool branch_taken_0x23862c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23862Cu;
        // 0x238630: 0xa602056c  sh          $v0, 0x56C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1388), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23862c) {
            ctx->pc = 0x23878Cu;
            goto label_23878c;
        }
    }
    ctx->pc = 0x238634u;
label_238634:
    // 0x238634: 0x8662054a  lh          $v0, 0x54A($s3)
    ctx->pc = 0x238634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1354)));
    // 0x238638: 0x18400054  blez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x238638u;
    {
        const bool branch_taken_0x238638 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x23863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238638u;
        // 0x23863c: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238638) {
            ctx->pc = 0x23878Cu;
            goto label_23878c;
        }
    }
    ctx->pc = 0x238640u;
    // 0x238640: 0x8c6274a8  lw          $v0, 0x74A8($v1)
    ctx->pc = 0x238640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29864)));
    // 0x238644: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x238644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x238648: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x238648u;
    {
        const bool branch_taken_0x238648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238648u;
        // 0x23864c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238648) {
            ctx->pc = 0x23878Cu;
            goto label_23878c;
        }
    }
    ctx->pc = 0x238650u;
    // 0x238650: 0x9602056a  lhu         $v0, 0x56A($s0)
    ctx->pc = 0x238650u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
    // 0x238654: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x238654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x238658: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x238658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x23865c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x23865cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x238660: 0x1464004a  bne         $v1, $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x238660u;
    {
        const bool branch_taken_0x238660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x238664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238660u;
        // 0x238664: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238660) {
            ctx->pc = 0x23878Cu;
            goto label_23878c;
        }
    }
    ctx->pc = 0x238668u;
    // 0x238668: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x238668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23866c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x23866cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x238670: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x238670u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x238674: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x238674u;
    {
        const bool branch_taken_0x238674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238674u;
        // 0x238678: 0xa6030568  sh          $v1, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238674) {
            ctx->pc = 0x23878Cu;
            goto label_23878c;
        }
    }
    ctx->pc = 0x23867Cu;
label_23867c:
    // 0x23867c: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x23867cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x238680: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x238680u;
    {
        const bool branch_taken_0x238680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238680u;
        // 0x238684: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238680) {
            ctx->pc = 0x238694u;
            goto label_238694;
        }
    }
    ctx->pc = 0x238688u;
    // 0x238688: 0x8c432b2c  lw          $v1, 0x2B2C($v0)
    ctx->pc = 0x238688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11052)));
    // 0x23868c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23868Cu;
    {
        const bool branch_taken_0x23868c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23868Cu;
        // 0x238690: 0x8c442b30  lw          $a0, 0x2B30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23868c) {
            ctx->pc = 0x23869Cu;
            goto label_23869c;
        }
    }
    ctx->pc = 0x238694u;
label_238694:
    // 0x238694: 0x8c432b48  lw          $v1, 0x2B48($v0)
    ctx->pc = 0x238694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11080)));
    // 0x238698: 0x8c442b4c  lw          $a0, 0x2B4C($v0)
    ctx->pc = 0x238698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11084)));
label_23869c:
    // 0x23869c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23869cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2386a0: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x2386a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2386a4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2386A4u;
    SET_GPR_U32(ctx, 31, 0x2386ACu);
    ctx->pc = 0x2386A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2386A4u;
    // 0x2386a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2386A4u, 0x2386ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2386ACu;
label_2386ac:
    // 0x2386ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2386acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2386b0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2386b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2386b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2386b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2386b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2386b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2386bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2386bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2386c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2386c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2386c4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2386C4u;
    SET_GPR_U32(ctx, 31, 0x2386CCu);
    ctx->pc = 0x2386C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2386C4u;
    // 0x2386c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2386C4u, 0x2386CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2386CCu;
label_2386cc:
    // 0x2386cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2386ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2386d0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2386d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2386d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2386d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2386d8: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x2386d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2386dc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2386dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2386e0: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2386E0u;
    SET_GPR_U32(ctx, 31, 0x2386E8u);
    ctx->pc = 0x2386E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2386E0u;
    // 0x2386e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2386E0u, 0x2386E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2386E8u;
label_2386e8:
    // 0x2386e8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2386e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2386ec: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2386ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2386f0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2386f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2386f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2386f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2386f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2386f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2386fc: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x2386fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x238700: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x238700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x238704: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x238704u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x238708: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x238708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_23870c:
    // 0x23870c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23870Cu;
    {
        const bool branch_taken_0x23870c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23870Cu;
        // 0x238710: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23870c) {
            ctx->pc = 0x238730u;
            goto label_238730;
        }
    }
    ctx->pc = 0x238714u;
    // 0x238714: 0x26640550  addiu       $a0, $s3, 0x550
    ctx->pc = 0x238714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1360));
    // 0x238718: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x238718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x23871c: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x23871cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x238720: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x238720u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x238724: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x238724u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x238728: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x238728u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x23872c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x23872cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_238730:
    // 0x238730: 0x8602056c  lh          $v0, 0x56C($s0)
    ctx->pc = 0x238730u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1388)));
    // 0x238734: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238734u;
    {
        const bool branch_taken_0x238734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238734) {
            ctx->pc = 0x23874Cu;
            goto label_23874c;
        }
    }
    ctx->pc = 0x23873Cu;
    // 0x23873c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x23873cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x238740: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238744: 0x0  nop
    ctx->pc = 0x238744u;
    // NOP
    // 0x238748: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x238748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_23874c:
    // 0x23874c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23874Cu;
    SET_GPR_U32(ctx, 31, 0x238754u);
    ctx->pc = 0x238750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23874Cu;
    // 0x238750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23874Cu, 0x238754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238754u;
label_238754:
    // 0x238754: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238754u;
    {
        const bool branch_taken_0x238754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238754u;
        // 0x238758: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238754) {
            ctx->pc = 0x23876Cu;
            goto label_23876c;
        }
    }
    ctx->pc = 0x23875Cu;
    // 0x23875c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x23875cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x238760: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x238760u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x238764: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x238764u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x238768: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x238768u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_23876c:
    // 0x23876c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23876cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x238770: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x238770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x238774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238778: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x238778u;
    SET_GPR_U32(ctx, 31, 0x238780u);
    ctx->pc = 0x23877Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238778u;
    // 0x23877c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x238778u, 0x238780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238780u;
label_238780:
    // 0x238780: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x238780u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x238784: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x238784u;
    SET_GPR_U32(ctx, 31, 0x23878Cu);
    ctx->pc = 0x238788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238784u;
    // 0x238788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x238784u, 0x23878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23878Cu;
label_23878c:
    // 0x23878c: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x23878Cu;
    SET_GPR_U32(ctx, 31, 0x238794u);
    ctx->pc = 0x238790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23878Cu;
    // 0x238790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x23878Cu, 0x238794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238794u;
label_238794:
    // 0x238794: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x238794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238798: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x238798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23879c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23879cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2387a0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2387a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2387a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2387a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2387a8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2387a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2387ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2387ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2387B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387ACu;
        // 0x2387b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2387ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2387B4u;
    // 0x2387b4: 0x0  nop
    ctx->pc = 0x2387b4u;
    // NOP
    ctx->pc = 0x2387b8u;
}
