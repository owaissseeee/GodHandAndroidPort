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

// Function: ForwardCollectionItems_374820
// Address: 0x374820 - 0x3748a8
void ForwardCollectionItems_374820_0x374820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardCollectionItems_374820_0x374820");
#endif

    switch (ctx->pc) {
        case 0x374860u: goto label_374860;
        case 0x374868u: goto label_374868;
        case 0x37487cu: goto label_37487c;
        default: break;
    }

    ctx->pc = 0x374820u;

    // 0x374820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x374820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x374824: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x374824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x374828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x374828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37482c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37482cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374830: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x374830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x374834: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x374834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374838: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x374838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37483c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37483cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374840: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x374840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x374844: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x374844u;
    {
        const bool branch_taken_0x374844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x374848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374844u;
        // 0x374848: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374844) {
            ctx->pc = 0x37488Cu;
            goto label_37488c;
        }
    }
    ctx->pc = 0x37484Cu;
    // 0x37484c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37484cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x374850: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x374850u;
    {
        const bool branch_taken_0x374850 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x374854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374850u;
        // 0x374854: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374850) {
            ctx->pc = 0x37488Cu;
            goto label_37488c;
        }
    }
    ctx->pc = 0x374858u;
    // 0x374858: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x374858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37485c: 0x0  nop
    ctx->pc = 0x37485cu;
    // NOP
label_374860:
    // 0x374860: 0xc0dd24a  jal         func_374928
    ctx->pc = 0x374860u;
    SET_GPR_U32(ctx, 31, 0x374868u);
    ctx->pc = 0x374864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374860u;
    // 0x374864: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374928u, 0x374860u, 0x374868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374868u;
label_374868:
    // 0x374868: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x374868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37486c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37486cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374870: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x374870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374874: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x374874u;
    SET_GPR_U32(ctx, 31, 0x37487Cu);
    ctx->pc = 0x374878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374874u;
    // 0x374878: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x374874u, 0x37487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37487Cu;
label_37487c:
    // 0x37487c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x374880: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x374880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x374884: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x374884u;
    {
        const bool branch_taken_0x374884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x374888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374884u;
        // 0x374888: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374884) {
            ctx->pc = 0x374860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_374860;
        }
    }
    ctx->pc = 0x37488Cu;
label_37488c:
    // 0x37488c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37488cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x374890: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x374890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374894: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x374894u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374898: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x374898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37489c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37489cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3748a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3748A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3748A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3748A0u;
        // 0x3748a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3748A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3748A8u;
}
