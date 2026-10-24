#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r300_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r300
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79ac40 - 0x79aca8
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79ac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79ac40");
#endif

    switch (ctx->pc) {
        case 0x79ac58u: goto label_79ac58;
        default: break;
    }

    ctx->pc = 0x79ac40u;

    // 0x79ac40: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79AC40u;
    {
        const bool branch_taken_0x79ac40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79ac40) {
            ctx->pc = 0x79AC90u;
            goto label_79ac90;
        }
    }
    ctx->pc = 0x79AC48u;
    // 0x79ac48: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79AC48u;
    {
        const bool branch_taken_0x79ac48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79ac48) {
            ctx->pc = 0x79AC90u;
            goto label_79ac90;
        }
    }
    ctx->pc = 0x79AC50u;
    // 0x79ac50: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79ac50u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79ac54: 0x0  nop
    ctx->pc = 0x79ac54u;
    // NOP
label_79ac58:
    // 0x79ac58: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79ac58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ac5c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79ac5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79ac60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AC60u;
    {
        const bool branch_taken_0x79ac60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC60u;
        // 0x79ac64: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac60) {
            ctx->pc = 0x79AC70u;
            goto label_79ac70;
        }
    }
    ctx->pc = 0x79AC68u;
    // 0x79ac68: 0x3e00008  jr          $ra
    ctx->pc = 0x79AC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC68u;
        // 0x79ac6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AC70u;
label_79ac70:
    // 0x79ac70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AC70u;
    {
        const bool branch_taken_0x79ac70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC70u;
        // 0x79ac74: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac70) {
            ctx->pc = 0x79AC80u;
            goto label_79ac80;
        }
    }
    ctx->pc = 0x79AC78u;
    // 0x79ac78: 0x3e00008  jr          $ra
    ctx->pc = 0x79AC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC78u;
        // 0x79ac7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AC80u;
label_79ac80:
    // 0x79ac80: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AC80u;
    {
        const bool branch_taken_0x79ac80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC80u;
        // 0x79ac84: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac80) {
            ctx->pc = 0x79AC90u;
            goto label_79ac90;
        }
    }
    ctx->pc = 0x79AC88u;
    // 0x79ac88: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79AC88u;
    {
        const bool branch_taken_0x79ac88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79ac88) {
            ctx->pc = 0x79AC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AC88u;
            // 0x79ac8c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ac58;
        }
    }
    ctx->pc = 0x79AC90u;
label_79ac90:
    // 0x79ac90: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AC90u;
    {
        const bool branch_taken_0x79ac90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC90u;
        // 0x79ac94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac90) {
            ctx->pc = 0x79ACA0u;
            goto label_79aca0;
        }
    }
    ctx->pc = 0x79AC98u;
    // 0x79ac98: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79ac98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79ac9c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79ac9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79aca0:
    // 0x79aca0: 0x3e00008  jr          $ra
    ctx->pc = 0x79ACA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ACA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ACA8u;
}
} // namespace gh_r300
