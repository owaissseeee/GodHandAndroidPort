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

// Function: Forward35D538_34D048
// Address: 0x34d048 - 0x34d068
void Forward35D538_34D048_0x34d048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward35D538_34D048_0x34d048");
#endif

    ctx->pc = 0x34d048u;

    // 0x34d048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34d048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34d04c: 0x3c050076  lui         $a1, 0x76
    ctx->pc = 0x34d04cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)118 << 16));
    // 0x34d050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34d050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34d054: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x34d054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34d058: 0x24a51e50  addiu       $a1, $a1, 0x1E50
    ctx->pc = 0x34d058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7760));
    // 0x34d05c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34d05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d060: 0x80d754e  j           func_35D538
    ctx->pc = 0x34D060u;
    ctx->pc = 0x34D064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D060u;
    // 0x34d064: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D538u, 0x34D060u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34D068u;
}
