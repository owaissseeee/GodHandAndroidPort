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

// Function: UpdateStateAndClearFlag_3734F0
// Address: 0x3734f0 - 0x373560
void UpdateStateAndClearFlag_3734F0_0x3734f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateStateAndClearFlag_3734F0_0x3734f0");
#endif

    switch (ctx->pc) {
        case 0x373504u: goto label_373504;
        case 0x373514u: goto label_373514;
        case 0x373528u: goto label_373528;
        case 0x373538u: goto label_373538;
        default: break;
    }

    ctx->pc = 0x3734f0u;

    // 0x3734f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3734f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3734f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3734f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3734f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3734f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3734fc: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x3734FCu;
    SET_GPR_U32(ctx, 31, 0x373504u);
    ctx->pc = 0x373500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3734FCu;
    // 0x373500: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x3734FCu, 0x373504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373504u;
label_373504:
    // 0x373504: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x373504u;
    {
        const bool branch_taken_0x373504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x373504) {
            ctx->pc = 0x373508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373504u;
            // 0x373508: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x373550u;
            goto label_373550;
        }
    }
    ctx->pc = 0x37350Cu;
    // 0x37350c: 0xc0dcec8  jal         func_373B20
    ctx->pc = 0x37350Cu;
    SET_GPR_U32(ctx, 31, 0x373514u);
    ctx->pc = 0x373510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37350Cu;
    // 0x373510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B20u, 0x37350Cu, 0x373514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373514u;
label_373514:
    // 0x373514: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x373514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373518: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x373518u;
    {
        const bool branch_taken_0x373518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x373518) {
            ctx->pc = 0x373530u;
            goto label_373530;
        }
    }
    ctx->pc = 0x373520u;
    // 0x373520: 0xc0dd166  jal         func_374598
    ctx->pc = 0x373520u;
    SET_GPR_U32(ctx, 31, 0x373528u);
    ctx->pc = 0x373524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373520u;
    // 0x373524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374598u, 0x373520u, 0x373528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373528u;
label_373528:
    // 0x373528: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x373528u;
    {
        const bool branch_taken_0x373528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373528u;
        // 0x37352c: 0x8e03004c  lw          $v1, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373528) {
            ctx->pc = 0x37353Cu;
            goto label_37353c;
        }
    }
    ctx->pc = 0x373530u;
label_373530:
    // 0x373530: 0xc0dcff2  jal         func_373FC8
    ctx->pc = 0x373530u;
    SET_GPR_U32(ctx, 31, 0x373538u);
    ctx->pc = 0x373534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373530u;
    // 0x373534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373FC8u, 0x373530u, 0x373538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373538u;
label_373538:
    // 0x373538: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x373538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_37353c:
    // 0x37353c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x37353cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x373540: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x373540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x373544: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x373544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x373548: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x373548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x37354c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37354cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_373550:
    // 0x373550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373554: 0x3e00008  jr          $ra
    ctx->pc = 0x373554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373554u;
        // 0x373558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37355Cu;
    // 0x37355c: 0x0  nop
    ctx->pc = 0x37355cu;
    // NOP
    ctx->pc = 0x373560u;
}
