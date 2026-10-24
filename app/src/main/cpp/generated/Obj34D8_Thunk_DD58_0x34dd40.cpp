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

// Function: Obj34D8_Thunk_DD58
// Address: 0x34dd40 - 0x34dd58
void Obj34D8_Thunk_DD58_0x34dd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj34D8_Thunk_DD58_0x34dd40");
#endif

    ctx->pc = 0x34dd40u;

    // 0x34dd40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34dd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34dd44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34dd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34dd48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34dd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34dd4c: 0x80d3756  j           func_34DD58
    ctx->pc = 0x34DD4Cu;
    ctx->pc = 0x34DD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DD4Cu;
    // 0x34dd50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD58u, 0x34DD4Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34DD54u;
    // 0x34dd54: 0x0  nop
    ctx->pc = 0x34dd54u;
    // NOP
    ctx->pc = 0x34dd58u;
}
