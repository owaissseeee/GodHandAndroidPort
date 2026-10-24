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

// Function: func_00366960
// Address: 0x366960 - 0x3669b0
void func_00366960_0x366960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00366960_0x366960");
#endif

    ctx->pc = 0x366960u;

    // 0x366960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x366960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x366964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x366964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x366968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x366968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36696c: 0x80e9452  j           func_3A5148
    ctx->pc = 0x36696Cu;
    ctx->pc = 0x366970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36696Cu;
    // 0x366970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x36696Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x366974u;
    // 0x366974: 0x0  nop
    ctx->pc = 0x366974u;
    // NOP
    // 0x366978: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36697c: 0x0  nop
    ctx->pc = 0x36697cu;
    // NOP
    // 0x366980: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366984: 0x0  nop
    ctx->pc = 0x366984u;
    // NOP
    // 0x366988: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36698c: 0x0  nop
    ctx->pc = 0x36698cu;
    // NOP
    // 0x366990: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366994: 0x0  nop
    ctx->pc = 0x366994u;
    // NOP
    // 0x366998: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36699c: 0x0  nop
    ctx->pc = 0x36699cu;
    // NOP
    // 0x3669a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3669a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3669a4: 0x0  nop
    ctx->pc = 0x3669a4u;
    // NOP
    // 0x3669a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3669a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3669ac: 0x0  nop
    ctx->pc = 0x3669acu;
    // NOP
    ctx->pc = 0x3669b0u;
}
