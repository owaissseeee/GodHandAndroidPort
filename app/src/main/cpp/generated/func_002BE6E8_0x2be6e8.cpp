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

// Function: func_002BE6E8
// Address: 0x2be6e8 - 0x2be708
void func_002BE6E8_0x2be6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BE6E8_0x2be6e8");
#endif

    switch (ctx->pc) {
        case 0x2be6f8u: goto label_2be6f8;
        default: break;
    }

    ctx->pc = 0x2be6e8u;

    // 0x2be6e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2be6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2be6ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be6f0: 0xc0e5356  jal         func_394D58
    ctx->pc = 0x2BE6F0u;
    SET_GPR_U32(ctx, 31, 0x2BE6F8u);
    ctx->pc = 0x2BE6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE6F0u;
    // 0x2be6f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394D58u, 0x2BE6F0u, 0x2BE6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE6F8u;
label_2be6f8:
    // 0x2be6f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE6FCu;
        // 0x2be700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE704u;
    // 0x2be704: 0x0  nop
    ctx->pc = 0x2be704u;
    // NOP
    ctx->pc = 0x2be708u;
}
