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

// Function: func_001D4980
// Address: 0x1d4980 - 0x1d49b0
void func_001D4980_0x1d4980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D4980_0x1d4980");
#endif

    switch (ctx->pc) {
        case 0x1d49a0u: goto label_1d49a0;
        default: break;
    }

    ctx->pc = 0x1d4980u;

    // 0x1d4980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d4980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d4984: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d4984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d4988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d498c: 0x948217fc  lhu         $v0, 0x17FC($a0)
    ctx->pc = 0x1d498cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6140)));
    // 0x1d4990: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4990u;
    {
        const bool branch_taken_0x1d4990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d4990) {
            ctx->pc = 0x1D4994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4990u;
            // 0x1d4994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D49A4u;
            goto label_1d49a4;
        }
    }
    ctx->pc = 0x1D4998u;
    // 0x1d4998: 0xc0751c8  jal         func_1D4720
    ctx->pc = 0x1D4998u;
    SET_GPR_U32(ctx, 31, 0x1D49A0u);
    ctx->pc = 0x1D4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4720u, 0x1D4998u, 0x1D49A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D49A0u;
label_1d49a0:
    // 0x1d49a0: 0x28420016  slti        $v0, $v0, 0x16
    ctx->pc = 0x1d49a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)22) ? 1 : 0);
label_1d49a4:
    // 0x1d49a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d49a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d49a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D49A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49A8u;
        // 0x1d49ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D49A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D49B0u;
}
