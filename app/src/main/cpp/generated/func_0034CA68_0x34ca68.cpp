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

// Function: func_0034CA68
// Address: 0x34ca68 - 0x34ca98
void func_0034CA68_0x34ca68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034CA68_0x34ca68");
#endif

    ctx->pc = 0x34ca68u;

    // 0x34ca68: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x34ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x34ca6c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x34ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34ca70: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x34ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34ca74: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34CA74u;
    {
        const bool branch_taken_0x34ca74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x34CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CA74u;
        // 0x34ca78: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ca74) {
            ctx->pc = 0x34CA8Cu;
            goto label_34ca8c;
        }
    }
    ctx->pc = 0x34CA7Cu;
    // 0x34ca7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34ca80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34ca84: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x34ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34ca88: 0xac46131c  sw          $a2, 0x131C($v0)
    ctx->pc = 0x34ca88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4892), GPR_U32(ctx, 6));
label_34ca8c:
    // 0x34ca8c: 0x3e00008  jr          $ra
    ctx->pc = 0x34CA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CA94u;
    // 0x34ca94: 0x0  nop
    ctx->pc = 0x34ca94u;
    // NOP
    ctx->pc = 0x34ca98u;
}
