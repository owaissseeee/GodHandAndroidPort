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

// Function: func_0037D060
// Address: 0x37d060 - 0x37d0a8
void func_0037D060_0x37d060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037D060_0x37d060");
#endif

    switch (ctx->pc) {
        case 0x37d070u: goto label_37d070;
        default: break;
    }

    ctx->pc = 0x37d060u;

    // 0x37d060: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37d060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37d064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37d064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d068: 0x2443c8c0  addiu       $v1, $v0, -0x3740
    ctx->pc = 0x37d068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953152));
    // 0x37d06c: 0x0  nop
    ctx->pc = 0x37d06cu;
    // NOP
label_37d070:
    // 0x37d070: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x37d070u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37d074: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37D074u;
    {
        const bool branch_taken_0x37d074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D074u;
        // 0x37d078: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d074) {
            ctx->pc = 0x37D090u;
            goto label_37d090;
        }
    }
    ctx->pc = 0x37D07Cu;
    // 0x37d07c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x37d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x37d080: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37D080u;
    {
        const bool branch_taken_0x37d080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x37D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D080u;
        // 0x37d084: 0x28a20033  slti        $v0, $a1, 0x33 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)51) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d080) {
            ctx->pc = 0x37D094u;
            goto label_37d094;
        }
    }
    ctx->pc = 0x37D088u;
    // 0x37d088: 0x3e00008  jr          $ra
    ctx->pc = 0x37D088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D088u;
        // 0x37d08c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D090u;
label_37d090:
    // 0x37d090: 0x28a20033  slti        $v0, $a1, 0x33
    ctx->pc = 0x37d090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)51) ? 1 : 0);
label_37d094:
    // 0x37d094: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x37D094u;
    {
        const bool branch_taken_0x37d094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D094u;
        // 0x37d098: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d094) {
            ctx->pc = 0x37D070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d070;
        }
    }
    ctx->pc = 0x37D09Cu;
    // 0x37d09c: 0x3e00008  jr          $ra
    ctx->pc = 0x37D09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D09Cu;
        // 0x37d0a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D0A4u;
    // 0x37d0a4: 0x0  nop
    ctx->pc = 0x37d0a4u;
    // NOP
    ctx->pc = 0x37d0a8u;
}
