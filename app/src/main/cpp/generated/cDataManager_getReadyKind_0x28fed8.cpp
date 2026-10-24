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

// Function: cDataManager_getReadyKind
// Address: 0x28fed8 - 0x28ff80
void cDataManager_getReadyKind_0x28fed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDataManager_getReadyKind_0x28fed8");
#endif

    switch (ctx->pc) {
        case 0x28ff20u: goto label_28ff20;
        case 0x28ff28u: goto label_28ff28;
        default: break;
    }

    ctx->pc = 0x28fed8u;

    // 0x28fed8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28fed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28fedc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x28fedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x28fee0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x28fee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x28fee4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28fee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fee8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28fee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28feec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28feecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fef0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x28fef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x28fef4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28fef4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fef8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x28fef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x28fefc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28fefcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff00: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x28ff00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x28ff04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ff04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ff08: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28ff0c: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28FF0Cu;
    {
        const bool branch_taken_0x28ff0c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x28FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF0Cu;
        // 0x28ff10: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff0c) {
            ctx->pc = 0x28FF54u;
            goto label_28ff54;
        }
    }
    ctx->pc = 0x28FF14u;
    // 0x28ff14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28ff14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ff18: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x28ff18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ff1c: 0x0  nop
    ctx->pc = 0x28ff1cu;
    // NOP
label_28ff20:
    // 0x28ff20: 0xc07fc8e  jal         func_1FF238
    ctx->pc = 0x28FF20u;
    SET_GPR_U32(ctx, 31, 0x28FF28u);
    ctx->pc = 0x28FF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FF20u;
    // 0x28ff24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF238u, 0x28FF20u, 0x28FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FF28u;
label_28ff28:
    // 0x28ff28: 0x54550006  bnel        $v0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x28FF28u;
    {
        const bool branch_taken_0x28ff28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x28ff28) {
            ctx->pc = 0x28FF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FF28u;
            // 0x28ff2c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FF44u;
            goto label_28ff44;
        }
    }
    ctx->pc = 0x28FF30u;
    // 0x28ff30: 0x16740003  bne         $s3, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x28FF30u;
    {
        const bool branch_taken_0x28ff30 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        ctx->pc = 0x28FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF30u;
        // 0x28ff34: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff30) {
            ctx->pc = 0x28FF40u;
            goto label_28ff40;
        }
    }
    ctx->pc = 0x28FF38u;
    // 0x28ff38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28FF38u;
    {
        const bool branch_taken_0x28ff38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF38u;
        // 0x28ff3c: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff38) {
            ctx->pc = 0x28FF58u;
            goto label_28ff58;
        }
    }
    ctx->pc = 0x28FF40u;
label_28ff40:
    // 0x28ff40: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_28ff44:
    // 0x28ff44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28ff44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28ff48: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x28ff48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28ff4c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x28FF4Cu;
    {
        const bool branch_taken_0x28ff4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF4Cu;
        // 0x28ff50: 0x2610005c  addiu       $s0, $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff4c) {
            ctx->pc = 0x28FF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ff20;
        }
    }
    ctx->pc = 0x28FF54u;
label_28ff54:
    // 0x28ff54: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x28ff54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_28ff58:
    // 0x28ff58: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x28ff58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28ff5c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x28ff5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28ff60: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x28ff60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28ff64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28ff64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ff68: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x28ff68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ff6c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x28ff6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ff70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ff70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ff74: 0x3e00008  jr          $ra
    ctx->pc = 0x28FF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FF74u;
        // 0x28ff78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FF7Cu;
    // 0x28ff7c: 0x0  nop
    ctx->pc = 0x28ff7cu;
    // NOP
    ctx->pc = 0x28ff80u;
}
