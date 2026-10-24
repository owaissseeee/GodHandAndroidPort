#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r603_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r603
{
// Function: checkDevil__Fv
// Address: 0x799a48 - 0x799ab0
void checkDevil__Fv_0x799a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkDevil__Fv_0x799a48");
#endif

    switch (ctx->pc) {
        case 0x799a60u: goto label_799a60;
        default: break;
    }

    ctx->pc = 0x799a48u;

    // 0x799a48: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x799a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x799a4c: 0x8c4569f0  lw          $a1, 0x69F0($v0)
    ctx->pc = 0x799a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5869F0u));
    // 0x799a50: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x799A50u;
    {
        const bool branch_taken_0x799a50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A50u;
        // 0x799a54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a50) {
            ctx->pc = 0x799AA4u;
            goto label_799aa4;
        }
    }
    ctx->pc = 0x799A58u;
    // 0x799a58: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x799a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x799a5c: 0x0  nop
    ctx->pc = 0x799a5cu;
    // NOP
label_799a60:
    // 0x799a60: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x799A60u;
    {
        const bool branch_taken_0x799a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x799a60) {
            ctx->pc = 0x799A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A60u;
            // 0x799a64: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A9Cu;
            goto label_799a9c;
        }
    }
    ctx->pc = 0x799A68u;
    // 0x799a68: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x799a68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x799a6c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x799a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x799a70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799A70u;
    {
        const bool branch_taken_0x799a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A70u;
        // 0x799a74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a70) {
            ctx->pc = 0x799A80u;
            goto label_799a80;
        }
    }
    ctx->pc = 0x799A78u;
    // 0x799a78: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799a78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x799a7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x799a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799a80:
    // 0x799a80: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x799a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x799a84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799A84u;
    {
        const bool branch_taken_0x799a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A84u;
        // 0x799a88: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a84) {
            ctx->pc = 0x799A98u;
            goto label_799a98;
        }
    }
    ctx->pc = 0x799A8Cu;
    // 0x799a8c: 0x90820614  lbu         $v0, 0x614($a0)
    ctx->pc = 0x799a8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1556)));
    // 0x799a90: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x799a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x799a94: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x799a94u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_799a98:
    // 0x799a98: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x799a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_799a9c:
    // 0x799a9c: 0x54a0fff0  bnel        $a1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x799A9Cu;
    {
        const bool branch_taken_0x799a9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x799a9c) {
            ctx->pc = 0x799AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A9Cu;
            // 0x799aa0: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a60;
        }
    }
    ctx->pc = 0x799AA4u;
label_799aa4:
    // 0x799aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x799AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AA4u;
        // 0x799aa8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799AACu;
    // 0x799aac: 0x0  nop
    ctx->pc = 0x799aacu;
    // NOP
    ctx->pc = 0x799ab0u;
}
} // namespace gh_r603
