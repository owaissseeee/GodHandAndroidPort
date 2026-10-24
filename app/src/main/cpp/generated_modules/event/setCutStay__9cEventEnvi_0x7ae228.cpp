#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: setCutStay__9cEventEnvi
// Address: 0x7ae228 - 0x7ae248
void setCutStay__9cEventEnvi_0x7ae228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setCutStay__9cEventEnvi_0x7ae228");
#endif

    ctx->pc = 0x7ae228u;

    // 0x7ae228: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x7ae228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7ae22c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x7ae22cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x7ae230: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x7ae230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x7ae234: 0x90a20005  lbu         $v0, 0x5($a1)
    ctx->pc = 0x7ae234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x7ae238: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x7ae238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x7ae23c: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE23Cu;
        // 0x7ae240: 0xa0a20005  sb          $v0, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE244u;
    // 0x7ae244: 0x0  nop
    ctx->pc = 0x7ae244u;
    // NOP
    ctx->pc = 0x7ae248u;
}
} // namespace gh_event
