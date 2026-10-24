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

// Function: func_0027DC50
// Address: 0x27dc50 - 0x27dcb8
void func_0027DC50_0x27dc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027DC50_0x27dc50");
#endif

    ctx->pc = 0x27dc50u;

    // 0x27dc50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27dc54: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27DC54u;
    {
        const bool branch_taken_0x27dc54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC54u;
        // 0x27dc58: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc54) {
            ctx->pc = 0x27DC8Cu;
            goto label_27dc8c;
        }
    }
    ctx->pc = 0x27DC5Cu;
    // 0x27dc5c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27DC5Cu;
    {
        const bool branch_taken_0x27dc5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC5Cu;
        // 0x27dc60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc5c) {
            ctx->pc = 0x27DC74u;
            goto label_27dc74;
        }
    }
    ctx->pc = 0x27DC64u;
    // 0x27dc64: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27DC64u;
    {
        const bool branch_taken_0x27dc64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC64u;
        // 0x27dc68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc64) {
            ctx->pc = 0x27DC94u;
            goto label_27dc94;
        }
    }
    ctx->pc = 0x27DC6Cu;
    // 0x27dc6c: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27DC6Cu;
    {
        const bool branch_taken_0x27dc6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC6Cu;
        // 0x27dc70: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc6c) {
            ctx->pc = 0x27DCA0u;
            goto label_27dca0;
        }
    }
    ctx->pc = 0x27DC74u;
label_27dc74:
    // 0x27dc74: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x27dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27dc78: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x27dc78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27dc7c: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x27dc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x27dc80: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x27dc80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27dc84: 0x3e00008  jr          $ra
    ctx->pc = 0x27DC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC84u;
        // 0x27dc88: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DC8Cu;
label_27dc8c:
    // 0x27dc8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27DC8Cu;
    {
        const bool branch_taken_0x27dc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC8Cu;
        // 0x27dc90: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc8c) {
            ctx->pc = 0x27DCA4u;
            goto label_27dca4;
        }
    }
    ctx->pc = 0x27DC94u;
label_27dc94:
    // 0x27dc94: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x27dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27dc98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27DC98u;
    {
        const bool branch_taken_0x27dc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC98u;
        // 0x27dc9c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dc98) {
            ctx->pc = 0x27DCA4u;
            goto label_27dca4;
        }
    }
    ctx->pc = 0x27DCA0u;
label_27dca0:
    // 0x27dca0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27dca4:
    // 0x27dca4: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x27dca4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x27dca8: 0xa08302f6  sb          $v1, 0x2F6($a0)
    ctx->pc = 0x27dca8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x27dcac: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x27dcacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27dcb0: 0x3e00008  jr          $ra
    ctx->pc = 0x27DCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCB0u;
        // 0x27dcb4: 0xa08002f4  sb          $zero, 0x2F4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DCB8u;
}
