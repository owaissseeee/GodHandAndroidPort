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

// Function: sftrn_BuildUsr
// Address: 0x35c120 - 0x35c140
void sftrn_BuildUsr_0x35c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sftrn_BuildUsr_0x35c120");
#endif

    ctx->pc = 0x35c120u;

    // 0x35c120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c124: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x35c124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x35c128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c12c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x35c12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x35c130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c134: 0x80d7080  j           func_35C200
    ctx->pc = 0x35C134u;
    ctx->pc = 0x35C138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C134u;
    // 0x35c138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C200u, 0x35C134u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35C13Cu;
    // 0x35c13c: 0x0  nop
    ctx->pc = 0x35c13cu;
    // NOP
    ctx->pc = 0x35c140u;
}
