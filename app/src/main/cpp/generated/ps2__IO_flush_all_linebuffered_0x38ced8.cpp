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

// Function: _IO_flush_all_linebuffered
// Address: 0x38ced8 - 0x38cf40
void ps2__IO_flush_all_linebuffered_0x38ced8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_flush_all_linebuffered_0x38ced8");
#endif

    switch (ctx->pc) {
        case 0x38ced8u: goto label_38ced8;
        case 0x38cedcu: goto label_38cedc;
        case 0x38cee0u: goto label_38cee0;
        case 0x38cee4u: goto label_38cee4;
        case 0x38cee8u: goto label_38cee8;
        case 0x38ceecu: goto label_38ceec;
        case 0x38cef0u: goto label_38cef0;
        case 0x38cef4u: goto label_38cef4;
        case 0x38cef8u: goto label_38cef8;
        case 0x38cefcu: goto label_38cefc;
        case 0x38cf00u: goto label_38cf00;
        case 0x38cf04u: goto label_38cf04;
        case 0x38cf08u: goto label_38cf08;
        case 0x38cf0cu: goto label_38cf0c;
        case 0x38cf10u: goto label_38cf10;
        case 0x38cf14u: goto label_38cf14;
        case 0x38cf18u: goto label_38cf18;
        case 0x38cf1cu: goto label_38cf1c;
        case 0x38cf20u: goto label_38cf20;
        case 0x38cf24u: goto label_38cf24;
        case 0x38cf28u: goto label_38cf28;
        case 0x38cf2cu: goto label_38cf2c;
        case 0x38cf30u: goto label_38cf30;
        case 0x38cf34u: goto label_38cf34;
        case 0x38cf38u: goto label_38cf38;
        case 0x38cf3cu: goto label_38cf3c;
        default: break;
    }

    ctx->pc = 0x38ced8u;

label_38ced8:
    // 0x38ced8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38ced8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_38cedc:
    // 0x38cedc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x38cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_38cee0:
    // 0x38cee0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38cee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_38cee4:
    // 0x38cee4: 0x8c5050f8  lw          $s0, 0x50F8($v0)
    ctx->pc = 0x38cee4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20728)));
label_38cee8:
    // 0x38cee8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38cee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_38ceec:
    // 0x38ceec: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_38cef0:
    if (ctx->pc == 0x38CEF0u) {
        ctx->pc = 0x38CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CEECu;
        // 0x38cef0: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CEF4u;
        goto label_38cef4;
    }
    ctx->pc = 0x38CEECu;
    {
        const bool branch_taken_0x38ceec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CEECu;
        // 0x38cef0: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ceec) {
            ctx->pc = 0x38CF2Cu;
            goto label_38cf2c;
        }
    }
    ctx->pc = 0x38CEF4u;
label_38cef4:
    // 0x38cef4: 0x24110200  addiu       $s1, $zero, 0x200
    ctx->pc = 0x38cef4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_38cef8:
    // 0x38cef8: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x38cef8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_38cefc:
    // 0x38cefc: 0x0  nop
    ctx->pc = 0x38cefcu;
    // NOP
label_38cf00:
    // 0x38cf00: 0x30420208  andi        $v0, $v0, 0x208
    ctx->pc = 0x38cf00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)520);
label_38cf04:
    // 0x38cf04: 0x54510007  bnel        $v0, $s1, . + 4 + (0x7 << 2)
label_38cf08:
    if (ctx->pc == 0x38CF08u) {
        ctx->pc = 0x38CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF04u;
        // 0x38cf08: 0x8e100034  lw          $s0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF0Cu;
        goto label_38cf0c;
    }
    ctx->pc = 0x38CF04u;
    {
        const bool branch_taken_0x38cf04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x38cf04) {
            ctx->pc = 0x38CF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CF04u;
            // 0x38cf08: 0x8e100034  lw          $s0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CF24u;
            goto label_38cf24;
        }
    }
    ctx->pc = 0x38CF0Cu;
label_38cf0c:
    // 0x38cf0c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x38cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38cf10:
    // 0x38cf10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38cf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38cf14:
    // 0x38cf14: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x38cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_38cf18:
    // 0x38cf18: 0x40f809  jalr        $v0
label_38cf1c:
    if (ctx->pc == 0x38CF1Cu) {
        ctx->pc = 0x38CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF18u;
        // 0x38cf1c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF20u;
        goto label_38cf20;
    }
    ctx->pc = 0x38CF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38CF20u);
        ctx->pc = 0x38CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF18u;
        // 0x38cf1c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CF18u, 0x38CF20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38CF20u;
label_38cf20:
    // 0x38cf20: 0x8e100034  lw          $s0, 0x34($s0)
    ctx->pc = 0x38cf20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_38cf24:
    // 0x38cf24: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
label_38cf28:
    if (ctx->pc == 0x38CF28u) {
        ctx->pc = 0x38CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF24u;
        // 0x38cf28: 0xde020000  ld          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF2Cu;
        goto label_38cf2c;
    }
    ctx->pc = 0x38CF24u;
    {
        const bool branch_taken_0x38cf24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x38cf24) {
            ctx->pc = 0x38CF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CF24u;
            // 0x38cf28: 0xde020000  ld          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38cf00;
        }
    }
    ctx->pc = 0x38CF2Cu;
label_38cf2c:
    // 0x38cf2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38cf2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38cf30:
    // 0x38cf30: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38cf30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38cf34:
    // 0x38cf34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38cf34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38cf38:
    // 0x38cf38: 0x3e00008  jr          $ra
label_38cf3c:
    if (ctx->pc == 0x38CF3Cu) {
        ctx->pc = 0x38CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF38u;
        // 0x38cf3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF40u;
        goto label_fallthrough_0x38cf38;
    }
    ctx->pc = 0x38CF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF38u;
        // 0x38cf3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38cf38:
    ctx->pc = 0x38CF40u;
}
