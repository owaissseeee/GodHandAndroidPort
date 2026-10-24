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

// Function: func_0036C3D0
// Address: 0x36c3d0 - 0x36c438
void func_0036C3D0_0x36c3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036C3D0_0x36c3d0");
#endif

    switch (ctx->pc) {
        case 0x36c3e4u: goto label_36c3e4;
        case 0x36c410u: goto label_36c410;
        case 0x36c41cu: goto label_36c41c;
        default: break;
    }

    ctx->pc = 0x36c3d0u;

    // 0x36c3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c3d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c3d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36c3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36c3dc: 0xc0db17e  jal         func_36C5F8
    ctx->pc = 0x36C3DCu;
    SET_GPR_U32(ctx, 31, 0x36C3E4u);
    ctx->pc = 0x36C3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C3DCu;
    // 0x36c3e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5F8u, 0x36C3DCu, 0x36C3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C3E4u;
label_36c3e4:
    // 0x36c3e4: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36c3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x36c3e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c3ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36C3ECu;
    {
        const bool branch_taken_0x36c3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C3ECu;
        // 0x36c3f0: 0x34a50201  ori         $a1, $a1, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)513);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c3ec) {
            ctx->pc = 0x36C408u;
            goto label_36c408;
        }
    }
    ctx->pc = 0x36C3F4u;
    // 0x36c3f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c3f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c3f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36c3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c3fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c400: 0x80da7c8  j           func_369F20
    ctx->pc = 0x36C400u;
    ctx->pc = 0x36C404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C400u;
    // 0x36c404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369F20u, 0x36C400u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36C408u;
label_36c408:
    // 0x36c408: 0xc0db1a2  jal         func_36C688
    ctx->pc = 0x36C408u;
    SET_GPR_U32(ctx, 31, 0x36C410u);
    ctx->pc = 0x36C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C688u, 0x36C408u, 0x36C410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C410u;
label_36c410:
    // 0x36c410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c414: 0xc0db110  jal         func_36C440
    ctx->pc = 0x36C414u;
    SET_GPR_U32(ctx, 31, 0x36C41Cu);
    ctx->pc = 0x36C418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C414u;
    // 0x36c418: 0x2405040c  addiu       $a1, $zero, 0x40C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C440u, 0x36C414u, 0x36C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C41Cu;
label_36c41c:
    // 0x36c41c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c420: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x36c420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x36c424: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c42c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c430: 0x3e00008  jr          $ra
    ctx->pc = 0x36C430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C430u;
        // 0x36c434: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C438u;
}
