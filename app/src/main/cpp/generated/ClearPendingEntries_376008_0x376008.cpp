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

// Function: ClearPendingEntries_376008
// Address: 0x376008 - 0x376080
void ClearPendingEntries_376008_0x376008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearPendingEntries_376008_0x376008");
#endif

    switch (ctx->pc) {
        case 0x376028u: goto label_376028;
        case 0x37604cu: goto label_37604c;
        case 0x37605cu: goto label_37605c;
        default: break;
    }

    ctx->pc = 0x376008u;

    // 0x376008: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x376008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37600c: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37600cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x376010: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x376010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x376014: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x376014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x376018: 0x2450f050  addiu       $s0, $v0, -0xFB0
    ctx->pc = 0x376018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963280));
    // 0x37601c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37601cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376020: 0x2411005f  addiu       $s1, $zero, 0x5F
    ctx->pc = 0x376020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x376024: 0x0  nop
    ctx->pc = 0x376024u;
    // NOP
label_376028:
    // 0x376028: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x376028u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37602c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x37602Cu;
    {
        const bool branch_taken_0x37602c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37602Cu;
        // 0x376030: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37602c) {
            ctx->pc = 0x376060u;
            goto label_376060;
        }
    }
    ctx->pc = 0x376034u;
    // 0x376034: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x376034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x376038: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x376038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x37603c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37603Cu;
    {
        const bool branch_taken_0x37603c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37603Cu;
        // 0x376040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37603c) {
            ctx->pc = 0x376054u;
            goto label_376054;
        }
    }
    ctx->pc = 0x376044u;
    // 0x376044: 0xc0dd880  jal         func_376200
    ctx->pc = 0x376044u;
    SET_GPR_U32(ctx, 31, 0x37604Cu);
    ctx->pc = 0x376200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376200u, 0x376044u, 0x37604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37604Cu;
label_37604c:
    // 0x37604c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37604Cu;
    {
        const bool branch_taken_0x37604c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37604Cu;
        // 0x376050: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37604c) {
            ctx->pc = 0x376060u;
            goto label_376060;
        }
    }
    ctx->pc = 0x376054u;
label_376054:
    // 0x376054: 0xc0dd820  jal         func_376080
    ctx->pc = 0x376054u;
    SET_GPR_U32(ctx, 31, 0x37605Cu);
    ctx->pc = 0x376080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376080u, 0x376054u, 0x37605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37605Cu;
label_37605c:
    // 0x37605c: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x37605cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_376060:
    // 0x376060: 0x621fff1  bgez        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x376060u;
    {
        const bool branch_taken_0x376060 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x376064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376060u;
        // 0x376064: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376060) {
            ctx->pc = 0x376028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376028;
        }
    }
    ctx->pc = 0x376068u;
    // 0x376068: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x376068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37606c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37606cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x376070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376074: 0x3e00008  jr          $ra
    ctx->pc = 0x376074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376074u;
        // 0x376078: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37607Cu;
    // 0x37607c: 0x0  nop
    ctx->pc = 0x37607cu;
    // NOP
    ctx->pc = 0x376080u;
}
