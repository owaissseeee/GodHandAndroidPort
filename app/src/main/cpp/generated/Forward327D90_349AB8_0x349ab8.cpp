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

// Function: Forward327D90_349AB8
// Address: 0x349ab8 - 0x349ad0
void Forward327D90_349AB8_0x349ab8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward327D90_349AB8_0x349ab8");
#endif


    // 0x349ab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349abc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349ac4: 0x80c9f64  j           func_327D90
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349AC4u;
    // 0x349ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327D90u, 0x349AC4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x349acc: 0x0  nop
    // NOP
    ctx->pc = 0x349ad0u;
}