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

// Function: cScenario_isCamEnd
// Address: 0x2c4040 - 0x2c4078
void cScenario_isCamEnd_0x2c4040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_isCamEnd_0x2c4040");
#endif

    ctx->pc = 0x2c4040u;

    // 0x2c4040: 0x90820111  lbu         $v0, 0x111($a0)
    ctx->pc = 0x2c4040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 273)));
    // 0x2c4044: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4044u;
    {
        const bool branch_taken_0x2c4044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4044u;
        // 0x2c4048: 0x3c030046  lui         $v1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4044) {
            ctx->pc = 0x2C4054u;
            goto label_2c4054;
        }
    }
    ctx->pc = 0x2C404Cu;
    // 0x2c404c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C404Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C404Cu;
        // 0x2c4050: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C404Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4054u;
label_2c4054:
    // 0x2c4054: 0x8c623964  lw          $v0, 0x3964($v1)
    ctx->pc = 0x2c4054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14692)));
    // 0x2c4058: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c4058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c405c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C405Cu;
    {
        const bool branch_taken_0x2c405c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c405c) {
            ctx->pc = 0x2C4060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C405Cu;
            // 0x2c4060: 0xa0800111  sb          $zero, 0x111($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 273), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C406Cu;
            goto label_2c406c;
        }
    }
    ctx->pc = 0x2C4064u;
    // 0x2c4064: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4064u;
        // 0x2c4068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C406Cu;
label_2c406c:
    // 0x2c406c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C406Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C406Cu;
        // 0x2c4070: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C406Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4074u;
    // 0x2c4074: 0x0  nop
    ctx->pc = 0x2c4074u;
    // NOP
    ctx->pc = 0x2c4078u;
}
