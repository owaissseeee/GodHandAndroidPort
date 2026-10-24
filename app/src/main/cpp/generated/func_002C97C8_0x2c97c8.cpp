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

// Function: func_002C97C8
// Address: 0x2c97c8 - 0x2c9818
void func_002C97C8_0x2c97c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C97C8_0x2c97c8");
#endif

    ctx->pc = 0x2c97c8u;

    // 0x2c97c8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2c97c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2c97cc: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C97CCu;
    {
        const bool branch_taken_0x2c97cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97CCu;
        // 0x2c97d0: 0x28a20021  slti        $v0, $a1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97cc) {
            ctx->pc = 0x2C9800u;
            goto label_2c9800;
        }
    }
    ctx->pc = 0x2C97D4u;
    // 0x2c97d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C97D4u;
    {
        const bool branch_taken_0x2c97d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C97D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97D4u;
        // 0x2c97d8: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97d4) {
            ctx->pc = 0x2C97ECu;
            goto label_2c97ec;
        }
    }
    ctx->pc = 0x2C97DCu;
    // 0x2c97dc: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C97DCu;
    {
        const bool branch_taken_0x2c97dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C97E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97DCu;
        // 0x2c97e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97dc) {
            ctx->pc = 0x2C9800u;
            goto label_2c9800;
        }
    }
    ctx->pc = 0x2C97E4u;
    // 0x2c97e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C97E4u;
    {
        const bool branch_taken_0x2c97e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c97e4) {
            ctx->pc = 0x2C980Cu;
            goto label_2c980c;
        }
    }
    ctx->pc = 0x2C97ECu;
label_2c97ec:
    // 0x2c97ec: 0x28a2005e  slti        $v0, $a1, 0x5E
    ctx->pc = 0x2c97ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)94) ? 1 : 0);
    // 0x2c97f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C97F0u;
    {
        const bool branch_taken_0x2c97f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C97F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97F0u;
        // 0x2c97f4: 0x28a2005c  slti        $v0, $a1, 0x5C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)92) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97f0) {
            ctx->pc = 0x2C9808u;
            goto label_2c9808;
        }
    }
    ctx->pc = 0x2C97F8u;
    // 0x2c97f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C97F8u;
    {
        const bool branch_taken_0x2c97f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C97FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C97F8u;
        // 0x2c97fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97f8) {
            ctx->pc = 0x2C980Cu;
            goto label_2c980c;
        }
    }
    ctx->pc = 0x2C9800u;
label_2c9800:
    // 0x2c9800: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9800u;
        // 0x2c9804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9808u;
label_2c9808:
    // 0x2c9808: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c980c:
    // 0x2c980c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C980Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C980Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9814u;
    // 0x2c9814: 0x0  nop
    ctx->pc = 0x2c9814u;
    // NOP
    ctx->pc = 0x2c9818u;
}
