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

// Function: func_00354650
// Address: 0x354650 - 0x3547b0
void func_00354650_0x354650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00354650_0x354650");
#endif

    switch (ctx->pc) {
        case 0x354674u: goto label_354674;
        case 0x354688u: goto label_354688;
        case 0x354698u: goto label_354698;
        case 0x3546a0u: goto label_3546a0;
        case 0x3546e8u: goto label_3546e8;
        case 0x3546f8u: goto label_3546f8;
        case 0x354728u: goto label_354728;
        case 0x354738u: goto label_354738;
        case 0x354744u: goto label_354744;
        case 0x354754u: goto label_354754;
        case 0x354764u: goto label_354764;
        case 0x35476cu: goto label_35476c;
        case 0x354790u: goto label_354790;
        default: break;
    }

    ctx->pc = 0x354650u;

    // 0x354650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x354654: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x354654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x354658: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x354658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35465c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35465cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354660: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x354660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x354664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x354664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x354668: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x354668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35466c: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x35466Cu;
    SET_GPR_U32(ctx, 31, 0x354674u);
    ctx->pc = 0x354670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35466Cu;
    // 0x354670: 0x263223a8  addiu       $s2, $s1, 0x23A8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 9128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x35466Cu, 0x354674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354674u;
label_354674:
    // 0x354674: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x354674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354678: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x354678u;
    {
        const bool branch_taken_0x354678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354678u;
        // 0x35467c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354678) {
            ctx->pc = 0x354794u;
            goto label_354794;
        }
    }
    ctx->pc = 0x354680u;
    // 0x354680: 0xc0d51ec  jal         func_3547B0
    ctx->pc = 0x354680u;
    SET_GPR_U32(ctx, 31, 0x354688u);
    ctx->pc = 0x354684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354680u;
    // 0x354684: 0xae321fc0  sw          $s2, 0x1FC0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8128), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3547B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3547B0u, 0x354680u, 0x354688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354688u;
label_354688:
    // 0x354688: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x354688u;
    {
        const bool branch_taken_0x354688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354688u;
        // 0x35468c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354688) {
            ctx->pc = 0x354794u;
            goto label_354794;
        }
    }
    ctx->pc = 0x354690u;
    // 0x354690: 0xc0d58ee  jal         func_3563B8
    ctx->pc = 0x354690u;
    SET_GPR_U32(ctx, 31, 0x354698u);
    ctx->pc = 0x3563B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3563B8u, 0x354690u, 0x354698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354698u;
label_354698:
    // 0x354698: 0xc0db092  jal         func_36C248
    ctx->pc = 0x354698u;
    SET_GPR_U32(ctx, 31, 0x3546A0u);
    ctx->pc = 0x36C248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C248u, 0x354698u, 0x3546A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3546A0u;
label_3546a0:
    // 0x3546a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3546a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3546a4: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x3546a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x3546a8: 0x24a54b98  addiu       $a1, $a1, 0x4B98
    ctx->pc = 0x3546a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19352));
    // 0x3546ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3546acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3546b0: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3546B0u;
    {
        const bool branch_taken_0x3546b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3546B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3546B0u;
        // 0x3546b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3546b0) {
            ctx->pc = 0x3546E0u;
            goto label_3546e0;
        }
    }
    ctx->pc = 0x3546B8u;
    // 0x3546b8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x3546b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x3546bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3546bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3546c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3546c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3546c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3546c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3546c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3546c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3546cc: 0x34a50f0a  ori         $a1, $a1, 0xF0A
    ctx->pc = 0x3546ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3850);
    // 0x3546d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3546d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3546d4: 0x80d375c  j           func_34DD70
    ctx->pc = 0x3546D4u;
    ctx->pc = 0x3546D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3546D4u;
    // 0x3546d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x3546D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3546DCu;
    // 0x3546dc: 0x0  nop
    ctx->pc = 0x3546dcu;
    // NOP
label_3546e0:
    // 0x3546e0: 0xc0da7a6  jal         func_369E98
    ctx->pc = 0x3546E0u;
    SET_GPR_U32(ctx, 31, 0x3546E8u);
    ctx->pc = 0x369E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369E98u, 0x3546E0u, 0x3546E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3546E8u;
label_3546e8:
    // 0x3546e8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3546E8u;
    {
        const bool branch_taken_0x3546e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3546ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3546E8u;
        // 0x3546ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3546e8) {
            ctx->pc = 0x354720u;
            goto label_354720;
        }
    }
    ctx->pc = 0x3546F0u;
    // 0x3546f0: 0xc0d535a  jal         func_354D68
    ctx->pc = 0x3546F0u;
    SET_GPR_U32(ctx, 31, 0x3546F8u);
    ctx->pc = 0x3546F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3546F0u;
    // 0x3546f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354D68u, 0x3546F0u, 0x3546F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3546F8u;
label_3546f8:
    // 0x3546f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3546f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3546fc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x3546fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x354700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x354700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354704: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x354704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x354708: 0x34a50f0b  ori         $a1, $a1, 0xF0B
    ctx->pc = 0x354708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3851);
    // 0x35470c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35470cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354710: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x354710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x354714: 0x80d375c  j           func_34DD70
    ctx->pc = 0x354714u;
    ctx->pc = 0x354718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354714u;
    // 0x354718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x354714u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35471Cu;
    // 0x35471c: 0x0  nop
    ctx->pc = 0x35471cu;
    // NOP
label_354720:
    // 0x354720: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x354720u;
    SET_GPR_U32(ctx, 31, 0x354728u);
    ctx->pc = 0x354724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354720u;
    // 0x354724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x354720u, 0x354728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354728u;
label_354728:
    // 0x354728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35472c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35472cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354730: 0xc0db114  jal         func_36C450
    ctx->pc = 0x354730u;
    SET_GPR_U32(ctx, 31, 0x354738u);
    ctx->pc = 0x354734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354730u;
    // 0x354734: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C450u, 0x354730u, 0x354738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354738u;
label_354738:
    // 0x354738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x354738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35473c: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x35473Cu;
    SET_GPR_U32(ctx, 31, 0x354744u);
    ctx->pc = 0x354740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35473Cu;
    // 0x354740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x35473Cu, 0x354744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354744u;
label_354744:
    // 0x354744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354748: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x354748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35474c: 0xc0db114  jal         func_36C450
    ctx->pc = 0x35474Cu;
    SET_GPR_U32(ctx, 31, 0x354754u);
    ctx->pc = 0x354750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35474Cu;
    // 0x354750: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C450u, 0x35474Cu, 0x354754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354754u;
label_354754:
    // 0x354754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354758: 0x8e260038  lw          $a2, 0x38($s1)
    ctx->pc = 0x354758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x35475c: 0xc0db114  jal         func_36C450
    ctx->pc = 0x35475Cu;
    SET_GPR_U32(ctx, 31, 0x354764u);
    ctx->pc = 0x354760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35475Cu;
    // 0x354760: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C450u, 0x35475Cu, 0x354764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354764u;
label_354764:
    // 0x354764: 0xc0d628e  jal         func_358A38
    ctx->pc = 0x354764u;
    SET_GPR_U32(ctx, 31, 0x35476Cu);
    ctx->pc = 0x354768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354764u;
    // 0x354768: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358A38u, 0x354764u, 0x35476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35476Cu;
label_35476c:
    // 0x35476c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35476Cu;
    {
        const bool branch_taken_0x35476c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35476Cu;
        // 0x354770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35476c) {
            ctx->pc = 0x354790u;
            goto label_354790;
        }
    }
    ctx->pc = 0x354774u;
    // 0x354774: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x354774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x354778: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x354778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
    // 0x35477c: 0x8c456c18  lw          $a1, 0x6C18($v0)
    ctx->pc = 0x35477cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x766C18u));
    // 0x354780: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x354780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x354784: 0x8c666c1c  lw          $a2, 0x6C1C($v1)
    ctx->pc = 0x354784u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x766C1Cu));
    // 0x354788: 0xc0d414a  jal         func_350528
    ctx->pc = 0x354788u;
    SET_GPR_U32(ctx, 31, 0x354790u);
    ctx->pc = 0x35478Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354788u;
    // 0x35478c: 0x8c476c20  lw          $a3, 0x6C20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350528u, 0x354788u, 0x354790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354790u;
label_354790:
    // 0x354790: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_354794:
    // 0x354794: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x354794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354798: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x354798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35479c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35479cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3547a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3547a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3547a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3547A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3547A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3547A4u;
        // 0x3547a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3547A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3547ACu;
    // 0x3547ac: 0x0  nop
    ctx->pc = 0x3547acu;
    // NOP
    ctx->pc = 0x3547b0u;
}
