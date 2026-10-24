#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79c298 - 0x79c300
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79c298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79c298");
#endif

    switch (ctx->pc) {
        case 0x79c2b0u: goto label_79c2b0;
        default: break;
    }

    ctx->pc = 0x79c298u;

    // 0x79c298: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79C298u;
    {
        const bool branch_taken_0x79c298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79c298) {
            ctx->pc = 0x79C2E8u;
            goto label_79c2e8;
        }
    }
    ctx->pc = 0x79C2A0u;
    // 0x79c2a0: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79C2A0u;
    {
        const bool branch_taken_0x79c2a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79c2a0) {
            ctx->pc = 0x79C2E8u;
            goto label_79c2e8;
        }
    }
    ctx->pc = 0x79C2A8u;
    // 0x79c2a8: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79c2a8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79c2ac: 0x0  nop
    ctx->pc = 0x79c2acu;
    // NOP
label_79c2b0:
    // 0x79c2b0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79c2b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79c2b4: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79c2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79c2b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C2B8u;
    {
        const bool branch_taken_0x79c2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2B8u;
        // 0x79c2bc: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2b8) {
            ctx->pc = 0x79C2C8u;
            goto label_79c2c8;
        }
    }
    ctx->pc = 0x79C2C0u;
    // 0x79c2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x79C2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2C0u;
        // 0x79c2c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C2C8u;
label_79c2c8:
    // 0x79c2c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C2C8u;
    {
        const bool branch_taken_0x79c2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2C8u;
        // 0x79c2cc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2c8) {
            ctx->pc = 0x79C2D8u;
            goto label_79c2d8;
        }
    }
    ctx->pc = 0x79C2D0u;
    // 0x79c2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x79C2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2D0u;
        // 0x79c2d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C2D8u;
label_79c2d8:
    // 0x79c2d8: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C2D8u;
    {
        const bool branch_taken_0x79c2d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2D8u;
        // 0x79c2dc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2d8) {
            ctx->pc = 0x79C2E8u;
            goto label_79c2e8;
        }
    }
    ctx->pc = 0x79C2E0u;
    // 0x79c2e0: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79C2E0u;
    {
        const bool branch_taken_0x79c2e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79c2e0) {
            ctx->pc = 0x79C2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C2E0u;
            // 0x79c2e4: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c2b0;
        }
    }
    ctx->pc = 0x79C2E8u;
label_79c2e8:
    // 0x79c2e8: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C2E8u;
    {
        const bool branch_taken_0x79c2e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C2E8u;
        // 0x79c2ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c2e8) {
            ctx->pc = 0x79C2F8u;
            goto label_79c2f8;
        }
    }
    ctx->pc = 0x79C2F0u;
    // 0x79c2f0: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79c2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79c2f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79c2f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79c2f8:
    // 0x79c2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x79C2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C300u;
}
} // namespace gh_r100
