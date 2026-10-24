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
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x7b4a10 - 0x7b4a70
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x7b4a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x7b4a10");
#endif

    switch (ctx->pc) {
        case 0x7b4a28u: goto label_7b4a28;
        default: break;
    }

    ctx->pc = 0x7b4a10u;

    // 0x7b4a10: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x7B4A10u;
    {
        const bool branch_taken_0x7b4a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x7b4a10) {
            ctx->pc = 0x7B4A50u;
            goto label_7b4a50;
        }
    }
    ctx->pc = 0x7B4A18u;
    // 0x7b4a18: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x7B4A18u;
    {
        const bool branch_taken_0x7b4a18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x7B4A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4A18u;
        // 0x7b4a1c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4a18) {
            ctx->pc = 0x7B4A68u;
            goto label_7b4a68;
        }
    }
    ctx->pc = 0x7B4A20u;
    // 0x7b4a20: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x7b4a20u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7b4a24: 0x0  nop
    ctx->pc = 0x7b4a24u;
    // NOP
label_7b4a28:
    // 0x7b4a28: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x7b4a28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7b4a2c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x7b4a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7b4a30: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7B4A30u;
    {
        const bool branch_taken_0x7b4a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B4A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4A30u;
        // 0x7b4a34: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4a30) {
            ctx->pc = 0x7B4A58u;
            goto label_7b4a58;
        }
    }
    ctx->pc = 0x7B4A38u;
    // 0x7b4a38: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7B4A38u;
    {
        const bool branch_taken_0x7b4a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4A38u;
        // 0x7b4a3c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4a38) {
            ctx->pc = 0x7B4A60u;
            goto label_7b4a60;
        }
    }
    ctx->pc = 0x7B4A40u;
    // 0x7b4a40: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B4A40u;
    {
        const bool branch_taken_0x7b4a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x7B4A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4A40u;
        // 0x7b4a44: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4a40) {
            ctx->pc = 0x7B4A50u;
            goto label_7b4a50;
        }
    }
    ctx->pc = 0x7B4A48u;
    // 0x7b4a48: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7B4A48u;
    {
        const bool branch_taken_0x7b4a48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x7b4a48) {
            ctx->pc = 0x7B4A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B4A48u;
            // 0x7b4a4c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B4A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b4a28;
        }
    }
    ctx->pc = 0x7B4A50u;
label_7b4a50:
    // 0x7b4a50: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B4A50u;
    {
        const bool branch_taken_0x7b4a50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x7B4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4A50u;
        // 0x7b4a54: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4a50) {
            ctx->pc = 0x7B4A68u;
            goto label_7b4a68;
        }
    }
    ctx->pc = 0x7B4A58u;
label_7b4a58:
    // 0x7b4a58: 0x3e00008  jr          $ra
    ctx->pc = 0x7B4A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B4A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4A58u;
        // 0x7b4a5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B4A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B4A60u;
label_7b4a60:
    // 0x7b4a60: 0x3e00008  jr          $ra
    ctx->pc = 0x7B4A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4A60u;
        // 0x7b4a64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B4A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B4A68u;
label_7b4a68:
    // 0x7b4a68: 0x3e00008  jr          $ra
    ctx->pc = 0x7B4A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B4A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4A68u;
        // 0x7b4a6c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B4A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B4A70u;
}
} // namespace gh_event
