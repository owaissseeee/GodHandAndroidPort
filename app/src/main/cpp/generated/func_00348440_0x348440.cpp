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

// Function: func_00348440
// Address: 0x348440 - 0x348498
void func_00348440_0x348440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348440_0x348440");
#endif

    switch (ctx->pc) {
        case 0x348440u: goto label_348440;
        case 0x348444u: goto label_348444;
        case 0x348448u: goto label_348448;
        case 0x34844cu: goto label_34844c;
        case 0x348450u: goto label_348450;
        case 0x348454u: goto label_348454;
        case 0x348458u: goto label_348458;
        case 0x34845cu: goto label_34845c;
        case 0x348460u: goto label_348460;
        case 0x348464u: goto label_348464;
        case 0x348468u: goto label_348468;
        case 0x34846cu: goto label_34846c;
        case 0x348470u: goto label_348470;
        case 0x348474u: goto label_348474;
        case 0x348478u: goto label_348478;
        case 0x34847cu: goto label_34847c;
        case 0x348480u: goto label_348480;
        case 0x348484u: goto label_348484;
        case 0x348488u: goto label_348488;
        case 0x34848cu: goto label_34848c;
        case 0x348490u: goto label_348490;
        case 0x348494u: goto label_348494;
        default: break;
    }

    ctx->pc = 0x348440u;

label_348440:
    // 0x348440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x348440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_348444:
    // 0x348444: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x348444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_348448:
    // 0x348448: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x348448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_34844c:
    // 0x34844c: 0xc0d225a  jal         func_348968
label_348450:
    if (ctx->pc == 0x348450u) {
        ctx->pc = 0x348450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34844Cu;
        // 0x348450: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348454u;
        goto label_348454;
    }
    ctx->pc = 0x34844Cu;
    SET_GPR_U32(ctx, 31, 0x348454u);
    ctx->pc = 0x348450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34844Cu;
    // 0x348450: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348968u, 0x34844Cu, 0x348454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348454u;
label_348454:
    // 0x348454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x348454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348458:
    // 0x348458: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
label_34845c:
    if (ctx->pc == 0x34845Cu) {
        ctx->pc = 0x34845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348458u;
        // 0x34845c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348460u;
        goto label_348460;
    }
    ctx->pc = 0x348458u;
    {
        const bool branch_taken_0x348458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x348458) {
            ctx->pc = 0x34845Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348458u;
            // 0x34845c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348488u;
            goto label_348488;
        }
    }
    ctx->pc = 0x348460u;
label_348460:
    // 0x348460: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x348460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_348464:
    // 0x348464: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x348464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_348468:
    // 0x348468: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_34846c:
    if (ctx->pc == 0x34846Cu) {
        ctx->pc = 0x34846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348468u;
        // 0x34846c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348470u;
        goto label_348470;
    }
    ctx->pc = 0x348468u;
    {
        const bool branch_taken_0x348468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348468u;
        // 0x34846c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348468) {
            ctx->pc = 0x348484u;
            goto label_348484;
        }
    }
    ctx->pc = 0x348470u;
label_348470:
    // 0x348470: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x348470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_348474:
    // 0x348474: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_348478:
    if (ctx->pc == 0x348478u) {
        ctx->pc = 0x348478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348474u;
        // 0x348478: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34847Cu;
        goto label_34847c;
    }
    ctx->pc = 0x348474u;
    {
        const bool branch_taken_0x348474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x348474) {
            ctx->pc = 0x348478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348474u;
            // 0x348478: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348488u;
            goto label_348488;
        }
    }
    ctx->pc = 0x34847Cu;
label_34847c:
    // 0x34847c: 0x40f809  jalr        $v0
label_348480:
    if (ctx->pc == 0x348480u) {
        ctx->pc = 0x348484u;
        goto label_348484;
    }
    ctx->pc = 0x34847Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x348484u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34847Cu, 0x348484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x348484u;
label_348484:
    // 0x348484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x348484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_348488:
    // 0x348488: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x348488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_34848c:
    // 0x34848c: 0x3e00008  jr          $ra
label_348490:
    if (ctx->pc == 0x348490u) {
        ctx->pc = 0x348490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34848Cu;
        // 0x348490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348494u;
        goto label_348494;
    }
    ctx->pc = 0x34848Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34848Cu;
        // 0x348490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34848Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348494u;
label_348494:
    // 0x348494: 0x0  nop
    ctx->pc = 0x348494u;
    // NOP
    ctx->pc = 0x348498u;
}
