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

// Function: func_0034C378
// Address: 0x34c378 - 0x34c390
void func_0034C378_0x34c378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034C378_0x34c378");
#endif

    ctx->pc = 0x34c378u;

    // 0x34c378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34c378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34c37c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34c37cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c380: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34c380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34c384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34c384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c388: 0x80d30ea  j           func_34C3A8
    ctx->pc = 0x34C388u;
    ctx->pc = 0x34C38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C388u;
    // 0x34c38c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C3A8u, 0x34C388u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34C390u;
}
