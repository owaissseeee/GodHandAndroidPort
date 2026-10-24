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

// Function: func_00356890
// Address: 0x356890 - 0x3568b8
void func_00356890_0x356890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00356890_0x356890");
#endif

    ctx->pc = 0x356890u;

    // 0x356890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x356890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x356894: 0x3c050076  lui         $a1, 0x76
    ctx->pc = 0x356894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)118 << 16));
    // 0x356898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x356898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35689c: 0x24a56c28  addiu       $a1, $a1, 0x6C28
    ctx->pc = 0x35689cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27688));
    // 0x3568a0: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x3568a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x3568a4: 0x8c841fc0  lw          $a0, 0x1FC0($a0)
    ctx->pc = 0x3568a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x3568a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3568a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3568ac: 0x24841150  addiu       $a0, $a0, 0x1150
    ctx->pc = 0x3568acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4432));
    // 0x3568b0: 0x80d9a6c  j           func_3669B0
    ctx->pc = 0x3568B0u;
    ctx->pc = 0x3568B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3568B0u;
    // 0x3568b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3669B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3669B0u, 0x3568B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3568B8u;
}
