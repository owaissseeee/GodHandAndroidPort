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

// Function: Obj3290_Tramp_0033BF18_9058
// Address: 0x329058 - 0x329070
void Obj3290_Tramp_0033BF18_9058_0x329058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3290_Tramp_0033BF18_9058_0x329058");
#endif

    ctx->pc = 0x329058u;

    // 0x329058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32905c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32905cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329064: 0x80cefc6  j           func_33BF18
    ctx->pc = 0x329064u;
    ctx->pc = 0x329068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329064u;
    // 0x329068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BF18u, 0x329064u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32906Cu;
    // 0x32906c: 0x0  nop
    ctx->pc = 0x32906cu;
    // NOP
    ctx->pc = 0x329070u;
}
