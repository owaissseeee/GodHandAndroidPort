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

// Function: snprintf_char
// Address: 0x3b1de8 - 0x3b1e40
void snprintf_char_0x3b1de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("snprintf_char_0x3b1de8");
#endif

    ctx->pc = 0x3b1de8u;

    // 0x3b1de8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3b1de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b1dec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B1DECu;
    {
        const bool branch_taken_0x3b1dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1DECu;
        // 0x3b1df0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1dec) {
            ctx->pc = 0x3B1DFCu;
            goto label_3b1dfc;
        }
    }
    ctx->pc = 0x3B1DF4u;
    // 0x3b1df4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1DF4u;
        // 0x3b1df8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1DFCu;
label_3b1dfc:
    // 0x3b1dfc: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x3b1dfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3b1e00: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3B1E00u;
    {
        const bool branch_taken_0x3b1e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1e00) {
            ctx->pc = 0x3B1E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1E00u;
            // 0x3b1e04: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1E34u;
            goto label_3b1e34;
        }
    }
    ctx->pc = 0x3B1E08u;
    // 0x3b1e08: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x3b1e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3b1e0c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x3b1e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3b1e10: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x3b1e10u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x3b1e14: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x3b1e14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3b1e18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b1e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b1e1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b1e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b1e20: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3b1e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b1e24: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x3b1e24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x3b1e28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3b1e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3b1e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E2Cu;
        // 0x3b1e30: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1E34u;
label_3b1e34:
    // 0x3b1e34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b1e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1e38: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E38u;
        // 0x3b1e3c: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1E40u;
}
