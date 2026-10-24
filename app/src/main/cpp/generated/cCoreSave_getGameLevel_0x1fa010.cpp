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

// Function: cCoreSave_getGameLevel
// Address: 0x1fa010 - 0x1fa080
void cCoreSave_getGameLevel_0x1fa010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getGameLevel_0x1fa010");
#endif

    switch (ctx->pc) {
        case 0x1fa048u: goto label_1fa048;
        default: break;
    }

    ctx->pc = 0x1fa010u;

    // 0x1fa010: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1fa010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa014: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fa014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fa018: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA018u;
    {
        const bool branch_taken_0x1fa018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA018u;
        // 0x1fa01c: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa018) {
            ctx->pc = 0x1FA028u;
            goto label_1fa028;
        }
    }
    ctx->pc = 0x1FA020u;
    // 0x1fa020: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA020u;
        // 0x1fa024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA028u;
label_1fa028:
    // 0x1fa028: 0x8442001c  lh          $v0, 0x1C($v0)
    ctx->pc = 0x1fa028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1fa02c: 0x8c83f160  lw          $v1, -0xEA0($a0)
    ctx->pc = 0x1fa02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963552)));
    // 0x1fa030: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1fa030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fa034: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FA034u;
    {
        const bool branch_taken_0x1fa034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA034u;
        // 0x1fa038: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa034) {
            ctx->pc = 0x1FA06Cu;
            goto label_1fa06c;
        }
    }
    ctx->pc = 0x1FA03Cu;
    // 0x1fa03c: 0x2486f160  addiu       $a2, $a0, -0xEA0
    ctx->pc = 0x1fa03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963552));
    // 0x1fa040: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fa040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fa044: 0x0  nop
    ctx->pc = 0x1fa044u;
    // NOP
label_1fa048:
    // 0x1fa048: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x1fa048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1fa04c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA04Cu;
    {
        const bool branch_taken_0x1fa04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA04Cu;
        // 0x1fa050: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa04c) {
            ctx->pc = 0x1FA06Cu;
            goto label_1fa06c;
        }
    }
    ctx->pc = 0x1FA054u;
    // 0x1fa054: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1fa054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1fa058: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1fa058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fa05c: 0x8443001c  lh          $v1, 0x1C($v0)
    ctx->pc = 0x1fa05cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1fa060: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1fa060u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fa064: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FA064u;
    {
        const bool branch_taken_0x1fa064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa064) {
            ctx->pc = 0x1FA068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA064u;
            // 0x1fa068: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa048;
        }
    }
    ctx->pc = 0x1FA06Cu;
label_1fa06c:
    // 0x1fa06c: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x1fa06cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1fa070: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1fa070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fa074: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1fa074u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1fa078: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA078u;
        // 0x1fa07c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA080u;
}
