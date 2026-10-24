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

// Function: Obj3260_Tramp_00338848_D428
// Address: 0x326428 - 0x326468
void Obj3260_Tramp_00338848_D428_0x326428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj3260_Tramp_00338848_D428_0x326428");
#endif

    ctx->pc = 0x326428u;

    // 0x326428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32642c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32642cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326434: 0x80ce212  j           func_338848
    ctx->pc = 0x326434u;
    ctx->pc = 0x326438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326434u;
    // 0x326438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338848u, 0x326434u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32643Cu;
    // 0x32643c: 0x0  nop
    ctx->pc = 0x32643cu;
    // NOP
    // 0x326440: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x326440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x326444: 0x0  nop
    ctx->pc = 0x326444u;
    // NOP
    // 0x326448: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x326448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32644c: 0x0  nop
    ctx->pc = 0x32644cu;
    // NOP
    // 0x326450: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x326450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x326454: 0x0  nop
    ctx->pc = 0x326454u;
    // NOP
    // 0x326458: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x326458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32645c: 0x0  nop
    ctx->pc = 0x32645cu;
    // NOP
    // 0x326460: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x326460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x326464: 0x0  nop
    ctx->pc = 0x326464u;
    // NOP
    ctx->pc = 0x326468u;
}
