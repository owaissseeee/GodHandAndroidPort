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

// Function: Obj3260_TrampVia0C_00337B80_D238
// Address: 0x326238 - 0x326250
void Obj3260_TrampVia0C_00337B80_D238_0x326238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3260_TrampVia0C_00337B80_D238_0x326238");
#endif

    ctx->pc = 0x326238u;

    // 0x326238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32623c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32623cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326240: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x326240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x326244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326248: 0x80cdee0  j           func_337B80
    ctx->pc = 0x326248u;
    ctx->pc = 0x32624Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326248u;
    // 0x32624c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B80u, 0x326248u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x326250u;
}
