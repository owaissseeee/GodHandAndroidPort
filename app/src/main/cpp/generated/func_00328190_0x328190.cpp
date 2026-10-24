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

// Function: func_00328190
// Address: 0x328190 - 0x3281c8
void func_00328190_0x328190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328190_0x328190");
#endif

    ctx->pc = 0x328190u;

    // 0x328190: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x328190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x328194: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x328194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x328198: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x328198u;
    {
        const bool branch_taken_0x328198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328198u;
        // 0x32819c: 0xac80004c  sw          $zero, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328198) {
            ctx->pc = 0x3281A8u;
            goto label_3281a8;
        }
    }
    ctx->pc = 0x3281A0u;
    // 0x3281a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3281A0u;
    {
        const bool branch_taken_0x3281a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3281A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281A0u;
        // 0x3281a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3281a0) {
            ctx->pc = 0x3281ACu;
            goto label_3281ac;
        }
    }
    ctx->pc = 0x3281A8u;
label_3281a8:
    // 0x3281a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3281a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3281ac:
    // 0x3281ac: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x3281acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3281b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3281b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3281b4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x3281b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3281b8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x3281b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x3281bc: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x3281bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x3281c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3281C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3281C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281C0u;
        // 0x3281c4: 0xa0820047  sb          $v0, 0x47($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 71), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3281C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3281C8u;
}
