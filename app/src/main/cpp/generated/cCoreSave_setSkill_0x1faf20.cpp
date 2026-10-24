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

// Function: cCoreSave_setSkill
// Address: 0x1faf20 - 0x1faf58
void cCoreSave_setSkill_0x1faf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setSkill_0x1faf20");
#endif

    ctx->pc = 0x1faf20u;

    // 0x1faf20: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1faf20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1faf24: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1faf24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1faf28: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FAF28u;
    {
        const bool branch_taken_0x1faf28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF28u;
        // 0x1faf2c: 0x63603  sra         $a2, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf28) {
            ctx->pc = 0x1FAF48u;
            goto label_1faf48;
        }
    }
    ctx->pc = 0x1FAF30u;
    // 0x1faf30: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x1faf30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1faf34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAF34u;
    {
        const bool branch_taken_0x1faf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF34u;
        // 0x1faf38: 0x28a20072  slti        $v0, $a1, 0x72 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)114) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf34) {
            ctx->pc = 0x1FAF48u;
            goto label_1faf48;
        }
    }
    ctx->pc = 0x1FAF3Cu;
    // 0x1faf3c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FAF3Cu;
    {
        const bool branch_taken_0x1faf3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF3Cu;
        // 0x1faf40: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf3c) {
            ctx->pc = 0x1FAF48u;
            goto label_1faf48;
        }
    }
    ctx->pc = 0x1FAF44u;
    // 0x1faf44: 0xa04600b0  sb          $a2, 0xB0($v0)
    ctx->pc = 0x1faf44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 176), (uint8_t)GPR_U32(ctx, 6));
label_1faf48:
    // 0x1faf48: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAF50u;
    // 0x1faf50: 0x0  nop
    ctx->pc = 0x1faf50u;
    // NOP
    // 0x1faf54: 0x0  nop
    ctx->pc = 0x1faf54u;
    // NOP
    ctx->pc = 0x1faf58u;
}
