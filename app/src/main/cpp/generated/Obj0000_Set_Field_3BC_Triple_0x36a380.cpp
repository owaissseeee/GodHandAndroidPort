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

// Function: Obj0000_Set_Field_3BC_Triple
// Address: 0x36a380 - 0x36a3a8
void Obj0000_Set_Field_3BC_Triple_0x36a380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_Field_3BC_Triple_0x36a380");
#endif

    ctx->pc = 0x36a380u;

    // 0x36a380: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x36a380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x36a384: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x36a384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x36a388: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x36a388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36a38c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x36a38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x36a390: 0x248403bc  addiu       $a0, $a0, 0x3BC
    ctx->pc = 0x36a390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 956));
    // 0x36a394: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x36a394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x36a398: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x36a398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x36a39c: 0x3e00008  jr          $ra
    ctx->pc = 0x36A39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A39Cu;
        // 0x36a3a0: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A3A4u;
    // 0x36a3a4: 0x0  nop
    ctx->pc = 0x36a3a4u;
    // NOP
    ctx->pc = 0x36a3a8u;
}
