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

// Function: func_0035D0E0
// Address: 0x35d0e0 - 0x35d110
void func_0035D0E0_0x35d0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035D0E0_0x35d0e0");
#endif

    switch (ctx->pc) {
        case 0x35d100u: goto label_35d100;
        default: break;
    }

    ctx->pc = 0x35d0e0u;

    // 0x35d0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35d0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35d0e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x35d0e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d0e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d0ec: 0x24453678  addiu       $a1, $v0, 0x3678
    ctx->pc = 0x35d0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 13944));
    // 0x35d0f0: 0x24422150  addiu       $v0, $v0, 0x2150
    ctx->pc = 0x35d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8528));
    // 0x35d0f4: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x35d0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x35d0f8: 0xc0d7444  jal         func_35D110
    ctx->pc = 0x35D0F8u;
    SET_GPR_U32(ctx, 31, 0x35D100u);
    ctx->pc = 0x35D0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D0F8u;
    // 0x35d0fc: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D110u, 0x35D0F8u, 0x35D100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D100u;
label_35d100:
    // 0x35d100: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d108: 0x3e00008  jr          $ra
    ctx->pc = 0x35D108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D108u;
        // 0x35d10c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D110u;
}
