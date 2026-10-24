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
// Function: isStayCut__9cEventEnvi
// Address: 0x7ae248 - 0x7ae268
void isStayCut__9cEventEnvi_0x7ae248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isStayCut__9cEventEnvi_0x7ae248");
#endif

    ctx->pc = 0x7ae248u;

    // 0x7ae248: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7ae248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7ae24c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x7ae24cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x7ae250: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x7ae250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x7ae254: 0x90a20005  lbu         $v0, 0x5($a1)
    ctx->pc = 0x7ae254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x7ae258: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x7ae258u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x7ae25c: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE25Cu;
        // 0x7ae260: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE264u;
    // 0x7ae264: 0x0  nop
    ctx->pc = 0x7ae264u;
    // NOP
    ctx->pc = 0x7ae268u;
}
} // namespace gh_event
