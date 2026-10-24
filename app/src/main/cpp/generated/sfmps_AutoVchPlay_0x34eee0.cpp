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

// Function: sfmps_AutoVchPlay
// Address: 0x34eee0 - 0x34ef68
void sfmps_AutoVchPlay_0x34eee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfmps_AutoVchPlay_0x34eee0");
#endif

    switch (ctx->pc) {
        case 0x34ef04u: goto label_34ef04;
        case 0x34ef3cu: goto label_34ef3c;
        default: break;
    }

    ctx->pc = 0x34eee0u;

    // 0x34eee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34eee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34eee4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34eee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34eee8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34eee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eeec: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x34eeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x34eef0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34eef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34eef4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34eef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34eef8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34eef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x34eefc: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34EEFCu;
    SET_GPR_U32(ctx, 31, 0x34EF04u);
    ctx->pc = 0x34EF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EEFCu;
    // 0x34ef00: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34EEFCu, 0x34EF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EF04u;
label_34ef04:
    // 0x34ef04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34ef04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ef08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x34ef08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ef0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ef10: 0x1203000e  beq         $s0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34EF10u;
    {
        const bool branch_taken_0x34ef10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x34EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EF10u;
        // 0x34ef14: 0x2a040002  slti        $a0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ef10) {
            ctx->pc = 0x34EF4Cu;
            goto label_34ef4c;
        }
    }
    ctx->pc = 0x34EF18u;
    // 0x34ef18: 0x5480000d  bnel        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x34EF18u;
    {
        const bool branch_taken_0x34ef18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ef18) {
            ctx->pc = 0x34EF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EF18u;
            // 0x34ef1c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EF50u;
            goto label_34ef50;
        }
    }
    ctx->pc = 0x34EF20u;
    // 0x34ef20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34ef24: 0x56020009  bnel        $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34EF24u;
    {
        const bool branch_taken_0x34ef24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x34ef24) {
            ctx->pc = 0x34EF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EF24u;
            // 0x34ef28: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EF4Cu;
            goto label_34ef4c;
        }
    }
    ctx->pc = 0x34EF2Cu;
    // 0x34ef2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34ef2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ef30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34ef30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ef34: 0xc0d3e8a  jal         func_34FA28
    ctx->pc = 0x34EF34u;
    SET_GPR_U32(ctx, 31, 0x34EF3Cu);
    ctx->pc = 0x34EF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EF34u;
    // 0x34ef38: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34FA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FA28u, 0x34EF34u, 0x34EF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EF3Cu;
label_34ef3c:
    // 0x34ef3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34ef3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ef40: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x34ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x34ef44: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x34ef44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x34ef48: 0x223100b  movn        $v0, $s1, $v1
    ctx->pc = 0x34ef48u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
label_34ef4c:
    // 0x34ef4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34ef4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34ef50:
    // 0x34ef50: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34ef50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34ef54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34ef54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34ef58: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34ef58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34ef5c: 0x3e00008  jr          $ra
    ctx->pc = 0x34EF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EF5Cu;
        // 0x34ef60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EF64u;
    // 0x34ef64: 0x0  nop
    ctx->pc = 0x34ef64u;
    // NOP
    ctx->pc = 0x34ef68u;
}
