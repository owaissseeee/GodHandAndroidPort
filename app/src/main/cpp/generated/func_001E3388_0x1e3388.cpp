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

// Function: func_001E3388
// Address: 0x1e3388 - 0x1e33b0
void func_001E3388_0x1e3388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E3388_0x1e3388");
#endif

    switch (ctx->pc) {
        case 0x1e33a0u: goto label_1e33a0;
        default: break;
    }

    ctx->pc = 0x1e3388u;

    // 0x1e3388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e338c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e338cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1e3390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e3394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3398: 0xc04e350  jal         func_138D40
    ctx->pc = 0x1E3398u;
    SET_GPR_U32(ctx, 31, 0x1E33A0u);
    ctx->pc = 0x1E339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3398u;
    // 0x1e339c: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D40u, 0x1E3398u, 0x1E33A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E33A0u;
label_1e33a0:
    // 0x1e33a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e33a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e33a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E33A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E33A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33A4u;
        // 0x1e33a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E33A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E33ACu;
    // 0x1e33ac: 0x0  nop
    ctx->pc = 0x1e33acu;
    // NOP
    ctx->pc = 0x1e33b0u;
}
