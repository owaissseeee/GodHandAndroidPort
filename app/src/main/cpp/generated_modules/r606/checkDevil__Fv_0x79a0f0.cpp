#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r606_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r606
{
// Function: checkDevil__Fv
// Address: 0x79a0f0 - 0x79a158
void checkDevil__Fv_0x79a0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkDevil__Fv_0x79a0f0");
#endif

    switch (ctx->pc) {
        case 0x79a108u: goto label_79a108;
        default: break;
    }

    ctx->pc = 0x79a0f0u;

    // 0x79a0f0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79a0f4: 0x8c4569f0  lw          $a1, 0x69F0($v0)
    ctx->pc = 0x79a0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79a0f8: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x79A0F8u;
    {
        const bool branch_taken_0x79a0f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0F8u;
        // 0x79a0fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0f8) {
            ctx->pc = 0x79A14Cu;
            goto label_79a14c;
        }
    }
    ctx->pc = 0x79A100u;
    // 0x79a100: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x79a100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x79a104: 0x0  nop
    ctx->pc = 0x79a104u;
    // NOP
label_79a108:
    // 0x79a108: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x79A108u;
    {
        const bool branch_taken_0x79a108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a108) {
            ctx->pc = 0x79A10Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A108u;
            // 0x79a10c: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A144u;
            goto label_79a144;
        }
    }
    ctx->pc = 0x79A110u;
    // 0x79a110: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x79a110u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x79a114: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79a114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79a118: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A118u;
    {
        const bool branch_taken_0x79a118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A118u;
        // 0x79a11c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a118) {
            ctx->pc = 0x79A128u;
            goto label_79a128;
        }
    }
    ctx->pc = 0x79A120u;
    // 0x79a120: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79a120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79a124: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a128:
    // 0x79a128: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x79a128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x79a12c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A12Cu;
    {
        const bool branch_taken_0x79a12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A12Cu;
        // 0x79a130: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a12c) {
            ctx->pc = 0x79A140u;
            goto label_79a140;
        }
    }
    ctx->pc = 0x79A134u;
    // 0x79a134: 0x90820614  lbu         $v0, 0x614($a0)
    ctx->pc = 0x79a134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1556)));
    // 0x79a138: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79a138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79a13c: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x79a13cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_79a140:
    // 0x79a140: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79a140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_79a144:
    // 0x79a144: 0x54a0fff0  bnel        $a1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x79A144u;
    {
        const bool branch_taken_0x79a144 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a144) {
            ctx->pc = 0x79A148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A144u;
            // 0x79a148: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a108;
        }
    }
    ctx->pc = 0x79A14Cu;
label_79a14c:
    // 0x79a14c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A14Cu;
        // 0x79a150: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A154u;
    // 0x79a154: 0x0  nop
    ctx->pc = 0x79a154u;
    // NOP
    ctx->pc = 0x79a158u;
}
} // namespace gh_r606
