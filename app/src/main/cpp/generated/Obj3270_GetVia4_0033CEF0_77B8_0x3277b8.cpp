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

// Function: Obj3270_GetVia4_0033CEF0_77B8
// Address: 0x3277b8 - 0x3277d0
void Obj3270_GetVia4_0033CEF0_77B8_0x3277b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3270_GetVia4_0033CEF0_77B8_0x3277b8");
#endif

    ctx->pc = 0x3277b8u;

    // 0x3277b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3277b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3277bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3277bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3277c0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3277c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3277c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3277c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3277c8: 0x80cf3bc  j           func_33CEF0
    ctx->pc = 0x3277C8u;
    ctx->pc = 0x3277CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3277C8u;
    // 0x3277cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CEF0u, 0x3277C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3277D0u;
}
