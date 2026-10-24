#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: clearReserveEventWork__6cEvent
// Address: 0x79caf0 - 0x79cb18
void clearReserveEventWork__6cEvent_0x79caf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("clearReserveEventWork__6cEvent_0x79caf0");
#endif

    switch (ctx->pc) {
        case 0x79cb08u: goto label_79cb08;
        default: break;
    }

    ctx->pc = 0x79caf0u;

    // 0x79caf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79caf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79caf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79caf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79caf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79caf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79cafc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x79cafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x79cb00: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x79CB00u;
    SET_GPR_U32(ctx, 31, 0x79CB08u);
    ctx->pc = 0x79CB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CB00u;
    // 0x79cb04: 0x8c840038  lw          $a0, 0x38($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x79CB00u, 0x79CB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79CB08u;
label_79cb08:
    // 0x79cb08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79cb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79cb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x79CB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CB0Cu;
        // 0x79cb10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CB14u;
    // 0x79cb14: 0x0  nop
    ctx->pc = 0x79cb14u;
    // NOP
    ctx->pc = 0x79cb18u;
}
} // namespace gh_r022
