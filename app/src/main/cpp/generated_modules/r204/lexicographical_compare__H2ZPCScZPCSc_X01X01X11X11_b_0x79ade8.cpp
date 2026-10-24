#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r204_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r204
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79ade8 - 0x79ae50
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79ade8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79ade8");
#endif

    switch (ctx->pc) {
        case 0x79ae00u: goto label_79ae00;
        default: break;
    }

    ctx->pc = 0x79ade8u;

    // 0x79ade8: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79ADE8u;
    {
        const bool branch_taken_0x79ade8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79ade8) {
            ctx->pc = 0x79AE38u;
            goto label_79ae38;
        }
    }
    ctx->pc = 0x79ADF0u;
    // 0x79adf0: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79ADF0u;
    {
        const bool branch_taken_0x79adf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79adf0) {
            ctx->pc = 0x79AE38u;
            goto label_79ae38;
        }
    }
    ctx->pc = 0x79ADF8u;
    // 0x79adf8: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79adf8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79adfc: 0x0  nop
    ctx->pc = 0x79adfcu;
    // NOP
label_79ae00:
    // 0x79ae00: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79ae00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ae04: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79ae04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79ae08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AE08u;
    {
        const bool branch_taken_0x79ae08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE08u;
        // 0x79ae0c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae08) {
            ctx->pc = 0x79AE18u;
            goto label_79ae18;
        }
    }
    ctx->pc = 0x79AE10u;
    // 0x79ae10: 0x3e00008  jr          $ra
    ctx->pc = 0x79AE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE10u;
        // 0x79ae14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AE18u;
label_79ae18:
    // 0x79ae18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AE18u;
    {
        const bool branch_taken_0x79ae18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE18u;
        // 0x79ae1c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae18) {
            ctx->pc = 0x79AE28u;
            goto label_79ae28;
        }
    }
    ctx->pc = 0x79AE20u;
    // 0x79ae20: 0x3e00008  jr          $ra
    ctx->pc = 0x79AE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE20u;
        // 0x79ae24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AE28u;
label_79ae28:
    // 0x79ae28: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AE28u;
    {
        const bool branch_taken_0x79ae28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE28u;
        // 0x79ae2c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae28) {
            ctx->pc = 0x79AE38u;
            goto label_79ae38;
        }
    }
    ctx->pc = 0x79AE30u;
    // 0x79ae30: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79AE30u;
    {
        const bool branch_taken_0x79ae30 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79ae30) {
            ctx->pc = 0x79AE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AE30u;
            // 0x79ae34: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ae00;
        }
    }
    ctx->pc = 0x79AE38u;
label_79ae38:
    // 0x79ae38: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AE38u;
    {
        const bool branch_taken_0x79ae38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE38u;
        // 0x79ae3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae38) {
            ctx->pc = 0x79AE48u;
            goto label_79ae48;
        }
    }
    ctx->pc = 0x79AE40u;
    // 0x79ae40: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79ae40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79ae44: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79ae44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79ae48:
    // 0x79ae48: 0x3e00008  jr          $ra
    ctx->pc = 0x79AE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AE50u;
}
} // namespace gh_r204
