#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79b288 - 0x79b2e8
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79b288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79b288");
#endif

    switch (ctx->pc) {
        case 0x79b2a0u: goto label_79b2a0;
        default: break;
    }

    ctx->pc = 0x79b288u;

    // 0x79b288: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79B288u;
    {
        const bool branch_taken_0x79b288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79b288) {
            ctx->pc = 0x79B2C8u;
            goto label_79b2c8;
        }
    }
    ctx->pc = 0x79B290u;
    // 0x79b290: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79B290u;
    {
        const bool branch_taken_0x79b290 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B290u;
        // 0x79b294: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b290) {
            ctx->pc = 0x79B2E0u;
            goto label_79b2e0;
        }
    }
    ctx->pc = 0x79B298u;
    // 0x79b298: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79b298u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b29c: 0x0  nop
    ctx->pc = 0x79b29cu;
    // NOP
label_79b2a0:
    // 0x79b2a0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79b2a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b2a4: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79b2a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79b2a8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79B2A8u;
    {
        const bool branch_taken_0x79b2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2A8u;
        // 0x79b2ac: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2a8) {
            ctx->pc = 0x79B2D0u;
            goto label_79b2d0;
        }
    }
    ctx->pc = 0x79B2B0u;
    // 0x79b2b0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79B2B0u;
    {
        const bool branch_taken_0x79b2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2B0u;
        // 0x79b2b4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2b0) {
            ctx->pc = 0x79B2D8u;
            goto label_79b2d8;
        }
    }
    ctx->pc = 0x79B2B8u;
    // 0x79b2b8: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B2B8u;
    {
        const bool branch_taken_0x79b2b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2B8u;
        // 0x79b2bc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2b8) {
            ctx->pc = 0x79B2C8u;
            goto label_79b2c8;
        }
    }
    ctx->pc = 0x79B2C0u;
    // 0x79b2c0: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79B2C0u;
    {
        const bool branch_taken_0x79b2c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79b2c0) {
            ctx->pc = 0x79B2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B2C0u;
            // 0x79b2c4: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b2a0;
        }
    }
    ctx->pc = 0x79B2C8u;
label_79b2c8:
    // 0x79b2c8: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B2C8u;
    {
        const bool branch_taken_0x79b2c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2C8u;
        // 0x79b2cc: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2c8) {
            ctx->pc = 0x79B2E0u;
            goto label_79b2e0;
        }
    }
    ctx->pc = 0x79B2D0u;
label_79b2d0:
    // 0x79b2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x79B2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2D0u;
        // 0x79b2d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B2D8u;
label_79b2d8:
    // 0x79b2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x79B2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2D8u;
        // 0x79b2dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B2E0u;
label_79b2e0:
    // 0x79b2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x79B2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2E0u;
        // 0x79b2e4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B2E8u;
}
} // namespace gh_r604
