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

// Function: func_00330E70
// Address: 0x330e70 - 0x330ec0
void func_00330E70_0x330e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00330E70_0x330e70");
#endif

    ctx->pc = 0x330e70u;

    // 0x330e70: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x330E70u;
    {
        const bool branch_taken_0x330e70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x330E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E70u;
        // 0x330e74: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e70) {
            ctx->pc = 0x330E88u;
            goto label_330e88;
        }
    }
    ctx->pc = 0x330E78u;
    // 0x330e78: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x330e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x330e7c: 0xac408404  sw          $zero, -0x7BFC($v0)
    ctx->pc = 0x330e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294935556), GPR_U32(ctx, 0));
    // 0x330e80: 0x3e00008  jr          $ra
    ctx->pc = 0x330E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E80u;
        // 0x330e84: 0xac608408  sw          $zero, -0x7BF8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294935560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330E88u;
label_330e88:
    // 0x330e88: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x330e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x330e8c: 0xac448404  sw          $a0, -0x7BFC($v0)
    ctx->pc = 0x330e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294935556), GPR_U32(ctx, 4));
    // 0x330e90: 0x3e00008  jr          $ra
    ctx->pc = 0x330E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E90u;
        // 0x330e94: 0xac658408  sw          $a1, -0x7BF8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294935560), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330E98u;
    // 0x330e98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x330e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x330e9c: 0x0  nop
    ctx->pc = 0x330e9cu;
    // NOP
    // 0x330ea0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x330ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x330ea4: 0x0  nop
    ctx->pc = 0x330ea4u;
    // NOP
    // 0x330ea8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x330ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x330eac: 0x0  nop
    ctx->pc = 0x330eacu;
    // NOP
    // 0x330eb0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x330eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x330eb4: 0x0  nop
    ctx->pc = 0x330eb4u;
    // NOP
    // 0x330eb8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x330eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x330ebc: 0x0  nop
    ctx->pc = 0x330ebcu;
    // NOP
    ctx->pc = 0x330ec0u;
}
