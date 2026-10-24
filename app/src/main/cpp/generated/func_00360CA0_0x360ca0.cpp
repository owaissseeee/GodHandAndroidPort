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

// Function: func_00360CA0
// Address: 0x360ca0 - 0x360cc8
void func_00360CA0_0x360ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00360CA0_0x360ca0");
#endif

    ctx->pc = 0x360ca0u;

    // 0x360ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x360ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x360ca4: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x360ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
    // 0x360ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x360ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x360cac: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x360cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x360cb0: 0x24636cd0  addiu       $v1, $v1, 0x6CD0
    ctx->pc = 0x360cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27856));
    // 0x360cb4: 0x2442a290  addiu       $v0, $v0, -0x5D70
    ctx->pc = 0x360cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943376));
    // 0x360cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360cbc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x360cbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x766CD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x766CD0u, _value); } while (0);
    // 0x360cc0: 0x80d833c  j           func_360CF0
    ctx->pc = 0x360CC0u;
    ctx->pc = 0x360CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360CC0u;
    // 0x360cc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360CF0u, 0x360CC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x360CC8u;
}
