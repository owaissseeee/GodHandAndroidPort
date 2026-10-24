#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r105_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r105
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79a6d0 - 0x79a738
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79a6d0");
#endif

    switch (ctx->pc) {
        case 0x79a6e8u: goto label_79a6e8;
        default: break;
    }

    ctx->pc = 0x79a6d0u;

    // 0x79a6d0: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79A6D0u;
    {
        const bool branch_taken_0x79a6d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79a6d0) {
            ctx->pc = 0x79A720u;
            goto label_79a720;
        }
    }
    ctx->pc = 0x79A6D8u;
    // 0x79a6d8: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79A6D8u;
    {
        const bool branch_taken_0x79a6d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79a6d8) {
            ctx->pc = 0x79A720u;
            goto label_79a720;
        }
    }
    ctx->pc = 0x79A6E0u;
    // 0x79a6e0: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79a6e0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a6e4: 0x0  nop
    ctx->pc = 0x79a6e4u;
    // NOP
label_79a6e8:
    // 0x79a6e8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79a6e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a6ec: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79a6ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a6f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A6F0u;
    {
        const bool branch_taken_0x79a6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6F0u;
        // 0x79a6f4: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6f0) {
            ctx->pc = 0x79A700u;
            goto label_79a700;
        }
    }
    ctx->pc = 0x79A6F8u;
    // 0x79a6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6F8u;
        // 0x79a6fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A700u;
label_79a700:
    // 0x79a700: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A700u;
    {
        const bool branch_taken_0x79a700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A700u;
        // 0x79a704: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a700) {
            ctx->pc = 0x79A710u;
            goto label_79a710;
        }
    }
    ctx->pc = 0x79A708u;
    // 0x79a708: 0x3e00008  jr          $ra
    ctx->pc = 0x79A708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A708u;
        // 0x79a70c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A710u;
label_79a710:
    // 0x79a710: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A710u;
    {
        const bool branch_taken_0x79a710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A710u;
        // 0x79a714: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a710) {
            ctx->pc = 0x79A720u;
            goto label_79a720;
        }
    }
    ctx->pc = 0x79A718u;
    // 0x79a718: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79A718u;
    {
        const bool branch_taken_0x79a718 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79a718) {
            ctx->pc = 0x79A71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A718u;
            // 0x79a71c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a6e8;
        }
    }
    ctx->pc = 0x79A720u;
label_79a720:
    // 0x79a720: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A720u;
    {
        const bool branch_taken_0x79a720 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A720u;
        // 0x79a724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a720) {
            ctx->pc = 0x79A730u;
            goto label_79a730;
        }
    }
    ctx->pc = 0x79A728u;
    // 0x79a728: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79a728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79a72c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79a72cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79a730:
    // 0x79a730: 0x3e00008  jr          $ra
    ctx->pc = 0x79A730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A738u;
}
} // namespace gh_r105
