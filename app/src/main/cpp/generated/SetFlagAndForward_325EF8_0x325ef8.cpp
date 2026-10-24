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

// Function: SetFlagAndForward_325EF8
// Address: 0x325ef8 - 0x325f20
void SetFlagAndForward_325EF8_0x325ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFlagAndForward_325EF8_0x325ef8");
#endif

    ctx->pc = 0x325ef8u;

    // 0x325ef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x325ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x325efc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x325efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x325f00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325f04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x325f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325f08: 0x244280fc  addiu       $v0, $v0, -0x7F04
    ctx->pc = 0x325f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934780));
    // 0x325f0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325f10: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x325f10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3C80FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C80FCu, _value); } while (0);
    // 0x325f14: 0x80c94b8  j           func_3252E0
    ctx->pc = 0x325F14u;
    ctx->pc = 0x325F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325F14u;
    // 0x325f18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3252E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3252E0u, 0x325F14u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x325F1Cu;
    // 0x325f1c: 0x0  nop
    ctx->pc = 0x325f1cu;
    // NOP
    ctx->pc = 0x325f20u;
}
