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

// Function: func_001B8030
// Address: 0x1b8030 - 0x1b8058
void func_001B8030_0x1b8030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B8030_0x1b8030");
#endif

    ctx->pc = 0x1b8030u;

    // 0x1b8030: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x1b8030u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x1b8034: 0x286203c0  slti        $v0, $v1, 0x3C0
    ctx->pc = 0x1b8034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)960) ? 1 : 0);
    // 0x1b8038: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8038u;
    {
        const bool branch_taken_0x1b8038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8038u;
        // 0x1b803c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8038) {
            ctx->pc = 0x1B8048u;
            goto label_1b8048;
        }
    }
    ctx->pc = 0x1B8040u;
    // 0x1b8040: 0x28620400  slti        $v0, $v1, 0x400
    ctx->pc = 0x1b8040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b8044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b8044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8048:
    // 0x1b8048: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8048u;
        // 0x1b804c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8050u;
    // 0x1b8050: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b8050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b8054: 0x0  nop
    ctx->pc = 0x1b8054u;
    // NOP
    ctx->pc = 0x1b8058u;
}
