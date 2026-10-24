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

// Function: Tramp___as__22_IO_istream_withassignR7istream_389960
// Address: 0x389960 - 0x389980
void Tramp___as__22_IO_istream_withassignR7istream_389960_0x389960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp___as__22_IO_istream_withassignR7istream_389960_0x389960");
#endif

    switch (ctx->pc) {
        case 0x389970u: goto label_389970;
        default: break;
    }

    ctx->pc = 0x389960u;

    // 0x389960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x389960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x389964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x389964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x389968: 0xc0e3c50  jal         func_38F140
    ctx->pc = 0x389968u;
    SET_GPR_U32(ctx, 31, 0x389970u);
    ctx->pc = 0x38F140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F140u, 0x389968u, 0x389970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389970u;
label_389970:
    // 0x389970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x389970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389974: 0x3e00008  jr          $ra
    ctx->pc = 0x389974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389974u;
        // 0x389978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38997Cu;
    // 0x38997c: 0x0  nop
    ctx->pc = 0x38997cu;
    // NOP
    ctx->pc = 0x389980u;
}
