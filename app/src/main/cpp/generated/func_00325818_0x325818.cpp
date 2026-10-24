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

// Function: func_00325818
// Address: 0x325818 - 0x3258b8
void func_00325818_0x325818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00325818_0x325818");
#endif

    switch (ctx->pc) {
        case 0x325840u: goto label_325840;
        case 0x325848u: goto label_325848;
        case 0x325850u: goto label_325850;
        case 0x325858u: goto label_325858;
        case 0x325860u: goto label_325860;
        case 0x325878u: goto label_325878;
        case 0x325884u: goto label_325884;
        case 0x325890u: goto label_325890;
        default: break;
    }

    ctx->pc = 0x325818u;

    // 0x325818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x325818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32581c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x32581cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x325820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325824: 0x246380a4  addiu       $v1, $v1, -0x7F5C
    ctx->pc = 0x325824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934692));
    // 0x325828: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x325828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C80A4u));
    // 0x32582c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32582cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x325830: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x325830u;
    {
        const bool branch_taken_0x325830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325830u;
        // 0x325834: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325830) {
            ctx->pc = 0x3258A0u;
            goto label_3258a0;
        }
    }
    ctx->pc = 0x325838u;
    // 0x325838: 0xc0c95f2  jal         func_3257C8
    ctx->pc = 0x325838u;
    SET_GPR_U32(ctx, 31, 0x325840u);
    ctx->pc = 0x3257C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3257C8u, 0x325838u, 0x325840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325840u;
label_325840:
    // 0x325840: 0xc0c962e  jal         func_3258B8
    ctx->pc = 0x325840u;
    SET_GPR_U32(ctx, 31, 0x325848u);
    ctx->pc = 0x3258B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3258B8u, 0x325840u, 0x325848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325848u;
label_325848:
    // 0x325848: 0xc0c9696  jal         func_325A58
    ctx->pc = 0x325848u;
    SET_GPR_U32(ctx, 31, 0x325850u);
    ctx->pc = 0x325A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325A58u, 0x325848u, 0x325850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325850u;
label_325850:
    // 0x325850: 0xc0c9662  jal         func_325988
    ctx->pc = 0x325850u;
    SET_GPR_U32(ctx, 31, 0x325858u);
    ctx->pc = 0x325988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325988u, 0x325850u, 0x325858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325858u;
label_325858:
    // 0x325858: 0xc0c96e4  jal         func_325B90
    ctx->pc = 0x325858u;
    SET_GPR_U32(ctx, 31, 0x325860u);
    ctx->pc = 0x325B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325B90u, 0x325858u, 0x325860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325860u;
label_325860:
    // 0x325860: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x325860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x325864: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x325864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x325868: 0x24428148  addiu       $v0, $v0, -0x7EB8
    ctx->pc = 0x325868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934856));
    // 0x32586c: 0x8c65f9d8  lw          $a1, -0x628($v1)
    ctx->pc = 0x32586cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3CF9D8u));
    // 0x325870: 0xc0ebecc  jal         func_3AFB30
    ctx->pc = 0x325870u;
    SET_GPR_U32(ctx, 31, 0x325878u);
    ctx->pc = 0x325874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325870u;
    // 0x325874: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB30u, 0x325870u, 0x325878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325878u;
label_325878:
    // 0x325878: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x325878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32587c: 0xc0cef06  jal         func_33BC18
    ctx->pc = 0x32587Cu;
    SET_GPR_U32(ctx, 31, 0x325884u);
    ctx->pc = 0x325880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32587Cu;
    // 0x325880: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BC18u, 0x32587Cu, 0x325884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325884u;
label_325884:
    // 0x325884: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x325884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325888: 0xc0cef0c  jal         func_33BC30
    ctx->pc = 0x325888u;
    SET_GPR_U32(ctx, 31, 0x325890u);
    ctx->pc = 0x32588Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325888u;
    // 0x32588c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BC30u, 0x325888u, 0x325890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325890u;
label_325890:
    // 0x325890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325894: 0x80cefb0  j           func_33BEC0
    ctx->pc = 0x325894u;
    ctx->pc = 0x325898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325894u;
    // 0x325898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BEC0u, 0x325894u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32589Cu;
    // 0x32589c: 0x0  nop
    ctx->pc = 0x32589cu;
    // NOP
label_3258a0:
    // 0x3258a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3258a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3258a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3258A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3258A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3258A4u;
        // 0x3258a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3258A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3258ACu;
    // 0x3258ac: 0x0  nop
    ctx->pc = 0x3258acu;
    // NOP
    // 0x3258b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3258b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3258b4: 0x0  nop
    ctx->pc = 0x3258b4u;
    // NOP
    ctx->pc = 0x3258b8u;
}
