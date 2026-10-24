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

// Function: _IO_unbuffer_all
// Address: 0x38cf40 - 0x38cfa0
void ps2__IO_unbuffer_all_0x38cf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_unbuffer_all_0x38cf40");
#endif

    switch (ctx->pc) {
        case 0x38cf40u: goto label_38cf40;
        case 0x38cf44u: goto label_38cf44;
        case 0x38cf48u: goto label_38cf48;
        case 0x38cf4cu: goto label_38cf4c;
        case 0x38cf50u: goto label_38cf50;
        case 0x38cf54u: goto label_38cf54;
        case 0x38cf58u: goto label_38cf58;
        case 0x38cf5cu: goto label_38cf5c;
        case 0x38cf60u: goto label_38cf60;
        case 0x38cf64u: goto label_38cf64;
        case 0x38cf68u: goto label_38cf68;
        case 0x38cf6cu: goto label_38cf6c;
        case 0x38cf70u: goto label_38cf70;
        case 0x38cf74u: goto label_38cf74;
        case 0x38cf78u: goto label_38cf78;
        case 0x38cf7cu: goto label_38cf7c;
        case 0x38cf80u: goto label_38cf80;
        case 0x38cf84u: goto label_38cf84;
        case 0x38cf88u: goto label_38cf88;
        case 0x38cf8cu: goto label_38cf8c;
        case 0x38cf90u: goto label_38cf90;
        case 0x38cf94u: goto label_38cf94;
        case 0x38cf98u: goto label_38cf98;
        case 0x38cf9cu: goto label_38cf9c;
        default: break;
    }

    ctx->pc = 0x38cf40u;

label_38cf40:
    // 0x38cf40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38cf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38cf44:
    // 0x38cf44: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x38cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_38cf48:
    // 0x38cf48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38cf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_38cf4c:
    // 0x38cf4c: 0x8c5050f8  lw          $s0, 0x50F8($v0)
    ctx->pc = 0x38cf4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20728)));
label_38cf50:
    // 0x38cf50: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_38cf54:
    if (ctx->pc == 0x38CF54u) {
        ctx->pc = 0x38CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF50u;
        // 0x38cf54: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF58u;
        goto label_38cf58;
    }
    ctx->pc = 0x38CF50u;
    {
        const bool branch_taken_0x38cf50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF50u;
        // 0x38cf54: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cf50) {
            ctx->pc = 0x38CF90u;
            goto label_38cf90;
        }
    }
    ctx->pc = 0x38CF58u;
label_38cf58:
    // 0x38cf58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38cf5c:
    // 0x38cf5c: 0x0  nop
    ctx->pc = 0x38cf5cu;
    // NOP
label_38cf60:
    // 0x38cf60: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x38cf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_38cf64:
    // 0x38cf64: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_38cf68:
    if (ctx->pc == 0x38CF68u) {
        ctx->pc = 0x38CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF64u;
        // 0x38cf68: 0x8e100034  lw          $s0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF6Cu;
        goto label_38cf6c;
    }
    ctx->pc = 0x38CF64u;
    {
        const bool branch_taken_0x38cf64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38cf64) {
            ctx->pc = 0x38CF68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CF64u;
            // 0x38cf68: 0x8e100034  lw          $s0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CF88u;
            goto label_38cf88;
        }
    }
    ctx->pc = 0x38CF6Cu;
label_38cf6c:
    // 0x38cf6c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x38cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38cf70:
    // 0x38cf70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38cf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38cf74:
    // 0x38cf74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38cf74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38cf78:
    // 0x38cf78: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x38cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_38cf7c:
    // 0x38cf7c: 0x40f809  jalr        $v0
label_38cf80:
    if (ctx->pc == 0x38CF80u) {
        ctx->pc = 0x38CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF7Cu;
        // 0x38cf80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF84u;
        goto label_38cf84;
    }
    ctx->pc = 0x38CF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38CF84u);
        ctx->pc = 0x38CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF7Cu;
        // 0x38cf80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CF7Cu, 0x38CF84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38CF84u;
label_38cf84:
    // 0x38cf84: 0x8e100034  lw          $s0, 0x34($s0)
    ctx->pc = 0x38cf84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_38cf88:
    // 0x38cf88: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
label_38cf8c:
    if (ctx->pc == 0x38CF8Cu) {
        ctx->pc = 0x38CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF88u;
        // 0x38cf8c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CF90u;
        goto label_38cf90;
    }
    ctx->pc = 0x38CF88u;
    {
        const bool branch_taken_0x38cf88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x38cf88) {
            ctx->pc = 0x38CF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CF88u;
            // 0x38cf8c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38cf60;
        }
    }
    ctx->pc = 0x38CF90u;
label_38cf90:
    // 0x38cf90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38cf90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38cf94:
    // 0x38cf94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38cf94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38cf98:
    // 0x38cf98: 0x3e00008  jr          $ra
label_38cf9c:
    if (ctx->pc == 0x38CF9Cu) {
        ctx->pc = 0x38CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF98u;
        // 0x38cf9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CFA0u;
        goto label_fallthrough_0x38cf98;
    }
    ctx->pc = 0x38CF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CF98u;
        // 0x38cf9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38cf98:
    ctx->pc = 0x38CFA0u;
}
