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

// Function: cTaskWork_step
// Address: 0x2d57c8 - 0x2d5890
void cTaskWork_step_0x2d57c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cTaskWork_step_0x2d57c8");
#endif

    switch (ctx->pc) {
        case 0x2d581cu: goto label_2d581c;
        case 0x2d582cu: goto label_2d582c;
        case 0x2d5850u: goto label_2d5850;
        case 0x2d5864u: goto label_2d5864;
        case 0x2d587cu: goto label_2d587c;
        default: break;
    }

    ctx->pc = 0x2d57c8u;

    // 0x2d57c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d57c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d57cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d57ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d57d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d57d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d57d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d57d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d57d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d57d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57dc: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2d57dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d57e0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D57E0u;
    {
        const bool branch_taken_0x2d57e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D57E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D57E0u;
        // 0x2d57e4: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d57e0) {
            ctx->pc = 0x2D5814u;
            goto label_2d5814;
        }
    }
    ctx->pc = 0x2D57E8u;
    // 0x2d57e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D57E8u;
    {
        const bool branch_taken_0x2d57e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D57ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D57E8u;
        // 0x2d57ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d57e8) {
            ctx->pc = 0x2D5800u;
            goto label_2d5800;
        }
    }
    ctx->pc = 0x2D57F0u;
    // 0x2d57f0: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D57F0u;
    {
        const bool branch_taken_0x2d57f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D57F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D57F0u;
        // 0x2d57f4: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d57f0) {
            ctx->pc = 0x2D5834u;
            goto label_2d5834;
        }
    }
    ctx->pc = 0x2D57F8u;
    // 0x2d57f8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2D57F8u;
    {
        const bool branch_taken_0x2d57f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d57f8) {
            ctx->pc = 0x2D586Cu;
            goto label_2d586c;
        }
    }
    ctx->pc = 0x2D5800u;
label_2d5800:
    // 0x2d5800: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d5800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d5804: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D5804u;
    {
        const bool branch_taken_0x2d5804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D5808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5804u;
        // 0x2d5808: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5804) {
            ctx->pc = 0x2D5854u;
            goto label_2d5854;
        }
    }
    ctx->pc = 0x2D580Cu;
    // 0x2d580c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2D580Cu;
    {
        const bool branch_taken_0x2d580c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D580Cu;
        // 0x2d5810: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d580c) {
            ctx->pc = 0x2D5868u;
            goto label_2d5868;
        }
    }
    ctx->pc = 0x2D5814u;
label_2d5814:
    // 0x2d5814: 0xc0ebea8  jal         func_3AFAA0
    ctx->pc = 0x2D5814u;
    SET_GPR_U32(ctx, 31, 0x2D581Cu);
    ctx->pc = 0x2D5818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5814u;
    // 0x2d5818: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFAA0u, 0x2D5814u, 0x2D581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D581Cu;
label_2d581c:
    // 0x2d581c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d581cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5820: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d5820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5824: 0xc0ec2ea  jal         func_3B0BA8
    ctx->pc = 0x2D5824u;
    SET_GPR_U32(ctx, 31, 0x2D582Cu);
    ctx->pc = 0x2D5828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5824u;
    // 0x2d5828: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0BA8u, 0x2D5824u, 0x2D582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D582Cu;
label_2d582c:
    // 0x2d582c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D582Cu;
    {
        const bool branch_taken_0x2d582c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D582Cu;
        // 0x2d5830: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d582c) {
            ctx->pc = 0x2D5854u;
            goto label_2d5854;
        }
    }
    ctx->pc = 0x2D5834u;
label_2d5834:
    // 0x2d5834: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x2d5834u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2d5838: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d5838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d583c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d583cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d5840: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D5840u;
    {
        const bool branch_taken_0x2d5840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5840u;
        // 0x2d5844: 0xa602000e  sh          $v0, 0xE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5840) {
            ctx->pc = 0x2D5864u;
            goto label_2d5864;
        }
    }
    ctx->pc = 0x2D5848u;
    // 0x2d5848: 0xc0ebef4  jal         func_3AFBD0
    ctx->pc = 0x2D5848u;
    SET_GPR_U32(ctx, 31, 0x2D5850u);
    ctx->pc = 0x2D584Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5848u;
    // 0x2d584c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFBD0u, 0x2D5848u, 0x2D5850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5850u;
label_2d5850:
    // 0x2d5850: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x2d5850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_2d5854:
    // 0x2d5854: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d5854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d5858: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2d5858u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d585c: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x2D585Cu;
    SET_GPR_U32(ctx, 31, 0x2D5864u);
    ctx->pc = 0x2D5860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D585Cu;
    // 0x2d5860: 0x8c640028  lw          $a0, 0x28($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x2D585Cu, 0x2D5864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5864u;
label_2d5864:
    // 0x2d5864: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2d5864u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2d5868:
    // 0x2d5868: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x2d5868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_2d586c:
    // 0x2d586c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D586Cu;
    {
        const bool branch_taken_0x2d586c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d586c) {
            ctx->pc = 0x2D5870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D586Cu;
            // 0x2d5870: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5880u;
            goto label_2d5880;
        }
    }
    ctx->pc = 0x2D5874u;
    // 0x2d5874: 0xc0b567c  jal         func_2D59F0
    ctx->pc = 0x2D5874u;
    SET_GPR_U32(ctx, 31, 0x2D587Cu);
    ctx->pc = 0x2D5878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5874u;
    // 0x2d5878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59F0u, 0x2D5874u, 0x2D587Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D587Cu;
label_2d587c:
    // 0x2d587c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d587cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d5880:
    // 0x2d5880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5884: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5884u;
        // 0x2d5888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D588Cu;
    // 0x2d588c: 0x0  nop
    ctx->pc = 0x2d588cu;
    // NOP
    ctx->pc = 0x2d5890u;
}
