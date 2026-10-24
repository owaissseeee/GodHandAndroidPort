#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r407_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r407
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x7998b8 - 0x799920
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x7998b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x7998b8");
#endif

    switch (ctx->pc) {
        case 0x7998d0u: goto label_7998d0;
        default: break;
    }

    ctx->pc = 0x7998b8u;

    // 0x7998b8: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x7998B8u;
    {
        const bool branch_taken_0x7998b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x7998b8) {
            ctx->pc = 0x799908u;
            goto label_799908;
        }
    }
    ctx->pc = 0x7998C0u;
    // 0x7998c0: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x7998C0u;
    {
        const bool branch_taken_0x7998c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x7998c0) {
            ctx->pc = 0x799908u;
            goto label_799908;
        }
    }
    ctx->pc = 0x7998C8u;
    // 0x7998c8: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x7998c8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7998cc: 0x0  nop
    ctx->pc = 0x7998ccu;
    // NOP
label_7998d0:
    // 0x7998d0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x7998d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7998d4: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x7998d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7998d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7998D8u;
    {
        const bool branch_taken_0x7998d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998D8u;
        // 0x7998dc: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998d8) {
            ctx->pc = 0x7998E8u;
            goto label_7998e8;
        }
    }
    ctx->pc = 0x7998E0u;
    // 0x7998e0: 0x3e00008  jr          $ra
    ctx->pc = 0x7998E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E0u;
        // 0x7998e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998E8u;
label_7998e8:
    // 0x7998e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7998E8u;
    {
        const bool branch_taken_0x7998e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E8u;
        // 0x7998ec: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998e8) {
            ctx->pc = 0x7998F8u;
            goto label_7998f8;
        }
    }
    ctx->pc = 0x7998F0u;
    // 0x7998f0: 0x3e00008  jr          $ra
    ctx->pc = 0x7998F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F0u;
        // 0x7998f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998F8u;
label_7998f8:
    // 0x7998f8: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7998F8u;
    {
        const bool branch_taken_0x7998f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x7998FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F8u;
        // 0x7998fc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998f8) {
            ctx->pc = 0x799908u;
            goto label_799908;
        }
    }
    ctx->pc = 0x799900u;
    // 0x799900: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x799900u;
    {
        const bool branch_taken_0x799900 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x799900) {
            ctx->pc = 0x799904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799900u;
            // 0x799904: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7998D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998d0;
        }
    }
    ctx->pc = 0x799908u;
label_799908:
    // 0x799908: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799908u;
    {
        const bool branch_taken_0x799908 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799908u;
        // 0x79990c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799908) {
            ctx->pc = 0x799918u;
            goto label_799918;
        }
    }
    ctx->pc = 0x799910u;
    // 0x799910: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x799910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x799914: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x799914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_799918:
    // 0x799918: 0x3e00008  jr          $ra
    ctx->pc = 0x799918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799920u;
}
} // namespace gh_r407
