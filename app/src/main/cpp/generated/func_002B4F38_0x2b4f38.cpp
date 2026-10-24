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

// Function: func_002B4F38
// Address: 0x2b4f38 - 0x2b4f78
void func_002B4F38_0x2b4f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B4F38_0x2b4f38");
#endif

    switch (ctx->pc) {
        case 0x2b4f40u: goto label_2b4f40;
        default: break;
    }

    ctx->pc = 0x2b4f38u;

    // 0x2b4f38: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2b4f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b4f3c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b4f3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4f40:
    // 0x2b4f40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b4f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b4f44: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B4F44u;
    {
        const bool branch_taken_0x2b4f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F44u;
        // 0x2b4f48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f44) {
            ctx->pc = 0x2B4F50u;
            goto label_2b4f50;
        }
    }
    ctx->pc = 0x2B4F4Cu;
    // 0x2b4f4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b4f4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4f50:
    // 0x2b4f50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b4f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b4f54: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4F54u;
    {
        const bool branch_taken_0x2b4f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4f54) {
            ctx->pc = 0x2B4F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4F54u;
            // 0x2b4f58: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4F64u;
            goto label_2b4f64;
        }
    }
    ctx->pc = 0x2B4F5Cu;
    // 0x2b4f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F5Cu;
        // 0x2b4f60: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4F64u;
label_2b4f64:
    // 0x2b4f64: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2b4f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b4f68: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2B4F68u;
    {
        const bool branch_taken_0x2b4f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F68u;
        // 0x2b4f6c: 0x248400ac  addiu       $a0, $a0, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f68) {
            ctx->pc = 0x2B4F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4f40;
        }
    }
    ctx->pc = 0x2B4F70u;
    // 0x2b4f70: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F70u;
        // 0x2b4f74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4F78u;
}
