#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: debugGetEventLength__C9cEventEnv
// Address: 0x7aec80 - 0x7aecb8
void debugGetEventLength__C9cEventEnv_0x7aec80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugGetEventLength__C9cEventEnv_0x7aec80");
#endif

    switch (ctx->pc) {
        case 0x7aec98u: goto label_7aec98;
        default: break;
    }

    ctx->pc = 0x7aec80u;

    // 0x7aec80: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x7aec80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x7aec84: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x7aec84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7aec88: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x7AEC88u;
    {
        const bool branch_taken_0x7aec88 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x7aec88) {
            ctx->pc = 0x7AECB0u;
            goto label_7aecb0;
        }
    }
    ctx->pc = 0x7AEC90u;
    // 0x7aec90: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7aec90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7aec94: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x7aec94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_7aec98:
    // 0x7aec98: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x7aec98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7aec9c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x7aec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x7aeca0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x7aeca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x7aeca4: 0x0  nop
    ctx->pc = 0x7aeca4u;
    // NOP
    // 0x7aeca8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7AECA8u;
    {
        const bool branch_taken_0x7aeca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AECA8u;
        // 0x7aecac: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aeca8) {
            ctx->pc = 0x7AEC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7aec98;
        }
    }
    ctx->pc = 0x7AECB0u;
label_7aecb0:
    // 0x7aecb0: 0x3e00008  jr          $ra
    ctx->pc = 0x7AECB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AECB0u;
        // 0x7aecb4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AECB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AECB8u;
}
} // namespace gh_event
