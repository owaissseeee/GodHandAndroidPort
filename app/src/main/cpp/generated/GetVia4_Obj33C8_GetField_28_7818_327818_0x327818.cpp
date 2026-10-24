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

// Function: GetVia4_Obj33C8_GetField_28_7818_327818
// Address: 0x327818 - 0x327830
void GetVia4_Obj33C8_GetField_28_7818_327818_0x327818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetVia4_Obj33C8_GetField_28_7818_327818_0x327818");
#endif

    ctx->pc = 0x327818u;

    // 0x327818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32781c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32781cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x327820: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x327820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x327824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327828: 0x80cf3da  j           func_33CF68
    ctx->pc = 0x327828u;
    ctx->pc = 0x32782Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327828u;
    // 0x32782c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CF68u, 0x327828u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x327830u;
}
