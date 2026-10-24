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

// Function: func_00201F20
// Address: 0x201f20 - 0x201f48
void func_00201F20_0x201f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00201F20_0x201f20");
#endif

    ctx->pc = 0x201f20u;

    // 0x201f20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x201f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x201f24: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x201F24u;
    {
        const bool branch_taken_0x201f24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x201f24) {
            ctx->pc = 0x201F3Cu;
            goto label_201f3c;
        }
    }
    ctx->pc = 0x201F2Cu;
    // 0x201f2c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201F2Cu;
    {
        const bool branch_taken_0x201f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F2Cu;
        // 0x201f30: 0x3c030058  lui         $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f2c) {
            ctx->pc = 0x201F3Cu;
            goto label_201f3c;
        }
    }
    ctx->pc = 0x201F34u;
    // 0x201f34: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x201f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x201f38: 0xa062503a  sb          $v0, 0x503A($v1)
    ctx->pc = 0x201f38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20538), (uint8_t)GPR_U32(ctx, 2));
label_201f3c:
    // 0x201f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x201F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201F44u;
    // 0x201f44: 0x0  nop
    ctx->pc = 0x201f44u;
    // NOP
    ctx->pc = 0x201f48u;
}
