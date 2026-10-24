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

// Function: Obj33F8_Thunk_0033E6B8_F988
// Address: 0x33f988 - 0x33f9b0
void Obj33F8_Thunk_0033E6B8_F988_0x33f988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj33F8_Thunk_0033E6B8_F988_0x33f988");
#endif

    ctx->pc = 0x33f988u;

    // 0x33f988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33f988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33f98c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x33f98cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33f990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33f994: 0x24470032  addiu       $a3, $v0, 0x32
    ctx->pc = 0x33f994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x33f998: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x33f998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f99c: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x33f99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x33f9a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33f9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f9a4: 0x80cf9ae  j           func_33E6B8
    ctx->pc = 0x33F9A4u;
    ctx->pc = 0x33F9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F9A4u;
    // 0x33f9a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B8u, 0x33F9A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33F9ACu;
    // 0x33f9ac: 0x0  nop
    ctx->pc = 0x33f9acu;
    // NOP
    ctx->pc = 0x33f9b0u;
}
