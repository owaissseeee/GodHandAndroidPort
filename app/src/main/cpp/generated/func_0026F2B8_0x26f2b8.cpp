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

// Function: func_0026F2B8
// Address: 0x26f2b8 - 0x26f2f0
void func_0026F2B8_0x26f2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026F2B8_0x26f2b8");
#endif

    ctx->pc = 0x26f2b8u;

    // 0x26f2b8: 0x908502f4  lbu         $a1, 0x2F4($a0)
    ctx->pc = 0x26f2b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
    // 0x26f2bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f2c0: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26F2C0u;
    {
        const bool branch_taken_0x26f2c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f2c0) {
            ctx->pc = 0x26F2E4u;
            goto label_26f2e4;
        }
    }
    ctx->pc = 0x26F2C8u;
    // 0x26f2c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26f2cc: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26F2CCu;
    {
        const bool branch_taken_0x26f2cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x26F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F2CCu;
        // 0x26f2d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f2cc) {
            ctx->pc = 0x26F2E4u;
            goto label_26f2e4;
        }
    }
    ctx->pc = 0x26F2D4u;
    // 0x26f2d4: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x26f2d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x26f2d8: 0x14650002  bne         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x26F2D8u;
    {
        const bool branch_taken_0x26f2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x26F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F2D8u;
        // 0x26f2dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f2d8) {
            ctx->pc = 0x26F2E4u;
            goto label_26f2e4;
        }
    }
    ctx->pc = 0x26F2E0u;
    // 0x26f2e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26f2e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f2e4:
    // 0x26f2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x26F2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F2ECu;
    // 0x26f2ec: 0x0  nop
    ctx->pc = 0x26f2ecu;
    // NOP
    ctx->pc = 0x26f2f0u;
}
