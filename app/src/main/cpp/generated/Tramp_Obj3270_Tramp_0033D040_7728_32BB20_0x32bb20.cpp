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

// Function: Tramp_Obj3270_Tramp_0033D040_7728_32BB20
// Address: 0x32bb20 - 0x32bb48
void Tramp_Obj3270_Tramp_0033D040_7728_32BB20_0x32bb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_Obj3270_Tramp_0033D040_7728_32BB20_0x32bb20");
#endif

    ctx->pc = 0x32bb20u;

    // 0x32bb20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32bb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32bb24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32bb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32bb28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32bb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bb2c: 0x80c9dca  j           func_327728
    ctx->pc = 0x32BB2Cu;
    ctx->pc = 0x32BB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB2Cu;
    // 0x32bb30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327728u, 0x32BB2Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32BB34u;
    // 0x32bb34: 0x0  nop
    ctx->pc = 0x32bb34u;
    // NOP
    // 0x32bb38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32bb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32bb3c: 0x0  nop
    ctx->pc = 0x32bb3cu;
    // NOP
    // 0x32bb40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32bb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32bb44: 0x0  nop
    ctx->pc = 0x32bb44u;
    // NOP
    ctx->pc = 0x32bb48u;
}
