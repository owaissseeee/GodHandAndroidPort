#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: func_0079AA28
// Address: 0x79aa28 - 0x79aab0
void func_0079AA28_0x79aa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AA28_0x79aa28");
#endif

    switch (ctx->pc) {
        case 0x79aa40u: goto label_79aa40;
        default: break;
    }

    ctx->pc = 0x79aa28u;

    // 0x79aa28: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79aa2c: 0x8c4669f0  lw          $a2, 0x69F0($v0)
    ctx->pc = 0x79aa2cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79aa30: 0x10c0001c  beqz        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x79AA30u;
    {
        const bool branch_taken_0x79aa30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA30u;
        // 0x79aa34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa30) {
            ctx->pc = 0x79AAA4u;
            goto label_79aaa4;
        }
    }
    ctx->pc = 0x79AA38u;
    // 0x79aa38: 0x24080201  addiu       $t0, $zero, 0x201
    ctx->pc = 0x79aa38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x79aa3c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x79aa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_79aa40:
    // 0x79aa40: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x79AA40u;
    {
        const bool branch_taken_0x79aa40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79aa40) {
            ctx->pc = 0x79AA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AA40u;
            // 0x79aa44: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AA9Cu;
            goto label_79aa9c;
        }
    }
    ctx->pc = 0x79AA48u;
    // 0x79aa48: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x79aa48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x79aa4c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79aa4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79aa50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AA50u;
    {
        const bool branch_taken_0x79aa50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA50u;
        // 0x79aa54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa50) {
            ctx->pc = 0x79AA60u;
            goto label_79aa60;
        }
    }
    ctx->pc = 0x79AA58u;
    // 0x79aa58: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79aa58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79aa5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79aa5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79aa60:
    // 0x79aa60: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x79aa60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79aa64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x79AA64u;
    {
        const bool branch_taken_0x79aa64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA64u;
        // 0x79aa68: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa64) {
            ctx->pc = 0x79AA98u;
            goto label_79aa98;
        }
    }
    ctx->pc = 0x79AA6Cu;
    // 0x79aa6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AA6Cu;
    {
        const bool branch_taken_0x79aa6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA6Cu;
        // 0x79aa70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa6c) {
            ctx->pc = 0x79AA7Cu;
            goto label_79aa7c;
        }
    }
    ctx->pc = 0x79AA74u;
    // 0x79aa74: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79aa74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79aa78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79aa78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79aa7c:
    // 0x79aa7c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x79aa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79aa80: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x79AA80u;
    {
        const bool branch_taken_0x79aa80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79aa80) {
            ctx->pc = 0x79AA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AA80u;
            // 0x79aa84: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AA9Cu;
            goto label_79aa9c;
        }
    }
    ctx->pc = 0x79AA88u;
    // 0x79aa88: 0x8c820564  lw          $v0, 0x564($a0)
    ctx->pc = 0x79aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x79aa8c: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x79aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79aa90: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x79aa90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x79aa94: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x79aa94u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_79aa98:
    // 0x79aa98: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x79aa98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_79aa9c:
    // 0x79aa9c: 0x54c0ffe8  bnel        $a2, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x79AA9Cu;
    {
        const bool branch_taken_0x79aa9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x79aa9c) {
            ctx->pc = 0x79AAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AA9Cu;
            // 0x79aaa0: 0x8cc40008  lw          $a0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aa40;
        }
    }
    ctx->pc = 0x79AAA4u;
label_79aaa4:
    // 0x79aaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x79AAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAA4u;
        // 0x79aaa8: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AAACu;
    // 0x79aaac: 0x0  nop
    ctx->pc = 0x79aaacu;
    // NOP
    ctx->pc = 0x79aab0u;
}
} // namespace gh_r607
