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

// Function: func_0034E068
// Address: 0x34e068 - 0x34e088
void func_0034E068_0x34e068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034E068_0x34e068");
#endif

    ctx->pc = 0x34e068u;

    // 0x34e068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34e068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34e06c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34e06cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34e070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34e070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34e074: 0x34a50501  ori         $a1, $a1, 0x501
    ctx->pc = 0x34e074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1281);
    // 0x34e078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34e078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e07c: 0x80d375c  j           func_34DD70
    ctx->pc = 0x34E07Cu;
    ctx->pc = 0x34E080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E07Cu;
    // 0x34e080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34E07Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34E084u;
    // 0x34e084: 0x0  nop
    ctx->pc = 0x34e084u;
    // NOP
    ctx->pc = 0x34e088u;
}
