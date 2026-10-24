#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r302_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r302
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x799d50 - 0x799db8
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x799d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x799d50");
#endif

    switch (ctx->pc) {
        case 0x799d68u: goto label_799d68;
        default: break;
    }

    ctx->pc = 0x799d50u;

    // 0x799d50: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x799D50u;
    {
        const bool branch_taken_0x799d50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x799d50) {
            ctx->pc = 0x799DA0u;
            goto label_799da0;
        }
    }
    ctx->pc = 0x799D58u;
    // 0x799d58: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x799D58u;
    {
        const bool branch_taken_0x799d58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x799d58) {
            ctx->pc = 0x799DA0u;
            goto label_799da0;
        }
    }
    ctx->pc = 0x799D60u;
    // 0x799d60: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x799d60u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799d64: 0x0  nop
    ctx->pc = 0x799d64u;
    // NOP
label_799d68:
    // 0x799d68: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x799d68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799d6c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x799d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799d70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799D70u;
    {
        const bool branch_taken_0x799d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D70u;
        // 0x799d74: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d70) {
            ctx->pc = 0x799D80u;
            goto label_799d80;
        }
    }
    ctx->pc = 0x799D78u;
    // 0x799d78: 0x3e00008  jr          $ra
    ctx->pc = 0x799D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D78u;
        // 0x799d7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D80u;
label_799d80:
    // 0x799d80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799D80u;
    {
        const bool branch_taken_0x799d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D80u;
        // 0x799d84: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d80) {
            ctx->pc = 0x799D90u;
            goto label_799d90;
        }
    }
    ctx->pc = 0x799D88u;
    // 0x799d88: 0x3e00008  jr          $ra
    ctx->pc = 0x799D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D88u;
        // 0x799d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D90u;
label_799d90:
    // 0x799d90: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799D90u;
    {
        const bool branch_taken_0x799d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x799D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D90u;
        // 0x799d94: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d90) {
            ctx->pc = 0x799DA0u;
            goto label_799da0;
        }
    }
    ctx->pc = 0x799D98u;
    // 0x799d98: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x799D98u;
    {
        const bool branch_taken_0x799d98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x799d98) {
            ctx->pc = 0x799D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D98u;
            // 0x799d9c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d68;
        }
    }
    ctx->pc = 0x799DA0u;
label_799da0:
    // 0x799da0: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799DA0u;
    {
        const bool branch_taken_0x799da0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x799DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DA0u;
        // 0x799da4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799da0) {
            ctx->pc = 0x799DB0u;
            goto label_799db0;
        }
    }
    ctx->pc = 0x799DA8u;
    // 0x799da8: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x799da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x799dac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x799dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_799db0:
    // 0x799db0: 0x3e00008  jr          $ra
    ctx->pc = 0x799DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799DB8u;
}
} // namespace gh_r302
