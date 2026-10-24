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

// Function: func_003483F8
// Address: 0x3483f8 - 0x348440
void func_003483F8_0x3483f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003483F8_0x3483f8");
#endif

    switch (ctx->pc) {
        case 0x3483f8u: goto label_3483f8;
        case 0x3483fcu: goto label_3483fc;
        case 0x348400u: goto label_348400;
        case 0x348404u: goto label_348404;
        case 0x348408u: goto label_348408;
        case 0x34840cu: goto label_34840c;
        case 0x348410u: goto label_348410;
        case 0x348414u: goto label_348414;
        case 0x348418u: goto label_348418;
        case 0x34841cu: goto label_34841c;
        case 0x348420u: goto label_348420;
        case 0x348424u: goto label_348424;
        case 0x348428u: goto label_348428;
        case 0x34842cu: goto label_34842c;
        case 0x348430u: goto label_348430;
        case 0x348434u: goto label_348434;
        case 0x348438u: goto label_348438;
        case 0x34843cu: goto label_34843c;
        default: break;
    }

    ctx->pc = 0x3483f8u;

label_3483f8:
    // 0x3483f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3483f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3483fc:
    // 0x3483fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3483fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_348400:
    // 0x348400: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x348400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_348404:
    // 0x348404: 0xc0d224e  jal         func_348938
label_348408:
    if (ctx->pc == 0x348408u) {
        ctx->pc = 0x348408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348404u;
        // 0x348408: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34840Cu;
        goto label_34840c;
    }
    ctx->pc = 0x348404u;
    SET_GPR_U32(ctx, 31, 0x34840Cu);
    ctx->pc = 0x348408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348404u;
    // 0x348408: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348938u, 0x348404u, 0x34840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34840Cu;
label_34840c:
    // 0x34840c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_348410:
    if (ctx->pc == 0x348410u) {
        ctx->pc = 0x348410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34840Cu;
        // 0x348410: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348414u;
        goto label_348414;
    }
    ctx->pc = 0x34840Cu;
    {
        const bool branch_taken_0x34840c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34840c) {
            ctx->pc = 0x348410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34840Cu;
            // 0x348410: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348434u;
            goto label_348434;
        }
    }
    ctx->pc = 0x348414u;
label_348414:
    // 0x348414: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_348418:
    if (ctx->pc == 0x348418u) {
        ctx->pc = 0x348418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348414u;
        // 0x348418: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34841Cu;
        goto label_34841c;
    }
    ctx->pc = 0x348414u;
    {
        const bool branch_taken_0x348414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x348414) {
            ctx->pc = 0x348418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348414u;
            // 0x348418: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348434u;
            goto label_348434;
        }
    }
    ctx->pc = 0x34841Cu;
label_34841c:
    // 0x34841c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x34841cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_348420:
    // 0x348420: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_348424:
    if (ctx->pc == 0x348424u) {
        ctx->pc = 0x348424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348420u;
        // 0x348424: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348428u;
        goto label_348428;
    }
    ctx->pc = 0x348420u;
    {
        const bool branch_taken_0x348420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x348420) {
            ctx->pc = 0x348424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348420u;
            // 0x348424: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348434u;
            goto label_348434;
        }
    }
    ctx->pc = 0x348428u;
label_348428:
    // 0x348428: 0x40f809  jalr        $v0
label_34842c:
    if (ctx->pc == 0x34842Cu) {
        ctx->pc = 0x34842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348428u;
        // 0x34842c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348430u;
        goto label_348430;
    }
    ctx->pc = 0x348428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x348430u);
        ctx->pc = 0x34842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348428u;
        // 0x34842c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348428u, 0x348430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x348430u;
label_348430:
    // 0x348430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x348430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_348434:
    // 0x348434: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x348434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_348438:
    // 0x348438: 0x3e00008  jr          $ra
label_34843c:
    if (ctx->pc == 0x34843Cu) {
        ctx->pc = 0x34843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348438u;
        // 0x34843c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348440u;
        goto label_fallthrough_0x348438;
    }
    ctx->pc = 0x348438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348438u;
        // 0x34843c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x348438:
    ctx->pc = 0x348440u;
}
