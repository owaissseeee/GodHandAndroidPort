#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: isEndReleaseObj__C11cEventActor
// Address: 0x7a9410 - 0x7a94a8
void isEndReleaseObj__C11cEventActor_0x7a9410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isEndReleaseObj__C11cEventActor_0x7a9410");
#endif

    switch (ctx->pc) {
        case 0x7a9440u: goto label_7a9440;
        case 0x7a9464u: goto label_7a9464;
        default: break;
    }

    ctx->pc = 0x7a9410u;

    // 0x7a9410: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7a9410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7a9414: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7a9414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7a9418: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7a9418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7a941c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7a941cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7a9420: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7a9420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a9424: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x7a9424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x7a9428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7a9428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7a942c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x7a942cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7a9430: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x7A9430u;
    {
        const bool branch_taken_0x7a9430 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7A9434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9430u;
        // 0x7a9434: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9430) {
            ctx->pc = 0x7A9484u;
            goto label_7a9484;
        }
    }
    ctx->pc = 0x7A9438u;
    // 0x7a9438: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x7a9438u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x7a943c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x7a943cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7a9440:
    // 0x7a9440: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x7a9440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7a9444: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x7a9444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x7a9448: 0x94620024  lhu         $v0, 0x24($v1)
    ctx->pc = 0x7a9448u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x7a944c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x7a944cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x7a9450: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x7A9450u;
    {
        const bool branch_taken_0x7a9450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7a9450) {
            ctx->pc = 0x7A9454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A9450u;
            // 0x7a9454: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A9474u;
            goto label_7a9474;
        }
    }
    ctx->pc = 0x7A9458u;
    // 0x7a9458: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x7a9458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7a945c: 0xc07fbf4  jal         func_1FEFD0
    ctx->pc = 0x7A945Cu;
    SET_GPR_U32(ctx, 31, 0x7A9464u);
    ctx->pc = 0x7A9460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A945Cu;
    // 0x7a9460: 0x26640d20  addiu       $a0, $s3, 0xD20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEFD0u, 0x7A945Cu, 0x7A9464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A9464u;
label_7a9464:
    // 0x7a9464: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7A9464u;
    {
        const bool branch_taken_0x7a9464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7a9464) {
            ctx->pc = 0x7A9468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A9464u;
            // 0x7a9468: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A9474u;
            goto label_7a9474;
        }
    }
    ctx->pc = 0x7A946Cu;
    // 0x7a946c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7A946Cu;
    {
        const bool branch_taken_0x7a946c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A946Cu;
        // 0x7a9470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a946c) {
            ctx->pc = 0x7A9488u;
            goto label_7a9488;
        }
    }
    ctx->pc = 0x7A9474u;
label_7a9474:
    // 0x7a9474: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x7a9474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x7a9478: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x7a9478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7a947c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x7A947Cu;
    {
        const bool branch_taken_0x7a947c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A9480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A947Cu;
        // 0x7a9480: 0x26520048  addiu       $s2, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a947c) {
            ctx->pc = 0x7A9440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7a9440;
        }
    }
    ctx->pc = 0x7A9484u;
label_7a9484:
    // 0x7a9484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7a9484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7a9488:
    // 0x7a9488: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7a9488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7a948c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7a948cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7a9490: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7a9490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7a9494: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x7a9494u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7a9498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7a9498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7a949c: 0x3e00008  jr          $ra
    ctx->pc = 0x7A949Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A94A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A949Cu;
        // 0x7a94a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A949Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A94A4u;
    // 0x7a94a4: 0x0  nop
    ctx->pc = 0x7a94a4u;
    // NOP
    ctx->pc = 0x7a94a8u;
}
} // namespace gh_event
