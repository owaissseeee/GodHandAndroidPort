#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r606_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r606
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79a778 - 0x79a7e0
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79a778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79a778");
#endif

    switch (ctx->pc) {
        case 0x79a790u: goto label_79a790;
        default: break;
    }

    ctx->pc = 0x79a778u;

    // 0x79a778: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79A778u;
    {
        const bool branch_taken_0x79a778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79a778) {
            ctx->pc = 0x79A7C8u;
            goto label_79a7c8;
        }
    }
    ctx->pc = 0x79A780u;
    // 0x79a780: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79A780u;
    {
        const bool branch_taken_0x79a780 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79a780) {
            ctx->pc = 0x79A7C8u;
            goto label_79a7c8;
        }
    }
    ctx->pc = 0x79A788u;
    // 0x79a788: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79a788u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a78c: 0x0  nop
    ctx->pc = 0x79a78cu;
    // NOP
label_79a790:
    // 0x79a790: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79a790u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a794: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79a794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a798: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A798u;
    {
        const bool branch_taken_0x79a798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A798u;
        // 0x79a79c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a798) {
            ctx->pc = 0x79A7A8u;
            goto label_79a7a8;
        }
    }
    ctx->pc = 0x79A7A0u;
    // 0x79a7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7A0u;
        // 0x79a7a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A7A8u;
label_79a7a8:
    // 0x79a7a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A7A8u;
    {
        const bool branch_taken_0x79a7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7A8u;
        // 0x79a7ac: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7a8) {
            ctx->pc = 0x79A7B8u;
            goto label_79a7b8;
        }
    }
    ctx->pc = 0x79A7B0u;
    // 0x79a7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7B0u;
        // 0x79a7b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A7B8u;
label_79a7b8:
    // 0x79a7b8: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A7B8u;
    {
        const bool branch_taken_0x79a7b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7B8u;
        // 0x79a7bc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7b8) {
            ctx->pc = 0x79A7C8u;
            goto label_79a7c8;
        }
    }
    ctx->pc = 0x79A7C0u;
    // 0x79a7c0: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79A7C0u;
    {
        const bool branch_taken_0x79a7c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79a7c0) {
            ctx->pc = 0x79A7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A7C0u;
            // 0x79a7c4: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a790;
        }
    }
    ctx->pc = 0x79A7C8u;
label_79a7c8:
    // 0x79a7c8: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A7C8u;
    {
        const bool branch_taken_0x79a7c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7C8u;
        // 0x79a7cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a7c8) {
            ctx->pc = 0x79A7D8u;
            goto label_79a7d8;
        }
    }
    ctx->pc = 0x79A7D0u;
    // 0x79a7d0: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79a7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79a7d4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79a7d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79a7d8:
    // 0x79a7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A7E0u;
}
} // namespace gh_r606
