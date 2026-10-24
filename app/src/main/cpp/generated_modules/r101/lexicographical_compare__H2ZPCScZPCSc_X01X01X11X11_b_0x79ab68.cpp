#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r101_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r101
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79ab68 - 0x79abd0
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79ab68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79ab68");
#endif

    switch (ctx->pc) {
        case 0x79ab80u: goto label_79ab80;
        default: break;
    }

    ctx->pc = 0x79ab68u;

    // 0x79ab68: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79AB68u;
    {
        const bool branch_taken_0x79ab68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79ab68) {
            ctx->pc = 0x79ABB8u;
            goto label_79abb8;
        }
    }
    ctx->pc = 0x79AB70u;
    // 0x79ab70: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79AB70u;
    {
        const bool branch_taken_0x79ab70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79ab70) {
            ctx->pc = 0x79ABB8u;
            goto label_79abb8;
        }
    }
    ctx->pc = 0x79AB78u;
    // 0x79ab78: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79ab78u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79ab7c: 0x0  nop
    ctx->pc = 0x79ab7cu;
    // NOP
label_79ab80:
    // 0x79ab80: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79ab80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ab84: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79ab84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79ab88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AB88u;
    {
        const bool branch_taken_0x79ab88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB88u;
        // 0x79ab8c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab88) {
            ctx->pc = 0x79AB98u;
            goto label_79ab98;
        }
    }
    ctx->pc = 0x79AB90u;
    // 0x79ab90: 0x3e00008  jr          $ra
    ctx->pc = 0x79AB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB90u;
        // 0x79ab94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AB98u;
label_79ab98:
    // 0x79ab98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AB98u;
    {
        const bool branch_taken_0x79ab98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB98u;
        // 0x79ab9c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab98) {
            ctx->pc = 0x79ABA8u;
            goto label_79aba8;
        }
    }
    ctx->pc = 0x79ABA0u;
    // 0x79aba0: 0x3e00008  jr          $ra
    ctx->pc = 0x79ABA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABA0u;
        // 0x79aba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ABA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ABA8u;
label_79aba8:
    // 0x79aba8: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79ABA8u;
    {
        const bool branch_taken_0x79aba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABA8u;
        // 0x79abac: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aba8) {
            ctx->pc = 0x79ABB8u;
            goto label_79abb8;
        }
    }
    ctx->pc = 0x79ABB0u;
    // 0x79abb0: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79ABB0u;
    {
        const bool branch_taken_0x79abb0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79abb0) {
            ctx->pc = 0x79ABB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ABB0u;
            // 0x79abb4: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ab80;
        }
    }
    ctx->pc = 0x79ABB8u;
label_79abb8:
    // 0x79abb8: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79ABB8u;
    {
        const bool branch_taken_0x79abb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABB8u;
        // 0x79abbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abb8) {
            ctx->pc = 0x79ABC8u;
            goto label_79abc8;
        }
    }
    ctx->pc = 0x79ABC0u;
    // 0x79abc0: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79abc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79abc4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79abc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79abc8:
    // 0x79abc8: 0x3e00008  jr          $ra
    ctx->pc = 0x79ABC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ABC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ABD0u;
}
} // namespace gh_r101
