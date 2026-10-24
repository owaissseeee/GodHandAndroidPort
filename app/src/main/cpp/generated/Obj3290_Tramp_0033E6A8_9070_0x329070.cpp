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

// Function: Obj3290_Tramp_0033E6A8_9070
// Address: 0x329070 - 0x329088
void Obj3290_Tramp_0033E6A8_9070_0x329070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3290_Tramp_0033E6A8_9070_0x329070");
#endif

    ctx->pc = 0x329070u;

    // 0x329070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x329074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32907c: 0x80cf9aa  j           func_33E6A8
    ctx->pc = 0x32907Cu;
    ctx->pc = 0x329080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32907Cu;
    // 0x329080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32907Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x329084u;
    // 0x329084: 0x0  nop
    ctx->pc = 0x329084u;
    // NOP
    ctx->pc = 0x329088u;
}
