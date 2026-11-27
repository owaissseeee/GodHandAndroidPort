#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: quitPlay__14cEventScrLayer
// Address: 0x7b0b70 - 0x7b0ba0
void quitPlay__14cEventScrLayer_0x7b0b70(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quitPlay__14cEventScrLayer_0x7b0b70");
#endif

    if (__builtin_expect(ctx->pc != 0x7b0b70u, 0)) {
        switch (ctx->pc) {
            case 0x7b0b88u: goto label_7b0b88;
            case 0x7b0b90u: goto label_7b0b90;
            default: break;
        }
    }



    // 0x7b0b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7b0b74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7b0b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7b0b78: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0b7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b0b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b0b80: 0xc0b6d46  jal         func_2DB518
    SET_GPR_U32(ctx, 31, 0x7B0B88u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0B80u;
    // 0x7b0b84: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB518u;
    if (!runtime->callDirectStatic(rdram, ctx, &SetSuspendScrollLayerAll_0x2db518, 0x2DB518u, 0x7B0B88u)) {
        return;
    }
label_7b0b88:
    // 0x7b0b88: 0xc0b6d88  jal         func_2DB620
    SET_GPR_U32(ctx, 31, 0x7B0B90u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0B88u;
    // 0x7b0b8c: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB620u;
    if (!runtime->callDirectStatic(rdram, ctx, &SetViewScrollIdAll_0x2db620, 0x2DB620u, 0x7B0B90u)) {
        return;
    }
label_7b0b90:
    // 0x7b0b90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7b0b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b0b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b0b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b0b98: 0x3e00008  jr          $ra
    ctx->pc = 0x7B0B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0B98u;
        // 0x7b0b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B0B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B0BA0u;
}
} // namespace gh_event
