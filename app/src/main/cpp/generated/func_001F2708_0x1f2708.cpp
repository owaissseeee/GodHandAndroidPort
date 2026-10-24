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

// Function: func_001F2708
// Address: 0x1f2708 - 0x1f27b0
void func_001F2708_0x1f2708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F2708_0x1f2708");
#endif

    switch (ctx->pc) {
        case 0x1f273cu: goto label_1f273c;
        case 0x1f2740u: goto label_1f2740;
        case 0x1f274cu: goto label_1f274c;
        case 0x1f2764u: goto label_1f2764;
        case 0x1f2770u: goto label_1f2770;
        case 0x1f277cu: goto label_1f277c;
        default: break;
    }

    ctx->pc = 0x1f2708u;

    // 0x1f2708: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f2708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f270c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f270cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f2710: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f2710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2714: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f2714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f2718: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f2718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f271c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1f271cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1f2720: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1f2720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1f2724: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x1f2724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1f2728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f2728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f272c: 0x26500060  addiu       $s0, $s2, 0x60
    ctx->pc = 0x1f272cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1f2730: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1f2730u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1f2734: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1F2734u;
    SET_GPR_U32(ctx, 31, 0x1F273Cu);
    ctx->pc = 0x1F2738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2734u;
    // 0x1f2738: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1F2734u, 0x1F273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F273Cu;
label_1f273c:
    // 0x1f273c: 0x0  nop
    ctx->pc = 0x1f273cu;
    // NOP
label_1f2740:
    // 0x1f2740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2744: 0xc0b5758  jal         func_2D5D60
    ctx->pc = 0x1F2744u;
    SET_GPR_U32(ctx, 31, 0x1F274Cu);
    ctx->pc = 0x1F2748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2744u;
    // 0x1f2748: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D60u, 0x1F2744u, 0x1F274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F274Cu;
label_1f274c:
    // 0x1f274c: 0x0  nop
    ctx->pc = 0x1f274cu;
    // NOP
    // 0x1f2750: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F2750u;
    {
        const bool branch_taken_0x1f2750 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1F2754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2750u;
        // 0x1f2754: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2750) {
            ctx->pc = 0x1F2740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2740;
        }
    }
    ctx->pc = 0x1F2758u;
    // 0x1f2758: 0x26440930  addiu       $a0, $s2, 0x930
    ctx->pc = 0x1f2758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2352));
    // 0x1f275c: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1F275Cu;
    SET_GPR_U32(ctx, 31, 0x1F2764u);
    ctx->pc = 0x1F2760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F275Cu;
    // 0x1f2760: 0x26500980  addiu       $s0, $s2, 0x980 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1F275Cu, 0x1F2764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2764u;
label_1f2764:
    // 0x1f2764: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1f2764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2768: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1f2768u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f276c: 0x0  nop
    ctx->pc = 0x1f276cu;
    // NOP
label_1f2770:
    // 0x1f2770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2774: 0xc0b5758  jal         func_2D5D60
    ctx->pc = 0x1F2774u;
    SET_GPR_U32(ctx, 31, 0x1F277Cu);
    ctx->pc = 0x1F2778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2774u;
    // 0x1f2778: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D60u, 0x1F2774u, 0x1F277Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F277Cu;
label_1f277c:
    // 0x1f277c: 0x0  nop
    ctx->pc = 0x1f277cu;
    // NOP
    // 0x1f2780: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F2780u;
    {
        const bool branch_taken_0x1f2780 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1F2784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2780u;
        // 0x1f2784: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2780) {
            ctx->pc = 0x1F2770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2770;
        }
    }
    ctx->pc = 0x1F2788u;
    // 0x1f2788: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1f2788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f278c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f278cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f2790: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f2790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f2794: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f2794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2798: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1f2798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f279c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f279cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f27a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F27A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F27A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F27A0u;
        // 0x1f27a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F27A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F27A8u;
    // 0x1f27a8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1f27a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f27ac: 0x0  nop
    ctx->pc = 0x1f27acu;
    // NOP
    ctx->pc = 0x1f27b0u;
}
