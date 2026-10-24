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

// Function: func_001DF820
// Address: 0x1df820 - 0x1df858
void func_001DF820_0x1df820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DF820_0x1df820");
#endif

    switch (ctx->pc) {
        case 0x1df83cu: goto label_1df83c;
        case 0x1df84cu: goto label_1df84c;
        default: break;
    }

    ctx->pc = 0x1df820u;

    // 0x1df820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1df820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1df824: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF824u;
    {
        const bool branch_taken_0x1df824 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF824u;
        // 0x1df828: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df824) {
            ctx->pc = 0x1DF844u;
            goto label_1df844;
        }
    }
    ctx->pc = 0x1DF82Cu;
    // 0x1df82c: 0x24840440  addiu       $a0, $a0, 0x440
    ctx->pc = 0x1df82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1088));
    // 0x1df830: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1df830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1df834: 0xc0b59ec  jal         func_2D67B0
    ctx->pc = 0x1DF834u;
    SET_GPR_U32(ctx, 31, 0x1DF83Cu);
    ctx->pc = 0x1DF838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF834u;
    // 0x1df838: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D67B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D67B0u, 0x1DF834u, 0x1DF83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF83Cu;
label_1df83c:
    // 0x1df83c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF83Cu;
    {
        const bool branch_taken_0x1df83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF83Cu;
        // 0x1df840: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df83c) {
            ctx->pc = 0x1DF850u;
            goto label_1df850;
        }
    }
    ctx->pc = 0x1DF844u;
label_1df844:
    // 0x1df844: 0xc0b5a1c  jal         func_2D6870
    ctx->pc = 0x1DF844u;
    SET_GPR_U32(ctx, 31, 0x1DF84Cu);
    ctx->pc = 0x1DF848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF844u;
    // 0x1df848: 0x24840440  addiu       $a0, $a0, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6870u, 0x1DF844u, 0x1DF84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF84Cu;
label_1df84c:
    // 0x1df84c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1df850:
    // 0x1df850: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF850u;
        // 0x1df854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF858u;
}
