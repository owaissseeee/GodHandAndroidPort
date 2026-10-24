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

// Function: sftrn_CallTrEntry1_35BC38
// Address: 0x35bc38 - 0x35bc50
void sftrn_CallTrEntry1_35BC38_0x35bc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sftrn_CallTrEntry1_35BC38_0x35bc38");
#endif

    ctx->pc = 0x35bc38u;

    // 0x35bc38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35bc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35bc3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35bc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bc40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35bc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35bc44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35bc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bc48: 0x80d6f14  j           func_35BC50
    ctx->pc = 0x35BC48u;
    ctx->pc = 0x35BC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BC48u;
    // 0x35bc4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BC50u, 0x35BC48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35BC50u;
}
