#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r408_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r408
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x799f10 - 0x799f78
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x799f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x799f10");
#endif

    switch (ctx->pc) {
        case 0x799f28u: goto label_799f28;
        default: break;
    }

    ctx->pc = 0x799f10u;

    // 0x799f10: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x799F10u;
    {
        const bool branch_taken_0x799f10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x799f10) {
            ctx->pc = 0x799F60u;
            goto label_799f60;
        }
    }
    ctx->pc = 0x799F18u;
    // 0x799f18: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x799F18u;
    {
        const bool branch_taken_0x799f18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x799f18) {
            ctx->pc = 0x799F60u;
            goto label_799f60;
        }
    }
    ctx->pc = 0x799F20u;
    // 0x799f20: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x799f20u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799f24: 0x0  nop
    ctx->pc = 0x799f24u;
    // NOP
label_799f28:
    // 0x799f28: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x799f28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799f2c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x799f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799f30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799F30u;
    {
        const bool branch_taken_0x799f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F30u;
        // 0x799f34: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f30) {
            ctx->pc = 0x799F40u;
            goto label_799f40;
        }
    }
    ctx->pc = 0x799F38u;
    // 0x799f38: 0x3e00008  jr          $ra
    ctx->pc = 0x799F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F38u;
        // 0x799f3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799F40u;
label_799f40:
    // 0x799f40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799F40u;
    {
        const bool branch_taken_0x799f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F40u;
        // 0x799f44: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f40) {
            ctx->pc = 0x799F50u;
            goto label_799f50;
        }
    }
    ctx->pc = 0x799F48u;
    // 0x799f48: 0x3e00008  jr          $ra
    ctx->pc = 0x799F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F48u;
        // 0x799f4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799F50u;
label_799f50:
    // 0x799f50: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799F50u;
    {
        const bool branch_taken_0x799f50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x799F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F50u;
        // 0x799f54: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f50) {
            ctx->pc = 0x799F60u;
            goto label_799f60;
        }
    }
    ctx->pc = 0x799F58u;
    // 0x799f58: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x799F58u;
    {
        const bool branch_taken_0x799f58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x799f58) {
            ctx->pc = 0x799F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799F58u;
            // 0x799f5c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f28;
        }
    }
    ctx->pc = 0x799F60u;
label_799f60:
    // 0x799f60: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799F60u;
    {
        const bool branch_taken_0x799f60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x799F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F60u;
        // 0x799f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f60) {
            ctx->pc = 0x799F70u;
            goto label_799f70;
        }
    }
    ctx->pc = 0x799F68u;
    // 0x799f68: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x799f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x799f6c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x799f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_799f70:
    // 0x799f70: 0x3e00008  jr          $ra
    ctx->pc = 0x799F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
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
}
} // namespace gh_r408
