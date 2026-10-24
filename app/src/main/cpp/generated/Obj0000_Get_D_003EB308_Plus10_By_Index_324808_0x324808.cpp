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

// Function: Obj0000_Get_D_003EB308_Plus10_By_Index_324808
// Address: 0x324808 - 0x324858
void Obj0000_Get_D_003EB308_Plus10_By_Index_324808_0x324808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_D_003EB308_Plus10_By_Index_324808_0x324808");
#endif

    ctx->pc = 0x324808u;

    // 0x324808: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x324808u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32480c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x32480cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x324810: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x324810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x324814: 0x8c42b308  lw          $v0, -0x4CF8($v0)
    ctx->pc = 0x324814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947592)));
    // 0x324818: 0x3e00008  jr          $ra
    ctx->pc = 0x324818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324818u;
        // 0x32481c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324820u;
    // 0x324820: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x324820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x324824: 0x0  nop
    ctx->pc = 0x324824u;
    // NOP
    // 0x324828: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x324828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32482c: 0x0  nop
    ctx->pc = 0x32482cu;
    // NOP
    // 0x324830: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x324830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x324834: 0x0  nop
    ctx->pc = 0x324834u;
    // NOP
    // 0x324838: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x324838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32483c: 0x0  nop
    ctx->pc = 0x32483cu;
    // NOP
    // 0x324840: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x324840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x324844: 0x0  nop
    ctx->pc = 0x324844u;
    // NOP
    // 0x324848: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x324848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32484c: 0x0  nop
    ctx->pc = 0x32484cu;
    // NOP
    // 0x324850: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x324850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x324854: 0x0  nop
    ctx->pc = 0x324854u;
    // NOP
    ctx->pc = 0x324858u;
}
