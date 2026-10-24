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

// Function: Obj35D0_SendEvent_FF000601_D250
// Address: 0x35d250 - 0x35d270
void Obj35D0_SendEvent_FF000601_D250_0x35d250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj35D0_SendEvent_FF000601_D250_0x35d250");
#endif

    ctx->pc = 0x35d250u;

    // 0x35d250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35d250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35d254: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x35d254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x35d258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d25c: 0x34a50601  ori         $a1, $a1, 0x601
    ctx->pc = 0x35d25cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1537);
    // 0x35d260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d264: 0x80d375c  j           func_34DD70
    ctx->pc = 0x35D264u;
    ctx->pc = 0x35D268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D264u;
    // 0x35d268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x35D264u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35D26Cu;
    // 0x35d26c: 0x0  nop
    ctx->pc = 0x35d26cu;
    // NOP
    ctx->pc = 0x35d270u;
}
