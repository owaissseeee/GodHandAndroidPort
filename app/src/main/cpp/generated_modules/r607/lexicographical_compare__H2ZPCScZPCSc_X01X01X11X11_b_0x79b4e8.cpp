#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79b4e8 - 0x79b550
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79b4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79b4e8");
#endif

    switch (ctx->pc) {
        case 0x79b500u: goto label_79b500;
        default: break;
    }

    ctx->pc = 0x79b4e8u;

    // 0x79b4e8: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79B4E8u;
    {
        const bool branch_taken_0x79b4e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79b4e8) {
            ctx->pc = 0x79B538u;
            goto label_79b538;
        }
    }
    ctx->pc = 0x79B4F0u;
    // 0x79b4f0: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79B4F0u;
    {
        const bool branch_taken_0x79b4f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79b4f0) {
            ctx->pc = 0x79B538u;
            goto label_79b538;
        }
    }
    ctx->pc = 0x79B4F8u;
    // 0x79b4f8: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79b4f8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b4fc: 0x0  nop
    ctx->pc = 0x79b4fcu;
    // NOP
label_79b500:
    // 0x79b500: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79b500u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b504: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79b504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79b508: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B508u;
    {
        const bool branch_taken_0x79b508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B508u;
        // 0x79b50c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b508) {
            ctx->pc = 0x79B518u;
            goto label_79b518;
        }
    }
    ctx->pc = 0x79B510u;
    // 0x79b510: 0x3e00008  jr          $ra
    ctx->pc = 0x79B510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B510u;
        // 0x79b514: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B518u;
label_79b518:
    // 0x79b518: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B518u;
    {
        const bool branch_taken_0x79b518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B518u;
        // 0x79b51c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b518) {
            ctx->pc = 0x79B528u;
            goto label_79b528;
        }
    }
    ctx->pc = 0x79B520u;
    // 0x79b520: 0x3e00008  jr          $ra
    ctx->pc = 0x79B520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B520u;
        // 0x79b524: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B528u;
label_79b528:
    // 0x79b528: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B528u;
    {
        const bool branch_taken_0x79b528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B528u;
        // 0x79b52c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b528) {
            ctx->pc = 0x79B538u;
            goto label_79b538;
        }
    }
    ctx->pc = 0x79B530u;
    // 0x79b530: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79B530u;
    {
        const bool branch_taken_0x79b530 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79b530) {
            ctx->pc = 0x79B534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B530u;
            // 0x79b534: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b500;
        }
    }
    ctx->pc = 0x79B538u;
label_79b538:
    // 0x79b538: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B538u;
    {
        const bool branch_taken_0x79b538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B538u;
        // 0x79b53c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b538) {
            ctx->pc = 0x79B548u;
            goto label_79b548;
        }
    }
    ctx->pc = 0x79B540u;
    // 0x79b540: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79b540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79b544: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79b544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79b548:
    // 0x79b548: 0x3e00008  jr          $ra
    ctx->pc = 0x79B548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B550u;
}
} // namespace gh_r607
