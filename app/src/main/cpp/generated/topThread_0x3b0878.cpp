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

// Function: topThread
// Address: 0x3b0878 - 0x3b0950
void topThread_0x3b0878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("topThread_0x3b0878");
#endif

    switch (ctx->pc) {
        case 0x3b08b8u: goto label_3b08b8;
        case 0x3b08c0u: goto label_3b08c0;
        case 0x3b0918u: goto label_3b0918;
        case 0x3b0928u: goto label_3b0928;
        case 0x3b0938u: goto label_3b0938;
        case 0x3b0948u: goto label_3b0948;
        default: break;
    }

    ctx->pc = 0x3b0878u;

    // 0x3b0878: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b0878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3b087c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b087cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b0880: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b0880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0884: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3b0884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x3b0888: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3b0888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x3b088c: 0x3c160078  lui         $s6, 0x78
    ctx->pc = 0x3b088cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)120 << 16));
    // 0x3b0890: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3b0890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3b0894: 0x3c150046  lui         $s5, 0x46
    ctx->pc = 0x3b0894u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)70 << 16));
    // 0x3b0898: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3b0898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3b089c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3b089cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b08a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b08a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b08a4: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x3b08a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b08a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b08a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b08ac: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x3b08acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3b08b0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3b08b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3b08b4: 0x26300009  addiu       $s0, $s1, 0x9
    ctx->pc = 0x3b08b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_3b08b8:
    // 0x3b08b8: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x3B08B8u;
    SET_GPR_U32(ctx, 31, 0x3B08C0u);
    ctx->pc = 0x3B08BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B08B8u;
    // 0x3b08bc: 0x8ec4df90  lw          $a0, -0x2070($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294958992)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x3B08B8u, 0x3B08C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B08C0u;
label_3b08c0:
    // 0x3b08c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b08c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b08c4: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x3b08c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x3b08c8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x3b08c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b08cc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3b08ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3b08d0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3b08d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x3b08d4: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x3b08d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3b08d8: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x3b08d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3b08dc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3b08dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b08e0: 0x1054000f  beq         $v0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x3B08E0u;
    {
        const bool branch_taken_0x3b08e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x3B08E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B08E0u;
        // 0x3b08e4: 0x28450002  slti        $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b08e0) {
            ctx->pc = 0x3B0920u;
            goto label_3b0920;
        }
    }
    ctx->pc = 0x3B08E8u;
    // 0x3b08e8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B08E8u;
    {
        const bool branch_taken_0x3b08e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B08ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B08E8u;
        // 0x3b08ec: 0x26a4fe00  addiu       $a0, $s5, -0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b08e8) {
            ctx->pc = 0x3B0900u;
            goto label_3b0900;
        }
    }
    ctx->pc = 0x3B08F0u;
    // 0x3b08f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B08F0u;
    {
        const bool branch_taken_0x3b08f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B08F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B08F0u;
        // 0x3b08f4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b08f0) {
            ctx->pc = 0x3B0910u;
            goto label_3b0910;
        }
    }
    ctx->pc = 0x3B08F8u;
    // 0x3b08f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3B08F8u;
    {
        const bool branch_taken_0x3b08f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b08f8) {
            ctx->pc = 0x3B0940u;
            goto label_3b0940;
        }
    }
    ctx->pc = 0x3B0900u;
label_3b0900:
    // 0x3b0900: 0x1053000b  beq         $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x3B0900u;
    {
        const bool branch_taken_0x3b0900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x3B0904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0900u;
        // 0x3b0904: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0900) {
            ctx->pc = 0x3B0930u;
            goto label_3b0930;
        }
    }
    ctx->pc = 0x3B0908u;
    // 0x3b0908: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3B0908u;
    {
        const bool branch_taken_0x3b0908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0908) {
            ctx->pc = 0x3B0940u;
            goto label_3b0940;
        }
    }
    ctx->pc = 0x3B0910u;
label_3b0910:
    // 0x3b0910: 0xc0ebef4  jal         func_3AFBD0
    ctx->pc = 0x3B0910u;
    SET_GPR_U32(ctx, 31, 0x3B0918u);
    ctx->pc = 0x3B0914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0910u;
    // 0x3b0914: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFBD0u, 0x3B0910u, 0x3B0918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0918u;
label_3b0918:
    // 0x3b0918: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x3B0918u;
    {
        const bool branch_taken_0x3b0918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0918) {
            ctx->pc = 0x3B08B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b08b8;
        }
    }
    ctx->pc = 0x3B0920u;
label_3b0920:
    // 0x3b0920: 0xc0ebed4  jal         func_3AFB50
    ctx->pc = 0x3B0920u;
    SET_GPR_U32(ctx, 31, 0x3B0928u);
    ctx->pc = 0x3B0924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0920u;
    // 0x3b0924: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB50u, 0x3B0920u, 0x3B0928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0928u;
label_3b0928:
    // 0x3b0928: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x3B0928u;
    {
        const bool branch_taken_0x3b0928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0928) {
            ctx->pc = 0x3B08B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b08b8;
        }
    }
    ctx->pc = 0x3B0930u;
label_3b0930:
    // 0x3b0930: 0xc0ebf04  jal         func_3AFC10
    ctx->pc = 0x3B0930u;
    SET_GPR_U32(ctx, 31, 0x3B0938u);
    ctx->pc = 0x3B0934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0930u;
    // 0x3b0934: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFC10u, 0x3B0930u, 0x3B0938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0938u;
label_3b0938:
    // 0x3b0938: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x3B0938u;
    {
        const bool branch_taken_0x3b0938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0938) {
            ctx->pc = 0x3B08B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b08b8;
        }
    }
    ctx->pc = 0x3B0940u;
label_3b0940:
    // 0x3b0940: 0xc0ec7ea  jal         func_3B1FA8
    ctx->pc = 0x3B0940u;
    SET_GPR_U32(ctx, 31, 0x3B0948u);
    ctx->pc = 0x3B1FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1FA8u, 0x3B0940u, 0x3B0948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0948u;
label_3b0948:
    // 0x3b0948: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x3B0948u;
    {
        const bool branch_taken_0x3b0948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0948) {
            ctx->pc = 0x3B08B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b08b8;
        }
    }
    ctx->pc = 0x3B0950u;
}
