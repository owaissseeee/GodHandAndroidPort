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

// Function: GetVia4_Obj33C8_GetField_34_7878_327878
// Address: 0x327878 - 0x327890
void GetVia4_Obj33C8_GetField_34_7878_327878_0x327878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetVia4_Obj33C8_GetField_34_7878_327878_0x327878");
#endif

    ctx->pc = 0x327878u;

    // 0x327878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32787c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32787cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x327880: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x327880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x327884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327888: 0x80cf3e4  j           func_33CF90
    ctx->pc = 0x327888u;
    ctx->pc = 0x32788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327888u;
    // 0x32788c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CF90u, 0x327888u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x327890u;
}
