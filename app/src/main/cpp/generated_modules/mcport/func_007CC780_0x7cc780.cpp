#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CC780
// Address: 0x7cc780 - 0x7cc8c0
void func_007CC780_0x7cc780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CC780_0x7cc780");
#endif

    switch (ctx->pc) {
        case 0x7cc7b8u: goto label_7cc7b8;
        case 0x7cc7c4u: goto label_7cc7c4;
        case 0x7cc7e0u: goto label_7cc7e0;
        case 0x7cc7f4u: goto label_7cc7f4;
        case 0x7cc800u: goto label_7cc800;
        case 0x7cc840u: goto label_7cc840;
        case 0x7cc850u: goto label_7cc850;
        case 0x7cc87cu: goto label_7cc87c;
        case 0x7cc888u: goto label_7cc888;
        default: break;
    }

    ctx->pc = 0x7cc780u;

    // 0x7cc780: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x7cc780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x7cc784: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x7cc784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x7cc788: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x7cc788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x7cc78c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7cc78cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc790: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x7cc790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x7cc794: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x7cc794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x7cc798: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x7cc798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x7cc79c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x7cc79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x7cc7a0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x7cc7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x7cc7a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7CC7A4u;
    {
        const bool branch_taken_0x7cc7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC7A4u;
        // 0x7cc7a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc7a4) {
            ctx->pc = 0x7CC7D8u;
            goto label_7cc7d8;
        }
    }
    ctx->pc = 0x7CC7ACu;
    // 0x7cc7ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7cc7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7cc7b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7CC7B0u;
    {
        const bool branch_taken_0x7cc7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC7B0u;
        // 0x7cc7b4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc7b0) {
            ctx->pc = 0x7CC7E4u;
            goto label_7cc7e4;
        }
    }
    ctx->pc = 0x7CC7B8u;
label_7cc7b8:
    // 0x7cc7b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x7cc7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7cc7bc: 0xc1f31ac  jal         func_7CC6B0
    ctx->pc = 0x7CC7BCu;
    SET_GPR_U32(ctx, 31, 0x7CC7C4u);
    ctx->pc = 0x7CC7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CC7BCu;
    // 0x7cc7c0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC6B0u, 0x7CC7BCu, 0x7CC7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CC7C4u;
label_7cc7c4:
    // 0x7cc7c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x7cc7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7cc7c8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7CC7C8u;
    {
        const bool branch_taken_0x7cc7c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CC7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC7C8u;
        // 0x7cc7cc: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc7c8) {
            ctx->pc = 0x7CC7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cc7b8;
        }
    }
    ctx->pc = 0x7CC7D0u;
    // 0x7cc7d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7CC7D0u;
    {
        const bool branch_taken_0x7cc7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC7D0u;
        // 0x7cc7d4: 0x148080  sll         $s0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc7d0) {
            ctx->pc = 0x7CC7E8u;
            goto label_7cc7e8;
        }
    }
    ctx->pc = 0x7CC7D8u;
label_7cc7d8:
    // 0x7cc7d8: 0xc1f31ac  jal         func_7CC6B0
    ctx->pc = 0x7CC7D8u;
    SET_GPR_U32(ctx, 31, 0x7CC7E0u);
    ctx->pc = 0x7CC7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CC7D8u;
    // 0x7cc7dc: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC6B0u, 0x7CC7D8u, 0x7CC7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CC7E0u;
label_7cc7e0:
    // 0x7cc7e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x7cc7e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7cc7e4:
    // 0x7cc7e4: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x7cc7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_7cc7e8:
    // 0x7cc7e8: 0xae740010  sw          $s4, 0x10($s3)
    ctx->pc = 0x7cc7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 20));
    // 0x7cc7ec: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x7CC7ECu;
    SET_GPR_U32(ctx, 31, 0x7CC7F4u);
    ctx->pc = 0x7CC7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CC7ECu;
    // 0x7cc7f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x7CC7ECu, 0x7CC7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CC7F4u;
label_7cc7f4:
    // 0x7cc7f4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7cc7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7cc7f8: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x7CC7F8u;
    SET_GPR_U32(ctx, 31, 0x7CC800u);
    ctx->pc = 0x7CC7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CC7F8u;
    // 0x7cc7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x7CC7F8u, 0x7CC800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CC800u;
label_7cc800:
    // 0x7cc800: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7cc800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x7cc804: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x7cc804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x7cc808: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x7cc808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x7cc80c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x7cc80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x7cc810: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x7cc810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x7cc814: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x7cc814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x7cc818: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x7cc818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x7cc81c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x7CC81Cu;
    {
        const bool branch_taken_0x7cc81c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC81Cu;
        // 0x7cc820: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc81c) {
            ctx->pc = 0x7CC868u;
            goto label_7cc868;
        }
    }
    ctx->pc = 0x7CC824u;
    // 0x7cc824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7cc824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc828: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7cc828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7cc82c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x7CC82Cu;
    {
        const bool branch_taken_0x7cc82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC82Cu;
        // 0x7cc830: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc82c) {
            ctx->pc = 0x7CC87Cu;
            goto label_7cc87c;
        }
    }
    ctx->pc = 0x7CC834u;
    // 0x7cc834: 0x27b10014  addiu       $s1, $sp, 0x14
    ctx->pc = 0x7cc834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x7cc838: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x7cc838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7cc83c: 0x0  nop
    ctx->pc = 0x7cc83cu;
    // NOP
label_7cc840:
    // 0x7cc840: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7cc840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc844: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x7cc844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc848: 0xc1f31be  jal         func_7CC6F8
    ctx->pc = 0x7CC848u;
    SET_GPR_U32(ctx, 31, 0x7CC850u);
    ctx->pc = 0x7CC84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CC848u;
    // 0x7cc84c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC6F8u, 0x7CC848u, 0x7CC850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CC850u;
label_7cc850:
    // 0x7cc850: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x7cc850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x7cc854: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7cc854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7cc858: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x7CC858u;
    {
        const bool branch_taken_0x7cc858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7cc858) {
            ctx->pc = 0x7CC85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CC858u;
            // 0x7cc85c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CC840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cc840;
        }
    }
    ctx->pc = 0x7CC860u;
    // 0x7cc860: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7CC860u;
    {
        const bool branch_taken_0x7cc860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC860u;
        // 0x7cc864: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc860) {
            ctx->pc = 0x7CC880u;
            goto label_7cc880;
        }
    }
    ctx->pc = 0x7CC868u;
label_7cc868:
    // 0x7cc868: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x7cc868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x7cc86c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7cc86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc870: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x7cc870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7cc874: 0xc1f31be  jal         func_7CC6F8
    ctx->pc = 0x7CC874u;
    SET_GPR_U32(ctx, 31, 0x7CC87Cu);
    ctx->pc = 0x7CC878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CC874u;
    // 0x7cc878: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC6F8u, 0x7CC874u, 0x7CC87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CC87Cu;
label_7cc87c:
    // 0x7cc87c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x7cc87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_7cc880:
    // 0x7cc880: 0xc1f3112  jal         func_7CC448
    ctx->pc = 0x7CC880u;
    SET_GPR_U32(ctx, 31, 0x7CC888u);
    ctx->pc = 0x7CC884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CC880u;
    // 0x7cc884: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC448u, 0x7CC880u, 0x7CC888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CC888u;
label_7cc888:
    // 0x7cc888: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x7cc888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cc88c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x7cc88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x7cc890: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x7cc890u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x7cc894: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x7cc894u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x7cc898: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x7cc898u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x7cc89c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x7cc89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7cc8a0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x7cc8a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7cc8a4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x7cc8a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7cc8a8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x7cc8a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7cc8ac: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x7cc8acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cc8b0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x7cc8b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cc8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x7CC8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC8B4u;
        // 0x7cc8b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CC8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CC8BCu;
    // 0x7cc8bc: 0x0  nop
    ctx->pc = 0x7cc8bcu;
    // NOP
    ctx->pc = 0x7cc8c0u;
}
} // namespace gh_mcport
