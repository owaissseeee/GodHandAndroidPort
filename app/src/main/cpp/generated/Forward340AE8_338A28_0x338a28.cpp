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

// Function: Forward340AE8_338A28
// Address: 0x338a28 - 0x338a48
void Forward340AE8_338A28_0x338a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward340AE8_338A28_0x338a28");
#endif

    ctx->pc = 0x338a28u;

    // 0x338a28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338a2c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x338a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x338a30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x338a34: 0x24845900  addiu       $a0, $a0, 0x5900
    ctx->pc = 0x338a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22784));
    // 0x338a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338a3c: 0x80d02ba  j           func_340AE8
    ctx->pc = 0x338A3Cu;
    ctx->pc = 0x338A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338A3Cu;
    // 0x338a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340AE8u, 0x338A3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x338A44u;
    // 0x338a44: 0x0  nop
    ctx->pc = 0x338a44u;
    // NOP
    ctx->pc = 0x338a48u;
}
