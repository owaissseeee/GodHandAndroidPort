#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r402_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r402
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x799a30 - 0x799a98
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x799a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x799a30");
#endif

    switch (ctx->pc) {
        case 0x799a48u: goto label_799a48;
        default: break;
    }

    ctx->pc = 0x799a30u;

    // 0x799a30: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x799A30u;
    {
        const bool branch_taken_0x799a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x799a30) {
            ctx->pc = 0x799A80u;
            goto label_799a80;
        }
    }
    ctx->pc = 0x799A38u;
    // 0x799a38: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x799A38u;
    {
        const bool branch_taken_0x799a38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x799a38) {
            ctx->pc = 0x799A80u;
            goto label_799a80;
        }
    }
    ctx->pc = 0x799A40u;
    // 0x799a40: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x799a40u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799a44: 0x0  nop
    ctx->pc = 0x799a44u;
    // NOP
label_799a48:
    // 0x799a48: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x799a48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799a4c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x799a4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799a50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799A50u;
    {
        const bool branch_taken_0x799a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A50u;
        // 0x799a54: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a50) {
            ctx->pc = 0x799A60u;
            goto label_799a60;
        }
    }
    ctx->pc = 0x799A58u;
    // 0x799a58: 0x3e00008  jr          $ra
    ctx->pc = 0x799A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A58u;
        // 0x799a5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A60u;
label_799a60:
    // 0x799a60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799A60u;
    {
        const bool branch_taken_0x799a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A60u;
        // 0x799a64: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a60) {
            ctx->pc = 0x799A70u;
            goto label_799a70;
        }
    }
    ctx->pc = 0x799A68u;
    // 0x799a68: 0x3e00008  jr          $ra
    ctx->pc = 0x799A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A68u;
        // 0x799a6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A70u;
label_799a70:
    // 0x799a70: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799A70u;
    {
        const bool branch_taken_0x799a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x799A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A70u;
        // 0x799a74: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a70) {
            ctx->pc = 0x799A80u;
            goto label_799a80;
        }
    }
    ctx->pc = 0x799A78u;
    // 0x799a78: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x799A78u;
    {
        const bool branch_taken_0x799a78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x799a78) {
            ctx->pc = 0x799A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A78u;
            // 0x799a7c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a48;
        }
    }
    ctx->pc = 0x799A80u;
label_799a80:
    // 0x799a80: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799A80u;
    {
        const bool branch_taken_0x799a80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x799A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A80u;
        // 0x799a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a80) {
            ctx->pc = 0x799A90u;
            goto label_799a90;
        }
    }
    ctx->pc = 0x799A88u;
    // 0x799a88: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x799a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x799a8c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x799a8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_799a90:
    // 0x799a90: 0x3e00008  jr          $ra
    ctx->pc = 0x799A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A98u;
}
} // namespace gh_r402
