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

// Function: _sceRpcGetFPacket
// Address: 0x3b2b90 - 0x3b2bc0
void _sceRpcGetFPacket_0x3b2b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceRpcGetFPacket_0x3b2b90");
#endif

    ctx->pc = 0x3b2b90u;

    // 0x3b2b90: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x3b2b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3b2b94: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x3b2b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3b2b98: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x3b2b98u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b2b9c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B2B9Cu;
    {
        const bool branch_taken_0x3b2b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2b9c) {
            ctx->pc = 0x3B2BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2B9Cu;
            // 0x3b2ba0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2BA4u;
            goto label_3b2ba4;
        }
    }
    ctx->pc = 0x3B2BA4u;
label_3b2ba4:
    // 0x3b2ba4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x3b2ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3b2ba8: 0x1010  mfhi        $v0
    ctx->pc = 0x3b2ba8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3b2bac: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3b2bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b2bb0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3b2bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3b2bb4: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x3b2bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x3b2bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2BB8u;
        // 0x3b2bbc: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2BC0u;
}
