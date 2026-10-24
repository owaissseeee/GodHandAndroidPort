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

// Function: cArea_HitCheck_1F83E8
// Address: 0x1f83e8 - 0x1f8438
void cArea_HitCheck_1F83E8_0x1f83e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cArea_HitCheck_1F83E8_0x1f83e8");
#endif

    switch (ctx->pc) {
        case 0x1f8418u: goto label_1f8418;
        case 0x1f8428u: goto label_1f8428;
        default: break;
    }

    ctx->pc = 0x1f83e8u;

    // 0x1f83e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f83e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f83ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f83ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f83f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f83f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f83f4: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x1f83f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1f83f8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F83F8u;
    {
        const bool branch_taken_0x1f83f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F83FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83F8u;
        // 0x1f83fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83f8) {
            ctx->pc = 0x1F8410u;
            goto label_1f8410;
        }
    }
    ctx->pc = 0x1F8400u;
    // 0x1f8400: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F8400u;
    {
        const bool branch_taken_0x1f8400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F8404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8400u;
        // 0x1f8404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8400) {
            ctx->pc = 0x1F8420u;
            goto label_1f8420;
        }
    }
    ctx->pc = 0x1F8408u;
    // 0x1f8408: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8408u;
    {
        const bool branch_taken_0x1f8408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8408u;
        // 0x1f840c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8408) {
            ctx->pc = 0x1F842Cu;
            goto label_1f842c;
        }
    }
    ctx->pc = 0x1F8410u;
label_1f8410:
    // 0x1f8410: 0xc07e122  jal         func_1F8488
    ctx->pc = 0x1F8410u;
    SET_GPR_U32(ctx, 31, 0x1F8418u);
    ctx->pc = 0x1F8488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8488u, 0x1F8410u, 0x1F8418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8418u;
label_1f8418:
    // 0x1f8418: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8418u;
    {
        const bool branch_taken_0x1f8418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8418u;
        // 0x1f841c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8418) {
            ctx->pc = 0x1F842Cu;
            goto label_1f842c;
        }
    }
    ctx->pc = 0x1F8420u;
label_1f8420:
    // 0x1f8420: 0xc07e154  jal         func_1F8550
    ctx->pc = 0x1F8420u;
    SET_GPR_U32(ctx, 31, 0x1F8428u);
    ctx->pc = 0x1F8550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8550u, 0x1F8420u, 0x1F8428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8428u;
label_1f8428:
    // 0x1f8428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f842c:
    // 0x1f842c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F842Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F842Cu;
        // 0x1f8430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F842Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8434u;
    // 0x1f8434: 0x0  nop
    ctx->pc = 0x1f8434u;
    // NOP
    ctx->pc = 0x1f8438u;
}
