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

// Function: func_002A9648
// Address: 0x2a9648 - 0x2a9680
void func_002A9648_0x2a9648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A9648_0x2a9648");
#endif

    ctx->pc = 0x2a9648u;

    // 0x2a9648: 0x24a7ffe0  addiu       $a3, $a1, -0x20
    ctx->pc = 0x2a9648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x2a964c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2a964cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2a9650: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x2a9650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2a9654: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x2a9654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2a9658: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9658u;
    {
        const bool branch_taken_0x2a9658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9658) {
            ctx->pc = 0x2A965Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9658u;
            // 0x2a965c: 0x8ce3000c  lw          $v1, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9668u;
            goto label_2a9668;
        }
    }
    ctx->pc = 0x2A9660u;
    // 0x2a9660: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9660u;
        // 0x2a9664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9668u;
label_2a9668:
    // 0x2a9668: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x2a9668u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2a966c: 0xace60010  sw          $a2, 0x10($a3)
    ctx->pc = 0x2a966cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 6));
    // 0x2a9670: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2a9670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9674: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a9674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a9678: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9678u;
        // 0x2a967c: 0xace3000c  sw          $v1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9680u;
}
