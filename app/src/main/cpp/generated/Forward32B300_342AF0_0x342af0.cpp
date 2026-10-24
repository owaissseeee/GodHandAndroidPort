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

// Function: Forward32B300_342AF0
// Address: 0x342af0 - 0x342b08
void Forward32B300_342AF0_0x342af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward32B300_342AF0_0x342af0");
#endif

    ctx->pc = 0x342af0u;

    // 0x342af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x342af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342afc: 0x80cacc0  j           func_32B300
    ctx->pc = 0x342AFCu;
    ctx->pc = 0x342B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342AFCu;
    // 0x342b00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B300u, 0x342AFCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x342B04u;
    // 0x342b04: 0x0  nop
    ctx->pc = 0x342b04u;
    // NOP
    ctx->pc = 0x342b08u;
}
