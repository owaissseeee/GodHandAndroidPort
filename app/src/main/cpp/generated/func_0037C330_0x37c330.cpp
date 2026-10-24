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

// Function: func_0037C330
// Address: 0x37c330 - 0x37c388
void func_0037C330_0x37c330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037C330_0x37c330");
#endif

    switch (ctx->pc) {
        case 0x37c358u: goto label_37c358;
        case 0x37c368u: goto label_37c368;
        case 0x37c378u: goto label_37c378;
        default: break;
    }

    ctx->pc = 0x37c330u;

    // 0x37c330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37c330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37c334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37c334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37c338: 0x8482000e  lh          $v0, 0xE($a0)
    ctx->pc = 0x37c338u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x37c33c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x37C33Cu;
    {
        const bool branch_taken_0x37c33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37c33c) {
            ctx->pc = 0x37C370u;
            goto label_37c370;
        }
    }
    ctx->pc = 0x37C344u;
    // 0x37c344: 0x84820010  lh          $v0, 0x10($a0)
    ctx->pc = 0x37c344u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x37c348: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37C348u;
    {
        const bool branch_taken_0x37c348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37c348) {
            ctx->pc = 0x37C360u;
            goto label_37c360;
        }
    }
    ctx->pc = 0x37C350u;
    // 0x37c350: 0xc0df0e2  jal         func_37C388
    ctx->pc = 0x37C350u;
    SET_GPR_U32(ctx, 31, 0x37C358u);
    ctx->pc = 0x37C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C388u, 0x37C350u, 0x37C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C358u;
label_37c358:
    // 0x37c358: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37C358u;
    {
        const bool branch_taken_0x37c358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C358u;
        // 0x37c35c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c358) {
            ctx->pc = 0x37C37Cu;
            goto label_37c37c;
        }
    }
    ctx->pc = 0x37C360u;
label_37c360:
    // 0x37c360: 0xc0df108  jal         func_37C420
    ctx->pc = 0x37C360u;
    SET_GPR_U32(ctx, 31, 0x37C368u);
    ctx->pc = 0x37C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C420u, 0x37C360u, 0x37C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C368u;
label_37c368:
    // 0x37c368: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37C368u;
    {
        const bool branch_taken_0x37c368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C368u;
        // 0x37c36c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c368) {
            ctx->pc = 0x37C37Cu;
            goto label_37c37c;
        }
    }
    ctx->pc = 0x37C370u;
label_37c370:
    // 0x37c370: 0xc0df130  jal         func_37C4C0
    ctx->pc = 0x37C370u;
    SET_GPR_U32(ctx, 31, 0x37C378u);
    ctx->pc = 0x37C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C4C0u, 0x37C370u, 0x37C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C378u;
label_37c378:
    // 0x37c378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37c378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37c37c:
    // 0x37c37c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37c37cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c380: 0x3e00008  jr          $ra
    ctx->pc = 0x37C380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C380u;
        // 0x37c384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C388u;
}
