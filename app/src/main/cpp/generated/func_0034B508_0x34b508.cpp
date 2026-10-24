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

// Function: func_0034B508
// Address: 0x34b508 - 0x34b528
void func_0034B508_0x34b508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034B508_0x34b508");
#endif

    ctx->pc = 0x34b508u;

    // 0x34b508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b50c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34b50cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34b510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34b510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34b514: 0x34a50c03  ori         $a1, $a1, 0xC03
    ctx->pc = 0x34b514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3075);
    // 0x34b518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34b518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b51c: 0x80d375c  j           func_34DD70
    ctx->pc = 0x34B51Cu;
    ctx->pc = 0x34B520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B51Cu;
    // 0x34b520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34B51Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34B524u;
    // 0x34b524: 0x0  nop
    ctx->pc = 0x34b524u;
    // NOP
    ctx->pc = 0x34b528u;
}
