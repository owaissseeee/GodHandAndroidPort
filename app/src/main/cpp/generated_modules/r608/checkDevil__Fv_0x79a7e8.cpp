#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: checkDevil__Fv
// Address: 0x79a7e8 - 0x79a850
void checkDevil__Fv_0x79a7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkDevil__Fv_0x79a7e8");
#endif

    switch (ctx->pc) {
        case 0x79a800u: goto label_79a800;
        default: break;
    }

    ctx->pc = 0x79a7e8u;

    // 0x79a7e8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79a7ec: 0x8c4569f0  lw          $a1, 0x69F0($v0)
    ctx->pc = 0x79a7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79a7f0: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x79A7F0u;
    {
        const bool branch_taken_0x79a7f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7F0u;
        // 0x79a7f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7f0) {
            ctx->pc = 0x79A844u;
            goto label_79a844;
        }
    }
    ctx->pc = 0x79A7F8u;
    // 0x79a7f8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x79a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x79a7fc: 0x0  nop
    ctx->pc = 0x79a7fcu;
    // NOP
label_79a800:
    // 0x79a800: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x79A800u;
    {
        const bool branch_taken_0x79a800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a800) {
            ctx->pc = 0x79A804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A800u;
            // 0x79a804: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A83Cu;
            goto label_79a83c;
        }
    }
    ctx->pc = 0x79A808u;
    // 0x79a808: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x79a808u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x79a80c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79a80cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79a810: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A810u;
    {
        const bool branch_taken_0x79a810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A810u;
        // 0x79a814: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a810) {
            ctx->pc = 0x79A820u;
            goto label_79a820;
        }
    }
    ctx->pc = 0x79A818u;
    // 0x79a818: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79a818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79a81c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a81cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a820:
    // 0x79a820: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x79a820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x79a824: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A824u;
    {
        const bool branch_taken_0x79a824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A824u;
        // 0x79a828: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a824) {
            ctx->pc = 0x79A838u;
            goto label_79a838;
        }
    }
    ctx->pc = 0x79A82Cu;
    // 0x79a82c: 0x90820614  lbu         $v0, 0x614($a0)
    ctx->pc = 0x79a82cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1556)));
    // 0x79a830: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79a830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79a834: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x79a834u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_79a838:
    // 0x79a838: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x79a838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_79a83c:
    // 0x79a83c: 0x54a0fff0  bnel        $a1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x79A83Cu;
    {
        const bool branch_taken_0x79a83c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a83c) {
            ctx->pc = 0x79A840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A83Cu;
            // 0x79a840: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a800;
        }
    }
    ctx->pc = 0x79A844u;
label_79a844:
    // 0x79a844: 0x3e00008  jr          $ra
    ctx->pc = 0x79A844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A844u;
        // 0x79a848: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A84Cu;
    // 0x79a84c: 0x0  nop
    ctx->pc = 0x79a84cu;
    // NOP
    ctx->pc = 0x79a850u;
}
} // namespace gh_r608
