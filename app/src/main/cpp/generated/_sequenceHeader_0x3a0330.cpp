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

// Function: _sequenceHeader
// Address: 0x3a0330 - 0x3a05e0
void _sequenceHeader_0x3a0330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sequenceHeader_0x3a0330");
#endif

    switch (ctx->pc) {
        case 0x3a0354u: goto label_3a0354;
        case 0x3a0384u: goto label_3a0384;
        case 0x3a0390u: goto label_3a0390;
        case 0x3a03b4u: goto label_3a03b4;
        case 0x3a03c4u: goto label_3a03c4;
        case 0x3a03e8u: goto label_3a03e8;
        case 0x3a040cu: goto label_3a040c;
        case 0x3a0418u: goto label_3a0418;
        case 0x3a042cu: goto label_3a042c;
        case 0x3a0434u: goto label_3a0434;
        case 0x3a0478u: goto label_3a0478;
        case 0x3a0494u: goto label_3a0494;
        case 0x3a04a8u: goto label_3a04a8;
        case 0x3a04b4u: goto label_3a04b4;
        case 0x3a04c4u: goto label_3a04c4;
        case 0x3a04ecu: goto label_3a04ec;
        case 0x3a0510u: goto label_3a0510;
        case 0x3a0518u: goto label_3a0518;
        case 0x3a052cu: goto label_3a052c;
        case 0x3a0534u: goto label_3a0534;
        case 0x3a057cu: goto label_3a057c;
        case 0x3a05a0u: goto label_3a05a0;
        case 0x3a05b4u: goto label_3a05b4;
        case 0x3a05bcu: goto label_3a05bc;
        case 0x3a05c4u: goto label_3a05c4;
        default: break;
    }

    ctx->pc = 0x3a0330u;

    // 0x3a0330: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a0330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3a0334: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x3a0334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3a0338: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x3a0338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x3a033c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a033cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0340: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a0340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3a0344: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3a0344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x3a0348: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3a0348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3a034c: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A034Cu;
    SET_GPR_U32(ctx, 31, 0x3A0354u);
    ctx->pc = 0x3A0350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A034Cu;
    // 0x3a0350: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A034Cu, 0x3A0354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0354u;
label_3a0354:
    // 0x3a0354: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a0354u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0358: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x3a0358u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3a035c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3a035cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3a0360: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x3a0360u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
    // 0x3a0364: 0xae230134  sw          $v1, 0x134($s1)
    ctx->pc = 0x3a0364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 3));
    // 0x3a0368: 0x28440af1  slti        $a0, $v0, 0xAF1
    ctx->pc = 0x3a0368u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2801) ? 1 : 0);
    // 0x3a036c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A036Cu;
    {
        const bool branch_taken_0x3a036c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A036Cu;
        // 0x3a0370: 0xae220138  sw          $v0, 0x138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a036c) {
            ctx->pc = 0x3A0384u;
            goto label_3a0384;
        }
    }
    ctx->pc = 0x3A0374u;
    // 0x3a0374: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3a0374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3a0378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a0378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a037c: 0xc0e70e4  jal         func_39C390
    ctx->pc = 0x3A037Cu;
    SET_GPR_U32(ctx, 31, 0x3A0384u);
    ctx->pc = 0x3A0380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A037Cu;
    // 0x3a0380: 0x24a5e7f8  addiu       $a1, $a1, -0x1808 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x3A037Cu, 0x3A0384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0384u;
label_3a0384:
    // 0x3a0384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a0384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0388: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0388u;
    SET_GPR_U32(ctx, 31, 0x3A0390u);
    ctx->pc = 0x3A038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0388u;
    // 0x3a038c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0388u, 0x3A0390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0390u;
label_3a0390:
    // 0x3a0390: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a0390u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a0394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0398: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x3a0398u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3a039c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a039cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a03a0: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x3a03a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x3a03a4: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x3a03a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x3a03a8: 0xae230144  sw          $v1, 0x144($s1)
    ctx->pc = 0x3a03a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 3));
    // 0x3a03ac: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A03ACu;
    SET_GPR_U32(ctx, 31, 0x3A03B4u);
    ctx->pc = 0x3A03B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A03ACu;
    // 0x3a03b0: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A03ACu, 0x3A03B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A03B4u;
label_3a03b4:
    // 0x3a03b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3A03B4u;
    {
        const bool branch_taken_0x3a03b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A03B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A03B4u;
        // 0x3a03b8: 0xae220850  sw          $v0, 0x850($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a03b4) {
            ctx->pc = 0x3A03F0u;
            goto label_3a03f0;
        }
    }
    ctx->pc = 0x3A03BCu;
    // 0x3a03bc: 0xc0e837a  jal         func_3A0DE8
    ctx->pc = 0x3A03BCu;
    SET_GPR_U32(ctx, 31, 0x3A03C4u);
    ctx->pc = 0x3A03C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A03BCu;
    // 0x3a03c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0DE8u, 0x3A03BCu, 0x3A03C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A03C4u;
label_3a03c4:
    // 0x3a03c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3a03c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3a03c8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3a03c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x3a03cc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3a03ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3a03d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a03d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a03d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3a03d4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x3a03d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a03d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a03dc: 0xae23082c  sw          $v1, 0x82C($s1)
    ctx->pc = 0x3a03dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 3));
    // 0x3a03e0: 0xc0e837a  jal         func_3A0DE8
    ctx->pc = 0x3A03E0u;
    SET_GPR_U32(ctx, 31, 0x3A03E8u);
    ctx->pc = 0x3A03E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A03E0u;
    // 0x3a03e4: 0xae250828  sw          $a1, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0DE8u, 0x3A03E0u, 0x3A03E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A03E8u;
label_3a03e8:
    // 0x3a03e8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3A03E8u;
    {
        const bool branch_taken_0x3a03e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A03E8u;
        // 0x3a03ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a03e8) {
            ctx->pc = 0x3A04ACu;
            goto label_3a04ac;
        }
    }
    ctx->pc = 0x3A03F0u;
label_3a03f0:
    // 0x3a03f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a03f4: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x3a03f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x3a03f8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3a03f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3a03fc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3a03fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3a0400: 0x2610a280  addiu       $s0, $s0, -0x5D80
    ctx->pc = 0x3a0400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943360));
    // 0x3a0404: 0xc0e6ac8  jal         func_39AB20
    ctx->pc = 0x3A0404u;
    SET_GPR_U32(ctx, 31, 0x3A040Cu);
    ctx->pc = 0x3A0408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0404u;
    // 0x3a0408: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB20u, 0x3A0404u, 0x3A040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A040Cu;
label_3a040c:
    // 0x3a040c: 0x3c125000  lui         $s2, 0x5000
    ctx->pc = 0x3a040cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)20480 << 16));
    // 0x3a0410: 0xc0e837a  jal         func_3A0DE8
    ctx->pc = 0x3A0410u;
    SET_GPR_U32(ctx, 31, 0x3A0418u);
    ctx->pc = 0x3A0414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0410u;
    // 0x3a0414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0DE8u, 0x3A0410u, 0x3A0418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0418u;
label_3a0418:
    // 0x3a0418: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3a0418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3a041c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a041cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0420: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3a0420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3a0424: 0xc0e837a  jal         func_3A0DE8
    ctx->pc = 0x3A0424u;
    SET_GPR_U32(ctx, 31, 0x3A042Cu);
    ctx->pc = 0x3A0428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0424u;
    // 0x3a0428: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0DE8u, 0x3A0424u, 0x3A042Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A042Cu;
label_3a042c:
    // 0x3a042c: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3A042Cu;
    SET_GPR_U32(ctx, 31, 0x3A0434u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3A042Cu, 0x3A0434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0434u;
label_3a0434:
    // 0x3a0434: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x3a0434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x3a0438: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3a0438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3a043c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a043cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a0440: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x3a0440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46096);
    // 0x3a0444: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x3a0444u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x3a0448: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3a0448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x3a044c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x3a044cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x3a0450: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x3a0450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x3a0454: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3a0454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a0458: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3a0458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3a045c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x3a045cu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 4));
    // 0x3a0460: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x3a0460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x3a0464: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x3a0464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x3a0468: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A0468u;
    {
        const bool branch_taken_0x3a0468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0468u;
        // 0x3a046c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0468) {
            ctx->pc = 0x3A0478u;
            goto label_3a0478;
        }
    }
    ctx->pc = 0x3A0470u;
    // 0x3a0470: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3A0470u;
    SET_GPR_U32(ctx, 31, 0x3A0478u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3A0470u, 0x3A0478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0478u;
label_3a0478:
    // 0x3a0478: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x3a0478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x3a047c: 0xac322000  sw          $s2, 0x2000($at)
    ctx->pc = 0x3a047cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 18));
    // 0x3a0480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a0480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0484: 0xae32082c  sw          $s2, 0x82C($s1)
    ctx->pc = 0x3a0484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 18));
    // 0x3a0488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a0488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a048c: 0xc0e837a  jal         func_3A0DE8
    ctx->pc = 0x3A048Cu;
    SET_GPR_U32(ctx, 31, 0x3A0494u);
    ctx->pc = 0x3A0490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A048Cu;
    // 0x3a0490: 0xae220828  sw          $v0, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0DE8u, 0x3A048Cu, 0x3A0494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0494u;
label_3a0494:
    // 0x3a0494: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a0494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a0498: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x3a0498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x3a049c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3a049cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3a04a0: 0xc0e6ac8  jal         func_39AB20
    ctx->pc = 0x3A04A0u;
    SET_GPR_U32(ctx, 31, 0x3A04A8u);
    ctx->pc = 0x3A04A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A04A0u;
    // 0x3a04a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB20u, 0x3A04A0u, 0x3A04A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A04A8u;
label_3a04a8:
    // 0x3a04a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a04a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a04ac:
    // 0x3a04ac: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A04ACu;
    SET_GPR_U32(ctx, 31, 0x3A04B4u);
    ctx->pc = 0x3A04B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A04ACu;
    // 0x3a04b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A04ACu, 0x3A04B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A04B4u;
label_3a04b4:
    // 0x3a04b4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A04B4u;
    {
        const bool branch_taken_0x3a04b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A04B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A04B4u;
        // 0x3a04b8: 0xae220854  sw          $v0, 0x854($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a04b4) {
            ctx->pc = 0x3A04F4u;
            goto label_3a04f4;
        }
    }
    ctx->pc = 0x3A04BCu;
    // 0x3a04bc: 0xc0e837a  jal         func_3A0DE8
    ctx->pc = 0x3A04BCu;
    SET_GPR_U32(ctx, 31, 0x3A04C4u);
    ctx->pc = 0x3A04C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A04BCu;
    // 0x3a04c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0DE8u, 0x3A04BCu, 0x3A04C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A04C4u;
label_3a04c4:
    // 0x3a04c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3a04c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3a04c8: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x3a04c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x3a04cc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3a04ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3a04d0: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x3a04d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x3a04d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3a04d4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x3a04d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a04d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a04dc: 0xae24082c  sw          $a0, 0x82C($s1)
    ctx->pc = 0x3a04dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 4));
    // 0x3a04e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a04e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a04e4: 0xc0e837a  jal         func_3A0DE8
    ctx->pc = 0x3A04E4u;
    SET_GPR_U32(ctx, 31, 0x3A04ECu);
    ctx->pc = 0x3A04E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A04E4u;
    // 0x3a04e8: 0xae250828  sw          $a1, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0DE8u, 0x3A04E4u, 0x3A04ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A04ECu;
label_3a04ec:
    // 0x3a04ec: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3A04ECu;
    {
        const bool branch_taken_0x3a04ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a04ec) {
            ctx->pc = 0x3A05B4u;
            goto label_3a05b4;
        }
    }
    ctx->pc = 0x3A04F4u;
label_3a04f4:
    // 0x3a04f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a04f8: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x3a04f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x3a04fc: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3a04fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3a0500: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3a0500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3a0504: 0x2610a2c0  addiu       $s0, $s0, -0x5D40
    ctx->pc = 0x3a0504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943424));
    // 0x3a0508: 0xc0e6ac8  jal         func_39AB20
    ctx->pc = 0x3A0508u;
    SET_GPR_U32(ctx, 31, 0x3A0510u);
    ctx->pc = 0x3A050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0508u;
    // 0x3a050c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB20u, 0x3A0508u, 0x3A0510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0510u;
label_3a0510:
    // 0x3a0510: 0xc0e837a  jal         func_3A0DE8
    ctx->pc = 0x3A0510u;
    SET_GPR_U32(ctx, 31, 0x3A0518u);
    ctx->pc = 0x3A0514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0510u;
    // 0x3a0514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0DE8u, 0x3A0510u, 0x3A0518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0518u;
label_3a0518:
    // 0x3a0518: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3a0518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3a051c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a051cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0520: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3a0520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3a0524: 0xc0e837a  jal         func_3A0DE8
    ctx->pc = 0x3A0524u;
    SET_GPR_U32(ctx, 31, 0x3A052Cu);
    ctx->pc = 0x3A0528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0524u;
    // 0x3a0528: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0DE8u, 0x3A0524u, 0x3A052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A052Cu;
label_3a052c:
    // 0x3a052c: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3A052Cu;
    SET_GPR_U32(ctx, 31, 0x3A0534u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3A052Cu, 0x3A0534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0534u;
label_3a0534:
    // 0x3a0534: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x3a0534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x3a0538: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3a0538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3a053c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a053cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a0540: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x3a0540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46096);
    // 0x3a0544: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x3a0544u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x3a0548: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3a0548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x3a054c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x3a054cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x3a0550: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x3a0550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x3a0554: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3a0554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a0558: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3a0558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3a055c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x3a055cu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 4));
    // 0x3a0560: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x3a0560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x3a0564: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x3a0564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x3a0568: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3a0568u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 4));
    // 0x3a056c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A056Cu;
    {
        const bool branch_taken_0x3a056c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A056Cu;
        // 0x3a0570: 0x3c025800  lui         $v0, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a056c) {
            ctx->pc = 0x3A0580u;
            goto label_3a0580;
        }
    }
    ctx->pc = 0x3A0574u;
    // 0x3a0574: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3A0574u;
    SET_GPR_U32(ctx, 31, 0x3A057Cu);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3A0574u, 0x3A057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A057Cu;
label_3a057c:
    // 0x3a057c: 0x3c025800  lui         $v0, 0x5800
    ctx->pc = 0x3a057cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
label_3a0580:
    // 0x3a0580: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3a0580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x3a0584: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x3a0584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x3a0588: 0xac222000  sw          $v0, 0x2000($at)
    ctx->pc = 0x3a0588u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2));
    // 0x3a058c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a058cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a0590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0594: 0xae23082c  sw          $v1, 0x82C($s1)
    ctx->pc = 0x3a0594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 3));
    // 0x3a0598: 0xc0e837a  jal         func_3A0DE8
    ctx->pc = 0x3A0598u;
    SET_GPR_U32(ctx, 31, 0x3A05A0u);
    ctx->pc = 0x3A059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0598u;
    // 0x3a059c: 0xae220828  sw          $v0, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0DE8u, 0x3A0598u, 0x3A05A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A05A0u;
label_3a05a0:
    // 0x3a05a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a05a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a05a4: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x3a05a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x3a05a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3a05a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3a05ac: 0xc0e6ac8  jal         func_39AB20
    ctx->pc = 0x3A05ACu;
    SET_GPR_U32(ctx, 31, 0x3A05B4u);
    ctx->pc = 0x3A05B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A05ACu;
    // 0x3a05b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB20u, 0x3A05ACu, 0x3A05B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A05B4u;
label_3a05b4:
    // 0x3a05b4: 0xc0e8306  jal         func_3A0C18
    ctx->pc = 0x3A05B4u;
    SET_GPR_U32(ctx, 31, 0x3A05BCu);
    ctx->pc = 0x3A05B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A05B4u;
    // 0x3a05b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0C18u, 0x3A05B4u, 0x3A05BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A05BCu;
label_3a05bc:
    // 0x3a05bc: 0xc0e8006  jal         func_3A0018
    ctx->pc = 0x3A05BCu;
    SET_GPR_U32(ctx, 31, 0x3A05C4u);
    ctx->pc = 0x3A05C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A05BCu;
    // 0x3a05c0: 0x8e240868  lw          $a0, 0x868($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0018u, 0x3A05BCu, 0x3A05C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A05C4u;
label_3a05c4:
    // 0x3a05c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a05c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a05c8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3a05c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a05cc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x3a05ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a05d0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3a05d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a05d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A05D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A05D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A05D4u;
        // 0x3a05d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A05D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A05DCu;
    // 0x3a05dc: 0x0  nop
    ctx->pc = 0x3a05dcu;
    // NOP
    ctx->pc = 0x3a05e0u;
}
