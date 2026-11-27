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

// Function: Poker_ClearPokerCamera
// Address: 0x1dbdf0 - 0x1dbe18
void Poker_ClearPokerCamera_0x1dbdf0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Poker_ClearPokerCamera_0x1dbdf0");
#endif

    if (__builtin_expect(ctx->pc != 0x1dbdf0u, 0)) {
        switch (ctx->pc) {
            case 0x1dbe08u: goto label_1dbe08;
            default: break;
        }
    }


    // 0x1dbdf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbdf4: 0x3c040046  lui         $a0, 0x46
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1dbdf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbdfc: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe00: 0xc04e350  jal         func_138D40
    SET_GPR_U32(ctx, 31, 0x1DBE08u);
    ctx->pc = 0x1DBE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBE00u;
    // 0x1dbe04: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cCamManager_setPlCamera_0x138d40, 0x138d40u, 0x1dbe08u)) {
        return;
    }
label_1dbe08:
    // 0x1dbe08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbe08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbe0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE0Cu;
        // 0x1dbe10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x1dbe14: 0x0  nop
    // NOP
    ctx->pc = 0x1dbe18u;
}