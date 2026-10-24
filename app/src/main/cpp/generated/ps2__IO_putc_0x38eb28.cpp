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

// Function: _IO_putc
// Address: 0x38eb28 - 0x38eb78
void ps2__IO_putc_0x38eb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_putc_0x38eb28");
#endif

    switch (ctx->pc) {
        case 0x38eb50u: goto label_38eb50;
        default: break;
    }

    ctx->pc = 0x38eb28u;

    // 0x38eb28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38eb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38eb2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38eb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38eb30: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x38eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x38eb34: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x38eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x38eb38: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x38eb38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x38eb3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38EB3Cu;
    {
        const bool branch_taken_0x38eb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EB3Cu;
        // 0x38eb40: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eb3c) {
            ctx->pc = 0x38EB58u;
            goto label_38eb58;
        }
    }
    ctx->pc = 0x38EB44u;
    // 0x38eb44: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x38eb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38eb48: 0xc0e30fc  jal         func_38C3F0
    ctx->pc = 0x38EB48u;
    SET_GPR_U32(ctx, 31, 0x38EB50u);
    ctx->pc = 0x38EB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EB48u;
    // 0x38eb4c: 0x30c500ff  andi        $a1, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C3F0u, 0x38EB48u, 0x38EB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EB50u;
label_38eb50:
    // 0x38eb50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38EB50u;
    {
        const bool branch_taken_0x38eb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EB50u;
        // 0x38eb54: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38eb50) {
            ctx->pc = 0x38EB6Cu;
            goto label_38eb6c;
        }
    }
    ctx->pc = 0x38EB58u;
label_38eb58:
    // 0x38eb58: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x38eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38eb5c: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x38eb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x38eb60: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x38eb60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x38eb64: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x38eb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x38eb68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38eb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38eb6c:
    // 0x38eb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x38EB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EB6Cu;
        // 0x38eb70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EB74u;
    // 0x38eb74: 0x0  nop
    ctx->pc = 0x38eb74u;
    // NOP
    ctx->pc = 0x38eb78u;
}
