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

// Function: func_003089F0
// Address: 0x3089f0 - 0x308a38
void func_003089F0_0x3089f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003089F0_0x3089f0");
#endif

    switch (ctx->pc) {
        case 0x3089f8u: goto label_3089f8;
        default: break;
    }

    ctx->pc = 0x3089f0u;

    // 0x3089f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3089f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3089f4: 0x0  nop
    ctx->pc = 0x3089f4u;
    // NOP
label_3089f8:
    // 0x3089f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3089f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3089fc: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3089FCu;
    {
        const bool branch_taken_0x3089fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x3089fc) {
            ctx->pc = 0x308A0Cu;
            goto label_308a0c;
        }
    }
    ctx->pc = 0x308A04u;
    // 0x308a04: 0x3e00008  jr          $ra
    ctx->pc = 0x308A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A04u;
        // 0x308a08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308A0Cu;
label_308a0c:
    // 0x308a0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x308A0Cu;
    {
        const bool branch_taken_0x308a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A0Cu;
        // 0x308a10: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308a0c) {
            ctx->pc = 0x308A20u;
            goto label_308a20;
        }
    }
    ctx->pc = 0x308A14u;
    // 0x308a14: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x308a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x308a18: 0x3e00008  jr          $ra
    ctx->pc = 0x308A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A18u;
        // 0x308a1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308A20u;
label_308a20:
    // 0x308a20: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x308a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x308a24: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x308A24u;
    {
        const bool branch_taken_0x308a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A24u;
        // 0x308a28: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308a24) {
            ctx->pc = 0x3089F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3089f8;
        }
    }
    ctx->pc = 0x308A2Cu;
    // 0x308a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x308A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A2Cu;
        // 0x308a30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308A34u;
    // 0x308a34: 0x0  nop
    ctx->pc = 0x308a34u;
    // NOP
    ctx->pc = 0x308a38u;
}
