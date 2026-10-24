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
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79ae10 - 0x79ae70
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79ae10");
#endif

    switch (ctx->pc) {
        case 0x79ae28u: goto label_79ae28;
        default: break;
    }

    ctx->pc = 0x79ae10u;

    // 0x79ae10: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79AE10u;
    {
        const bool branch_taken_0x79ae10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79ae10) {
            ctx->pc = 0x79AE50u;
            goto label_79ae50;
        }
    }
    ctx->pc = 0x79AE18u;
    // 0x79ae18: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79AE18u;
    {
        const bool branch_taken_0x79ae18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE18u;
        // 0x79ae1c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae18) {
            ctx->pc = 0x79AE68u;
            goto label_79ae68;
        }
    }
    ctx->pc = 0x79AE20u;
    // 0x79ae20: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79ae20u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79ae24: 0x0  nop
    ctx->pc = 0x79ae24u;
    // NOP
label_79ae28:
    // 0x79ae28: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79ae28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ae2c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79ae2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79ae30: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AE30u;
    {
        const bool branch_taken_0x79ae30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE30u;
        // 0x79ae34: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae30) {
            ctx->pc = 0x79AE58u;
            goto label_79ae58;
        }
    }
    ctx->pc = 0x79AE38u;
    // 0x79ae38: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AE38u;
    {
        const bool branch_taken_0x79ae38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE38u;
        // 0x79ae3c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae38) {
            ctx->pc = 0x79AE60u;
            goto label_79ae60;
        }
    }
    ctx->pc = 0x79AE40u;
    // 0x79ae40: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AE40u;
    {
        const bool branch_taken_0x79ae40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE40u;
        // 0x79ae44: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae40) {
            ctx->pc = 0x79AE50u;
            goto label_79ae50;
        }
    }
    ctx->pc = 0x79AE48u;
    // 0x79ae48: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AE48u;
    {
        const bool branch_taken_0x79ae48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79ae48) {
            ctx->pc = 0x79AE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AE48u;
            // 0x79ae4c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ae28;
        }
    }
    ctx->pc = 0x79AE50u;
label_79ae50:
    // 0x79ae50: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AE50u;
    {
        const bool branch_taken_0x79ae50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE50u;
        // 0x79ae54: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae50) {
            ctx->pc = 0x79AE68u;
            goto label_79ae68;
        }
    }
    ctx->pc = 0x79AE58u;
label_79ae58:
    // 0x79ae58: 0x3e00008  jr          $ra
    ctx->pc = 0x79AE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE58u;
        // 0x79ae5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AE60u;
label_79ae60:
    // 0x79ae60: 0x3e00008  jr          $ra
    ctx->pc = 0x79AE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE60u;
        // 0x79ae64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AE68u;
label_79ae68:
    // 0x79ae68: 0x3e00008  jr          $ra
    ctx->pc = 0x79AE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE68u;
        // 0x79ae6c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AE70u;
}
} // namespace gh_r608
