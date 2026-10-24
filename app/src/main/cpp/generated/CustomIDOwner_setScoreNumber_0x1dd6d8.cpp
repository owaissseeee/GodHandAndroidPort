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

// Function: CustomIDOwner_setScoreNumber
// Address: 0x1dd6d8 - 0x1dd770
void CustomIDOwner_setScoreNumber_0x1dd6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDOwner_setScoreNumber_0x1dd6d8");
#endif

    switch (ctx->pc) {
        case 0x1dd6f8u: goto label_1dd6f8;
        case 0x1dd70cu: goto label_1dd70c;
        case 0x1dd728u: goto label_1dd728;
        case 0x1dd748u: goto label_1dd748;
        case 0x1dd758u: goto label_1dd758;
        default: break;
    }

    ctx->pc = 0x1dd6d8u;

    // 0x1dd6d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dd6dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dd6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1dd6e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dd6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dd6e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1dd6e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6e8: 0x249122c4  addiu       $s1, $a0, 0x22C4
    ctx->pc = 0x1dd6e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8900));
    // 0x1dd6ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd6f0: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1DD6F0u;
    SET_GPR_U32(ctx, 31, 0x1DD6F8u);
    ctx->pc = 0x1DD6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6F0u;
    // 0x1dd6f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1DD6F0u, 0x1DD6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6F8u;
label_1dd6f8:
    // 0x1dd6f8: 0x2a0203e8  slti        $v0, $s0, 0x3E8
    ctx->pc = 0x1dd6f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1dd6fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD6FCu;
    {
        const bool branch_taken_0x1dd6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6FCu;
        // 0x1dd700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6fc) {
            ctx->pc = 0x1DD714u;
            goto label_1dd714;
        }
    }
    ctx->pc = 0x1DD704u;
    // 0x1dd704: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DD704u;
    SET_GPR_U32(ctx, 31, 0x1DD70Cu);
    ctx->pc = 0x1DD708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD704u;
    // 0x1dd708: 0x2405ffd7  addiu       $a1, $zero, -0x29 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DD704u, 0x1DD70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD70Cu;
label_1dd70c:
    // 0x1dd70c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DD70Cu;
    {
        const bool branch_taken_0x1dd70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD70Cu;
        // 0x1dd710: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd70c) {
            ctx->pc = 0x1DD75Cu;
            goto label_1dd75c;
        }
    }
    ctx->pc = 0x1DD714u;
label_1dd714:
    // 0x1dd714: 0x2a022710  slti        $v0, $s0, 0x2710
    ctx->pc = 0x1dd714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x1dd718: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD718u;
    {
        const bool branch_taken_0x1dd718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD718u;
        // 0x1dd71c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd718) {
            ctx->pc = 0x1DD730u;
            goto label_1dd730;
        }
    }
    ctx->pc = 0x1DD720u;
    // 0x1dd720: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DD720u;
    SET_GPR_U32(ctx, 31, 0x1DD728u);
    ctx->pc = 0x1DD724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD720u;
    // 0x1dd724: 0x2405ffe4  addiu       $a1, $zero, -0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DD720u, 0x1DD728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD728u;
label_1dd728:
    // 0x1dd728: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DD728u;
    {
        const bool branch_taken_0x1dd728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD728u;
        // 0x1dd72c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd728) {
            ctx->pc = 0x1DD75Cu;
            goto label_1dd75c;
        }
    }
    ctx->pc = 0x1DD730u;
label_1dd730:
    // 0x1dd730: 0x3442869f  ori         $v0, $v0, 0x869F
    ctx->pc = 0x1dd730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
    // 0x1dd734: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1dd734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1dd738: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD738u;
    {
        const bool branch_taken_0x1dd738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD738u;
        // 0x1dd73c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd738) {
            ctx->pc = 0x1DD750u;
            goto label_1dd750;
        }
    }
    ctx->pc = 0x1DD740u;
    // 0x1dd740: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DD740u;
    SET_GPR_U32(ctx, 31, 0x1DD748u);
    ctx->pc = 0x1DD744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD740u;
    // 0x1dd744: 0x2405fff3  addiu       $a1, $zero, -0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DD740u, 0x1DD748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD748u;
label_1dd748:
    // 0x1dd748: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD748u;
    {
        const bool branch_taken_0x1dd748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD748u;
        // 0x1dd74c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd748) {
            ctx->pc = 0x1DD75Cu;
            goto label_1dd75c;
        }
    }
    ctx->pc = 0x1DD750u;
label_1dd750:
    // 0x1dd750: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DD750u;
    SET_GPR_U32(ctx, 31, 0x1DD758u);
    ctx->pc = 0x1DD754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD750u;
    // 0x1dd754: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DD750u, 0x1DD758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD758u;
label_1dd758:
    // 0x1dd758: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dd758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dd75c:
    // 0x1dd75c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dd75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd764: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD764u;
        // 0x1dd768: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD76Cu;
    // 0x1dd76c: 0x0  nop
    ctx->pc = 0x1dd76cu;
    // NOP
    ctx->pc = 0x1dd770u;
}
