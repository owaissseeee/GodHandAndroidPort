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

// Function: GetVia4_Obj33C8_GetShort_24_327800
// Address: 0x327800 - 0x327818
void GetVia4_Obj33C8_GetShort_24_327800_0x327800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetVia4_Obj33C8_GetShort_24_327800_0x327800");
#endif

    ctx->pc = 0x327800u;

    // 0x327800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x327804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x327808: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x327808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32780c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32780cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327810: 0x80cf3d8  j           func_33CF60
    ctx->pc = 0x327810u;
    ctx->pc = 0x327814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327810u;
    // 0x327814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CF60u, 0x327810u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x327818u;
}
