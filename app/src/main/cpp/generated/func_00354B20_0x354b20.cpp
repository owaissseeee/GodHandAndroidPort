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

// Function: func_00354B20
// Address: 0x354b20 - 0x354b40
void func_00354B20_0x354b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00354B20_0x354b20");
#endif

    ctx->pc = 0x354b20u;

    // 0x354b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x354b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x354b24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x354b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x354b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x354b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x354b2c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x354b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x354b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x354b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354b34: 0x80d9b14  j           func_366C50
    ctx->pc = 0x354B34u;
    ctx->pc = 0x354B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354B34u;
    // 0x354b38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366C50u, 0x354B34u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x354B3Cu;
    // 0x354b3c: 0x0  nop
    ctx->pc = 0x354b3cu;
    // NOP
    ctx->pc = 0x354b40u;
}
