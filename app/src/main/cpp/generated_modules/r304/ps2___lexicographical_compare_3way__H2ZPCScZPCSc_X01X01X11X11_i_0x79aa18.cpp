#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r304_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r304
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79aa18 - 0x79aa78
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79aa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79aa18");
#endif

    switch (ctx->pc) {
        case 0x79aa30u: goto label_79aa30;
        default: break;
    }

    ctx->pc = 0x79aa18u;

    // 0x79aa18: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79AA18u;
    {
        const bool branch_taken_0x79aa18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79aa18) {
            ctx->pc = 0x79AA58u;
            goto label_79aa58;
        }
    }
    ctx->pc = 0x79AA20u;
    // 0x79aa20: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79AA20u;
    {
        const bool branch_taken_0x79aa20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA20u;
        // 0x79aa24: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa20) {
            ctx->pc = 0x79AA70u;
            goto label_79aa70;
        }
    }
    ctx->pc = 0x79AA28u;
    // 0x79aa28: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79aa28u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79aa2c: 0x0  nop
    ctx->pc = 0x79aa2cu;
    // NOP
label_79aa30:
    // 0x79aa30: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79aa30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79aa34: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79aa34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79aa38: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AA38u;
    {
        const bool branch_taken_0x79aa38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA38u;
        // 0x79aa3c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa38) {
            ctx->pc = 0x79AA60u;
            goto label_79aa60;
        }
    }
    ctx->pc = 0x79AA40u;
    // 0x79aa40: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AA40u;
    {
        const bool branch_taken_0x79aa40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA40u;
        // 0x79aa44: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa40) {
            ctx->pc = 0x79AA68u;
            goto label_79aa68;
        }
    }
    ctx->pc = 0x79AA48u;
    // 0x79aa48: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AA48u;
    {
        const bool branch_taken_0x79aa48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA48u;
        // 0x79aa4c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa48) {
            ctx->pc = 0x79AA58u;
            goto label_79aa58;
        }
    }
    ctx->pc = 0x79AA50u;
    // 0x79aa50: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AA50u;
    {
        const bool branch_taken_0x79aa50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79aa50) {
            ctx->pc = 0x79AA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AA50u;
            // 0x79aa54: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aa30;
        }
    }
    ctx->pc = 0x79AA58u;
label_79aa58:
    // 0x79aa58: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AA58u;
    {
        const bool branch_taken_0x79aa58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA58u;
        // 0x79aa5c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa58) {
            ctx->pc = 0x79AA70u;
            goto label_79aa70;
        }
    }
    ctx->pc = 0x79AA60u;
label_79aa60:
    // 0x79aa60: 0x3e00008  jr          $ra
    ctx->pc = 0x79AA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA60u;
        // 0x79aa64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AA68u;
label_79aa68:
    // 0x79aa68: 0x3e00008  jr          $ra
    ctx->pc = 0x79AA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA68u;
        // 0x79aa6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AA70u;
label_79aa70:
    // 0x79aa70: 0x3e00008  jr          $ra
    ctx->pc = 0x79AA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA70u;
        // 0x79aa74: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AA78u;
}
} // namespace gh_r304
