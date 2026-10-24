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

// Function: func_00354A70
// Address: 0x354a70 - 0x354b20
void func_00354A70_0x354a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00354A70_0x354a70");
#endif

    switch (ctx->pc) {
        case 0x354aa8u: goto label_354aa8;
        case 0x354ac0u: goto label_354ac0;
        case 0x354af4u: goto label_354af4;
        default: break;
    }

    ctx->pc = 0x354a70u;

    // 0x354a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x354a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x354a74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x354a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x354a78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x354a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354a7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x354a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x354a80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x354a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x354a84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x354a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x354a88: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x354a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x354a8c: 0x18c0001c  blez        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x354A8Cu;
    {
        const bool branch_taken_0x354a8c = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x354A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A8Cu;
        // 0x354a90: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354a8c) {
            ctx->pc = 0x354B00u;
            goto label_354b00;
        }
    }
    ctx->pc = 0x354A94u;
    // 0x354a94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x354a94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354a98: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x354a98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354a9c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x354a9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354aa0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x354aa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x354aa4: 0x0  nop
    ctx->pc = 0x354aa4u;
    // NOP
label_354aa8:
    // 0x354aa8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x354aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x354aac: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x354aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x354ab0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x354ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x354ab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x354ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354ab8: 0xc0d6934  jal         func_35A4D0
    ctx->pc = 0x354AB8u;
    SET_GPR_U32(ctx, 31, 0x354AC0u);
    ctx->pc = 0x354ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354AB8u;
    // 0x354abc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A4D0u, 0x354AB8u, 0x354AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354AC0u;
label_354ac0:
    // 0x354ac0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x354ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x354ac4: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x354ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x354ac8: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x354ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x354acc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x354accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x354ad0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x354ad0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x354ad4: 0xae14003c  sw          $s4, 0x3C($s0)
    ctx->pc = 0x354ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 20));
    // 0x354ad8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x354ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x354adc: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x354adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x354ae0: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x354ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x354ae4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x354ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x354ae8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x354ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x354aec: 0xc0d52c8  jal         func_354B20
    ctx->pc = 0x354AECu;
    SET_GPR_U32(ctx, 31, 0x354AF4u);
    ctx->pc = 0x354AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354AECu;
    // 0x354af0: 0xae130058  sw          $s3, 0x58($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354B20u, 0x354AECu, 0x354AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354AF4u;
label_354af4:
    // 0x354af4: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x354af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x354af8: 0x1620ffeb  bnez        $s1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x354AF8u;
    {
        const bool branch_taken_0x354af8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x354AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354AF8u;
        // 0x354afc: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354af8) {
            ctx->pc = 0x354AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354aa8;
        }
    }
    ctx->pc = 0x354B00u;
label_354b00:
    // 0x354b00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x354b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354b04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x354b04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x354b08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x354b08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354b0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x354b0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x354b10: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x354b10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x354b14: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x354b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x354b18: 0x3e00008  jr          $ra
    ctx->pc = 0x354B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354B18u;
        // 0x354b1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354B20u;
}
