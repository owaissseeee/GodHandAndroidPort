#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: checkDevil__Fv
// Address: 0x79b008 - 0x79b070
void checkDevil__Fv_0x79b008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkDevil__Fv_0x79b008");
#endif

    switch (ctx->pc) {
        case 0x79b020u: goto label_79b020;
        default: break;
    }

    ctx->pc = 0x79b008u;

    // 0x79b008: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79b008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79b00c: 0x8c4569f0  lw          $a1, 0x69F0($v0)
    ctx->pc = 0x79b00cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79b010: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x79B010u;
    {
        const bool branch_taken_0x79b010 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B010u;
        // 0x79b014: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b010) {
            ctx->pc = 0x79B064u;
            goto label_79b064;
        }
    }
    ctx->pc = 0x79B018u;
    // 0x79b018: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x79b018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x79b01c: 0x0  nop
    ctx->pc = 0x79b01cu;
    // NOP
label_79b020:
    // 0x79b020: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x79B020u;
    {
        const bool branch_taken_0x79b020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b020) {
            ctx->pc = 0x79B024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B020u;
            // 0x79b024: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B05Cu;
            goto label_79b05c;
        }
    }
    ctx->pc = 0x79B028u;
    // 0x79b028: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x79b028u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x79b02c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79b02cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79b030: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B030u;
    {
        const bool branch_taken_0x79b030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B030u;
        // 0x79b034: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b030) {
            ctx->pc = 0x79B040u;
            goto label_79b040;
        }
    }
    ctx->pc = 0x79B038u;
    // 0x79b038: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79b038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79b03c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79b03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b040:
    // 0x79b040: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x79b040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x79b044: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B044u;
    {
        const bool branch_taken_0x79b044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B044u;
        // 0x79b048: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b044) {
            ctx->pc = 0x79B058u;
            goto label_79b058;
        }
    }
    ctx->pc = 0x79B04Cu;
    // 0x79b04c: 0x90820614  lbu         $v0, 0x614($a0)
    ctx->pc = 0x79b04cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1556)));
    // 0x79b050: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79b050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79b054: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x79b054u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_79b058:
    // 0x79b058: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79b058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_79b05c:
    // 0x79b05c: 0x54a0fff0  bnel        $a1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x79B05Cu;
    {
        const bool branch_taken_0x79b05c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b05c) {
            ctx->pc = 0x79B060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B05Cu;
            // 0x79b060: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b020;
        }
    }
    ctx->pc = 0x79B064u;
label_79b064:
    // 0x79b064: 0x3e00008  jr          $ra
    ctx->pc = 0x79B064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B064u;
        // 0x79b068: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B06Cu;
    // 0x79b06c: 0x0  nop
    ctx->pc = 0x79b06cu;
    // NOP
    ctx->pc = 0x79b070u;
}
} // namespace gh_r600
