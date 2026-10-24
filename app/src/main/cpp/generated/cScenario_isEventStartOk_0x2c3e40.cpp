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

// Function: cScenario_isEventStartOk
// Address: 0x2c3e40 - 0x2c3e88
void cScenario_isEventStartOk_0x2c3e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_isEventStartOk_0x2c3e40");
#endif

    switch (ctx->pc) {
        case 0x2c3e64u: goto label_2c3e64;
        case 0x2c3e6cu: goto label_2c3e6c;
        default: break;
    }

    ctx->pc = 0x2c3e40u;

    // 0x2c3e40: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2c3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2c3e44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c3e44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c3e48: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2c3e48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x2c3e4c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x2c3e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x2c3e50: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2c3e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2c3e54: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3E54u;
    {
        const bool branch_taken_0x2c3e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E54u;
        // 0x2c3e58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e54) {
            ctx->pc = 0x2C3E74u;
            goto label_2c3e74;
        }
    }
    ctx->pc = 0x2C3E5Cu;
    // 0x2c3e5c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2C3E5Cu;
    SET_GPR_U32(ctx, 31, 0x2C3E64u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C3E5Cu, 0x2C3E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E64u;
label_2c3e64:
    // 0x2c3e64: 0xc04aebc  jal         func_12BAF0
    ctx->pc = 0x2C3E64u;
    SET_GPR_U32(ctx, 31, 0x2C3E6Cu);
    ctx->pc = 0x2C3E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3E64u;
    // 0x2c3e68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BAF0u, 0x2C3E64u, 0x2C3E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E6Cu;
label_2c3e6c:
    // 0x2c3e6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3E6Cu;
    {
        const bool branch_taken_0x2c3e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E6Cu;
        // 0x2c3e70: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e6c) {
            ctx->pc = 0x2C3E78u;
            goto label_2c3e78;
        }
    }
    ctx->pc = 0x2C3E74u;
label_2c3e74:
    // 0x2c3e74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3e78:
    // 0x2c3e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c3e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E7Cu;
        // 0x2c3e80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3E84u;
    // 0x2c3e84: 0x0  nop
    ctx->pc = 0x2c3e84u;
    // NOP
    ctx->pc = 0x2c3e88u;
}
