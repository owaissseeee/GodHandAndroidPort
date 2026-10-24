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

// Function: func_0036C038
// Address: 0x36c038 - 0x36c080
void func_0036C038_0x36c038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036C038_0x36c038");
#endif

    switch (ctx->pc) {
        case 0x36c058u: goto label_36c058;
        default: break;
    }

    ctx->pc = 0x36c038u;

    // 0x36c038: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x36c038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x36c03c: 0x24426ce8  addiu       $v0, $v0, 0x6CE8
    ctx->pc = 0x36c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27880));
    // 0x36c040: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x36c040u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x766D3Cu));
    // 0x36c044: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x36C044u;
    {
        const bool branch_taken_0x36c044 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x36C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C044u;
        // 0x36c048: 0x8c430058  lw          $v1, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c044) {
            ctx->pc = 0x36C074u;
            goto label_36c074;
        }
    }
    ctx->pc = 0x36C04Cu;
    // 0x36c04c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x36c04cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c050: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36c050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c054: 0x0  nop
    ctx->pc = 0x36c054u;
    // NOP
label_36c058:
    // 0x36c058: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x36c058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x36c05c: 0xac640188  sw          $a0, 0x188($v1)
    ctx->pc = 0x36c05cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 392), GPR_U32(ctx, 4));
    // 0x36c060: 0x0  nop
    ctx->pc = 0x36c060u;
    // NOP
    // 0x36c064: 0x0  nop
    ctx->pc = 0x36c064u;
    // NOP
    // 0x36c068: 0x0  nop
    ctx->pc = 0x36c068u;
    // NOP
    // 0x36c06c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36C06Cu;
    {
        const bool branch_taken_0x36c06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C06Cu;
        // 0x36c070: 0x24630440  addiu       $v1, $v1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c06c) {
            ctx->pc = 0x36C058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c058;
        }
    }
    ctx->pc = 0x36C074u;
label_36c074:
    // 0x36c074: 0x3e00008  jr          $ra
    ctx->pc = 0x36C074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C07Cu;
    // 0x36c07c: 0x0  nop
    ctx->pc = 0x36c07cu;
    // NOP
    ctx->pc = 0x36c080u;
}
