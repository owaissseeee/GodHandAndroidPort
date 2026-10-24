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

// Function: func_0034CA30
// Address: 0x34ca30 - 0x34ca68
void func_0034CA30_0x34ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034CA30_0x34ca30");
#endif

    ctx->pc = 0x34ca30u;

    // 0x34ca30: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x34ca30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ca34: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x34ca34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34ca38: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x34ca38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x34ca3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34ca3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ca40: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x34ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x34ca44: 0x10c50005  beq         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34CA44u;
    {
        const bool branch_taken_0x34ca44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x34CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CA44u;
        // 0x34ca48: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ca44) {
            ctx->pc = 0x34CA5Cu;
            goto label_34ca5c;
        }
    }
    ctx->pc = 0x34CA4Cu;
    // 0x34ca4c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x34ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x34ca50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34ca50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34ca54: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34ca58: 0x8c621318  lw          $v0, 0x1318($v1)
    ctx->pc = 0x34ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4888)));
label_34ca5c:
    // 0x34ca5c: 0x3e00008  jr          $ra
    ctx->pc = 0x34CA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CA64u;
    // 0x34ca64: 0x0  nop
    ctx->pc = 0x34ca64u;
    // NOP
    ctx->pc = 0x34ca68u;
}
