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

// Function: func_00277348
// Address: 0x277348 - 0x277540
void func_00277348_0x277348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00277348_0x277348");
#endif

    switch (ctx->pc) {
        case 0x277378u: goto label_277378;
        case 0x277398u: goto label_277398;
        case 0x2773dcu: goto label_2773dc;
        case 0x2773e4u: goto label_2773e4;
        case 0x2773ecu: goto label_2773ec;
        case 0x2773f8u: goto label_2773f8;
        case 0x277400u: goto label_277400;
        case 0x277410u: goto label_277410;
        case 0x27741cu: goto label_27741c;
        case 0x277448u: goto label_277448;
        case 0x2774a4u: goto label_2774a4;
        case 0x2774c8u: goto label_2774c8;
        case 0x277500u: goto label_277500;
        default: break;
    }

    ctx->pc = 0x277348u;

    // 0x277348: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x277348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27734c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x27734cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x277350: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x277350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x277354: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x277354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277358: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x277358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x27735c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x27735cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277360: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x277360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x277364: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x277364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277368: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x277368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27736c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x27736cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x277370: 0xc09dfe0  jal         func_277F80
    ctx->pc = 0x277370u;
    SET_GPR_U32(ctx, 31, 0x277378u);
    ctx->pc = 0x277374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277370u;
    // 0x277374: 0xae420564  sw          $v0, 0x564($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1380), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277F80u, 0x277370u, 0x277378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277378u;
label_277378:
    // 0x277378: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277378u;
    {
        const bool branch_taken_0x277378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277378u;
        // 0x27737c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277378) {
            ctx->pc = 0x277388u;
            goto label_277388;
        }
    }
    ctx->pc = 0x277380u;
    // 0x277380: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x277380u;
    {
        const bool branch_taken_0x277380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277380u;
        // 0x277384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277380) {
            ctx->pc = 0x277520u;
            goto label_277520;
        }
    }
    ctx->pc = 0x277388u;
label_277388:
    // 0x277388: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x277388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27738c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27738cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277390: 0xc0a3afc  jal         func_28EBF0
    ctx->pc = 0x277390u;
    SET_GPR_U32(ctx, 31, 0x277398u);
    ctx->pc = 0x277394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277390u;
    // 0x277394: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EBF0u, 0x277390u, 0x277398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277398u;
label_277398:
    // 0x277398: 0x3c110046  lui         $s1, 0x46
    ctx->pc = 0x277398u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    // 0x27739c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x27739cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2773a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2773a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2773a4: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x2773a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2773a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2773a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2773ac: 0xa25002f5  sb          $s0, 0x2F5($s2)
    ctx->pc = 0x2773acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 16));
    // 0x2773b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2773b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2773b4: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x2773b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2773b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2773b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2773bc: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x2773bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2773c0: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x2773c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2773c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2773c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2773c8: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x2773c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2773cc: 0x8c460058  lw          $a2, 0x58($v0)
    ctx->pc = 0x2773ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2773d0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2773d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2773d4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2773D4u;
    SET_GPR_U32(ctx, 31, 0x2773DCu);
    ctx->pc = 0x2773D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2773D4u;
    // 0x2773d8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2773D4u, 0x2773DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773DCu;
label_2773dc:
    // 0x2773dc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2773DCu;
    SET_GPR_U32(ctx, 31, 0x2773E4u);
    ctx->pc = 0x2773E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2773DCu;
    // 0x2773e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2773DCu, 0x2773E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773E4u;
label_2773e4:
    // 0x2773e4: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x2773E4u;
    SET_GPR_U32(ctx, 31, 0x2773ECu);
    ctx->pc = 0x2773E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2773E4u;
    // 0x2773e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x2773E4u, 0x2773ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773ECu;
label_2773ec:
    // 0x2773ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2773ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2773f0: 0xc054a88  jal         func_152A20
    ctx->pc = 0x2773F0u;
    SET_GPR_U32(ctx, 31, 0x2773F8u);
    ctx->pc = 0x2773F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2773F0u;
    // 0x2773f4: 0x26440448  addiu       $a0, $s2, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x2773F0u, 0x2773F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773F8u;
label_2773f8:
    // 0x2773f8: 0xc05280e  jal         func_14A038
    ctx->pc = 0x2773F8u;
    SET_GPR_U32(ctx, 31, 0x277400u);
    ctx->pc = 0x2773FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2773F8u;
    // 0x2773fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x2773F8u, 0x277400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277400u;
label_277400:
    // 0x277400: 0x26242fc0  addiu       $a0, $s1, 0x2FC0
    ctx->pc = 0x277400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12224));
    // 0x277404: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x277404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277408: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x277408u;
    SET_GPR_U32(ctx, 31, 0x277410u);
    ctx->pc = 0x27740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277408u;
    // 0x27740c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x277408u, 0x277410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277410u;
label_277410:
    // 0x277410: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x277410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277414: 0xc05404a  jal         func_150128
    ctx->pc = 0x277414u;
    SET_GPR_U32(ctx, 31, 0x27741Cu);
    ctx->pc = 0x277418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277414u;
    // 0x277418: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x277414u, 0x27741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27741Cu;
label_27741c:
    // 0x27741c: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x27741cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x277420: 0x24020230  addiu       $v0, $zero, 0x230
    ctx->pc = 0x277420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x277424: 0xa650054a  sh          $s0, 0x54A($s2)
    ctx->pc = 0x277424u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1354), (uint16_t)GPR_U32(ctx, 16));
    // 0x277428: 0xa6500548  sh          $s0, 0x548($s2)
    ctx->pc = 0x277428u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1352), (uint16_t)GPR_U32(ctx, 16));
    // 0x27742c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x27742Cu;
    {
        const bool branch_taken_0x27742c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x277430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27742Cu;
        // 0x277430: 0xae400670  sw          $zero, 0x670($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27742c) {
            ctx->pc = 0x2774A8u;
            goto label_2774a8;
        }
    }
    ctx->pc = 0x277434u;
    // 0x277434: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x277434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x277438: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x277438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27743c: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x27743cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x277440: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x277440u;
    SET_GPR_U32(ctx, 31, 0x277448u);
    ctx->pc = 0x277444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277440u;
    // 0x277444: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x277440u, 0x277448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277448u;
label_277448:
    // 0x277448: 0x924402b4  lbu         $a0, 0x2B4($s2)
    ctx->pc = 0x277448u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x27744c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27744cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277450: 0xae420670  sw          $v0, 0x670($s2)
    ctx->pc = 0x277450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1648), GPR_U32(ctx, 2));
    // 0x277454: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x277454u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x277458: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x277458u;
    {
        const bool branch_taken_0x277458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277458u;
        // 0x27745c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277458) {
            ctx->pc = 0x27746Cu;
            goto label_27746c;
        }
    }
    ctx->pc = 0x277460u;
    // 0x277460: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x277460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x277464: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x277464u;
    {
        const bool branch_taken_0x277464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277464u;
        // 0x277468: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277464) {
            ctx->pc = 0x277470u;
            goto label_277470;
        }
    }
    ctx->pc = 0x27746Cu;
label_27746c:
    // 0x27746c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27746cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277470:
    // 0x277470: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x277470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x277474: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x277474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x277478: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x277478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x27747c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x27747cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x277480: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x277480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x277484: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x277484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277488: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x277488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27748c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27748cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277490: 0x8e440670  lw          $a0, 0x670($s2)
    ctx->pc = 0x277490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    // 0x277494: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x277494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x277498: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x277498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27749c: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x27749Cu;
    SET_GPR_U32(ctx, 31, 0x2774A4u);
    ctx->pc = 0x2774A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27749Cu;
    // 0x2774a0: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x27749Cu, 0x2774A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2774A4u;
label_2774a4:
    // 0x2774a4: 0xae420674  sw          $v0, 0x674($s2)
    ctx->pc = 0x2774a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 2));
label_2774a8:
    // 0x2774a8: 0x26702fc0  addiu       $s0, $s3, 0x2FC0
    ctx->pc = 0x2774a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12224));
    // 0x2774ac: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2774acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2774b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2774b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2774b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2774b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2774b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2774b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2774bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2774bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2774c0: 0xc04d1be  jal         func_1346F8
    ctx->pc = 0x2774C0u;
    SET_GPR_U32(ctx, 31, 0x2774C8u);
    ctx->pc = 0x2774C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2774C0u;
    // 0x2774c4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1346F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346F8u, 0x2774C0u, 0x2774C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2774C8u;
label_2774c8:
    // 0x2774c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2774c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2774cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2774ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2774d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2774d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2774d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2774d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2774d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2774d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2774dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2774dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2774e0: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x2774e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x2774e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2774e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2774e8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2774e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2774ec: 0x26460080  addiu       $a2, $s2, 0x80
    ctx->pc = 0x2774ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x2774f0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2774f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2774f4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2774f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2774f8: 0xc04d220  jal         func_134880
    ctx->pc = 0x2774F8u;
    SET_GPR_U32(ctx, 31, 0x277500u);
    ctx->pc = 0x2774FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2774F8u;
    // 0x2774fc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134880u, 0x2774F8u, 0x277500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277500u;
label_277500:
    // 0x277500: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x277500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x277504: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x277504u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x277508: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x277508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27750c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27750cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277510: 0xa2420617  sb          $v0, 0x617($s2)
    ctx->pc = 0x277510u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1559), (uint8_t)GPR_U32(ctx, 2));
    // 0x277514: 0xe6401564  swc1        $f0, 0x1564($s2)
    ctx->pc = 0x277514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5476), bits); }
    // 0x277518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27751c: 0xae401568  sw          $zero, 0x1568($s2)
    ctx->pc = 0x27751cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5480), GPR_U32(ctx, 0));
label_277520:
    // 0x277520: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x277520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x277524: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x277524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x277528: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x277528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27752c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27752cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277530: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x277530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277534: 0x3e00008  jr          $ra
    ctx->pc = 0x277534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277534u;
        // 0x277538: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27753Cu;
    // 0x27753c: 0x0  nop
    ctx->pc = 0x27753cu;
    // NOP
    ctx->pc = 0x277540u;
}
