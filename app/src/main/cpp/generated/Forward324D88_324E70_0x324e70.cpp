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

// Function: Forward324D88_324E70
// Address: 0x324e70 - 0x324e98
void Forward324D88_324E70_0x324e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward324D88_324E70_0x324e70");
#endif

    ctx->pc = 0x324e70u;

    // 0x324e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x324e74: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x324e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x324e78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324e7c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x324e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x324e80: 0x2442814c  addiu       $v0, $v0, -0x7EB4
    ctx->pc = 0x324e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934860));
    // 0x324e84: 0x8c6580c8  lw          $a1, -0x7F38($v1)
    ctx->pc = 0x324e84u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C80C8u));
    // 0x324e88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x324e88u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C814Cu));
    // 0x324e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324e90: 0x80c9362  j           func_324D88
    ctx->pc = 0x324E90u;
    ctx->pc = 0x324E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E90u;
    // 0x324e94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324D88u, 0x324E90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x324E98u;
}
