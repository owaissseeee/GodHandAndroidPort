#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: releaseWork__11cEventActor
// Address: 0x7a94a8 - 0x7a94e0
void releaseWork__11cEventActor_0x7a94a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("releaseWork__11cEventActor_0x7a94a8");
#endif

    switch (ctx->pc) {
        case 0x7a94ccu: goto label_7a94cc;
        default: break;
    }

    ctx->pc = 0x7a94a8u;

    // 0x7a94a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7a94a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7a94ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7a94acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7a94b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7a94b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7a94b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7a94b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a94b8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x7a94b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x7a94bc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x7A94BCu;
    {
        const bool branch_taken_0x7a94bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x7a94bc) {
            ctx->pc = 0x7A94C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A94BCu;
            // 0x7a94c0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A94D0u;
            goto label_7a94d0;
        }
    }
    ctx->pc = 0x7A94C4u;
    // 0x7a94c4: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x7A94C4u;
    SET_GPR_U32(ctx, 31, 0x7A94CCu);
    ctx->pc = 0x7A94C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A94C4u;
    // 0x7a94c8: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x7A94C4u, 0x7A94CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A94CCu;
label_7a94cc:
    // 0x7a94cc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x7a94ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_7a94d0:
    // 0x7a94d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7a94d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7a94d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7a94d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7a94d8: 0x3e00008  jr          $ra
    ctx->pc = 0x7A94D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A94D8u;
        // 0x7a94dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A94D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A94E0u;
}
} // namespace gh_event
