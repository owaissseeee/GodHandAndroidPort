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

// Function: sftrn_ConnTrnBufU
// Address: 0x35c1a0 - 0x35c1c0
void sftrn_ConnTrnBufU_0x35c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sftrn_ConnTrnBufU_0x35c1a0");
#endif

    ctx->pc = 0x35c1a0u;

    // 0x35c1a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c1a4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x35c1a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c1a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c1ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x35c1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35c1b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c1b4: 0x80d7070  j           func_35C1C0
    ctx->pc = 0x35C1B4u;
    ctx->pc = 0x35C1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C1B4u;
    // 0x35c1b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C1C0u, 0x35C1B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35C1BCu;
    // 0x35c1bc: 0x0  nop
    ctx->pc = 0x35c1bcu;
    // NOP
    ctx->pc = 0x35c1c0u;
}
