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

// Function: ForwardInitBuffer_313820
// Address: 0x313820 - 0x313890
void ForwardInitBuffer_313820_0x313820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_313820_0x313820");
#endif

    switch (ctx->pc) {
        case 0x313854u: goto label_313854;
        case 0x31386cu: goto label_31386c;
        case 0x313874u: goto label_313874;
        default: break;
    }

    ctx->pc = 0x313820u;

    // 0x313820: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313824: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x313828: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313828u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31382c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x31382cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x313830: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x313834: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x313838: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x313838u;
    {
        const bool branch_taken_0x313838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313838u;
        // 0x31383c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313838) {
            ctx->pc = 0x31387Cu;
            goto label_31387c;
        }
    }
    ctx->pc = 0x313840u;
    // 0x313840: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313840u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313844: 0x24041610  addiu       $a0, $zero, 0x1610
    ctx->pc = 0x313844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5648));
    // 0x313848: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x313848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x31384c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31384Cu;
    SET_GPR_U32(ctx, 31, 0x313854u);
    ctx->pc = 0x313850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31384Cu;
    // 0x313850: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31384Cu, 0x313854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313854u;
label_313854:
    // 0x313854: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313858: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313858u;
    {
        const bool branch_taken_0x313858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313858u;
        // 0x31385c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313858) {
            ctx->pc = 0x31387Cu;
            goto label_31387c;
        }
    }
    ctx->pc = 0x313860u;
    // 0x313860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313864: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x313864u;
    SET_GPR_U32(ctx, 31, 0x31386Cu);
    ctx->pc = 0x313868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313864u;
    // 0x313868: 0x24061610  addiu       $a2, $zero, 0x1610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x313864u, 0x31386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31386Cu;
label_31386c:
    // 0x31386c: 0xc0a128a  jal         func_284A28
    ctx->pc = 0x31386Cu;
    SET_GPR_U32(ctx, 31, 0x313874u);
    ctx->pc = 0x313870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31386Cu;
    // 0x313870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284A28u, 0x31386Cu, 0x313874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313874u;
label_313874:
    // 0x313874: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313874u;
    {
        const bool branch_taken_0x313874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313874u;
        // 0x313878: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313874) {
            ctx->pc = 0x313884u;
            goto label_313884;
        }
    }
    ctx->pc = 0x31387Cu;
label_31387c:
    // 0x31387c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31387cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313880: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313884:
    // 0x313884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313888: 0x3e00008  jr          $ra
    ctx->pc = 0x313888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313888u;
        // 0x31388c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313890u;
}
