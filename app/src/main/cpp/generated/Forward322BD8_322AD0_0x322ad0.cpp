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

// Function: Forward322BD8_322AD0
// Address: 0x322ad0 - 0x322af8
void Forward322BD8_322AD0_0x322ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward322BD8_322AD0_0x322ad0");
#endif

    ctx->pc = 0x322ad0u;

    // 0x322ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x322ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x322ad4: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x322ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x322ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x322ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x322adc: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x322adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x322ae0: 0x2508532f  addiu       $t0, $t0, 0x532F
    ctx->pc = 0x322ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 21295));
    // 0x322ae4: 0x24090800  addiu       $t1, $zero, 0x800
    ctx->pc = 0x322ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x322ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x322ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322aec: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x322aecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x322af0: 0x80c8af6  j           func_322BD8
    ctx->pc = 0x322AF0u;
    ctx->pc = 0x322AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322AF0u;
    // 0x322af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322BD8u, 0x322AF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x322AF8u;
}
