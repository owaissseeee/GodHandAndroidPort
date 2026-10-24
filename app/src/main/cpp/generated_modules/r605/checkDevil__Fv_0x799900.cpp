#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r605_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r605
{
// Function: checkDevil__Fv
// Address: 0x799900 - 0x799968
void checkDevil__Fv_0x799900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkDevil__Fv_0x799900");
#endif

    switch (ctx->pc) {
        case 0x799918u: goto label_799918;
        default: break;
    }

    ctx->pc = 0x799900u;

    // 0x799900: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x799900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x799904: 0x8c4569f0  lw          $a1, 0x69F0($v0)
    ctx->pc = 0x799904u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5869F0u));
    // 0x799908: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x799908u;
    {
        const bool branch_taken_0x799908 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799908u;
        // 0x79990c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799908) {
            ctx->pc = 0x79995Cu;
            goto label_79995c;
        }
    }
    ctx->pc = 0x799910u;
    // 0x799910: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x799910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x799914: 0x0  nop
    ctx->pc = 0x799914u;
    // NOP
label_799918:
    // 0x799918: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x799918u;
    {
        const bool branch_taken_0x799918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x799918) {
            ctx->pc = 0x79991Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799918u;
            // 0x79991c: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799954u;
            goto label_799954;
        }
    }
    ctx->pc = 0x799920u;
    // 0x799920: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x799920u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x799924: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x799924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x799928: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799928u;
    {
        const bool branch_taken_0x799928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799928u;
        // 0x79992c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799928) {
            ctx->pc = 0x799938u;
            goto label_799938;
        }
    }
    ctx->pc = 0x799930u;
    // 0x799930: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x799934: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x799934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799938:
    // 0x799938: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x799938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x79993c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79993Cu;
    {
        const bool branch_taken_0x79993c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79993Cu;
        // 0x799940: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79993c) {
            ctx->pc = 0x799950u;
            goto label_799950;
        }
    }
    ctx->pc = 0x799944u;
    // 0x799944: 0x90820614  lbu         $v0, 0x614($a0)
    ctx->pc = 0x799944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1556)));
    // 0x799948: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x799948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79994c: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x79994cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_799950:
    // 0x799950: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x799950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_799954:
    // 0x799954: 0x54a0fff0  bnel        $a1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x799954u;
    {
        const bool branch_taken_0x799954 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x799954) {
            ctx->pc = 0x799958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799954u;
            // 0x799958: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799918;
        }
    }
    ctx->pc = 0x79995Cu;
label_79995c:
    // 0x79995c: 0x3e00008  jr          $ra
    ctx->pc = 0x79995Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79995Cu;
        // 0x799960: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79995Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799964u;
    // 0x799964: 0x0  nop
    ctx->pc = 0x799964u;
    // NOP
    ctx->pc = 0x799968u;
}
} // namespace gh_r605
