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

// Function: func_0036D410
// Address: 0x36d410 - 0x36d460
void func_0036D410_0x36d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036D410_0x36d410");
#endif

    switch (ctx->pc) {
        case 0x36d430u: goto label_36d430;
        default: break;
    }

    ctx->pc = 0x36d410u;

    // 0x36d410: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x36d410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x36d414: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36d414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d418: 0x2442a590  addiu       $v0, $v0, -0x5A70
    ctx->pc = 0x36d418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944144));
    // 0x36d41c: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x36d41cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x76A5D0u));
    // 0x36d420: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x36D420u;
    {
        const bool branch_taken_0x36d420 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x36D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D420u;
        // 0x36d424: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d420) {
            ctx->pc = 0x36D454u;
            goto label_36d454;
        }
    }
    ctx->pc = 0x36D428u;
    // 0x36d428: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36d428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d42c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x36d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36d430:
    // 0x36d430: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x36d430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d434: 0x10670008  beq         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x36D434u;
    {
        const bool branch_taken_0x36d434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x36D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D434u;
        // 0x36d438: 0x24840640  addiu       $a0, $a0, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d434) {
            ctx->pc = 0x36D458u;
            goto label_36d458;
        }
    }
    ctx->pc = 0x36D43Cu;
    // 0x36d43c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36d43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36d440: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x36d440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x36d444: 0x0  nop
    ctx->pc = 0x36d444u;
    // NOP
    // 0x36d448: 0x0  nop
    ctx->pc = 0x36d448u;
    // NOP
    // 0x36d44c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x36D44Cu;
    {
        const bool branch_taken_0x36d44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36d44c) {
            ctx->pc = 0x36D450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36D44Cu;
            // 0x36d450: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36D430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d430;
        }
    }
    ctx->pc = 0x36D454u;
label_36d454:
    // 0x36d454: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36d454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36d458:
    // 0x36d458: 0x3e00008  jr          $ra
    ctx->pc = 0x36D458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D460u;
}
