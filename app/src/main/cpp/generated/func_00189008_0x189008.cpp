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

// Function: func_00189008
// Address: 0x189008 - 0x1890b0
void func_00189008_0x189008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00189008_0x189008");
#endif

    switch (ctx->pc) {
        case 0x189048u: goto label_189048;
        case 0x18905cu: goto label_18905c;
        case 0x189080u: goto label_189080;
        case 0x189090u: goto label_189090;
        default: break;
    }

    ctx->pc = 0x189008u;

    // 0x189008: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x189008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18900c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18900cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x189010: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x189010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x189014: 0x24423608  addiu       $v0, $v0, 0x3608
    ctx->pc = 0x189014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13832));
    // 0x189018: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x189018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x18901c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18901cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189020: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x189020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x189024: 0x26500600  addiu       $s0, $s2, 0x600
    ctx->pc = 0x189024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1536));
    // 0x189028: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x189028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x18902c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x18902cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189030: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x189030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x189034: 0x3c130057  lui         $s3, 0x57
    ctx->pc = 0x189034u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
    // 0x189038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18903c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18903cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189040: 0xae420214  sw          $v0, 0x214($s2)
    ctx->pc = 0x189040u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 2));
    // 0x189044: 0x0  nop
    ctx->pc = 0x189044u;
    // NOP
label_189048:
    // 0x189048: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x189048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18904c: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18904Cu;
    {
        const bool branch_taken_0x18904c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x18904c) {
            ctx->pc = 0x189050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18904Cu;
            // 0x189050: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189064u;
            goto label_189064;
        }
    }
    ctx->pc = 0x189054u;
    // 0x189054: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x189054u;
    SET_GPR_U32(ctx, 31, 0x18905Cu);
    ctx->pc = 0x189058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189054u;
    // 0x189058: 0x26644380  addiu       $a0, $s3, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x189054u, 0x18905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18905Cu;
label_18905c:
    // 0x18905c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x18905cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x189060: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x189060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_189064:
    // 0x189064: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x189064u;
    {
        const bool branch_taken_0x189064 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x189068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189064u;
        // 0x189068: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189064) {
            ctx->pc = 0x189048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189048;
        }
    }
    ctx->pc = 0x18906Cu;
    // 0x18906c: 0x8e450608  lw          $a1, 0x608($s2)
    ctx->pc = 0x18906cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
    // 0x189070: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x189070u;
    {
        const bool branch_taken_0x189070 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x189074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189070u;
        // 0x189074: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189070) {
            ctx->pc = 0x189084u;
            goto label_189084;
        }
    }
    ctx->pc = 0x189078u;
    // 0x189078: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x189078u;
    SET_GPR_U32(ctx, 31, 0x189080u);
    ctx->pc = 0x18907Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189078u;
    // 0x18907c: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x189078u, 0x189080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189080u;
label_189080:
    // 0x189080: 0xae400608  sw          $zero, 0x608($s2)
    ctx->pc = 0x189080u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1544), GPR_U32(ctx, 0));
label_189084:
    // 0x189084: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x189084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189088: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x189088u;
    SET_GPR_U32(ctx, 31, 0x189090u);
    ctx->pc = 0x18908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189088u;
    // 0x18908c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x189088u, 0x189090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189090u;
label_189090:
    // 0x189090: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x189090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189094: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x189094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189098: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x189098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18909c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x18909cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1890a0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1890a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1890a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1890a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1890a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1890A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1890ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890A8u;
        // 0x1890ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1890A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1890B0u;
}
