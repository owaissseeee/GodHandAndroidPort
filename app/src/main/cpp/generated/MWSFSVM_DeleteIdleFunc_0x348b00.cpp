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

// Function: MWSFSVM_DeleteIdleFunc
// Address: 0x348b00 - 0x348b20
void MWSFSVM_DeleteIdleFunc_0x348b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MWSFSVM_DeleteIdleFunc_0x348b00");
#endif

    ctx->pc = 0x348b00u;

    // 0x348b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348b04: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x348b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x348b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348b0c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x348b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x348b10: 0x8c450d8c  lw          $a1, 0xD8C($v0)
    ctx->pc = 0x348b10u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x760D8Cu));
    // 0x348b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348b18: 0x80cee4e  j           func_33B938
    ctx->pc = 0x348B18u;
    ctx->pc = 0x348B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348B18u;
    // 0x348b1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B938u, 0x348B18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x348B20u;
}
