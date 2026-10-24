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

// Function: func_001AD818
// Address: 0x1ad818 - 0x1ad8c8
void func_001AD818_0x1ad818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AD818_0x1ad818");
#endif

    ctx->pc = 0x1ad818u;

    // 0x1ad818: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x1ad818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1ad81c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ad81cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ad820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad824: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ad824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ad828: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD828u;
    {
        const bool branch_taken_0x1ad828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD828u;
        // 0x1ad82c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad828) {
            ctx->pc = 0x1AD83Cu;
            goto label_1ad83c;
        }
    }
    ctx->pc = 0x1AD830u;
    // 0x1ad830: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x1ad830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1ad834: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD834u;
    {
        const bool branch_taken_0x1ad834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD834u;
        // 0x1ad838: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad834) {
            ctx->pc = 0x1AD840u;
            goto label_1ad840;
        }
    }
    ctx->pc = 0x1AD83Cu;
label_1ad83c:
    // 0x1ad83c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad83cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad840:
    // 0x1ad840: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AD840u;
    {
        const bool branch_taken_0x1ad840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD840u;
        // 0x1ad844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad840) {
            ctx->pc = 0x1AD86Cu;
            goto label_1ad86c;
        }
    }
    ctx->pc = 0x1AD848u;
    // 0x1ad848: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x1ad848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1ad84c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ad84cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ad850: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD850u;
    {
        const bool branch_taken_0x1ad850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD850u;
        // 0x1ad854: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad850) {
            ctx->pc = 0x1AD864u;
            goto label_1ad864;
        }
    }
    ctx->pc = 0x1AD858u;
    // 0x1ad858: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x1ad858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1ad85c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD85Cu;
    {
        const bool branch_taken_0x1ad85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD85Cu;
        // 0x1ad860: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad85c) {
            ctx->pc = 0x1AD868u;
            goto label_1ad868;
        }
    }
    ctx->pc = 0x1AD864u;
label_1ad864:
    // 0x1ad864: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad868:
    // 0x1ad868: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x1ad868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
label_1ad86c:
    // 0x1ad86c: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x1ad86cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1ad870: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad874: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ad874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ad878: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD878u;
    {
        const bool branch_taken_0x1ad878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD878u;
        // 0x1ad87c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad878) {
            ctx->pc = 0x1AD88Cu;
            goto label_1ad88c;
        }
    }
    ctx->pc = 0x1AD880u;
    // 0x1ad880: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x1ad880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1ad884: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD884u;
    {
        const bool branch_taken_0x1ad884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD884u;
        // 0x1ad888: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad884) {
            ctx->pc = 0x1AD890u;
            goto label_1ad890;
        }
    }
    ctx->pc = 0x1AD88Cu;
label_1ad88c:
    // 0x1ad88c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad88cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad890:
    // 0x1ad890: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AD890u;
    {
        const bool branch_taken_0x1ad890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD890u;
        // 0x1ad894: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad890) {
            ctx->pc = 0x1AD8BCu;
            goto label_1ad8bc;
        }
    }
    ctx->pc = 0x1AD898u;
    // 0x1ad898: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x1ad898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1ad89c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ad89cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ad8a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD8A0u;
    {
        const bool branch_taken_0x1ad8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8A0u;
        // 0x1ad8a4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8a0) {
            ctx->pc = 0x1AD8B4u;
            goto label_1ad8b4;
        }
    }
    ctx->pc = 0x1AD8A8u;
    // 0x1ad8a8: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x1ad8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1ad8ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD8ACu;
    {
        const bool branch_taken_0x1ad8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8ACu;
        // 0x1ad8b0: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8ac) {
            ctx->pc = 0x1AD8B8u;
            goto label_1ad8b8;
        }
    }
    ctx->pc = 0x1AD8B4u;
label_1ad8b4:
    // 0x1ad8b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ad8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad8b8:
    // 0x1ad8b8: 0xac800104  sw          $zero, 0x104($a0)
    ctx->pc = 0x1ad8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 0));
label_1ad8bc:
    // 0x1ad8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8BCu;
        // 0x1ad8c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD8C4u;
    // 0x1ad8c4: 0x0  nop
    ctx->pc = 0x1ad8c4u;
    // NOP
    ctx->pc = 0x1ad8c8u;
}
