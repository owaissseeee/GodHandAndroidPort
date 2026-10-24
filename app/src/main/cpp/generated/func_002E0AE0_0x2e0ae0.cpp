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

// Function: func_002E0AE0
// Address: 0x2e0ae0 - 0x2e0b18
void func_002E0AE0_0x2e0ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E0AE0_0x2e0ae0");
#endif

    ctx->pc = 0x2e0ae0u;

    // 0x2e0ae0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2e0ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2e0ae4: 0x9065b289  lbu         $a1, -0x4D77($v1)
    ctx->pc = 0x2e0ae4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x61B289u));
    // 0x2e0ae8: 0x51023  negu        $v0, $a1
    ctx->pc = 0x2e0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x2e0aec: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2e0aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e0af0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0AF0u;
    {
        const bool branch_taken_0x2e0af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0AF0u;
        // 0x2e0af4: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0af0) {
            ctx->pc = 0x2E0B0Cu;
            goto label_2e0b0c;
        }
    }
    ctx->pc = 0x2E0AF8u;
    // 0x2e0af8: 0x8c62118c  lw          $v0, 0x118C($v1)
    ctx->pc = 0x2e0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4492)));
    // 0x2e0afc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2e0afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e0b00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2e0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e0b04: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B04u;
        // 0x2e0b08: 0x44102a  slt         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0B0Cu;
label_2e0b0c:
    // 0x2e0b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B0Cu;
        // 0x2e0b10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0B14u;
    // 0x2e0b14: 0x0  nop
    ctx->pc = 0x2e0b14u;
    // NOP
    ctx->pc = 0x2e0b18u;
}
