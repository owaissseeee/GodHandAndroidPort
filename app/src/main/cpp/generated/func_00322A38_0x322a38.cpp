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

// Function: func_00322A38
// Address: 0x322a38 - 0x322a68
void func_00322A38_0x322a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00322A38_0x322a38");
#endif

    ctx->pc = 0x322a38u;

    // 0x322a38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x322a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x322a3c: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x322a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x322a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x322a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x322a44: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x322a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x322a48: 0x2508532f  addiu       $t0, $t0, 0x532F
    ctx->pc = 0x322a48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 21295));
    // 0x322a4c: 0x24090800  addiu       $t1, $zero, 0x800
    ctx->pc = 0x322a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x322a50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x322a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322a54: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x322a54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x322a58: 0x80c8ae2  j           func_322B88
    ctx->pc = 0x322A58u;
    ctx->pc = 0x322A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322A58u;
    // 0x322a5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322B88u, 0x322A58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x322A60u;
    // 0x322a60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x322a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x322a64: 0x0  nop
    ctx->pc = 0x322a64u;
    // NOP
    ctx->pc = 0x322a68u;
}
