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

// Function: scePadInit
// Address: 0x397630 - 0x397780
void scePadInit_0x397630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scePadInit_0x397630");
#endif

    switch (ctx->pc) {
        case 0x397660u: goto label_397660;
        case 0x397668u: goto label_397668;
        case 0x39769cu: goto label_39769c;
        case 0x3976b8u: goto label_3976b8;
        case 0x3976c0u: goto label_3976c0;
        case 0x3976f0u: goto label_3976f0;
        case 0x397704u: goto label_397704;
        case 0x39772cu: goto label_39772c;
        case 0x397748u: goto label_397748;
        case 0x397758u: goto label_397758;
        default: break;
    }

    ctx->pc = 0x397630u;

    // 0x397630: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x397630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x397634: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x397634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x397638: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x397638u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x39763c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39763cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x397640: 0x8e6285c8  lw          $v0, -0x7A38($s3)
    ctx->pc = 0x397640u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F85C8u));
    // 0x397644: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x397644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397648: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x397648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x39764c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x39764cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x397650: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x397650u;
    {
        const bool branch_taken_0x397650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397650u;
        // 0x397654: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397650) {
            ctx->pc = 0x397750u;
            goto label_397750;
        }
    }
    ctx->pc = 0x397658u;
    // 0x397658: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x397658u;
    {
        const bool branch_taken_0x397658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397658u;
        // 0x39765c: 0x3c110078  lui         $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397658) {
            ctx->pc = 0x397684u;
            goto label_397684;
        }
    }
    ctx->pc = 0x397660u;
label_397660:
    // 0x397660: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x397660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x397664: 0x0  nop
    ctx->pc = 0x397664u;
    // NOP
label_397668:
    // 0x397668: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x397668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39766c: 0x0  nop
    ctx->pc = 0x39766cu;
    // NOP
    // 0x397670: 0x0  nop
    ctx->pc = 0x397670u;
    // NOP
    // 0x397674: 0x0  nop
    ctx->pc = 0x397674u;
    // NOP
    // 0x397678: 0x0  nop
    ctx->pc = 0x397678u;
    // NOP
    // 0x39767c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39767Cu;
    {
        const bool branch_taken_0x39767c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39767c) {
            ctx->pc = 0x397668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397668;
        }
    }
    ctx->pc = 0x397684u;
label_397684:
    // 0x397684: 0x2630c0c0  addiu       $s0, $s1, -0x3F40
    ctx->pc = 0x397684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294951104));
    // 0x397688: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x397688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x39768c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39768cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397690: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x397690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x397694: 0xc0ecbd2  jal         func_3B2F48
    ctx->pc = 0x397694u;
    SET_GPR_U32(ctx, 31, 0x39769Cu);
    ctx->pc = 0x397698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397694u;
    // 0x397698: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F48u, 0x397694u, 0x39769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39769Cu;
label_39769c:
    // 0x39769c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x39769cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3976a0: 0x1060ffef  beqz        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3976A0u;
    {
        const bool branch_taken_0x3976a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3976A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3976A0u;
        // 0x3976a4: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3976a0) {
            ctx->pc = 0x397660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397660;
        }
    }
    ctx->pc = 0x3976A8u;
    // 0x3976a8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3976a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3976ac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3976ACu;
    {
        const bool branch_taken_0x3976ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3976B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3976ACu;
        // 0x3976b0: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3976ac) {
            ctx->pc = 0x3976DCu;
            goto label_3976dc;
        }
    }
    ctx->pc = 0x3976B4u;
    // 0x3976b4: 0x0  nop
    ctx->pc = 0x3976b4u;
    // NOP
label_3976b8:
    // 0x3976b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3976b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3976bc: 0x0  nop
    ctx->pc = 0x3976bcu;
    // NOP
label_3976c0:
    // 0x3976c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3976c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3976c4: 0x0  nop
    ctx->pc = 0x3976c4u;
    // NOP
    // 0x3976c8: 0x0  nop
    ctx->pc = 0x3976c8u;
    // NOP
    // 0x3976cc: 0x0  nop
    ctx->pc = 0x3976ccu;
    // NOP
    // 0x3976d0: 0x0  nop
    ctx->pc = 0x3976d0u;
    // NOP
    // 0x3976d4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3976D4u;
    {
        const bool branch_taken_0x3976d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3976d4) {
            ctx->pc = 0x3976C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3976c0;
        }
    }
    ctx->pc = 0x3976DCu;
label_3976dc:
    // 0x3976dc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3976dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3976e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3976e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3976e4: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x3976e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
    // 0x3976e8: 0xc0ecbd2  jal         func_3B2F48
    ctx->pc = 0x3976E8u;
    SET_GPR_U32(ctx, 31, 0x3976F0u);
    ctx->pc = 0x3976ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3976E8u;
    // 0x3976ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F48u, 0x3976E8u, 0x3976F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3976F0u;
label_3976f0:
    // 0x3976f0: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x3976f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x3976f4: 0x1060fff0  beqz        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3976F4u;
    {
        const bool branch_taken_0x3976f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3976F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3976F4u;
        // 0x3976f8: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3976f4) {
            ctx->pc = 0x3976B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3976b8;
        }
    }
    ctx->pc = 0x3976FCu;
    // 0x3976fc: 0xc0e611a  jal         func_398468
    ctx->pc = 0x3976FCu;
    SET_GPR_U32(ctx, 31, 0x397704u);
    ctx->pc = 0x398468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398468u, 0x3976FCu, 0x397704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397704u;
label_397704:
    // 0x397704: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x397704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397708: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x397708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39770c: 0x118203  sra         $s0, $s1, 8
    ctx->pc = 0x39770cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 8));
    // 0x397710: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x397710u;
    {
        const bool branch_taken_0x397710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x397714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397710u;
        // 0x397714: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397710) {
            ctx->pc = 0x397750u;
            goto label_397750;
        }
    }
    ctx->pc = 0x397718u;
    // 0x397718: 0x8c4385cc  lw          $v1, -0x7A34($v0)
    ctx->pc = 0x397718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936012)));
    // 0x39771c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x39771Cu;
    {
        const bool branch_taken_0x39771c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x397720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39771Cu;
        // 0x397720: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39771c) {
            ctx->pc = 0x397748u;
            goto label_397748;
        }
    }
    ctx->pc = 0x397724u;
    // 0x397724: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x397724u;
    SET_GPR_U32(ctx, 31, 0x39772Cu);
    ctx->pc = 0x397728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397724u;
    // 0x397728: 0x2484e038  addiu       $a0, $a0, -0x1FC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x397724u, 0x39772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39772Cu;
label_39772c:
    // 0x39772c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x39772cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x397730: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x397730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397734: 0x2484e060  addiu       $a0, $a0, -0x1FA0
    ctx->pc = 0x397734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959200));
    // 0x397738: 0x322800ff  andi        $t0, $s1, 0xFF
    ctx->pc = 0x397738u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x39773c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x39773cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x397740: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x397740u;
    SET_GPR_U32(ctx, 31, 0x397748u);
    ctx->pc = 0x397744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397740u;
    // 0x397744: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x397740u, 0x397748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397748u;
label_397748:
    // 0x397748: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x397748u;
    {
        const bool branch_taken_0x397748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397748u;
        // 0x39774c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397748) {
            ctx->pc = 0x397760u;
            goto label_397760;
        }
    }
    ctx->pc = 0x397750u;
label_397750:
    // 0x397750: 0xc0e5df2  jal         func_3977C8
    ctx->pc = 0x397750u;
    SET_GPR_U32(ctx, 31, 0x397758u);
    ctx->pc = 0x397754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397750u;
    // 0x397754: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3977C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3977C8u, 0x397750u, 0x397758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397758u;
label_397758:
    // 0x397758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x397758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39775c: 0xae6385c8  sw          $v1, -0x7A38($s3)
    ctx->pc = 0x39775cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294936008), GPR_U32(ctx, 3));
label_397760:
    // 0x397760: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x397760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x397764: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x397764u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x397768: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x397768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39776c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39776cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x397770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397774: 0x3e00008  jr          $ra
    ctx->pc = 0x397774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397774u;
        // 0x397778: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39777Cu;
    // 0x39777c: 0x0  nop
    ctx->pc = 0x39777cu;
    // NOP
    ctx->pc = 0x397780u;
}
