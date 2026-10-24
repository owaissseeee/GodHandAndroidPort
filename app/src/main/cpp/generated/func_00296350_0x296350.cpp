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

// Function: func_00296350
// Address: 0x296350 - 0x296370
void func_00296350_0x296350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00296350_0x296350");
#endif

    switch (ctx->pc) {
        case 0x296360u: goto label_296360;
        default: break;
    }

    ctx->pc = 0x296350u;

    // 0x296350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x296354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296358: 0xc0a5d98  jal         func_297660
    ctx->pc = 0x296358u;
    SET_GPR_U32(ctx, 31, 0x296360u);
    ctx->pc = 0x297660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297660u, 0x296358u, 0x296360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296360u;
label_296360:
    // 0x296360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296364: 0x3e00008  jr          $ra
    ctx->pc = 0x296364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296364u;
        // 0x296368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29636Cu;
    // 0x29636c: 0x0  nop
    ctx->pc = 0x29636cu;
    // NOP
    ctx->pc = 0x296370u;
}
