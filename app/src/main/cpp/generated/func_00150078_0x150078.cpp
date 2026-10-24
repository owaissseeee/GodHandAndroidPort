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

// Function: func_00150078
// Address: 0x150078 - 0x150098
void func_00150078_0x150078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00150078_0x150078");
#endif

    switch (ctx->pc) {
        case 0x15008cu: goto label_15008c;
        default: break;
    }

    ctx->pc = 0x150078u;

    // 0x150078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15007c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x15007cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x150080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150084: 0xc054106  jal         func_150418
    ctx->pc = 0x150084u;
    SET_GPR_U32(ctx, 31, 0x15008Cu);
    ctx->pc = 0x150088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150084u;
    // 0x150088: 0x24846470  addiu       $a0, $a0, 0x6470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150418u, 0x150084u, 0x15008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15008Cu;
label_15008c:
    // 0x15008c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15008cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150090: 0x3e00008  jr          $ra
    ctx->pc = 0x150090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150090u;
        // 0x150094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150098u;
}
