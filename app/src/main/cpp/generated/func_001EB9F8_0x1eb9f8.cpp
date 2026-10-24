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

// Function: func_001EB9F8
// Address: 0x1eb9f8 - 0x1eba20
void func_001EB9F8_0x1eb9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EB9F8_0x1eb9f8");
#endif

    switch (ctx->pc) {
        case 0x1eba10u: goto label_1eba10;
        default: break;
    }

    ctx->pc = 0x1eb9f8u;

    // 0x1eb9f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eb9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eb9fc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1eb9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1eba00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eba00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eba04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eba04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eba08: 0xc04e350  jal         func_138D40
    ctx->pc = 0x1EBA08u;
    SET_GPR_U32(ctx, 31, 0x1EBA10u);
    ctx->pc = 0x1EBA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBA08u;
    // 0x1eba0c: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D40u, 0x1EBA08u, 0x1EBA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBA10u;
label_1eba10:
    // 0x1eba10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eba10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eba14: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA14u;
        // 0x1eba18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBA1Cu;
    // 0x1eba1c: 0x0  nop
    ctx->pc = 0x1eba1cu;
    // NOP
    ctx->pc = 0x1eba20u;
}
