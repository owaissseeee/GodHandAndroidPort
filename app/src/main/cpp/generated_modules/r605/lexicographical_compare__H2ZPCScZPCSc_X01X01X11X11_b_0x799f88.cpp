#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r605_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r605
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x799f88 - 0x799ff0
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x799f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x799f88");
#endif

    switch (ctx->pc) {
        case 0x799fa0u: goto label_799fa0;
        default: break;
    }

    ctx->pc = 0x799f88u;

    // 0x799f88: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x799F88u;
    {
        const bool branch_taken_0x799f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x799f88) {
            ctx->pc = 0x799FD8u;
            goto label_799fd8;
        }
    }
    ctx->pc = 0x799F90u;
    // 0x799f90: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x799F90u;
    {
        const bool branch_taken_0x799f90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x799f90) {
            ctx->pc = 0x799FD8u;
            goto label_799fd8;
        }
    }
    ctx->pc = 0x799F98u;
    // 0x799f98: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x799f98u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799f9c: 0x0  nop
    ctx->pc = 0x799f9cu;
    // NOP
label_799fa0:
    // 0x799fa0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x799fa0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799fa4: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x799fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799fa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799FA8u;
    {
        const bool branch_taken_0x799fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FA8u;
        // 0x799fac: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fa8) {
            ctx->pc = 0x799FB8u;
            goto label_799fb8;
        }
    }
    ctx->pc = 0x799FB0u;
    // 0x799fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x799FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FB0u;
        // 0x799fb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799FB8u;
label_799fb8:
    // 0x799fb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799FB8u;
    {
        const bool branch_taken_0x799fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FB8u;
        // 0x799fbc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fb8) {
            ctx->pc = 0x799FC8u;
            goto label_799fc8;
        }
    }
    ctx->pc = 0x799FC0u;
    // 0x799fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x799FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FC0u;
        // 0x799fc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799FC8u;
label_799fc8:
    // 0x799fc8: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799FC8u;
    {
        const bool branch_taken_0x799fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x799FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FC8u;
        // 0x799fcc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fc8) {
            ctx->pc = 0x799FD8u;
            goto label_799fd8;
        }
    }
    ctx->pc = 0x799FD0u;
    // 0x799fd0: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x799FD0u;
    {
        const bool branch_taken_0x799fd0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x799fd0) {
            ctx->pc = 0x799FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799FD0u;
            // 0x799fd4: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799fa0;
        }
    }
    ctx->pc = 0x799FD8u;
label_799fd8:
    // 0x799fd8: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799FD8u;
    {
        const bool branch_taken_0x799fd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x799FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FD8u;
        // 0x799fdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fd8) {
            ctx->pc = 0x799FE8u;
            goto label_799fe8;
        }
    }
    ctx->pc = 0x799FE0u;
    // 0x799fe0: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x799fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x799fe4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x799fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_799fe8:
    // 0x799fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x799FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799FF0u;
}
} // namespace gh_r605
