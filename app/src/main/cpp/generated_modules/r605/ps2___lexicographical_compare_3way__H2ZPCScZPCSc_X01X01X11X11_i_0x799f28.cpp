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
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x799f28 - 0x799f88
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x799f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x799f28");
#endif

    switch (ctx->pc) {
        case 0x799f40u: goto label_799f40;
        default: break;
    }

    ctx->pc = 0x799f28u;

    // 0x799f28: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x799F28u;
    {
        const bool branch_taken_0x799f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x799f28) {
            ctx->pc = 0x799F68u;
            goto label_799f68;
        }
    }
    ctx->pc = 0x799F30u;
    // 0x799f30: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x799F30u;
    {
        const bool branch_taken_0x799f30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x799F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F30u;
        // 0x799f34: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f30) {
            ctx->pc = 0x799F80u;
            goto label_799f80;
        }
    }
    ctx->pc = 0x799F38u;
    // 0x799f38: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x799f38u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799f3c: 0x0  nop
    ctx->pc = 0x799f3cu;
    // NOP
label_799f40:
    // 0x799f40: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x799f40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799f44: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x799f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799f48: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799F48u;
    {
        const bool branch_taken_0x799f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F48u;
        // 0x799f4c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f48) {
            ctx->pc = 0x799F70u;
            goto label_799f70;
        }
    }
    ctx->pc = 0x799F50u;
    // 0x799f50: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799F50u;
    {
        const bool branch_taken_0x799f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F50u;
        // 0x799f54: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f50) {
            ctx->pc = 0x799F78u;
            goto label_799f78;
        }
    }
    ctx->pc = 0x799F58u;
    // 0x799f58: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799F58u;
    {
        const bool branch_taken_0x799f58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x799F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F58u;
        // 0x799f5c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f58) {
            ctx->pc = 0x799F68u;
            goto label_799f68;
        }
    }
    ctx->pc = 0x799F60u;
    // 0x799f60: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799F60u;
    {
        const bool branch_taken_0x799f60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x799f60) {
            ctx->pc = 0x799F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799F60u;
            // 0x799f64: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f40;
        }
    }
    ctx->pc = 0x799F68u;
label_799f68:
    // 0x799f68: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x799F68u;
    {
        const bool branch_taken_0x799f68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x799F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F68u;
        // 0x799f6c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f68) {
            ctx->pc = 0x799F80u;
            goto label_799f80;
        }
    }
    ctx->pc = 0x799F70u;
label_799f70:
    // 0x799f70: 0x3e00008  jr          $ra
    ctx->pc = 0x799F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F70u;
        // 0x799f74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799F78u;
label_799f78:
    // 0x799f78: 0x3e00008  jr          $ra
    ctx->pc = 0x799F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F78u;
        // 0x799f7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799F80u;
label_799f80:
    // 0x799f80: 0x3e00008  jr          $ra
    ctx->pc = 0x799F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F80u;
        // 0x799f84: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799F88u;
}
} // namespace gh_r605
