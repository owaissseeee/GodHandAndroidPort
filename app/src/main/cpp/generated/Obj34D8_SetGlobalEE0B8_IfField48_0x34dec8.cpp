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

// Function: Obj34D8_SetGlobalEE0B8_IfField48
// Address: 0x34dec8 - 0x34def0
void Obj34D8_SetGlobalEE0B8_IfField48_0x34dec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj34D8_SetGlobalEE0B8_IfField48_0x34dec8");
#endif

    ctx->pc = 0x34dec8u;

    // 0x34dec8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34DEC8u;
    {
        const bool branch_taken_0x34dec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DEC8u;
        // 0x34decc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dec8) {
            ctx->pc = 0x34DEE4u;
            goto label_34dee4;
        }
    }
    ctx->pc = 0x34DED0u;
    // 0x34ded0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x34ded0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x34ded4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34DED4u;
    {
        const bool branch_taken_0x34ded4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DED4u;
        // 0x34ded8: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ded4) {
            ctx->pc = 0x34DEE4u;
            goto label_34dee4;
        }
    }
    ctx->pc = 0x34DEDCu;
    // 0x34dedc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34dedcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dee0: 0xac64e0b8  sw          $a0, -0x1F48($v1)
    ctx->pc = 0x34dee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294959288), GPR_U32(ctx, 4));
label_34dee4:
    // 0x34dee4: 0x3e00008  jr          $ra
    ctx->pc = 0x34DEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DEECu;
    // 0x34deec: 0x0  nop
    ctx->pc = 0x34deecu;
    // NOP
    ctx->pc = 0x34def0u;
}
