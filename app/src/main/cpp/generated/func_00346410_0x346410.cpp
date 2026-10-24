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

// Function: func_00346410
// Address: 0x346410 - 0x346450
void func_00346410_0x346410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346410_0x346410");
#endif

    switch (ctx->pc) {
        case 0x346410u: goto label_346410;
        case 0x346414u: goto label_346414;
        case 0x346418u: goto label_346418;
        case 0x34641cu: goto label_34641c;
        case 0x346420u: goto label_346420;
        case 0x346424u: goto label_346424;
        case 0x346428u: goto label_346428;
        case 0x34642cu: goto label_34642c;
        case 0x346430u: goto label_346430;
        case 0x346434u: goto label_346434;
        case 0x346438u: goto label_346438;
        case 0x34643cu: goto label_34643c;
        case 0x346440u: goto label_346440;
        case 0x346444u: goto label_346444;
        case 0x346448u: goto label_346448;
        case 0x34644cu: goto label_34644c;
        default: break;
    }

    ctx->pc = 0x346410u;

label_346410:
    // 0x346410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_346414:
    // 0x346414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x346414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_346418:
    // 0x346418: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x346418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_34641c:
    // 0x34641c: 0xc0d18fe  jal         func_3463F8
label_346420:
    if (ctx->pc == 0x346420u) {
        ctx->pc = 0x346420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34641Cu;
        // 0x346420: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346424u;
        goto label_346424;
    }
    ctx->pc = 0x34641Cu;
    SET_GPR_U32(ctx, 31, 0x346424u);
    ctx->pc = 0x346420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34641Cu;
    // 0x346420: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3463F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3463F8u, 0x34641Cu, 0x346424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346424u;
label_346424:
    // 0x346424: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x346424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_346428:
    // 0x346428: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x346428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34642c:
    // 0x34642c: 0x8c62e07c  lw          $v0, -0x1F84($v1)
    ctx->pc = 0x34642cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959228)));
label_346430:
    // 0x346430: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_346434:
    if (ctx->pc == 0x346434u) {
        ctx->pc = 0x346434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346430u;
        // 0x346434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346438u;
        goto label_346438;
    }
    ctx->pc = 0x346430u;
    {
        const bool branch_taken_0x346430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346430u;
        // 0x346434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346430) {
            ctx->pc = 0x346440u;
            goto label_346440;
        }
    }
    ctx->pc = 0x346438u;
label_346438:
    // 0x346438: 0x40f809  jalr        $v0
label_34643c:
    if (ctx->pc == 0x34643Cu) {
        ctx->pc = 0x346440u;
        goto label_346440;
    }
    ctx->pc = 0x346438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x346440u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346438u, 0x346440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x346440u;
label_346440:
    // 0x346440: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_346444:
    // 0x346444: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x346444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_346448:
    // 0x346448: 0x3e00008  jr          $ra
label_34644c:
    if (ctx->pc == 0x34644Cu) {
        ctx->pc = 0x34644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346448u;
        // 0x34644c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346450u;
        goto label_fallthrough_0x346448;
    }
    ctx->pc = 0x346448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346448u;
        // 0x34644c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x346448:
    ctx->pc = 0x346450u;
}
