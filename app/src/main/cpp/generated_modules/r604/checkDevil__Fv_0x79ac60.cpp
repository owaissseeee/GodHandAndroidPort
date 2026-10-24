#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: checkDevil__Fv
// Address: 0x79ac60 - 0x79acc8
void checkDevil__Fv_0x79ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkDevil__Fv_0x79ac60");
#endif

    switch (ctx->pc) {
        case 0x79ac78u: goto label_79ac78;
        default: break;
    }

    ctx->pc = 0x79ac60u;

    // 0x79ac60: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79ac64: 0x8c4569f0  lw          $a1, 0x69F0($v0)
    ctx->pc = 0x79ac64u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79ac68: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x79AC68u;
    {
        const bool branch_taken_0x79ac68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC68u;
        // 0x79ac6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac68) {
            ctx->pc = 0x79ACBCu;
            goto label_79acbc;
        }
    }
    ctx->pc = 0x79AC70u;
    // 0x79ac70: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x79ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x79ac74: 0x0  nop
    ctx->pc = 0x79ac74u;
    // NOP
label_79ac78:
    // 0x79ac78: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x79AC78u;
    {
        const bool branch_taken_0x79ac78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ac78) {
            ctx->pc = 0x79AC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AC78u;
            // 0x79ac7c: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ACB4u;
            goto label_79acb4;
        }
    }
    ctx->pc = 0x79AC80u;
    // 0x79ac80: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x79ac80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x79ac84: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79ac84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79ac88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AC88u;
    {
        const bool branch_taken_0x79ac88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC88u;
        // 0x79ac8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac88) {
            ctx->pc = 0x79AC98u;
            goto label_79ac98;
        }
    }
    ctx->pc = 0x79AC90u;
    // 0x79ac90: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79ac90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79ac94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79ac94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79ac98:
    // 0x79ac98: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x79ac98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x79ac9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AC9Cu;
    {
        const bool branch_taken_0x79ac9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC9Cu;
        // 0x79aca0: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac9c) {
            ctx->pc = 0x79ACB0u;
            goto label_79acb0;
        }
    }
    ctx->pc = 0x79ACA4u;
    // 0x79aca4: 0x90820614  lbu         $v0, 0x614($a0)
    ctx->pc = 0x79aca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1556)));
    // 0x79aca8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79aca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79acac: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x79acacu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_79acb0:
    // 0x79acb0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_79acb4:
    // 0x79acb4: 0x54a0fff0  bnel        $a1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x79ACB4u;
    {
        const bool branch_taken_0x79acb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x79acb4) {
            ctx->pc = 0x79ACB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ACB4u;
            // 0x79acb8: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ac78;
        }
    }
    ctx->pc = 0x79ACBCu;
label_79acbc:
    // 0x79acbc: 0x3e00008  jr          $ra
    ctx->pc = 0x79ACBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACBCu;
        // 0x79acc0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ACBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ACC4u;
    // 0x79acc4: 0x0  nop
    ctx->pc = 0x79acc4u;
    // NOP
    ctx->pc = 0x79acc8u;
}
} // namespace gh_r604
