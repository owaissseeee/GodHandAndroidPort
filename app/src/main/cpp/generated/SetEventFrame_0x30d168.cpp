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

// Function: SetEventFrame
// Address: 0x30d168 - 0x30d190
void SetEventFrame_0x30d168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEventFrame_0x30d168");
#endif

    ctx->pc = 0x30d168u;

    // 0x30d168: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x30d168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30d16c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D16Cu;
    {
        const bool branch_taken_0x30d16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D16Cu;
        // 0x30d170: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d16c) {
            ctx->pc = 0x30D184u;
            goto label_30d184;
        }
    }
    ctx->pc = 0x30D174u;
    // 0x30d174: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x30d174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x30d178: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30d178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d17c: 0x3e00008  jr          $ra
    ctx->pc = 0x30D17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D17Cu;
        // 0x30d180: 0xac627a10  sw          $v0, 0x7A10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 31248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D184u;
label_30d184:
    // 0x30d184: 0x3e00008  jr          $ra
    ctx->pc = 0x30D184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D184u;
        // 0x30d188: 0xac447a10  sw          $a0, 0x7A10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 31248), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D18Cu;
    // 0x30d18c: 0x0  nop
    ctx->pc = 0x30d18cu;
    // NOP
    ctx->pc = 0x30d190u;
}
