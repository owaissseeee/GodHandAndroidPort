#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r602_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r602
{
// Function: checkDevil__Fv
// Address: 0x799680 - 0x7996e8
void checkDevil__Fv_0x799680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkDevil__Fv_0x799680");
#endif

    switch (ctx->pc) {
        case 0x799698u: goto label_799698;
        default: break;
    }

    ctx->pc = 0x799680u;

    // 0x799680: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x799680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x799684: 0x8c4569f0  lw          $a1, 0x69F0($v0)
    ctx->pc = 0x799684u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5869F0u));
    // 0x799688: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x799688u;
    {
        const bool branch_taken_0x799688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799688u;
        // 0x79968c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799688) {
            ctx->pc = 0x7996DCu;
            goto label_7996dc;
        }
    }
    ctx->pc = 0x799690u;
    // 0x799690: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x799690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x799694: 0x0  nop
    ctx->pc = 0x799694u;
    // NOP
label_799698:
    // 0x799698: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x799698u;
    {
        const bool branch_taken_0x799698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x799698) {
            ctx->pc = 0x79969Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799698u;
            // 0x79969c: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7996D4u;
            goto label_7996d4;
        }
    }
    ctx->pc = 0x7996A0u;
    // 0x7996a0: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x7996a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x7996a4: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x7996a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x7996a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7996A8u;
    {
        const bool branch_taken_0x7996a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7996ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A8u;
        // 0x7996ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996a8) {
            ctx->pc = 0x7996B8u;
            goto label_7996b8;
        }
    }
    ctx->pc = 0x7996B0u;
    // 0x7996b0: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x7996b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x7996b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x7996b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7996b8:
    // 0x7996b8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x7996b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x7996bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7996BCu;
    {
        const bool branch_taken_0x7996bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996BCu;
        // 0x7996c0: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996bc) {
            ctx->pc = 0x7996D0u;
            goto label_7996d0;
        }
    }
    ctx->pc = 0x7996C4u;
    // 0x7996c4: 0x90820614  lbu         $v0, 0x614($a0)
    ctx->pc = 0x7996c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1556)));
    // 0x7996c8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x7996c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x7996cc: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x7996ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_7996d0:
    // 0x7996d0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_7996d4:
    // 0x7996d4: 0x54a0fff0  bnel        $a1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x7996D4u;
    {
        const bool branch_taken_0x7996d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x7996d4) {
            ctx->pc = 0x7996D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7996D4u;
            // 0x7996d8: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799698;
        }
    }
    ctx->pc = 0x7996DCu;
label_7996dc:
    // 0x7996dc: 0x3e00008  jr          $ra
    ctx->pc = 0x7996DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7996E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996DCu;
        // 0x7996e0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7996E4u;
    // 0x7996e4: 0x0  nop
    ctx->pc = 0x7996e4u;
    // NOP
    ctx->pc = 0x7996e8u;
}
} // namespace gh_r602
