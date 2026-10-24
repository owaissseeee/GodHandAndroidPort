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

// Function: Obj0000_Set_Field_11C_Triple
// Address: 0x36dda0 - 0x36ddc8
void Obj0000_Set_Field_11C_Triple_0x36dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_Field_11C_Triple_0x36dda0");
#endif

    ctx->pc = 0x36dda0u;

    // 0x36dda0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x36dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x36dda4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x36dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x36dda8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x36dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36ddac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x36ddacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x36ddb0: 0x2484011c  addiu       $a0, $a0, 0x11C
    ctx->pc = 0x36ddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 284));
    // 0x36ddb4: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x36ddb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x36ddb8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x36ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x36ddbc: 0x3e00008  jr          $ra
    ctx->pc = 0x36DDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DDBCu;
        // 0x36ddc0: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DDC4u;
    // 0x36ddc4: 0x0  nop
    ctx->pc = 0x36ddc4u;
    // NOP
    ctx->pc = 0x36ddc8u;
}
