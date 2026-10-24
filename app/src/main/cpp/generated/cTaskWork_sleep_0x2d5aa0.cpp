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

// Function: cTaskWork_sleep
// Address: 0x2d5aa0 - 0x2d5ad8
void cTaskWork_sleep_0x2d5aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cTaskWork_sleep_0x2d5aa0");
#endif

    switch (ctx->pc) {
        case 0x2d5ac0u: goto label_2d5ac0;
        case 0x2d5ac8u: goto label_2d5ac8;
        default: break;
    }

    ctx->pc = 0x2d5aa0u;

    // 0x2d5aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d5aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d5aa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d5aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5aa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d5aac: 0xa485000e  sh          $a1, 0xE($a0)
    ctx->pc = 0x2d5aacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d5ab0: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x2d5ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d5ab4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5ab8: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x2D5AB8u;
    SET_GPR_U32(ctx, 31, 0x2D5AC0u);
    ctx->pc = 0x2D5ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5AB8u;
    // 0x2d5abc: 0x8c440028  lw          $a0, 0x28($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x2D5AB8u, 0x2D5AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5AC0u;
label_2d5ac0:
    // 0x2d5ac0: 0xc0ebef0  jal         func_3AFBC0
    ctx->pc = 0x2D5AC0u;
    SET_GPR_U32(ctx, 31, 0x2D5AC8u);
    ctx->pc = 0x3AFBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFBC0u, 0x2D5AC0u, 0x2D5AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5AC8u;
label_2d5ac8:
    // 0x2d5ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5acc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5ACCu;
        // 0x2d5ad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5AD4u;
    // 0x2d5ad4: 0x0  nop
    ctx->pc = 0x2d5ad4u;
    // NOP
    ctx->pc = 0x2d5ad8u;
}
