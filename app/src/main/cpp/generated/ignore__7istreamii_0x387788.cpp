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

// Function: ignore__7istreamii
// Address: 0x387788 - 0x387890
void ignore__7istreamii_0x387788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ignore__7istreamii_0x387788");
#endif

    switch (ctx->pc) {
        case 0x3877f8u: goto label_3877f8;
        case 0x38781cu: goto label_38781c;
        case 0x387824u: goto label_387824;
        case 0x387838u: goto label_387838;
        case 0x38784cu: goto label_38784c;
        default: break;
    }

    ctx->pc = 0x387788u;

    // 0x387788: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x387788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x38778c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38778cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x387790: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x387790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x387794: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x387794u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x387798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38779c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x38779cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3877a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3877a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3877a4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3877a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3877a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3877a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3877ac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3877acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3877b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3877b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3877b4: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x3877b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x3877b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3877B8u;
    {
        const bool branch_taken_0x3877b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3877BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3877B8u;
        // 0x3877bc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3877b8) {
            ctx->pc = 0x3877D0u;
            goto label_3877d0;
        }
    }
    ctx->pc = 0x3877C0u;
    // 0x3877c0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3877c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3877c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3877c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3877c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3877C8u;
    {
        const bool branch_taken_0x3877c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3877CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3877C8u;
        // 0x3877cc: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3877c8) {
            ctx->pc = 0x3877FCu;
            goto label_3877fc;
        }
    }
    ctx->pc = 0x3877D0u;
label_3877d0:
    // 0x3877d0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x3877d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3877d4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3877D4u;
    {
        const bool branch_taken_0x3877d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3877D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3877D4u;
        // 0x3877d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3877d4) {
            ctx->pc = 0x3877FCu;
            goto label_3877fc;
        }
    }
    ctx->pc = 0x3877DCu;
    // 0x3877dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3877dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3877e0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3877e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3877e4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3877e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3877e8: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3877E8u;
    {
        const bool branch_taken_0x3877e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3877ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3877E8u;
        // 0x3877ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3877e8) {
            ctx->pc = 0x3877FCu;
            goto label_3877fc;
        }
    }
    ctx->pc = 0x3877F0u;
    // 0x3877f0: 0xc0e249a  jal         func_389268
    ctx->pc = 0x3877F0u;
    SET_GPR_U32(ctx, 31, 0x3877F8u);
    ctx->pc = 0x3877F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3877F0u;
    // 0x3877f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x3877F0u, 0x3877F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3877F8u;
label_3877f8:
    // 0x3877f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3877f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3877fc:
    // 0x3877fc: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3877FCu;
    {
        const bool branch_taken_0x3877fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x387800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3877FCu;
        // 0x387800: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3877fc) {
            ctx->pc = 0x387868u;
            goto label_387868;
        }
    }
    ctx->pc = 0x387804u;
    // 0x387804: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x387804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x387808: 0x1663000a  bne         $s3, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x387808u;
    {
        const bool branch_taken_0x387808 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x38780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387808u;
        // 0x38780c: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387808) {
            ctx->pc = 0x387834u;
            goto label_387834;
        }
    }
    ctx->pc = 0x387810u;
    // 0x387810: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x387810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387814: 0xc0e2c5a  jal         func_38B168
    ctx->pc = 0x387814u;
    SET_GPR_U32(ctx, 31, 0x38781Cu);
    ctx->pc = 0x387818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387814u;
    // 0x387818: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B168u, 0x387814u, 0x38781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38781Cu;
label_38781c:
    // 0x38781c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x38781Cu;
    {
        const bool branch_taken_0x38781c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38781Cu;
        // 0x387820: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38781c) {
            ctx->pc = 0x387868u;
            goto label_387868;
        }
    }
    ctx->pc = 0x387824u;
label_387824:
    // 0x387824: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x387824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x387828: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x387828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x38782c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x38782Cu;
    {
        const bool branch_taken_0x38782c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38782Cu;
        // 0x387830: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38782c) {
            ctx->pc = 0x387868u;
            goto label_387868;
        }
    }
    ctx->pc = 0x387834u;
label_387834:
    // 0x387834: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x387834u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_387838:
    // 0x387838: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x387838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x38783c: 0x620000b  bltz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x38783Cu;
    {
        const bool branch_taken_0x38783c = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x387840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38783Cu;
        // 0x387840: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38783c) {
            ctx->pc = 0x38786Cu;
            goto label_38786c;
        }
    }
    ctx->pc = 0x387844u;
    // 0x387844: 0xc0e3ab8  jal         func_38EAE0
    ctx->pc = 0x387844u;
    SET_GPR_U32(ctx, 31, 0x38784Cu);
    ctx->pc = 0x387848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387844u;
    // 0x387848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EAE0u, 0x387844u, 0x38784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38784Cu;
label_38784c:
    // 0x38784c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38784cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387850: 0x5074fff4  beql        $v1, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x387850u;
    {
        const bool branch_taken_0x387850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x387850) {
            ctx->pc = 0x387854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387850u;
            // 0x387854: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387824u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387824;
        }
    }
    ctx->pc = 0x387858u;
    // 0x387858: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x387858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38785c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38785cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x387860: 0x1473fff5  bne         $v1, $s3, . + 4 + (-0xB << 2)
    ctx->pc = 0x387860u;
    {
        const bool branch_taken_0x387860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x387864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387860u;
        // 0x387864: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387860) {
            ctx->pc = 0x387838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387838;
        }
    }
    ctx->pc = 0x387868u;
label_387868:
    // 0x387868: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x387868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38786c:
    // 0x38786c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x38786cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x387870: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x387870u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x387874: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x387874u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x387878: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x387878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38787c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38787cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x387880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387884: 0x3e00008  jr          $ra
    ctx->pc = 0x387884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387884u;
        // 0x387888: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38788Cu;
    // 0x38788c: 0x0  nop
    ctx->pc = 0x38788cu;
    // NOP
    ctx->pc = 0x387890u;
}
