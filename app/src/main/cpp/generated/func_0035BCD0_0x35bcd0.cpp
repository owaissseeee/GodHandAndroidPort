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

// Function: func_0035BCD0
// Address: 0x35bcd0 - 0x35bd88
void func_0035BCD0_0x35bcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035BCD0_0x35bcd0");
#endif

    switch (ctx->pc) {
        case 0x35bd08u: goto label_35bd08;
        case 0x35bd20u: goto label_35bd20;
        case 0x35bd34u: goto label_35bd34;
        default: break;
    }

    ctx->pc = 0x35bcd0u;

    // 0x35bcd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35bcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35bcd4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35bcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35bcd8: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x35bcd8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35bcdc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x35bcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35bce0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35bce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35bce4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35bce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bce8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35bce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35bcec: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x35bcecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bcf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35bcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35bcf4: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x35bcf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x35bcf8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35bcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35bcfc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x35bcfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bd00: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x35bd00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x35bd04: 0x0  nop
    ctx->pc = 0x35bd04u;
    // NOP
label_35bd08:
    // 0x35bd08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35bd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bd0c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x35bd0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x35bd10: 0x26100044  addiu       $s0, $s0, 0x44
    ctx->pc = 0x35bd10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x35bd14: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x35bd14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35bd18: 0xc0d6f62  jal         func_35BD88
    ctx->pc = 0x35BD18u;
    SET_GPR_U32(ctx, 31, 0x35BD20u);
    ctx->pc = 0x35BD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BD18u;
    // 0x35bd1c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BD88u, 0x35BD18u, 0x35BD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BD20u;
label_35bd20:
    // 0x35bd20: 0x643fff9  bgezl       $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x35BD20u;
    {
        const bool branch_taken_0x35bd20 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x35bd20) {
            ctx->pc = 0x35BD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35BD20u;
            // 0x35bd24: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35BD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35bd08;
        }
    }
    ctx->pc = 0x35BD28u;
    // 0x35bd28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35bd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bd2c: 0xc0d6f74  jal         func_35BDD0
    ctx->pc = 0x35BD2Cu;
    SET_GPR_U32(ctx, 31, 0x35BD34u);
    ctx->pc = 0x35BD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BD2Cu;
    // 0x35bd30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BDD0u, 0x35BD2Cu, 0x35BD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BD34u;
label_35bd34:
    // 0x35bd34: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35BD34u;
    {
        const bool branch_taken_0x35bd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BD34u;
        // 0x35bd38: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bd34) {
            ctx->pc = 0x35BD68u;
            goto label_35bd68;
        }
    }
    ctx->pc = 0x35BD3Cu;
    // 0x35bd3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35bd3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35bd40: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x35bd40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x35bd44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35bd44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bd48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35bd48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd4c: 0x34a50302  ori         $a1, $a1, 0x302
    ctx->pc = 0x35bd4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)770);
    // 0x35bd50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35bd50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35bd54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35bd54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35bd58: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x35bd58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35bd5c: 0x80d375c  j           func_34DD70
    ctx->pc = 0x35BD5Cu;
    ctx->pc = 0x35BD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BD5Cu;
    // 0x35bd60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x35BD5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35BD64u;
    // 0x35bd64: 0x0  nop
    ctx->pc = 0x35bd64u;
    // NOP
label_35bd68:
    // 0x35bd68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35bd68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bd6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35bd6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35bd70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35bd74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35bd74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35bd78: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35bd78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35bd7c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x35bd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35bd80: 0x3e00008  jr          $ra
    ctx->pc = 0x35BD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BD80u;
        // 0x35bd84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BD88u;
}
