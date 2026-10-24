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

// Function: func_00369020
// Address: 0x369020 - 0x369078
void func_00369020_0x369020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00369020_0x369020");
#endif

    switch (ctx->pc) {
        case 0x369048u: goto label_369048;
        default: break;
    }

    ctx->pc = 0x369020u;

    // 0x369020: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x369020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x369024: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x369024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369028: 0x8c621a98  lw          $v0, 0x1A98($v1)
    ctx->pc = 0x369028u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F1A98u));
    // 0x36902c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x36902cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x369030: 0x18a0000e  blez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x369030u;
    {
        const bool branch_taken_0x369030 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x369034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369030u;
        // 0x369034: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369030) {
            ctx->pc = 0x36906Cu;
            goto label_36906c;
        }
    }
    ctx->pc = 0x369038u;
    // 0x369038: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x369038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36903c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36903cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369040: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x369040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x369044: 0x0  nop
    ctx->pc = 0x369044u;
    // NOP
label_369048:
    // 0x369048: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x369048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36904c: 0x10670008  beq         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36904Cu;
    {
        const bool branch_taken_0x36904c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x369050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36904Cu;
        // 0x369050: 0x24840100  addiu       $a0, $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36904c) {
            ctx->pc = 0x369070u;
            goto label_369070;
        }
    }
    ctx->pc = 0x369054u;
    // 0x369054: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x369054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x369058: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x369058u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x36905c: 0x0  nop
    ctx->pc = 0x36905cu;
    // NOP
    // 0x369060: 0x0  nop
    ctx->pc = 0x369060u;
    // NOP
    // 0x369064: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x369064u;
    {
        const bool branch_taken_0x369064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x369064) {
            ctx->pc = 0x369068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369064u;
            // 0x369068: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_369048;
        }
    }
    ctx->pc = 0x36906Cu;
label_36906c:
    // 0x36906c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36906cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_369070:
    // 0x369070: 0x3e00008  jr          $ra
    ctx->pc = 0x369070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369078u;
}
