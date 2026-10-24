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

// Function: func_001F6AF8
// Address: 0x1f6af8 - 0x1f6b78
void func_001F6AF8_0x1f6af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F6AF8_0x1f6af8");
#endif

    switch (ctx->pc) {
        case 0x1f6b18u: goto label_1f6b18;
        case 0x1f6b50u: goto label_1f6b50;
        default: break;
    }

    ctx->pc = 0x1f6af8u;

    // 0x1f6af8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1f6af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f6afc: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1f6afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f6b00: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x1f6b00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f6b04: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F6B04u;
    {
        const bool branch_taken_0x1f6b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B04u;
        // 0x1f6b08: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b04) {
            ctx->pc = 0x1F6B38u;
            goto label_1f6b38;
        }
    }
    ctx->pc = 0x1F6B0Cu;
    // 0x1f6b0c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1f6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1f6b10: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1f6b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f6b14: 0x0  nop
    ctx->pc = 0x1f6b14u;
    // NOP
label_1f6b18:
    // 0x1f6b18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f6b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f6b1c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6B1Cu;
    {
        const bool branch_taken_0x1f6b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6b1c) {
            ctx->pc = 0x1F6B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6B1Cu;
            // 0x1f6b20: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6B2Cu;
            goto label_1f6b2c;
        }
    }
    ctx->pc = 0x1F6B24u;
    // 0x1f6b24: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B24u;
        // 0x1f6b28: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6B2Cu;
label_1f6b2c:
    // 0x1f6b2c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1f6b2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f6b30: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F6B30u;
    {
        const bool branch_taken_0x1f6b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B30u;
        // 0x1f6b34: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b30) {
            ctx->pc = 0x1F6B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6b18;
        }
    }
    ctx->pc = 0x1F6B38u;
label_1f6b38:
    // 0x1f6b38: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1f6b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f6b3c: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F6B3Cu;
    {
        const bool branch_taken_0x1f6b3c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1F6B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B3Cu;
        // 0x1f6b40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b3c) {
            ctx->pc = 0x1F6B70u;
            goto label_1f6b70;
        }
    }
    ctx->pc = 0x1F6B44u;
    // 0x1f6b44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f6b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6b48: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x1f6b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1f6b4c: 0x0  nop
    ctx->pc = 0x1f6b4cu;
    // NOP
label_1f6b50:
    // 0x1f6b50: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f6b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f6b54: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6B54u;
    {
        const bool branch_taken_0x1f6b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6b54) {
            ctx->pc = 0x1F6B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6B54u;
            // 0x1f6b58: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6B64u;
            goto label_1f6b64;
        }
    }
    ctx->pc = 0x1F6B5Cu;
    // 0x1f6b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B5Cu;
        // 0x1f6b60: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6B64u;
label_1f6b64:
    // 0x1f6b64: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x1f6b64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1f6b68: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F6B68u;
    {
        const bool branch_taken_0x1f6b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B68u;
        // 0x1f6b6c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b68) {
            ctx->pc = 0x1F6B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6b50;
        }
    }
    ctx->pc = 0x1F6B70u;
label_1f6b70:
    // 0x1f6b70: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6B78u;
}
