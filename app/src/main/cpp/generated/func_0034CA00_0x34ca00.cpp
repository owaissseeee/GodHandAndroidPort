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

// Function: func_0034CA00
// Address: 0x34ca00 - 0x34ca30
void func_0034CA00_0x34ca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034CA00_0x34ca00");
#endif

    ctx->pc = 0x34ca00u;

    // 0x34ca00: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x34ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x34ca04: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x34ca04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34ca08: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x34ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34ca0c: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34CA0Cu;
    {
        const bool branch_taken_0x34ca0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x34CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CA0Cu;
        // 0x34ca10: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ca0c) {
            ctx->pc = 0x34CA24u;
            goto label_34ca24;
        }
    }
    ctx->pc = 0x34CA14u;
    // 0x34ca14: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34ca18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34ca1c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x34ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34ca20: 0xac461318  sw          $a2, 0x1318($v0)
    ctx->pc = 0x34ca20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4888), GPR_U32(ctx, 6));
label_34ca24:
    // 0x34ca24: 0x3e00008  jr          $ra
    ctx->pc = 0x34CA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CA2Cu;
    // 0x34ca2c: 0x0  nop
    ctx->pc = 0x34ca2cu;
    // NOP
    ctx->pc = 0x34ca30u;
}
