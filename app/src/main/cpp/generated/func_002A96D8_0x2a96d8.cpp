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

// Function: func_002A96D8
// Address: 0x2a96d8 - 0x2a9708
void func_002A96D8_0x2a96d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A96D8_0x2a96d8");
#endif

    switch (ctx->pc) {
        case 0x2a96f8u: goto label_2a96f8;
        default: break;
    }

    ctx->pc = 0x2a96d8u;

    // 0x2a96d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a96d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a96dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a96dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a96e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a96e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a96e4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2a96e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2a96e8: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x2a96e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x2a96ec: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x2a96ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x2a96f0: 0xc0aa5c2  jal         func_2A9708
    ctx->pc = 0x2A96F0u;
    SET_GPR_U32(ctx, 31, 0x2A96F8u);
    ctx->pc = 0x2A96F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A96F0u;
    // 0x2a96f4: 0xac48000c  sw          $t0, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9708u, 0x2A96F0u, 0x2A96F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A96F8u;
label_2a96f8:
    // 0x2a96f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a96f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a96fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A96FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A96FCu;
        // 0x2a9700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A96FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9704u;
    // 0x2a9704: 0x0  nop
    ctx->pc = 0x2a9704u;
    // NOP
    ctx->pc = 0x2a9708u;
}
