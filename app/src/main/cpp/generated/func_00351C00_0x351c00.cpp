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

// Function: func_00351C00
// Address: 0x351c00 - 0x351c18
void func_00351C00_0x351c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00351C00_0x351c00");
#endif

    ctx->pc = 0x351c00u;

    // 0x351c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x351c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x351c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x351c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x351c08: 0x8c851fc8  lw          $a1, 0x1FC8($a0)
    ctx->pc = 0x351c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8136)));
    // 0x351c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x351c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351c10: 0x80d32a6  j           func_34CA98
    ctx->pc = 0x351C10u;
    ctx->pc = 0x351C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351C10u;
    // 0x351c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA98u, 0x351C10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x351C18u;
}
