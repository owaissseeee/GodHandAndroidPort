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

// Function: Forward149400_1492E8
// Address: 0x1492e8 - 0x149310
void Forward149400_1492E8_0x1492e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward149400_1492E8_0x1492e8");
#endif

    switch (ctx->pc) {
        case 0x149300u: goto label_149300;
        default: break;
    }

    ctx->pc = 0x1492e8u;

    // 0x1492e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1492e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1492ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1492f0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1492f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1492f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1492f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1492f8: 0xc052500  jal         func_149400
    ctx->pc = 0x1492F8u;
    SET_GPR_U32(ctx, 31, 0x149300u);
    ctx->pc = 0x1492FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1492F8u;
    // 0x1492fc: 0x24846448  addiu       $a0, $a0, 0x6448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149400u, 0x1492F8u, 0x149300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149300u;
label_149300:
    // 0x149300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149304: 0x3e00008  jr          $ra
    ctx->pc = 0x149304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149304u;
        // 0x149308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14930Cu;
    // 0x14930c: 0x0  nop
    ctx->pc = 0x14930cu;
    // NOP
    ctx->pc = 0x149310u;
}
