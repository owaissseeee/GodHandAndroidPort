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

// Function: CheckSlotsShort2FEAndSetByte1864_262A10
// Address: 0x262a10 - 0x262aa8
void CheckSlotsShort2FEAndSetByte1864_262A10_0x262a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckSlotsShort2FEAndSetByte1864_262A10_0x262a10");
#endif

    switch (ctx->pc) {
        case 0x262a34u: goto label_262a34;
        default: break;
    }

    ctx->pc = 0x262a10u;

    // 0x262a10: 0x8c820670  lw          $v0, 0x670($a0)
    ctx->pc = 0x262a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x262a14: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x262a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x262a18: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x262A18u;
    {
        const bool branch_taken_0x262a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262a18) {
            ctx->pc = 0x262A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262A18u;
            // 0x262a1c: 0x8c820678  lw          $v0, 0x678($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262A40u;
            goto label_262a40;
        }
    }
    ctx->pc = 0x262A20u;
    // 0x262a20: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x262a20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x262a24: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x262a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x262a28: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x262A28u;
    {
        const bool branch_taken_0x262a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x262a28) {
            ctx->pc = 0x262A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262A28u;
            // 0x262a2c: 0x8c820678  lw          $v0, 0x678($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262A40u;
            goto label_262a40;
        }
    }
    ctx->pc = 0x262A30u;
    // 0x262a30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x262a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_262a34:
    // 0x262a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262a38: 0x3e00008  jr          $ra
    ctx->pc = 0x262A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A38u;
        // 0x262a3c: 0xa0831864  sb          $v1, 0x1864($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 6244), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262A40u;
label_262a40:
    // 0x262a40: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x262a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x262a44: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x262A44u;
    {
        const bool branch_taken_0x262a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262a44) {
            ctx->pc = 0x262A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262A44u;
            // 0x262a48: 0x8c820680  lw          $v0, 0x680($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262A60u;
            goto label_262a60;
        }
    }
    ctx->pc = 0x262A4Cu;
    // 0x262a4c: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x262a4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x262a50: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x262a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x262a54: 0x1062fff7  beq         $v1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x262A54u;
    {
        const bool branch_taken_0x262a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x262A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A54u;
        // 0x262a58: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a54) {
            ctx->pc = 0x262A34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262a34;
        }
    }
    ctx->pc = 0x262A5Cu;
    // 0x262a5c: 0x8c820680  lw          $v0, 0x680($a0)
    ctx->pc = 0x262a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1664)));
label_262a60:
    // 0x262a60: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x262a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x262a64: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x262A64u;
    {
        const bool branch_taken_0x262a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262a64) {
            ctx->pc = 0x262A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262A64u;
            // 0x262a68: 0x8c820688  lw          $v0, 0x688($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262A80u;
            goto label_262a80;
        }
    }
    ctx->pc = 0x262A6Cu;
    // 0x262a6c: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x262a6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x262a70: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x262a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x262a74: 0x1062ffef  beq         $v1, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x262A74u;
    {
        const bool branch_taken_0x262a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x262A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A74u;
        // 0x262a78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a74) {
            ctx->pc = 0x262A34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262a34;
        }
    }
    ctx->pc = 0x262A7Cu;
    // 0x262a7c: 0x8c820688  lw          $v0, 0x688($a0)
    ctx->pc = 0x262a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1672)));
label_262a80:
    // 0x262a80: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x262a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x262a84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x262A84u;
    {
        const bool branch_taken_0x262a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262a84) {
            ctx->pc = 0x262A9Cu;
            goto label_262a9c;
        }
    }
    ctx->pc = 0x262A8Cu;
    // 0x262a8c: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x262a8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x262a90: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x262a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x262a94: 0x1062ffe7  beq         $v1, $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x262A94u;
    {
        const bool branch_taken_0x262a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x262A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A94u;
        // 0x262a98: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a94) {
            ctx->pc = 0x262A34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262a34;
        }
    }
    ctx->pc = 0x262A9Cu;
label_262a9c:
    // 0x262a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x262A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A9Cu;
        // 0x262aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262AA4u;
    // 0x262aa4: 0x0  nop
    ctx->pc = 0x262aa4u;
    // NOP
    ctx->pc = 0x262aa8u;
}
