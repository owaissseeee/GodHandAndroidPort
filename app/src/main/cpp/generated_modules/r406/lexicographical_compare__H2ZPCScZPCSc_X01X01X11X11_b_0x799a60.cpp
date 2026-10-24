#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r406_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r406
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x799a60 - 0x799ac8
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x799a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x799a60");
#endif

    switch (ctx->pc) {
        case 0x799a78u: goto label_799a78;
        default: break;
    }

    ctx->pc = 0x799a60u;

    // 0x799a60: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x799A60u;
    {
        const bool branch_taken_0x799a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x799a60) {
            ctx->pc = 0x799AB0u;
            goto label_799ab0;
        }
    }
    ctx->pc = 0x799A68u;
    // 0x799a68: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x799A68u;
    {
        const bool branch_taken_0x799a68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x799a68) {
            ctx->pc = 0x799AB0u;
            goto label_799ab0;
        }
    }
    ctx->pc = 0x799A70u;
    // 0x799a70: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x799a70u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799a74: 0x0  nop
    ctx->pc = 0x799a74u;
    // NOP
label_799a78:
    // 0x799a78: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x799a78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799a7c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x799a7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799a80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799A80u;
    {
        const bool branch_taken_0x799a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A80u;
        // 0x799a84: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a80) {
            ctx->pc = 0x799A90u;
            goto label_799a90;
        }
    }
    ctx->pc = 0x799A88u;
    // 0x799a88: 0x3e00008  jr          $ra
    ctx->pc = 0x799A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A88u;
        // 0x799a8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A90u;
label_799a90:
    // 0x799a90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799A90u;
    {
        const bool branch_taken_0x799a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A90u;
        // 0x799a94: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a90) {
            ctx->pc = 0x799AA0u;
            goto label_799aa0;
        }
    }
    ctx->pc = 0x799A98u;
    // 0x799a98: 0x3e00008  jr          $ra
    ctx->pc = 0x799A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A98u;
        // 0x799a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799AA0u;
label_799aa0:
    // 0x799aa0: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799AA0u;
    {
        const bool branch_taken_0x799aa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x799AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AA0u;
        // 0x799aa4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799aa0) {
            ctx->pc = 0x799AB0u;
            goto label_799ab0;
        }
    }
    ctx->pc = 0x799AA8u;
    // 0x799aa8: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x799AA8u;
    {
        const bool branch_taken_0x799aa8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x799aa8) {
            ctx->pc = 0x799AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799AA8u;
            // 0x799aac: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a78;
        }
    }
    ctx->pc = 0x799AB0u;
label_799ab0:
    // 0x799ab0: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799AB0u;
    {
        const bool branch_taken_0x799ab0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x799AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AB0u;
        // 0x799ab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ab0) {
            ctx->pc = 0x799AC0u;
            goto label_799ac0;
        }
    }
    ctx->pc = 0x799AB8u;
    // 0x799ab8: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x799ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x799abc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x799abcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_799ac0:
    // 0x799ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x799AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799AC8u;
}
} // namespace gh_r406
