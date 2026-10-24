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

// Function: func_001FE5A8
// Address: 0x1fe5a8 - 0x1fe5e0
void func_001FE5A8_0x1fe5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FE5A8_0x1fe5a8");
#endif

    switch (ctx->pc) {
        case 0x1fe5b8u: goto label_1fe5b8;
        default: break;
    }

    ctx->pc = 0x1fe5a8u;

    // 0x1fe5a8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1fe5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1fe5ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fe5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5b0: 0x24439b80  addiu       $v1, $v0, -0x6480
    ctx->pc = 0x1fe5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941568));
    // 0x1fe5b4: 0x0  nop
    ctx->pc = 0x1fe5b4u;
    // NOP
label_1fe5b8:
    // 0x1fe5b8: 0x9062002e  lbu         $v0, 0x2E($v1)
    ctx->pc = 0x1fe5b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x1fe5bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE5BCu;
    {
        const bool branch_taken_0x1fe5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5BCu;
        // 0x1fe5c0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5bc) {
            ctx->pc = 0x1FE5CCu;
            goto label_1fe5cc;
        }
    }
    ctx->pc = 0x1FE5C4u;
    // 0x1fe5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5C4u;
        // 0x1fe5c8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE5CCu;
label_1fe5cc:
    // 0x1fe5cc: 0x2c8200a0  sltiu       $v0, $a0, 0xA0
    ctx->pc = 0x1fe5ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)160) ? 1 : 0);
    // 0x1fe5d0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FE5D0u;
    {
        const bool branch_taken_0x1fe5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5D0u;
        // 0x1fe5d4: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5d0) {
            ctx->pc = 0x1FE5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe5b8;
        }
    }
    ctx->pc = 0x1FE5D8u;
    // 0x1fe5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5D8u;
        // 0x1fe5dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE5E0u;
}
