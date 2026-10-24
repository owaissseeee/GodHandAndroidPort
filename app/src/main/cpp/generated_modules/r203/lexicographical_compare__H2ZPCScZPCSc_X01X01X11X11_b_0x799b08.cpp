#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r203_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r203
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x799b08 - 0x799b70
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x799b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x799b08");
#endif

    switch (ctx->pc) {
        case 0x799b20u: goto label_799b20;
        default: break;
    }

    ctx->pc = 0x799b08u;

    // 0x799b08: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x799B08u;
    {
        const bool branch_taken_0x799b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x799b08) {
            ctx->pc = 0x799B58u;
            goto label_799b58;
        }
    }
    ctx->pc = 0x799B10u;
    // 0x799b10: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x799B10u;
    {
        const bool branch_taken_0x799b10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x799b10) {
            ctx->pc = 0x799B58u;
            goto label_799b58;
        }
    }
    ctx->pc = 0x799B18u;
    // 0x799b18: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x799b18u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799b1c: 0x0  nop
    ctx->pc = 0x799b1cu;
    // NOP
label_799b20:
    // 0x799b20: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x799b20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799b24: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x799b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799b28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799B28u;
    {
        const bool branch_taken_0x799b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B28u;
        // 0x799b2c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b28) {
            ctx->pc = 0x799B38u;
            goto label_799b38;
        }
    }
    ctx->pc = 0x799B30u;
    // 0x799b30: 0x3e00008  jr          $ra
    ctx->pc = 0x799B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B30u;
        // 0x799b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B38u;
label_799b38:
    // 0x799b38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799B38u;
    {
        const bool branch_taken_0x799b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B38u;
        // 0x799b3c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b38) {
            ctx->pc = 0x799B48u;
            goto label_799b48;
        }
    }
    ctx->pc = 0x799B40u;
    // 0x799b40: 0x3e00008  jr          $ra
    ctx->pc = 0x799B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B40u;
        // 0x799b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B48u;
label_799b48:
    // 0x799b48: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799B48u;
    {
        const bool branch_taken_0x799b48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x799B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B48u;
        // 0x799b4c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b48) {
            ctx->pc = 0x799B58u;
            goto label_799b58;
        }
    }
    ctx->pc = 0x799B50u;
    // 0x799b50: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x799B50u;
    {
        const bool branch_taken_0x799b50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x799b50) {
            ctx->pc = 0x799B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B50u;
            // 0x799b54: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b20;
        }
    }
    ctx->pc = 0x799B58u;
label_799b58:
    // 0x799b58: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799B58u;
    {
        const bool branch_taken_0x799b58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x799B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B58u;
        // 0x799b5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b58) {
            ctx->pc = 0x799B68u;
            goto label_799b68;
        }
    }
    ctx->pc = 0x799B60u;
    // 0x799b60: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x799b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x799b64: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x799b64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_799b68:
    // 0x799b68: 0x3e00008  jr          $ra
    ctx->pc = 0x799B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B70u;
}
} // namespace gh_r203
