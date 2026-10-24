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

// Function: func_0033BA80
// Address: 0x33ba80 - 0x33bb80
void func_0033BA80_0x33ba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033BA80_0x33ba80");
#endif

    switch (ctx->pc) {
        case 0x33bb44u: goto label_33bb44;
        default: break;
    }

    ctx->pc = 0x33ba80u;

    // 0x33ba80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33ba80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33ba84: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x33ba84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x33ba88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33ba88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33ba8c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x33ba8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33ba90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33ba94: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33ba94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33ba98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33ba9c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x33ba9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33baa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33baa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33baa4: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x33baa4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x33baa8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33BAA8u;
    {
        const bool branch_taken_0x33baa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BAA8u;
        // 0x33baac: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33baa8) {
            ctx->pc = 0x33BAD8u;
            goto label_33bad8;
        }
    }
    ctx->pc = 0x33BAB0u;
    // 0x33bab0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33bab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33bab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33bab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bab8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33bab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33babc: 0x24845f70  addiu       $a0, $a0, 0x5F70
    ctx->pc = 0x33babcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24432));
    // 0x33bac0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33bac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33bac4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33bac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33bac8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33bac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33bacc: 0x80cede4  j           func_33B790
    ctx->pc = 0x33BACCu;
    ctx->pc = 0x33BAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BACCu;
    // 0x33bad0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B790u, 0x33BACCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33BAD4u;
    // 0x33bad4: 0x0  nop
    ctx->pc = 0x33bad4u;
    // NOP
label_33bad8:
    // 0x33bad8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x33BAD8u;
    {
        const bool branch_taken_0x33bad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BAD8u;
        // 0x33badc: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bad8) {
            ctx->pc = 0x33BB08u;
            goto label_33bb08;
        }
    }
    ctx->pc = 0x33BAE0u;
    // 0x33bae0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33bae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33bae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33bae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33baec: 0x24845f98  addiu       $a0, $a0, 0x5F98
    ctx->pc = 0x33baecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24472));
    // 0x33baf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33baf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33baf4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33baf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33baf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33baf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33bafc: 0x80cede4  j           func_33B790
    ctx->pc = 0x33BAFCu;
    ctx->pc = 0x33BB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BAFCu;
    // 0x33bb00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B790u, 0x33BAFCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33BB04u;
    // 0x33bb04: 0x0  nop
    ctx->pc = 0x33bb04u;
    // NOP
label_33bb08:
    // 0x33bb08: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x33bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x33bb0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33bb10: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x33bb14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33bb18: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33bb1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33bb20: 0x3c100076  lui         $s0, 0x76
    ctx->pc = 0x33bb20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)118 << 16));
    // 0x33bb24: 0x26108620  addiu       $s0, $s0, -0x79E0
    ctx->pc = 0x33bb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936096));
    // 0x33bb28: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x33bb28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x33bb2c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33bb30: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x33BB30u;
    {
        const bool branch_taken_0x33bb30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bb30) {
            ctx->pc = 0x33BB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BB30u;
            // 0x33bb34: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BB48u;
            goto label_33bb48;
        }
    }
    ctx->pc = 0x33BB38u;
    // 0x33bb38: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33bb38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33bb3c: 0xc0cede4  jal         func_33B790
    ctx->pc = 0x33BB3Cu;
    SET_GPR_U32(ctx, 31, 0x33BB44u);
    ctx->pc = 0x33BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BB3Cu;
    // 0x33bb40: 0x24845fc0  addiu       $a0, $a0, 0x5FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B790u, 0x33BB3Cu, 0x33BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BB44u;
label_33bb44:
    // 0x33bb44: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x33bb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_33bb48:
    // 0x33bb48: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33BB48u;
    {
        const bool branch_taken_0x33bb48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BB48u;
        // 0x33bb4c: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bb48) {
            ctx->pc = 0x33BB58u;
            goto label_33bb58;
        }
    }
    ctx->pc = 0x33BB50u;
    // 0x33bb50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33BB50u;
    {
        const bool branch_taken_0x33bb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BB50u;
        // 0x33bb54: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bb50) {
            ctx->pc = 0x33BB64u;
            goto label_33bb64;
        }
    }
    ctx->pc = 0x33BB58u;
label_33bb58:
    // 0x33bb58: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x33bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x33bb5c: 0x24425ef0  addiu       $v0, $v0, 0x5EF0
    ctx->pc = 0x33bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24304));
    // 0x33bb60: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x33bb60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_33bb64:
    // 0x33bb64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33bb64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bb68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33bb68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33bb6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33bb6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33bb70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33bb70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33bb74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33bb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33bb78: 0x3e00008  jr          $ra
    ctx->pc = 0x33BB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BB78u;
        // 0x33bb7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BB80u;
}
