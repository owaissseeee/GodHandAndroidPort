#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x7b4a70 - 0x7b4ad8
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x7b4a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x7b4a70");
#endif

    switch (ctx->pc) {
        case 0x7b4a88u: goto label_7b4a88;
        default: break;
    }

    ctx->pc = 0x7b4a70u;

    // 0x7b4a70: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x7B4A70u;
    {
        const bool branch_taken_0x7b4a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x7b4a70) {
            ctx->pc = 0x7B4AC0u;
            goto label_7b4ac0;
        }
    }
    ctx->pc = 0x7B4A78u;
    // 0x7b4a78: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x7B4A78u;
    {
        const bool branch_taken_0x7b4a78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x7b4a78) {
            ctx->pc = 0x7B4AC0u;
            goto label_7b4ac0;
        }
    }
    ctx->pc = 0x7B4A80u;
    // 0x7b4a80: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x7b4a80u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7b4a84: 0x0  nop
    ctx->pc = 0x7b4a84u;
    // NOP
label_7b4a88:
    // 0x7b4a88: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x7b4a88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7b4a8c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x7b4a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b4a90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B4A90u;
    {
        const bool branch_taken_0x7b4a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B4A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4A90u;
        // 0x7b4a94: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4a90) {
            ctx->pc = 0x7B4AA0u;
            goto label_7b4aa0;
        }
    }
    ctx->pc = 0x7B4A98u;
    // 0x7b4a98: 0x3e00008  jr          $ra
    ctx->pc = 0x7B4A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B4A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4A98u;
        // 0x7b4a9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B4A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B4AA0u;
label_7b4aa0:
    // 0x7b4aa0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B4AA0u;
    {
        const bool branch_taken_0x7b4aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B4AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4AA0u;
        // 0x7b4aa4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4aa0) {
            ctx->pc = 0x7B4AB0u;
            goto label_7b4ab0;
        }
    }
    ctx->pc = 0x7B4AA8u;
    // 0x7b4aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x7B4AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B4AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4AA8u;
        // 0x7b4aac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B4AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B4AB0u;
label_7b4ab0:
    // 0x7b4ab0: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B4AB0u;
    {
        const bool branch_taken_0x7b4ab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x7B4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4AB0u;
        // 0x7b4ab4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4ab0) {
            ctx->pc = 0x7B4AC0u;
            goto label_7b4ac0;
        }
    }
    ctx->pc = 0x7B4AB8u;
    // 0x7b4ab8: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x7B4AB8u;
    {
        const bool branch_taken_0x7b4ab8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x7b4ab8) {
            ctx->pc = 0x7B4ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B4AB8u;
            // 0x7b4abc: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B4A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b4a88;
        }
    }
    ctx->pc = 0x7B4AC0u;
label_7b4ac0:
    // 0x7b4ac0: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B4AC0u;
    {
        const bool branch_taken_0x7b4ac0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x7B4AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4AC0u;
        // 0x7b4ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4ac0) {
            ctx->pc = 0x7B4AD0u;
            goto label_7b4ad0;
        }
    }
    ctx->pc = 0x7B4AC8u;
    // 0x7b4ac8: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x7b4ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x7b4acc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x7b4accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_7b4ad0:
    // 0x7b4ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x7B4AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B4AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B4AD8u;
}
} // namespace gh_event
