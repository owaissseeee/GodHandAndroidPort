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

// Function: ResetObjAndReleaseIdsA
// Address: 0x166730 - 0x166780
void ResetObjAndReleaseIdsA_0x166730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetObjAndReleaseIdsA_0x166730");
#endif

    switch (ctx->pc) {
        case 0x166744u: goto label_166744;
        case 0x16674cu: goto label_16674c;
        case 0x166754u: goto label_166754;
        case 0x166770u: goto label_166770;
        default: break;
    }

    ctx->pc = 0x166730u;

    // 0x166730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x166730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x166734: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x166734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x166738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16673c: 0xc05857c  jal         func_1615F0
    ctx->pc = 0x16673Cu;
    SET_GPR_U32(ctx, 31, 0x166744u);
    ctx->pc = 0x166740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16673Cu;
    // 0x166740: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1615F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1615F0u, 0x16673Cu, 0x166744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166744u;
label_166744:
    // 0x166744: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x166744u;
    SET_GPR_U32(ctx, 31, 0x16674Cu);
    ctx->pc = 0x166748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166744u;
    // 0x166748: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x166744u, 0x16674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16674Cu;
label_16674c:
    // 0x16674c: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x16674Cu;
    SET_GPR_U32(ctx, 31, 0x166754u);
    ctx->pc = 0x166750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16674Cu;
    // 0x166750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x16674Cu, 0x166754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166754u;
label_166754:
    // 0x166754: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x166754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x166758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x166758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16675c: 0x8ca22384  lw          $v0, 0x2384($a1)
    ctx->pc = 0x16675cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2384u));
    // 0x166760: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x166760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166764: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x166764u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x166768: 0xc058564  jal         func_161590
    ctx->pc = 0x166768u;
    SET_GPR_U32(ctx, 31, 0x166770u);
    ctx->pc = 0x16676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166768u;
    // 0x16676c: 0xac600044  sw          $zero, 0x44($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161590u, 0x166768u, 0x166770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166770u;
label_166770:
    // 0x166770: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x166770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166778: 0x3e00008  jr          $ra
    ctx->pc = 0x166778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166778u;
        // 0x16677c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166780u;
}
