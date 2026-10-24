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

// Function: cSnd_AllocVoice
// Address: 0x2cbec0 - 0x2cbf48
void cSnd_AllocVoice_0x2cbec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_AllocVoice_0x2cbec0");
#endif

    switch (ctx->pc) {
        case 0x2cbee0u: goto label_2cbee0;
        case 0x2cbee8u: goto label_2cbee8;
        case 0x2cbef0u: goto label_2cbef0;
        case 0x2cbf04u: goto label_2cbf04;
        case 0x2cbf0cu: goto label_2cbf0c;
        case 0x2cbf18u: goto label_2cbf18;
        default: break;
    }

    ctx->pc = 0x2cbec0u;

    // 0x2cbec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cbec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cbec4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2cbec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2cbec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cbec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cbecc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cbeccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cbed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cbed4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cbed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cbed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbedc: 0x0  nop
    ctx->pc = 0x2cbedcu;
    // NOP
label_2cbee0:
    // 0x2cbee0: 0xc0b3132  jal         func_2CC4C8
    ctx->pc = 0x2CBEE0u;
    SET_GPR_U32(ctx, 31, 0x2CBEE8u);
    ctx->pc = 0x2CBEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBEE0u;
    // 0x2cbee4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4C8u, 0x2CBEE0u, 0x2CBEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBEE8u;
label_2cbee8:
    // 0x2cbee8: 0xc0b368e  jal         func_2CDA38
    ctx->pc = 0x2CBEE8u;
    SET_GPR_U32(ctx, 31, 0x2CBEF0u);
    ctx->pc = 0x2CBEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBEE8u;
    // 0x2cbeec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA38u, 0x2CBEE8u, 0x2CBEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBEF0u;
label_2cbef0:
    // 0x2cbef0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2CBEF0u;
    {
        const bool branch_taken_0x2cbef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbef0) {
            ctx->pc = 0x2CBEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBEF0u;
            // 0x2cbef4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBF20u;
            goto label_2cbf20;
        }
    }
    ctx->pc = 0x2CBEF8u;
    // 0x2cbef8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cbef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbefc: 0xc0b3132  jal         func_2CC4C8
    ctx->pc = 0x2CBEFCu;
    SET_GPR_U32(ctx, 31, 0x2CBF04u);
    ctx->pc = 0x2CBF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBEFCu;
    // 0x2cbf00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4C8u, 0x2CBEFCu, 0x2CBF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF04u;
label_2cbf04:
    // 0x2cbf04: 0xc0b3692  jal         func_2CDA48
    ctx->pc = 0x2CBF04u;
    SET_GPR_U32(ctx, 31, 0x2CBF0Cu);
    ctx->pc = 0x2CBF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBF04u;
    // 0x2cbf08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA48u, 0x2CBF04u, 0x2CBF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF0Cu;
label_2cbf0c:
    // 0x2cbf0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cbf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbf10: 0xc0b3132  jal         func_2CC4C8
    ctx->pc = 0x2CBF10u;
    SET_GPR_U32(ctx, 31, 0x2CBF18u);
    ctx->pc = 0x2CBF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBF10u;
    // 0x2cbf14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4C8u, 0x2CBF10u, 0x2CBF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF18u;
label_2cbf18:
    // 0x2cbf18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CBF18u;
    {
        const bool branch_taken_0x2cbf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF18u;
        // 0x2cbf1c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf18) {
            ctx->pc = 0x2CBF34u;
            goto label_2cbf34;
        }
    }
    ctx->pc = 0x2CBF20u;
label_2cbf20:
    // 0x2cbf20: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x2cbf20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2cbf24: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2CBF24u;
    {
        const bool branch_taken_0x2cbf24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF24u;
        // 0x2cbf28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf24) {
            ctx->pc = 0x2CBEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbee0;
        }
    }
    ctx->pc = 0x2CBF2Cu;
    // 0x2cbf2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cbf2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbf30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2cbf30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cbf34:
    // 0x2cbf34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cbf34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbf38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cbf38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbf3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF3Cu;
        // 0x2cbf40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBF44u;
    // 0x2cbf44: 0x0  nop
    ctx->pc = 0x2cbf44u;
    // NOP
    ctx->pc = 0x2cbf48u;
}
