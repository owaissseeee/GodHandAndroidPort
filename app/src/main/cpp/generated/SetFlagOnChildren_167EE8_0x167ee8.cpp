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

// Function: SetFlagOnChildren_167EE8
// Address: 0x167ee8 - 0x167f20
void SetFlagOnChildren_167EE8_0x167ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFlagOnChildren_167EE8_0x167ee8");
#endif

    switch (ctx->pc) {
        case 0x167ef8u: goto label_167ef8;
        default: break;
    }

    ctx->pc = 0x167ee8u;

    // 0x167ee8: 0x24850080  addiu       $a1, $a0, 0x80
    ctx->pc = 0x167ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x167eec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x167eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ef0: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x167ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x167ef4: 0x0  nop
    ctx->pc = 0x167ef4u;
    // NOP
label_167ef8:
    // 0x167ef8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x167ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x167efc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x167efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x167f00: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x167f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x167f04: 0x2cc40010  sltiu       $a0, $a2, 0x10
    ctx->pc = 0x167f04u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x167f08: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x167f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x167f0c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x167f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x167f10: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x167F10u;
    {
        const bool branch_taken_0x167f10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x167F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F10u;
        // 0x167f14: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f10) {
            ctx->pc = 0x167EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167ef8;
        }
    }
    ctx->pc = 0x167F18u;
    // 0x167f18: 0x3e00008  jr          $ra
    ctx->pc = 0x167F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167F20u;
}
