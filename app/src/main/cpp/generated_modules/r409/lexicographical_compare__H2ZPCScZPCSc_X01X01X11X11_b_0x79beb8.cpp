#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79beb8 - 0x79bf20
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79beb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79beb8");
#endif

    switch (ctx->pc) {
        case 0x79bed0u: goto label_79bed0;
        default: break;
    }

    ctx->pc = 0x79beb8u;

    // 0x79beb8: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79BEB8u;
    {
        const bool branch_taken_0x79beb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79beb8) {
            ctx->pc = 0x79BF08u;
            goto label_79bf08;
        }
    }
    ctx->pc = 0x79BEC0u;
    // 0x79bec0: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79BEC0u;
    {
        const bool branch_taken_0x79bec0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79bec0) {
            ctx->pc = 0x79BF08u;
            goto label_79bf08;
        }
    }
    ctx->pc = 0x79BEC8u;
    // 0x79bec8: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79bec8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79becc: 0x0  nop
    ctx->pc = 0x79beccu;
    // NOP
label_79bed0:
    // 0x79bed0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79bed0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79bed4: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79bed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79bed8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BED8u;
    {
        const bool branch_taken_0x79bed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BED8u;
        // 0x79bedc: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bed8) {
            ctx->pc = 0x79BEE8u;
            goto label_79bee8;
        }
    }
    ctx->pc = 0x79BEE0u;
    // 0x79bee0: 0x3e00008  jr          $ra
    ctx->pc = 0x79BEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEE0u;
        // 0x79bee4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BEE8u;
label_79bee8:
    // 0x79bee8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BEE8u;
    {
        const bool branch_taken_0x79bee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEE8u;
        // 0x79beec: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bee8) {
            ctx->pc = 0x79BEF8u;
            goto label_79bef8;
        }
    }
    ctx->pc = 0x79BEF0u;
    // 0x79bef0: 0x3e00008  jr          $ra
    ctx->pc = 0x79BEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEF0u;
        // 0x79bef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BEF8u;
label_79bef8:
    // 0x79bef8: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BEF8u;
    {
        const bool branch_taken_0x79bef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEF8u;
        // 0x79befc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bef8) {
            ctx->pc = 0x79BF08u;
            goto label_79bf08;
        }
    }
    ctx->pc = 0x79BF00u;
    // 0x79bf00: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79BF00u;
    {
        const bool branch_taken_0x79bf00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79bf00) {
            ctx->pc = 0x79BF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BF00u;
            // 0x79bf04: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bed0;
        }
    }
    ctx->pc = 0x79BF08u;
label_79bf08:
    // 0x79bf08: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BF08u;
    {
        const bool branch_taken_0x79bf08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF08u;
        // 0x79bf0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf08) {
            ctx->pc = 0x79BF18u;
            goto label_79bf18;
        }
    }
    ctx->pc = 0x79BF10u;
    // 0x79bf10: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79bf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79bf14: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79bf14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79bf18:
    // 0x79bf18: 0x3e00008  jr          $ra
    ctx->pc = 0x79BF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BF20u;
}
} // namespace gh_r409
