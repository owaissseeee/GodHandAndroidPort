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

// Function: func_002BB138
// Address: 0x2bb138 - 0x2bb160
void func_002BB138_0x2bb138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BB138_0x2bb138");
#endif

    switch (ctx->pc) {
        case 0x2bb148u: goto label_2bb148;
        default: break;
    }

    ctx->pc = 0x2bb138u;

    // 0x2bb138: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bb138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bb13c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bb13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bb140: 0xc0aec1a  jal         func_2BB068
    ctx->pc = 0x2BB140u;
    SET_GPR_U32(ctx, 31, 0x2BB148u);
    ctx->pc = 0x2BB068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB068u, 0x2BB140u, 0x2BB148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB148u;
label_2bb148:
    // 0x2bb148: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BB148u;
    {
        const bool branch_taken_0x2bb148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb148) {
            ctx->pc = 0x2BB14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB148u;
            // 0x2bb14c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB154u;
            goto label_2bb154;
        }
    }
    ctx->pc = 0x2BB150u;
    // 0x2bb150: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bb150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb154:
    // 0x2bb154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bb154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb158: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB158u;
        // 0x2bb15c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB160u;
}
