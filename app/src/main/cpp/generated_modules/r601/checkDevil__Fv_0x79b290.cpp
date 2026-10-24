#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: checkDevil__Fv
// Address: 0x79b290 - 0x79b2f8
void checkDevil__Fv_0x79b290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkDevil__Fv_0x79b290");
#endif

    switch (ctx->pc) {
        case 0x79b2a8u: goto label_79b2a8;
        default: break;
    }

    ctx->pc = 0x79b290u;

    // 0x79b290: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79b290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79b294: 0x8c4569f0  lw          $a1, 0x69F0($v0)
    ctx->pc = 0x79b294u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79b298: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x79B298u;
    {
        const bool branch_taken_0x79b298 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B298u;
        // 0x79b29c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b298) {
            ctx->pc = 0x79B2ECu;
            goto label_79b2ec;
        }
    }
    ctx->pc = 0x79B2A0u;
    // 0x79b2a0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x79b2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x79b2a4: 0x0  nop
    ctx->pc = 0x79b2a4u;
    // NOP
label_79b2a8:
    // 0x79b2a8: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x79B2A8u;
    {
        const bool branch_taken_0x79b2a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b2a8) {
            ctx->pc = 0x79B2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B2A8u;
            // 0x79b2ac: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B2E4u;
            goto label_79b2e4;
        }
    }
    ctx->pc = 0x79B2B0u;
    // 0x79b2b0: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x79b2b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x79b2b4: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79b2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79b2b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B2B8u;
    {
        const bool branch_taken_0x79b2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2B8u;
        // 0x79b2bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2b8) {
            ctx->pc = 0x79B2C8u;
            goto label_79b2c8;
        }
    }
    ctx->pc = 0x79B2C0u;
    // 0x79b2c0: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79b2c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79b2c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79b2c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b2c8:
    // 0x79b2c8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x79b2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x79b2cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B2CCu;
    {
        const bool branch_taken_0x79b2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2CCu;
        // 0x79b2d0: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2cc) {
            ctx->pc = 0x79B2E0u;
            goto label_79b2e0;
        }
    }
    ctx->pc = 0x79B2D4u;
    // 0x79b2d4: 0x90820614  lbu         $v0, 0x614($a0)
    ctx->pc = 0x79b2d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1556)));
    // 0x79b2d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79b2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79b2dc: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x79b2dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_79b2e0:
    // 0x79b2e0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79b2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_79b2e4:
    // 0x79b2e4: 0x54a0fff0  bnel        $a1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x79B2E4u;
    {
        const bool branch_taken_0x79b2e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b2e4) {
            ctx->pc = 0x79B2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B2E4u;
            // 0x79b2e8: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b2a8;
        }
    }
    ctx->pc = 0x79B2ECu;
label_79b2ec:
    // 0x79b2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x79B2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2ECu;
        // 0x79b2f0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B2F4u;
    // 0x79b2f4: 0x0  nop
    ctx->pc = 0x79b2f4u;
    // NOP
    ctx->pc = 0x79b2f8u;
}
} // namespace gh_r601
