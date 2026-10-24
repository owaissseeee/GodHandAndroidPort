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

// Function: func_0017EAD0
// Address: 0x17ead0 - 0x17eaf8
void func_0017EAD0_0x17ead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017EAD0_0x17ead0");
#endif

    switch (ctx->pc) {
        case 0x17eaecu: goto label_17eaec;
        default: break;
    }

    ctx->pc = 0x17ead0u;

    // 0x17ead0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17ead0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ead4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x17ead8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ead8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17eadc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x17eadcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eae0: 0x24422178  addiu       $v0, $v0, 0x2178
    ctx->pc = 0x17eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8568));
    // 0x17eae4: 0xc06f594  jal         func_1BD650
    ctx->pc = 0x17EAE4u;
    SET_GPR_U32(ctx, 31, 0x17EAECu);
    ctx->pc = 0x17EAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EAE4u;
    // 0x17eae8: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD650u, 0x17EAE4u, 0x17EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EAECu;
label_17eaec:
    // 0x17eaec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17eaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17eaf0: 0x3e00008  jr          $ra
    ctx->pc = 0x17EAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EAF0u;
        // 0x17eaf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EAF8u;
}
