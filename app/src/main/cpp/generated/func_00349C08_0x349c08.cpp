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

// Function: func_00349C08
// Address: 0x349c08 - 0x349c28
void func_00349C08_0x349c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349C08_0x349c08");
#endif

    ctx->pc = 0x349c08u;

    // 0x349c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349c0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349c10: 0x8c822004  lw          $v0, 0x2004($a0)
    ctx->pc = 0x349c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x349c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349c18: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x349c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x349c1c: 0x80caaa8  j           func_32AAA0
    ctx->pc = 0x349C1Cu;
    ctx->pc = 0x349C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349C1Cu;
    // 0x349c20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AAA0u, 0x349C1Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x349C24u;
    // 0x349c24: 0x0  nop
    ctx->pc = 0x349c24u;
    // NOP
    ctx->pc = 0x349c28u;
}
