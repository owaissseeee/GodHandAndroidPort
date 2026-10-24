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

// Function: func_002C5028
// Address: 0x2c5028 - 0x2c5068
void func_002C5028_0x2c5028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C5028_0x2c5028");
#endif

    switch (ctx->pc) {
        case 0x2c5040u: goto label_2c5040;
        default: break;
    }

    ctx->pc = 0x2c5028u;

    // 0x2c5028: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c5028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c502c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2c502cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2c5030: 0x944426c0  lhu         $a0, 0x26C0($v0)
    ctx->pc = 0x2c5030u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x3C26C0u));
    // 0x2c5034: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2c5034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c5038: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5038u;
    {
        const bool branch_taken_0x2c5038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5038u;
        // 0x2c503c: 0x244626c0  addiu       $a2, $v0, 0x26C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 9920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5038) {
            ctx->pc = 0x2C5060u;
            goto label_2c5060;
        }
    }
    ctx->pc = 0x2C5040u;
label_2c5040:
    // 0x2c5040: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2c5040u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c5044: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5044u;
    {
        const bool branch_taken_0x2c5044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2c5044) {
            ctx->pc = 0x2C5048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5044u;
            // 0x2c5048: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5054u;
            goto label_2c5054;
        }
    }
    ctx->pc = 0x2C504Cu;
    // 0x2c504c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C504Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C504Cu;
        // 0x2c5050: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C504Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5054u;
label_2c5054:
    // 0x2c5054: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2c5054u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c5058: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C5058u;
    {
        const bool branch_taken_0x2c5058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c5058) {
            ctx->pc = 0x2C5040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5040;
        }
    }
    ctx->pc = 0x2C5060u;
label_2c5060:
    // 0x2c5060: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5060u;
        // 0x2c5064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5068u;
}
