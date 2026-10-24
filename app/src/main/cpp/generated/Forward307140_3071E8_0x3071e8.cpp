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

// Function: Forward307140_3071E8
// Address: 0x3071e8 - 0x307208
void Forward307140_3071E8_0x3071e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward307140_3071E8_0x3071e8");
#endif

    switch (ctx->pc) {
        case 0x3071fcu: goto label_3071fc;
        default: break;
    }

    ctx->pc = 0x3071e8u;

    // 0x3071e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3071e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3071ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3071ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3071f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3071f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3071f4: 0xc0c1c50  jal         func_307140
    ctx->pc = 0x3071F4u;
    SET_GPR_U32(ctx, 31, 0x3071FCu);
    ctx->pc = 0x3071F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3071F4u;
    // 0x3071f8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x307140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307140u, 0x3071F4u, 0x3071FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3071FCu;
label_3071fc:
    // 0x3071fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3071fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307200: 0x3e00008  jr          $ra
    ctx->pc = 0x307200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307200u;
        // 0x307204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307208u;
}
