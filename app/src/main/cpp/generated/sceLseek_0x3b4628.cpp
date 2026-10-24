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

// Function: sceLseek
// Address: 0x3b4628 - 0x3b4868
void sceLseek_0x3b4628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceLseek_0x3b4628");
#endif

    switch (ctx->pc) {
        case 0x3b4660u: goto label_3b4660;
        case 0x3b466cu: goto label_3b466c;
        case 0x3b4698u: goto label_3b4698;
        case 0x3b46e4u: goto label_3b46e4;
        case 0x3b470cu: goto label_3b470c;
        case 0x3b474cu: goto label_3b474c;
        case 0x3b4788u: goto label_3b4788;
        case 0x3b47ccu: goto label_3b47cc;
        case 0x3b47dcu: goto label_3b47dc;
        case 0x3b47e4u: goto label_3b47e4;
        case 0x3b47f8u: goto label_3b47f8;
        case 0x3b4808u: goto label_3b4808;
        case 0x3b4820u: goto label_3b4820;
        case 0x3b4830u: goto label_3b4830;
        case 0x3b4838u: goto label_3b4838;
        default: break;
    }

    ctx->pc = 0x3b4628u;

    // 0x3b4628: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3b4628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3b462c: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x3b462cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x3b4630: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x3b4630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x3b4634: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3b4634u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4638: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x3b4638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x3b463c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3b463cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4640: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x3b4640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x3b4644: 0x3c140078  lui         $s4, 0x78
    ctx->pc = 0x3b4644u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)120 << 16));
    // 0x3b4648: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3b4648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3b464c: 0x2691ffc0  addiu       $s1, $s4, -0x40
    ctx->pc = 0x3b464cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967232));
    // 0x3b4650: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3b4650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x3b4654: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x3b4654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x3b4658: 0xc0ece92  jal         func_3B3A48
    ctx->pc = 0x3B4658u;
    SET_GPR_U32(ctx, 31, 0x3B4660u);
    ctx->pc = 0x3B465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4658u;
    // 0x3b465c: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3A48u, 0x3B4658u, 0x3B4660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4660u;
label_3b4660:
    // 0x3b4660: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b4660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4664: 0xc0ecfb2  jal         func_3B3EC8
    ctx->pc = 0x3B4664u;
    SET_GPR_U32(ctx, 31, 0x3B466Cu);
    ctx->pc = 0x3B4668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4664u;
    // 0x3b4668: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EC8u, 0x3B4664u, 0x3B466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B466Cu;
label_3b466c:
    // 0x3b466c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3b466cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3b4670: 0x8c62aedc  lw          $v0, -0x5124($v1)
    ctx->pc = 0x3b4670u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAEDCu));
    // 0x3b4674: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B4674u;
    {
        const bool branch_taken_0x3b4674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4674) {
            ctx->pc = 0x3B4690u;
            goto label_3b4690;
        }
    }
    ctx->pc = 0x3B467Cu;
    // 0x3b467c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B467Cu;
    {
        const bool branch_taken_0x3b467c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b467c) {
            ctx->pc = 0x3B4690u;
            goto label_3b4690;
        }
    }
    ctx->pc = 0x3B4684u;
    // 0x3b4684: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x3b4684u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b4688: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4688u;
    {
        const bool branch_taken_0x3b4688 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4688u;
        // 0x3b468c: 0x3c020078  lui         $v0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4688) {
            ctx->pc = 0x3B46A0u;
            goto label_3b46a0;
        }
    }
    ctx->pc = 0x3B4690u;
label_3b4690:
    // 0x3b4690: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B4690u;
    SET_GPR_U32(ctx, 31, 0x3B4698u);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B4690u, 0x3B4698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4698u;
label_3b4698:
    // 0x3b4698: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x3B4698u;
    {
        const bool branch_taken_0x3b4698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4698u;
        // 0x3b469c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4698) {
            ctx->pc = 0x3B483Cu;
            goto label_3b483c;
        }
    }
    ctx->pc = 0x3B46A0u;
label_3b46a0:
    // 0x3b46a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b46a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b46a4: 0x244214c0  addiu       $v0, $v0, 0x14C0
    ctx->pc = 0x3b46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5312));
    // 0x3b46a8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3b46a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3b46ac: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x3b46acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3b46b0: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x3b46b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x3b46b4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3b46b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3b46b8: 0xae330010  sw          $s3, 0x10($s1)
    ctx->pc = 0x3b46b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 19));
    // 0x3b46bc: 0xae350014  sw          $s5, 0x14($s1)
    ctx->pc = 0x3b46bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 21));
    // 0x3b46c0: 0x24630150  addiu       $v1, $v1, 0x150
    ctx->pc = 0x3b46c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x3b46c4: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x3b46c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x3b46c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b46c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b46cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3b46ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b46d0: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x3b46d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x3b46d4: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x3b46d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x3b46d8: 0x32508000  andi        $s0, $s2, 0x8000
    ctx->pc = 0x3b46d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x3b46dc: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3B46DCu;
    SET_GPR_U32(ctx, 31, 0x3B46E4u);
    ctx->pc = 0x3B46E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B46DCu;
    // 0x3b46e0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3B46DCu, 0x3B46E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B46E4u;
label_3b46e4:
    // 0x3b46e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b46e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b46e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b46e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b46ec: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3b46ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b46f0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3b46f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x3b46f4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3b46f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3b46f8: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3B46F8u;
    {
        const bool branch_taken_0x3b46f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B46FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B46F8u;
        // 0x3b46fc: 0xae93ffc0  sw          $s3, -0x40($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294967232), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b46f8) {
            ctx->pc = 0x3B4790u;
            goto label_3b4790;
        }
    }
    ctx->pc = 0x3B4700u;
    // 0x3b4700: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x3b4700u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x3b4704: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B4704u;
    SET_GPR_U32(ctx, 31, 0x3B470Cu);
    ctx->pc = 0x3B4708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4704u;
    // 0x3b4708: 0x8ea4aeec  lw          $a0, -0x5114($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B4704u, 0x3B470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B470Cu;
label_3b470c:
    // 0x3b470c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x3b470cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x3b4710: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b4710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4714: 0x8ce3ae58  lw          $v1, -0x51A8($a3)
    ctx->pc = 0x3b4714u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAE58u));
    // 0x3b4718: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b4718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b471c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B471Cu;
    {
        const bool branch_taken_0x3b471c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B4720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B471Cu;
        // 0x3b4720: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b471c) {
            ctx->pc = 0x3B4740u;
            goto label_3b4740;
        }
    }
    ctx->pc = 0x3B4724u;
    // 0x3b4724: 0x8e83ffc0  lw          $v1, -0x40($s4)
    ctx->pc = 0x3b4724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967232)));
    // 0x3b4728: 0x3c160078  lui         $s6, 0x78
    ctx->pc = 0x3b4728u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)120 << 16));
    // 0x3b472c: 0x3c100078  lui         $s0, 0x78
    ctx->pc = 0x3b472cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)120 << 16));
    // 0x3b4730: 0x31023  negu        $v0, $v1
    ctx->pc = 0x3b4730u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x3b4734: 0xace3ae58  sw          $v1, -0x51A8($a3)
    ctx->pc = 0x3b4734u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294946392), GPR_U32(ctx, 3));
    // 0x3b4738: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3B4738u;
    {
        const bool branch_taken_0x3b4738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4738u;
        // 0x3b473c: 0xae82ffc0  sw          $v0, -0x40($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294967232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4738) {
            ctx->pc = 0x3B4780u;
            goto label_3b4780;
        }
    }
    ctx->pc = 0x3B4740u;
label_3b4740:
    // 0x3b4740: 0x3c160078  lui         $s6, 0x78
    ctx->pc = 0x3b4740u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)120 << 16));
    // 0x3b4744: 0x3c100078  lui         $s0, 0x78
    ctx->pc = 0x3b4744u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)120 << 16));
    // 0x3b4748: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b4748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3b474c:
    // 0x3b474c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x3b474cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3b4750: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B4750u;
    {
        const bool branch_taken_0x3b4750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4750u;
        // 0x3b4754: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4750) {
            ctx->pc = 0x3B4780u;
            goto label_3b4780;
        }
    }
    ctx->pc = 0x3B4758u;
    // 0x3b4758: 0x24e3ae58  addiu       $v1, $a3, -0x51A8
    ctx->pc = 0x3b4758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946392));
    // 0x3b475c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3b475cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b4760: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3b4760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b4764: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3b4764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b4768: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3B4768u;
    {
        const bool branch_taken_0x3b4768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3B476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4768u;
        // 0x3b476c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4768) {
            ctx->pc = 0x3B474Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b474c;
        }
    }
    ctx->pc = 0x3B4770u;
    // 0x3b4770: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3b4770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b4774: 0x21823  negu        $v1, $v0
    ctx->pc = 0x3b4774u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3b4778: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3b4778u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3b477c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3b477cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3b4780:
    // 0x3b4780: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x3B4780u;
    SET_GPR_U32(ctx, 31, 0x3B4788u);
    ctx->pc = 0x3B4784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4780u;
    // 0x3b4784: 0x8ea4aeec  lw          $a0, -0x5114($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x3B4780u, 0x3B4788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4788u;
label_3b4788:
    // 0x3b4788: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4788u;
    {
        const bool branch_taken_0x3b4788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4788u;
        // 0x3b478c: 0x26100c00  addiu       $s0, $s0, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4788) {
            ctx->pc = 0x3B47A0u;
            goto label_3b47a0;
        }
    }
    ctx->pc = 0x3B4790u;
label_3b4790:
    // 0x3b4790: 0x3c160078  lui         $s6, 0x78
    ctx->pc = 0x3b4790u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)120 << 16));
    // 0x3b4794: 0x3c100078  lui         $s0, 0x78
    ctx->pc = 0x3b4794u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)120 << 16));
    // 0x3b4798: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3b4798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b479c: 0x26100c00  addiu       $s0, $s0, 0xC00
    ctx->pc = 0x3b479cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3072));
label_3b47a0:
    // 0x3b47a0: 0x26c416c0  addiu       $a0, $s6, 0x16C0
    ctx->pc = 0x3b47a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 5824));
    // 0x3b47a4: 0x2687ffc0  addiu       $a3, $s4, -0x40
    ctx->pc = 0x3b47a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967232));
    // 0x3b47a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b47a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3b47ac: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x3b47acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x3b47b0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3b47b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b47b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b47b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b47b8: 0x2408001c  addiu       $t0, $zero, 0x1C
    ctx->pc = 0x3b47b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3b47bc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3b47bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b47c0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3b47c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b47c4: 0xc0ece56  jal         func_3B3958
    ctx->pc = 0x3B47C4u;
    SET_GPR_U32(ctx, 31, 0x3B47CCu);
    ctx->pc = 0x3B47C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B47C4u;
    // 0x3b47c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3958u, 0x3B47C4u, 0x3B47CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B47CCu;
label_3b47cc:
    // 0x3b47cc: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B47CCu;
    {
        const bool branch_taken_0x3b47cc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3B47D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B47CCu;
        // 0x3b47d0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b47cc) {
            ctx->pc = 0x3B47ECu;
            goto label_3b47ec;
        }
    }
    ctx->pc = 0x3B47D4u;
    // 0x3b47d4: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B47D4u;
    SET_GPR_U32(ctx, 31, 0x3B47DCu);
    ctx->pc = 0x3B47D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B47D4u;
    // 0x3b47d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B47D4u, 0x3B47DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B47DCu;
label_3b47dc:
    // 0x3b47dc: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B47DCu;
    SET_GPR_U32(ctx, 31, 0x3B47E4u);
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B47DCu, 0x3B47E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B47E4u;
label_3b47e4:
    // 0x3b47e4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3B47E4u;
    {
        const bool branch_taken_0x3b47e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B47E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B47E4u;
        // 0x3b47e8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b47e4) {
            ctx->pc = 0x3B483Cu;
            goto label_3b483c;
        }
    }
    ctx->pc = 0x3B47ECu;
label_3b47ec:
    // 0x3b47ec: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x3b47ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3b47f0: 0xc0ecfbe  jal         func_3B3EF8
    ctx->pc = 0x3B47F0u;
    SET_GPR_U32(ctx, 31, 0x3B47F8u);
    ctx->pc = 0x3B47F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B47F0u;
    // 0x3b47f4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3EF8u, 0x3B47F0u, 0x3B47F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B47F8u;
label_3b47f8:
    // 0x3b47f8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B47F8u;
    {
        const bool branch_taken_0x3b47f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b47f8) {
            ctx->pc = 0x3B4810u;
            goto label_3b4810;
        }
    }
    ctx->pc = 0x3B4800u;
    // 0x3b4800: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B4800u;
    SET_GPR_U32(ctx, 31, 0x3B4808u);
    ctx->pc = 0x3B4804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4800u;
    // 0x3b4804: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B4800u, 0x3B4808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4808u;
label_3b4808:
    // 0x3b4808: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B4808u;
    {
        const bool branch_taken_0x3b4808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4808u;
        // 0x3b480c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4808) {
            ctx->pc = 0x3B483Cu;
            goto label_3b483c;
        }
    }
    ctx->pc = 0x3B4810u;
label_3b4810:
    // 0x3b4810: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4810u;
    {
        const bool branch_taken_0x3b4810 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4810) {
            ctx->pc = 0x3B4828u;
            goto label_3b4828;
        }
    }
    ctx->pc = 0x3B4818u;
    // 0x3b4818: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B4818u;
    SET_GPR_U32(ctx, 31, 0x3B4820u);
    ctx->pc = 0x3B481Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4818u;
    // 0x3b481c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B4818u, 0x3B4820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4820u;
label_3b4820:
    // 0x3b4820: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B4820u;
    {
        const bool branch_taken_0x3b4820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4820u;
        // 0x3b4824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4820) {
            ctx->pc = 0x3B483Cu;
            goto label_3b483c;
        }
    }
    ctx->pc = 0x3B4828u;
label_3b4828:
    // 0x3b4828: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B4828u;
    SET_GPR_U32(ctx, 31, 0x3B4830u);
    ctx->pc = 0x3B482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4828u;
    // 0x3b482c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B4828u, 0x3B4830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4830u;
label_3b4830:
    // 0x3b4830: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B4830u;
    SET_GPR_U32(ctx, 31, 0x3B4838u);
    ctx->pc = 0x3B4834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4830u;
    // 0x3b4834: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B4830u, 0x3B4838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4838u;
label_3b4838:
    // 0x3b4838: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3b4838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3b483c:
    // 0x3b483c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3b483cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3b4840: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x3b4840u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3b4844: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x3b4844u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3b4848: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x3b4848u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b484c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x3b484cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b4850: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3b4850u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b4854: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x3b4854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b4858: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3b4858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b485c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B485Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B485Cu;
        // 0x3b4860: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B485Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4864u;
    // 0x3b4864: 0x0  nop
    ctx->pc = 0x3b4864u;
    // NOP
    ctx->pc = 0x3b4868u;
}
