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

// Function: func_00305FB0
// Address: 0x305fb0 - 0x306030
void func_00305FB0_0x305fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00305FB0_0x305fb0");
#endif

    switch (ctx->pc) {
        case 0x305fc4u: goto label_305fc4;
        case 0x306000u: goto label_306000;
        default: break;
    }

    ctx->pc = 0x305fb0u;

    // 0x305fb0: 0x8c860400  lw          $a2, 0x400($a0)
    ctx->pc = 0x305fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1024)));
    // 0x305fb4: 0x54c00008  bnel        $a2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x305FB4u;
    {
        const bool branch_taken_0x305fb4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x305fb4) {
            ctx->pc = 0x305FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305FB4u;
            // 0x305fb8: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305FD8u;
            goto label_305fd8;
        }
    }
    ctx->pc = 0x305FBCu;
    // 0x305fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x305FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FBCu;
        // 0x305fc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305FC4u;
label_305fc4:
    // 0x305fc4: 0x1471821  addu        $v1, $t2, $a3
    ctx->pc = 0x305fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x305fc8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x305fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x305fcc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x305fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x305fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x305FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FD0u;
        // 0x305fd4: 0x1421021  addu        $v0, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305FD8u;
label_305fd8:
    // 0x305fd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x305fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305fdc: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x305fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x305fe0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x305fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x305fe4: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x305fe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x305fe8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x305fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x305fec: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x305fecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x305ff0: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x305FF0u;
    {
        const bool branch_taken_0x305ff0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x305FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FF0u;
        // 0x305ff4: 0xc35021  addu        $t2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ff0) {
            ctx->pc = 0x306024u;
            goto label_306024;
        }
    }
    ctx->pc = 0x305FF8u;
    // 0x305ff8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x305ff8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305ffc: 0x25060010  addiu       $a2, $t0, 0x10
    ctx->pc = 0x305ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_306000:
    // 0x306000: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x306000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x306004: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x306004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x306008: 0x94430010  lhu         $v1, 0x10($v0)
    ctx->pc = 0x306008u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30600c: 0x1065ffed  beq         $v1, $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x30600Cu;
    {
        const bool branch_taken_0x30600c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x306010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30600Cu;
        // 0x306010: 0x43880  sll         $a3, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30600c) {
            ctx->pc = 0x305FC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305fc4;
        }
    }
    ctx->pc = 0x306014u;
    // 0x306014: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x306014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x306018: 0x89102b  sltu        $v0, $a0, $t1
    ctx->pc = 0x306018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x30601c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30601Cu;
    {
        const bool branch_taken_0x30601c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30601Cu;
        // 0x306020: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30601c) {
            ctx->pc = 0x306000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306000;
        }
    }
    ctx->pc = 0x306024u;
label_306024:
    // 0x306024: 0x3e00008  jr          $ra
    ctx->pc = 0x306024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306024u;
        // 0x306028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30602Cu;
    // 0x30602c: 0x0  nop
    ctx->pc = 0x30602cu;
    // NOP
    ctx->pc = 0x306030u;
}
