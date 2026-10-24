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

// Function: func_00357490
// Address: 0x357490 - 0x3574a8
void func_00357490_0x357490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00357490_0x357490");
#endif

    ctx->pc = 0x357490u;

    // 0x357490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x357490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x357494: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x357494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35749c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35749cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3574a0: 0x80d708e  j           func_35C238
    ctx->pc = 0x3574A0u;
    ctx->pc = 0x3574A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3574A0u;
    // 0x3574a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C238u, 0x3574A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3574A8u;
}
