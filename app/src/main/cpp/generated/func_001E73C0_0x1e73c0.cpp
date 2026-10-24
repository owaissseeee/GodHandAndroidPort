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

// Function: func_001E73C0
// Address: 0x1e73c0 - 0x1e7440
void func_001E73C0_0x1e73c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E73C0_0x1e73c0");
#endif

    switch (ctx->pc) {
        case 0x1e73e0u: goto label_1e73e0;
        case 0x1e73ecu: goto label_1e73ec;
        case 0x1e7404u: goto label_1e7404;
        case 0x1e7408u: goto label_1e7408;
        case 0x1e7414u: goto label_1e7414;
        case 0x1e7428u: goto label_1e7428;
        default: break;
    }

    ctx->pc = 0x1e73c0u;

    // 0x1e73c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e73c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e73c4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1e73c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1e73c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e73c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e73cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e73ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e73d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e73d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e73d4: 0x26500580  addiu       $s0, $s2, 0x580
    ctx->pc = 0x1e73d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x1e73d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e73d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e73dc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1e73dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e73e0:
    // 0x1e73e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e73e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e73e4: 0xc0b5778  jal         func_2D5DE0
    ctx->pc = 0x1E73E4u;
    SET_GPR_U32(ctx, 31, 0x1E73ECu);
    ctx->pc = 0x1E73E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E73E4u;
    // 0x1e73e8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DE0u, 0x1E73E4u, 0x1E73ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E73ECu;
label_1e73ec:
    // 0x1e73ec: 0x0  nop
    ctx->pc = 0x1e73ecu;
    // NOP
    // 0x1e73f0: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E73F0u;
    {
        const bool branch_taken_0x1e73f0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1E73F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E73F0u;
        // 0x1e73f4: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e73f0) {
            ctx->pc = 0x1E73E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e73e0;
        }
    }
    ctx->pc = 0x1E73F8u;
    // 0x1e73f8: 0x26440530  addiu       $a0, $s2, 0x530
    ctx->pc = 0x1e73f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1328));
    // 0x1e73fc: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x1E73FCu;
    SET_GPR_U32(ctx, 31, 0x1E7404u);
    ctx->pc = 0x1E7400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E73FCu;
    // 0x1e7400: 0x26500050  addiu       $s0, $s2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x1E73FCu, 0x1E7404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7404u;
label_1e7404:
    // 0x1e7404: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x1e7404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1e7408:
    // 0x1e7408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e740c: 0xc0b5778  jal         func_2D5DE0
    ctx->pc = 0x1E740Cu;
    SET_GPR_U32(ctx, 31, 0x1E7414u);
    ctx->pc = 0x1E7410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E740Cu;
    // 0x1e7410: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DE0u, 0x1E740Cu, 0x1E7414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7414u;
label_1e7414:
    // 0x1e7414: 0x0  nop
    ctx->pc = 0x1e7414u;
    // NOP
    // 0x1e7418: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E7418u;
    {
        const bool branch_taken_0x1e7418 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1E741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7418u;
        // 0x1e741c: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7418) {
            ctx->pc = 0x1E7408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7408;
        }
    }
    ctx->pc = 0x1E7420u;
    // 0x1e7420: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x1E7420u;
    SET_GPR_U32(ctx, 31, 0x1E7428u);
    ctx->pc = 0x1E7424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7420u;
    // 0x1e7424: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x1E7420u, 0x1E7428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7428u;
label_1e7428:
    // 0x1e7428: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e7428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e742c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e742cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7430: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1e7430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7438: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7438u;
        // 0x1e743c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7440u;
}
