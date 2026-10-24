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

// Function: func_0036C2A0
// Address: 0x36c2a0 - 0x36c2f0
void func_0036C2A0_0x36c2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036C2A0_0x36c2a0");
#endif

    switch (ctx->pc) {
        case 0x36c2c0u: goto label_36c2c0;
        default: break;
    }

    ctx->pc = 0x36c2a0u;

    // 0x36c2a0: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x36c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x36c2a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36c2a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c2a8: 0x24426ce8  addiu       $v0, $v0, 0x6CE8
    ctx->pc = 0x36c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27880));
    // 0x36c2ac: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x36c2acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x766D3Cu));
    // 0x36c2b0: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x36C2B0u;
    {
        const bool branch_taken_0x36c2b0 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x36C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C2B0u;
        // 0x36c2b4: 0x8c440058  lw          $a0, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c2b0) {
            ctx->pc = 0x36C2E4u;
            goto label_36c2e4;
        }
    }
    ctx->pc = 0x36C2B8u;
    // 0x36c2b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36c2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c2bc: 0x8c830188  lw          $v1, 0x188($a0)
    ctx->pc = 0x36c2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
label_36c2c0:
    // 0x36c2c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x36c2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c2c4: 0x10670008  beq         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36C2C4u;
    {
        const bool branch_taken_0x36c2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x36C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C2C4u;
        // 0x36c2c8: 0x24840440  addiu       $a0, $a0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c2c4) {
            ctx->pc = 0x36C2E8u;
            goto label_36c2e8;
        }
    }
    ctx->pc = 0x36C2CCu;
    // 0x36c2cc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36c2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36c2d0: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x36c2d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x36c2d4: 0x0  nop
    ctx->pc = 0x36c2d4u;
    // NOP
    // 0x36c2d8: 0x0  nop
    ctx->pc = 0x36c2d8u;
    // NOP
    // 0x36c2dc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x36C2DCu;
    {
        const bool branch_taken_0x36c2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c2dc) {
            ctx->pc = 0x36C2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36C2DCu;
            // 0x36c2e0: 0x8c830188  lw          $v1, 0x188($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36C2C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c2c0;
        }
    }
    ctx->pc = 0x36C2E4u;
label_36c2e4:
    // 0x36c2e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c2e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36c2e8:
    // 0x36c2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x36C2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C2F0u;
}
