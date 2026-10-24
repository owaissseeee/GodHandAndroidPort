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

// Function: Obj3260_Tramp_00336E88_D148
// Address: 0x326148 - 0x326160
void Obj3260_Tramp_00336E88_D148_0x326148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3260_Tramp_00336E88_D148_0x326148");
#endif

    ctx->pc = 0x326148u;

    // 0x326148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32614c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32614cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326154: 0x80cdba2  j           func_336E88
    ctx->pc = 0x326154u;
    ctx->pc = 0x326158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326154u;
    // 0x326158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336E88u, 0x326154u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32615Cu;
    // 0x32615c: 0x0  nop
    ctx->pc = 0x32615cu;
    // NOP
    ctx->pc = 0x326160u;
}
