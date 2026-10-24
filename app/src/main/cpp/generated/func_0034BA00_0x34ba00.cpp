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

// Function: func_0034BA00
// Address: 0x34ba00 - 0x34ba20
void func_0034BA00_0x34ba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034BA00_0x34ba00");
#endif

    ctx->pc = 0x34ba00u;

    // 0x34ba00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34ba00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34ba04: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34ba04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34ba08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34ba08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34ba0c: 0x34a50a01  ori         $a1, $a1, 0xA01
    ctx->pc = 0x34ba0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2561);
    // 0x34ba10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34ba10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ba14: 0x80d375c  j           func_34DD70
    ctx->pc = 0x34BA14u;
    ctx->pc = 0x34BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BA14u;
    // 0x34ba18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34BA14u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34BA1Cu;
    // 0x34ba1c: 0x0  nop
    ctx->pc = 0x34ba1cu;
    // NOP
    ctx->pc = 0x34ba20u;
}
