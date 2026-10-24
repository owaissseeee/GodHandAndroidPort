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

// Function: func_00150098
// Address: 0x150098 - 0x1500c0
void func_00150098_0x150098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00150098_0x150098");
#endif

    switch (ctx->pc) {
        case 0x1500b0u: goto label_1500b0;
        default: break;
    }

    ctx->pc = 0x150098u;

    // 0x150098: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x150098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15009c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15009cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1500a0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1500a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1500a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1500a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1500a8: 0xc05412c  jal         func_1504B0
    ctx->pc = 0x1500A8u;
    SET_GPR_U32(ctx, 31, 0x1500B0u);
    ctx->pc = 0x1500ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1500A8u;
    // 0x1500ac: 0x24846470  addiu       $a0, $a0, 0x6470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1504B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1504B0u, 0x1500A8u, 0x1500B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1500B0u;
label_1500b0:
    // 0x1500b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1500b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1500b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1500B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1500B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500B4u;
        // 0x1500b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1500B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1500BCu;
    // 0x1500bc: 0x0  nop
    ctx->pc = 0x1500bcu;
    // NOP
    ctx->pc = 0x1500c0u;
}
