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

// Function: Forward324AC8_342940
// Address: 0x342940 - 0x342958
void Forward324AC8_342940_0x342940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward324AC8_342940_0x342940");
#endif

    ctx->pc = 0x342940u;

    // 0x342940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x342948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34294c: 0x80c92b2  j           func_324AC8
    ctx->pc = 0x34294Cu;
    ctx->pc = 0x342950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34294Cu;
    // 0x342950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324AC8u, 0x34294Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x342954u;
    // 0x342954: 0x0  nop
    ctx->pc = 0x342954u;
    // NOP
    ctx->pc = 0x342958u;
}
