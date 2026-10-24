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

// Function: GetVia4_Obj33C8_GetField_30_7860_327860
// Address: 0x327860 - 0x327878
void GetVia4_Obj33C8_GetField_30_7860_327860_0x327860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetVia4_Obj33C8_GetField_30_7860_327860_0x327860");
#endif

    ctx->pc = 0x327860u;

    // 0x327860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x327864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x327868: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x327868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32786c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32786cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327870: 0x80cf3e2  j           func_33CF88
    ctx->pc = 0x327870u;
    ctx->pc = 0x327874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327870u;
    // 0x327874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CF88u, 0x327870u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x327878u;
}
