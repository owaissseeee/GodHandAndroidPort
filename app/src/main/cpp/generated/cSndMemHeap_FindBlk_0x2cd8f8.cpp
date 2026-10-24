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

// Function: cSndMemHeap_FindBlk
// Address: 0x2cd8f8 - 0x2cd930
void cSndMemHeap_FindBlk_0x2cd8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndMemHeap_FindBlk_0x2cd8f8");
#endif

    switch (ctx->pc) {
        case 0x2cd908u: goto label_2cd908;
        default: break;
    }

    ctx->pc = 0x2cd8f8u;

    // 0x2cd8f8: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x2cd8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2cd8fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cd8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd900: 0x2443001c  addiu       $v1, $v0, 0x1C
    ctx->pc = 0x2cd900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x2cd904: 0x0  nop
    ctx->pc = 0x2cd904u;
    // NOP
label_2cd908:
    // 0x2cd908: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2cd908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2cd90c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD90Cu;
    {
        const bool branch_taken_0x2cd90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2CD910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD90Cu;
        // 0x2cd910: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd90c) {
            ctx->pc = 0x2CD91Cu;
            goto label_2cd91c;
        }
    }
    ctx->pc = 0x2CD914u;
    // 0x2cd914: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD914u;
        // 0x2cd918: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD91Cu;
label_2cd91c:
    // 0x2cd91c: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x2cd91cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2cd920: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2CD920u;
    {
        const bool branch_taken_0x2cd920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD920u;
        // 0x2cd924: 0x2463001c  addiu       $v1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd920) {
            ctx->pc = 0x2CD908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd908;
        }
    }
    ctx->pc = 0x2CD928u;
    // 0x2cd928: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD928u;
        // 0x2cd92c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD930u;
}
