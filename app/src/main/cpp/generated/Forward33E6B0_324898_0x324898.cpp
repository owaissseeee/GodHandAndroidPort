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

// Function: Forward33E6B0_324898
// Address: 0x324898 - 0x3248c0
void Forward33E6B0_324898_0x324898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward33E6B0_324898_0x324898");
#endif

    ctx->pc = 0x324898u;

    // 0x324898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32489c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32489cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3248a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3248a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3248a4: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x3248A4u;
    ctx->pc = 0x3248A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3248A4u;
    // 0x3248a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x3248A4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3248ACu;
    // 0x3248ac: 0x0  nop
    ctx->pc = 0x3248acu;
    // NOP
    // 0x3248b0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x3248b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x3248b4: 0x0  nop
    ctx->pc = 0x3248b4u;
    // NOP
    // 0x3248b8: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x3248b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x3248bc: 0x0  nop
    ctx->pc = 0x3248bcu;
    // NOP
    ctx->pc = 0x3248c0u;
}
