#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x7a04c0 - 0x7a0528
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x7a04c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x7a04c0");
#endif

    switch (ctx->pc) {
        case 0x7a04d8u: goto label_7a04d8;
        default: break;
    }

    ctx->pc = 0x7a04c0u;

    // 0x7a04c0: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x7A04C0u;
    {
        const bool branch_taken_0x7a04c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x7a04c0) {
            ctx->pc = 0x7A0510u;
            goto label_7a0510;
        }
    }
    ctx->pc = 0x7A04C8u;
    // 0x7a04c8: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x7A04C8u;
    {
        const bool branch_taken_0x7a04c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x7a04c8) {
            ctx->pc = 0x7A0510u;
            goto label_7a0510;
        }
    }
    ctx->pc = 0x7A04D0u;
    // 0x7a04d0: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x7a04d0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7a04d4: 0x0  nop
    ctx->pc = 0x7a04d4u;
    // NOP
label_7a04d8:
    // 0x7a04d8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x7a04d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7a04dc: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x7a04dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7a04e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7A04E0u;
    {
        const bool branch_taken_0x7a04e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A04E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A04E0u;
        // 0x7a04e4: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a04e0) {
            ctx->pc = 0x7A04F0u;
            goto label_7a04f0;
        }
    }
    ctx->pc = 0x7A04E8u;
    // 0x7a04e8: 0x3e00008  jr          $ra
    ctx->pc = 0x7A04E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A04ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A04E8u;
        // 0x7a04ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A04E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A04F0u;
label_7a04f0:
    // 0x7a04f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7A04F0u;
    {
        const bool branch_taken_0x7a04f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A04F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A04F0u;
        // 0x7a04f4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a04f0) {
            ctx->pc = 0x7A0500u;
            goto label_7a0500;
        }
    }
    ctx->pc = 0x7A04F8u;
    // 0x7a04f8: 0x3e00008  jr          $ra
    ctx->pc = 0x7A04F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A04FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A04F8u;
        // 0x7a04fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A04F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A0500u;
label_7a0500:
    // 0x7a0500: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7A0500u;
    {
        const bool branch_taken_0x7a0500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x7A0504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A0500u;
        // 0x7a0504: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a0500) {
            ctx->pc = 0x7A0510u;
            goto label_7a0510;
        }
    }
    ctx->pc = 0x7A0508u;
    // 0x7a0508: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x7A0508u;
    {
        const bool branch_taken_0x7a0508 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x7a0508) {
            ctx->pc = 0x7A050Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A0508u;
            // 0x7a050c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A04D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7a04d8;
        }
    }
    ctx->pc = 0x7A0510u;
label_7a0510:
    // 0x7a0510: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7A0510u;
    {
        const bool branch_taken_0x7a0510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x7A0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A0510u;
        // 0x7a0514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a0510) {
            ctx->pc = 0x7A0520u;
            goto label_7a0520;
        }
    }
    ctx->pc = 0x7A0518u;
    // 0x7a0518: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x7a0518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x7a051c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x7a051cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_7a0520:
    // 0x7a0520: 0x3e00008  jr          $ra
    ctx->pc = 0x7A0520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A0520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A0528u;
}
} // namespace gh_r501
