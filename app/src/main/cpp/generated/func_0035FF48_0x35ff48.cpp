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

// Function: func_0035FF48
// Address: 0x35ff48 - 0x35ff98
void func_0035FF48_0x35ff48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035FF48_0x35ff48");
#endif

    switch (ctx->pc) {
        case 0x35ff68u: goto label_35ff68;
        default: break;
    }

    ctx->pc = 0x35ff48u;

    // 0x35ff48: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x35ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35ff4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35ff4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ff50: 0x2442e800  addiu       $v0, $v0, -0x1800
    ctx->pc = 0x35ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961152));
    // 0x35ff54: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x35ff54u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EE808u));
    // 0x35ff58: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x35FF58u;
    {
        const bool branch_taken_0x35ff58 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x35FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FF58u;
        // 0x35ff5c: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ff58) {
            ctx->pc = 0x35FF8Cu;
            goto label_35ff8c;
        }
    }
    ctx->pc = 0x35FF60u;
    // 0x35ff60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35ff60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ff64: 0x0  nop
    ctx->pc = 0x35ff64u;
    // NOP
label_35ff68:
    // 0x35ff68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35ff6c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x35ff6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ff70: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35FF70u;
    {
        const bool branch_taken_0x35ff70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FF70u;
        // 0x35ff74: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ff70) {
            ctx->pc = 0x35FF90u;
            goto label_35ff90;
        }
    }
    ctx->pc = 0x35FF78u;
    // 0x35ff78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x35ff78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x35ff7c: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x35ff7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x35ff80: 0x0  nop
    ctx->pc = 0x35ff80u;
    // NOP
    // 0x35ff84: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x35FF84u;
    {
        const bool branch_taken_0x35ff84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ff84) {
            ctx->pc = 0x35FF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ff68;
        }
    }
    ctx->pc = 0x35FF8Cu;
label_35ff8c:
    // 0x35ff8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ff8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35ff90:
    // 0x35ff90: 0x3e00008  jr          $ra
    ctx->pc = 0x35FF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FF98u;
}
