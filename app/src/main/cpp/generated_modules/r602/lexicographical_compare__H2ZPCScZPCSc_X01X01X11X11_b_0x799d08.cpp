#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r602_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r602
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x799d08 - 0x799d70
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x799d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x799d08");
#endif

    switch (ctx->pc) {
        case 0x799d20u: goto label_799d20;
        default: break;
    }

    ctx->pc = 0x799d08u;

    // 0x799d08: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x799D08u;
    {
        const bool branch_taken_0x799d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x799d08) {
            ctx->pc = 0x799D58u;
            goto label_799d58;
        }
    }
    ctx->pc = 0x799D10u;
    // 0x799d10: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x799D10u;
    {
        const bool branch_taken_0x799d10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x799d10) {
            ctx->pc = 0x799D58u;
            goto label_799d58;
        }
    }
    ctx->pc = 0x799D18u;
    // 0x799d18: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x799d18u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799d1c: 0x0  nop
    ctx->pc = 0x799d1cu;
    // NOP
label_799d20:
    // 0x799d20: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x799d20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799d24: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x799d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799d28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799D28u;
    {
        const bool branch_taken_0x799d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D28u;
        // 0x799d2c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d28) {
            ctx->pc = 0x799D38u;
            goto label_799d38;
        }
    }
    ctx->pc = 0x799D30u;
    // 0x799d30: 0x3e00008  jr          $ra
    ctx->pc = 0x799D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D30u;
        // 0x799d34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D38u;
label_799d38:
    // 0x799d38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799D38u;
    {
        const bool branch_taken_0x799d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D38u;
        // 0x799d3c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d38) {
            ctx->pc = 0x799D48u;
            goto label_799d48;
        }
    }
    ctx->pc = 0x799D40u;
    // 0x799d40: 0x3e00008  jr          $ra
    ctx->pc = 0x799D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D40u;
        // 0x799d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D48u;
label_799d48:
    // 0x799d48: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799D48u;
    {
        const bool branch_taken_0x799d48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x799D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D48u;
        // 0x799d4c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d48) {
            ctx->pc = 0x799D58u;
            goto label_799d58;
        }
    }
    ctx->pc = 0x799D50u;
    // 0x799d50: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x799D50u;
    {
        const bool branch_taken_0x799d50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x799d50) {
            ctx->pc = 0x799D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799D50u;
            // 0x799d54: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d20;
        }
    }
    ctx->pc = 0x799D58u;
label_799d58:
    // 0x799d58: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799D58u;
    {
        const bool branch_taken_0x799d58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x799D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D58u;
        // 0x799d5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d58) {
            ctx->pc = 0x799D68u;
            goto label_799d68;
        }
    }
    ctx->pc = 0x799D60u;
    // 0x799d60: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x799d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x799d64: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x799d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_799d68:
    // 0x799d68: 0x3e00008  jr          $ra
    ctx->pc = 0x799D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D70u;
}
} // namespace gh_r602
