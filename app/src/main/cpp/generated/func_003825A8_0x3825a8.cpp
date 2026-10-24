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

// Function: func_003825A8
// Address: 0x3825a8 - 0x382660
void func_003825A8_0x3825a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003825A8_0x3825a8");
#endif

    switch (ctx->pc) {
        case 0x3825e8u: goto label_3825e8;
        case 0x3825f8u: goto label_3825f8;
        case 0x382614u: goto label_382614;
        case 0x382628u: goto label_382628;
        default: break;
    }

    ctx->pc = 0x3825a8u;

    // 0x3825a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3825a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3825ac: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3825acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3825b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3825b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3825b4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3825b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3825b8: 0x24b30030  addiu       $s3, $a1, 0x30
    ctx->pc = 0x3825b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x3825bc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3825bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3825c0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3825c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3825c4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3825c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3825c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3825c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3825cc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3825ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3825d0: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3825D0u;
    {
        const bool branch_taken_0x3825d0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3825D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3825D0u;
        // 0x3825d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3825d0) {
            ctx->pc = 0x382638u;
            goto label_382638;
        }
    }
    ctx->pc = 0x3825D8u;
    // 0x3825d8: 0x24b50022  addiu       $s5, $a1, 0x22
    ctx->pc = 0x3825d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 34));
    // 0x3825dc: 0x24b40018  addiu       $s4, $a1, 0x18
    ctx->pc = 0x3825dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x3825e0: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x3825e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3825e4: 0x0  nop
    ctx->pc = 0x3825e4u;
    // NOP
label_3825e8:
    // 0x3825e8: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x3825e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3825ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3825ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3825f0: 0xc0cb734  jal         func_32DCD0
    ctx->pc = 0x3825F0u;
    SET_GPR_U32(ctx, 31, 0x3825F8u);
    ctx->pc = 0x3825F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3825F0u;
    // 0x3825f4: 0x108840  sll         $s1, $s0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DCD0u, 0x3825F0u, 0x3825F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3825F8u;
label_3825f8:
    // 0x3825f8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3825f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3825fc: 0x2911821  addu        $v1, $s4, $s1
    ctx->pc = 0x3825fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x382600: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x382600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382604: 0x84660000  lh          $a2, 0x0($v1)
    ctx->pc = 0x382604u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x382608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38260c: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x38260Cu;
    SET_GPR_U32(ctx, 31, 0x382614u);
    ctx->pc = 0x382610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38260Cu;
    // 0x382610: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x38260Cu, 0x382614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382614u;
label_382614:
    // 0x382614: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x382614u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x382618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38261c: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x38261cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x382620: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x382620u;
    SET_GPR_U32(ctx, 31, 0x382628u);
    ctx->pc = 0x382624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382620u;
    // 0x382624: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x382620u, 0x382628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382628u;
label_382628:
    // 0x382628: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x382628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x38262c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x38262cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x382630: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x382630u;
    {
        const bool branch_taken_0x382630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x382630) {
            ctx->pc = 0x382634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382630u;
            // 0x382634: 0x8e640020  lw          $a0, 0x20($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3825E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3825e8;
        }
    }
    ctx->pc = 0x382638u;
label_382638:
    // 0x382638: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x382638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38263c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x38263cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x382640: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x382640u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x382644: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x382644u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x382648: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x382648u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38264c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x38264cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x382650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x382650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x382654: 0x3e00008  jr          $ra
    ctx->pc = 0x382654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382654u;
        // 0x382658: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38265Cu;
    // 0x38265c: 0x0  nop
    ctx->pc = 0x38265cu;
    // NOP
    ctx->pc = 0x382660u;
}
