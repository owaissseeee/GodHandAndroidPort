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

// Function: cDataHolder_systemInit
// Address: 0x1ff028 - 0x1ff090
void cDataHolder_systemInit_0x1ff028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDataHolder_systemInit_0x1ff028");
#endif

    switch (ctx->pc) {
        case 0x1ff070u: goto label_1ff070;
        default: break;
    }

    ctx->pc = 0x1ff028u;

    // 0x1ff028: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1ff028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ff02c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ff02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff030: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1ff030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1ff034: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ff034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff038: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x1ff038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
    // 0x1ff03c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ff03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ff040: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1ff040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1ff044: 0x24820048  addiu       $v0, $a0, 0x48
    ctx->pc = 0x1ff044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x1ff048: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1ff048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1ff04c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1ff04cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1ff050: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1ff050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1ff054: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1ff054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1ff058: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x1ff058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x1ff05c: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x1ff05cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
    // 0x1ff060: 0xac830050  sw          $v1, 0x50($a0)
    ctx->pc = 0x1ff060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
    // 0x1ff064: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x1ff064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
    // 0x1ff068: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1ff068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1ff06c: 0x0  nop
    ctx->pc = 0x1ff06cu;
    // NOP
label_1ff070:
    // 0x1ff070: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1ff070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1ff074: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1ff074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1ff078: 0x0  nop
    ctx->pc = 0x1ff078u;
    // NOP
    // 0x1ff07c: 0x0  nop
    ctx->pc = 0x1ff07cu;
    // NOP
    // 0x1ff080: 0x4a1fffb  bgez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FF080u;
    {
        const bool branch_taken_0x1ff080 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1FF084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF080u;
        // 0x1ff084: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff080) {
            ctx->pc = 0x1FF070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff070;
        }
    }
    ctx->pc = 0x1FF088u;
    // 0x1ff088: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF088u;
        // 0x1ff08c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF090u;
}
