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

// Function: Forward3A52F0_3406B0
// Address: 0x3406b0 - 0x3406d0
void Forward3A52F0_3406B0_0x3406b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward3A52F0_3406B0_0x3406b0");
#endif

    ctx->pc = 0x3406b0u;

    // 0x3406b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3406b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3406b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3406b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3406b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3406b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3406bc: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x3406bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x3406c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3406c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3406c4: 0x80e94bc  j           func_3A52F0
    ctx->pc = 0x3406C4u;
    ctx->pc = 0x3406C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3406C4u;
    // 0x3406c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3406C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3406CCu;
    // 0x3406cc: 0x0  nop
    ctx->pc = 0x3406ccu;
    // NOP
    ctx->pc = 0x3406d0u;
}
