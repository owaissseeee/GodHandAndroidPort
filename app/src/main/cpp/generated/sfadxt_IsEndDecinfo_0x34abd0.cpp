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

// Function: sfadxt_IsEndDecinfo
// Address: 0x34abd0 - 0x34abf8
void sfadxt_IsEndDecinfo_0x34abd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfadxt_IsEndDecinfo_0x34abd0");
#endif

    switch (ctx->pc) {
        case 0x34abe0u: goto label_34abe0;
        default: break;
    }

    ctx->pc = 0x34abd0u;

    // 0x34abd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34abd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34abd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34abd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34abd8: 0xc0ca7e6  jal         func_329F98
    ctx->pc = 0x34ABD8u;
    SET_GPR_U32(ctx, 31, 0x34ABE0u);
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x34ABD8u, 0x34ABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ABE0u;
label_34abe0:
    // 0x34abe0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x34abe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x34abe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34abe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34abe8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x34abe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x34abec: 0x3e00008  jr          $ra
    ctx->pc = 0x34ABECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ABECu;
        // 0x34abf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34ABECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34ABF4u;
    // 0x34abf4: 0x0  nop
    ctx->pc = 0x34abf4u;
    // NOP
    ctx->pc = 0x34abf8u;
}
