#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79bfa8 - 0x79c010
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79bfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79bfa8");
#endif

    switch (ctx->pc) {
        case 0x79bfc0u: goto label_79bfc0;
        default: break;
    }

    ctx->pc = 0x79bfa8u;

    // 0x79bfa8: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79BFA8u;
    {
        const bool branch_taken_0x79bfa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79bfa8) {
            ctx->pc = 0x79BFF8u;
            goto label_79bff8;
        }
    }
    ctx->pc = 0x79BFB0u;
    // 0x79bfb0: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79BFB0u;
    {
        const bool branch_taken_0x79bfb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79bfb0) {
            ctx->pc = 0x79BFF8u;
            goto label_79bff8;
        }
    }
    ctx->pc = 0x79BFB8u;
    // 0x79bfb8: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79bfb8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79bfbc: 0x0  nop
    ctx->pc = 0x79bfbcu;
    // NOP
label_79bfc0:
    // 0x79bfc0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79bfc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79bfc4: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79bfc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79bfc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BFC8u;
    {
        const bool branch_taken_0x79bfc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFC8u;
        // 0x79bfcc: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bfc8) {
            ctx->pc = 0x79BFD8u;
            goto label_79bfd8;
        }
    }
    ctx->pc = 0x79BFD0u;
    // 0x79bfd0: 0x3e00008  jr          $ra
    ctx->pc = 0x79BFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFD0u;
        // 0x79bfd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BFD8u;
label_79bfd8:
    // 0x79bfd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BFD8u;
    {
        const bool branch_taken_0x79bfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFD8u;
        // 0x79bfdc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bfd8) {
            ctx->pc = 0x79BFE8u;
            goto label_79bfe8;
        }
    }
    ctx->pc = 0x79BFE0u;
    // 0x79bfe0: 0x3e00008  jr          $ra
    ctx->pc = 0x79BFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFE0u;
        // 0x79bfe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BFE8u;
label_79bfe8:
    // 0x79bfe8: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BFE8u;
    {
        const bool branch_taken_0x79bfe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFE8u;
        // 0x79bfec: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bfe8) {
            ctx->pc = 0x79BFF8u;
            goto label_79bff8;
        }
    }
    ctx->pc = 0x79BFF0u;
    // 0x79bff0: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79BFF0u;
    {
        const bool branch_taken_0x79bff0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79bff0) {
            ctx->pc = 0x79BFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BFF0u;
            // 0x79bff4: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bfc0;
        }
    }
    ctx->pc = 0x79BFF8u;
label_79bff8:
    // 0x79bff8: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BFF8u;
    {
        const bool branch_taken_0x79bff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFF8u;
        // 0x79bffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bff8) {
            ctx->pc = 0x79C008u;
            goto label_79c008;
        }
    }
    ctx->pc = 0x79C000u;
    // 0x79c000: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79c000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79c004: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79c004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79c008:
    // 0x79c008: 0x3e00008  jr          $ra
    ctx->pc = 0x79C008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C010u;
}
} // namespace gh_r505
