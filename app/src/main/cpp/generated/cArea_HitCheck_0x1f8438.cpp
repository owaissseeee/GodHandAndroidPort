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

// Function: cArea_HitCheck
// Address: 0x1f8438 - 0x1f8488
void cArea_HitCheck_0x1f8438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cArea_HitCheck_0x1f8438");
#endif

    switch (ctx->pc) {
        case 0x1f8468u: goto label_1f8468;
        case 0x1f8478u: goto label_1f8478;
        default: break;
    }

    ctx->pc = 0x1f8438u;

    // 0x1f8438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f843c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f843cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f8444: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x1f8444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1f8448: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8448u;
    {
        const bool branch_taken_0x1f8448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8448u;
        // 0x1f844c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8448) {
            ctx->pc = 0x1F8460u;
            goto label_1f8460;
        }
    }
    ctx->pc = 0x1F8450u;
    // 0x1f8450: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F8450u;
    {
        const bool branch_taken_0x1f8450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F8454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8450u;
        // 0x1f8454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8450) {
            ctx->pc = 0x1F8470u;
            goto label_1f8470;
        }
    }
    ctx->pc = 0x1F8458u;
    // 0x1f8458: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8458u;
    {
        const bool branch_taken_0x1f8458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8458u;
        // 0x1f845c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8458) {
            ctx->pc = 0x1F847Cu;
            goto label_1f847c;
        }
    }
    ctx->pc = 0x1F8460u;
label_1f8460:
    // 0x1f8460: 0xc07e174  jal         func_1F85D0
    ctx->pc = 0x1F8460u;
    SET_GPR_U32(ctx, 31, 0x1F8468u);
    ctx->pc = 0x1F85D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F85D0u, 0x1F8460u, 0x1F8468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8468u;
label_1f8468:
    // 0x1f8468: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8468u;
    {
        const bool branch_taken_0x1f8468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8468u;
        // 0x1f846c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8468) {
            ctx->pc = 0x1F847Cu;
            goto label_1f847c;
        }
    }
    ctx->pc = 0x1F8470u;
label_1f8470:
    // 0x1f8470: 0xc07e204  jal         func_1F8810
    ctx->pc = 0x1F8470u;
    SET_GPR_U32(ctx, 31, 0x1F8478u);
    ctx->pc = 0x1F8810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8810u, 0x1F8470u, 0x1F8478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8478u;
label_1f8478:
    // 0x1f8478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f847c:
    // 0x1f847c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F847Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F847Cu;
        // 0x1f8480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F847Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8484u;
    // 0x1f8484: 0x0  nop
    ctx->pc = 0x1f8484u;
    // NOP
    ctx->pc = 0x1f8488u;
}
