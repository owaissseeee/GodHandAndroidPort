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

// Function: UpdateSequenceNode_373430
// Address: 0x373430 - 0x373488
void UpdateSequenceNode_373430_0x373430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateSequenceNode_373430_0x373430");
#endif

    switch (ctx->pc) {
        case 0x373444u: goto label_373444;
        case 0x373454u: goto label_373454;
        case 0x373468u: goto label_373468;
        case 0x373478u: goto label_373478;
        default: break;
    }

    ctx->pc = 0x373430u;

    // 0x373430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x373430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x373434: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x373434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x373438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37343c: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x37343Cu;
    SET_GPR_U32(ctx, 31, 0x373444u);
    ctx->pc = 0x373440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37343Cu;
    // 0x373440: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x37343Cu, 0x373444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373444u;
label_373444:
    // 0x373444: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x373444u;
    {
        const bool branch_taken_0x373444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x373444) {
            ctx->pc = 0x373448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373444u;
            // 0x373448: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37347Cu;
            goto label_37347c;
        }
    }
    ctx->pc = 0x37344Cu;
    // 0x37344c: 0xc0dcec8  jal         func_373B20
    ctx->pc = 0x37344Cu;
    SET_GPR_U32(ctx, 31, 0x373454u);
    ctx->pc = 0x373450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37344Cu;
    // 0x373450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B20u, 0x37344Cu, 0x373454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373454u;
label_373454:
    // 0x373454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x373454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373458: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x373458u;
    {
        const bool branch_taken_0x373458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x373458) {
            ctx->pc = 0x373470u;
            goto label_373470;
        }
    }
    ctx->pc = 0x373460u;
    // 0x373460: 0xc0dd152  jal         func_374548
    ctx->pc = 0x373460u;
    SET_GPR_U32(ctx, 31, 0x373468u);
    ctx->pc = 0x373464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373460u;
    // 0x373464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374548u, 0x373460u, 0x373468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373468u;
label_373468:
    // 0x373468: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x373468u;
    {
        const bool branch_taken_0x373468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373468u;
        // 0x37346c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373468) {
            ctx->pc = 0x37347Cu;
            goto label_37347c;
        }
    }
    ctx->pc = 0x373470u;
label_373470:
    // 0x373470: 0xc0dcfde  jal         func_373F78
    ctx->pc = 0x373470u;
    SET_GPR_U32(ctx, 31, 0x373478u);
    ctx->pc = 0x373474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373470u;
    // 0x373474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373F78u, 0x373470u, 0x373478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373478u;
label_373478:
    // 0x373478: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x373478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37347c:
    // 0x37347c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37347cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373480: 0x3e00008  jr          $ra
    ctx->pc = 0x373480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373480u;
        // 0x373484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373488u;
}
