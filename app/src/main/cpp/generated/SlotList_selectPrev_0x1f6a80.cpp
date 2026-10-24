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

// Function: SlotList_selectPrev
// Address: 0x1f6a80 - 0x1f6af8
void SlotList_selectPrev_0x1f6a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SlotList_selectPrev_0x1f6a80");
#endif

    switch (ctx->pc) {
        case 0x1f6a98u: goto label_1f6a98;
        case 0x1f6ad0u: goto label_1f6ad0;
        default: break;
    }

    ctx->pc = 0x1f6a80u;

    // 0x1f6a80: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1f6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f6a84: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1f6a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f6a88: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F6A88u;
    {
        const bool branch_taken_0x1f6a88 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1F6A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A88u;
        // 0x1f6a8c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a88) {
            ctx->pc = 0x1F6AB4u;
            goto label_1f6ab4;
        }
    }
    ctx->pc = 0x1F6A90u;
    // 0x1f6a90: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1f6a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1f6a94: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x1f6a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f6a98:
    // 0x1f6a98: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f6a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f6a9c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6A9Cu;
    {
        const bool branch_taken_0x1f6a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6a9c) {
            ctx->pc = 0x1F6AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6A9Cu;
            // 0x1f6aa0: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6AACu;
            goto label_1f6aac;
        }
    }
    ctx->pc = 0x1F6AA4u;
    // 0x1f6aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6AA4u;
        // 0x1f6aa8: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6AACu;
label_1f6aac:
    // 0x1f6aac: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F6AACu;
    {
        const bool branch_taken_0x1f6aac = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1F6AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6AACu;
        // 0x1f6ab0: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6aac) {
            ctx->pc = 0x1F6A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6a98;
        }
    }
    ctx->pc = 0x1F6AB4u;
label_1f6ab4:
    // 0x1f6ab4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1f6ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f6ab8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1f6ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f6abc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F6ABCu;
    {
        const bool branch_taken_0x1f6abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6ABCu;
        // 0x1f6ac0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6abc) {
            ctx->pc = 0x1F6AF0u;
            goto label_1f6af0;
        }
    }
    ctx->pc = 0x1F6AC4u;
    // 0x1f6ac4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1f6ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ac8: 0x2483001c  addiu       $v1, $a0, 0x1C
    ctx->pc = 0x1f6ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x1f6acc: 0x0  nop
    ctx->pc = 0x1f6accu;
    // NOP
label_1f6ad0:
    // 0x1f6ad0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f6ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f6ad4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6AD4u;
    {
        const bool branch_taken_0x1f6ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6ad4) {
            ctx->pc = 0x1F6AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6AD4u;
            // 0x1f6ad8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6AE4u;
            goto label_1f6ae4;
        }
    }
    ctx->pc = 0x1F6ADCu;
    // 0x1f6adc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6ADCu;
        // 0x1f6ae0: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6AE4u;
label_1f6ae4:
    // 0x1f6ae4: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1f6ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f6ae8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F6AE8u;
    {
        const bool branch_taken_0x1f6ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6AE8u;
        // 0x1f6aec: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ae8) {
            ctx->pc = 0x1F6AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6ad0;
        }
    }
    ctx->pc = 0x1F6AF0u;
label_1f6af0:
    // 0x1f6af0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6AF8u;
}
