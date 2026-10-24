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

// Function: func_0034BE00
// Address: 0x34be00 - 0x34beb8
void func_0034BE00_0x34be00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034BE00_0x34be00");
#endif

    switch (ctx->pc) {
        case 0x34be54u: goto label_34be54;
        case 0x34be80u: goto label_34be80;
        default: break;
    }

    ctx->pc = 0x34be00u;

    // 0x34be00: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x34be00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x34be04: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34be04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34be08: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x34be08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x34be0c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x34be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x34be10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34be10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34be14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34be14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34be18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34be18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34be1c: 0xc38821  addu        $s1, $a2, $v1
    ctx->pc = 0x34be1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x34be20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34be20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34be24: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x34be24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x34be28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34be28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x34be2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x34be2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34be30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34be30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34be34: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x34be34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x34be38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34be38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34be3c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x34be3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34be40: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x34be40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x34be44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34be44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34be48: 0x4302b  sltu        $a2, $zero, $a0
    ctx->pc = 0x34be48u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x34be4c: 0xc0d2fea  jal         func_34BFA8
    ctx->pc = 0x34BE4Cu;
    SET_GPR_U32(ctx, 31, 0x34BE54u);
    ctx->pc = 0x34BE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BE4Cu;
    // 0x34be50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BFA8u, 0x34BE4Cu, 0x34BE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BE54u;
label_34be54:
    // 0x34be54: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x34be54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34be58: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x34be58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34be5c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x34be5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x34be60: 0x266216b0  addiu       $v0, $s3, 0x16B0
    ctx->pc = 0x34be60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5808));
    // 0x34be64: 0x26731ea8  addiu       $s3, $s3, 0x1EA8
    ctx->pc = 0x34be64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 7848));
    // 0x34be68: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x34be68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x34be6c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x34be6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x34be70: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x34be70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x34be74: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x34be74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x34be78: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x34be78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x34be7c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x34be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_34be80:
    // 0x34be80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34be80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34be84: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x34be84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x34be88: 0x0  nop
    ctx->pc = 0x34be88u;
    // NOP
    // 0x34be8c: 0x0  nop
    ctx->pc = 0x34be8cu;
    // NOP
    // 0x34be90: 0x0  nop
    ctx->pc = 0x34be90u;
    // NOP
    // 0x34be94: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34BE94u;
    {
        const bool branch_taken_0x34be94 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x34BE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BE94u;
        // 0x34be98: 0x2673ff78  addiu       $s3, $s3, -0x88 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34be94) {
            ctx->pc = 0x34BE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34be80;
        }
    }
    ctx->pc = 0x34BE9Cu;
    // 0x34be9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34be9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34bea0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34bea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34bea4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34bea4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34bea8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34bea8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34beac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34beacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34beb0: 0x3e00008  jr          $ra
    ctx->pc = 0x34BEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BEB0u;
        // 0x34beb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BEB8u;
}
