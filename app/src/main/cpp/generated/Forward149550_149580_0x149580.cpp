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

// Function: Forward149550_149580
// Address: 0x149580 - 0x1495a0
void Forward149550_149580_0x149580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward149550_149580_0x149580");
#endif

    switch (ctx->pc) {
        case 0x149594u: goto label_149594;
        default: break;
    }

    ctx->pc = 0x149580u;

    // 0x149580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x149584: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x149584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14958c: 0xc052554  jal         func_149550
    ctx->pc = 0x14958Cu;
    SET_GPR_U32(ctx, 31, 0x149594u);
    ctx->pc = 0x149590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14958Cu;
    // 0x149590: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x149550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149550u, 0x14958Cu, 0x149594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149594u;
label_149594:
    // 0x149594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149598: 0x3e00008  jr          $ra
    ctx->pc = 0x149598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149598u;
        // 0x14959c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1495A0u;
}
