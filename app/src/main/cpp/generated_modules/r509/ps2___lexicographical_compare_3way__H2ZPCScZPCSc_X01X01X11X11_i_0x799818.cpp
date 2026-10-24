#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r509_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r509
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x799818 - 0x799878
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x799818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x799818");
#endif

    switch (ctx->pc) {
        case 0x799830u: goto label_799830;
        default: break;
    }

    ctx->pc = 0x799818u;

    // 0x799818: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x799818u;
    {
        const bool branch_taken_0x799818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x799818) {
            ctx->pc = 0x799858u;
            goto label_799858;
        }
    }
    ctx->pc = 0x799820u;
    // 0x799820: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x799820u;
    {
        const bool branch_taken_0x799820 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x799824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799820u;
        // 0x799824: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799820) {
            ctx->pc = 0x799870u;
            goto label_799870;
        }
    }
    ctx->pc = 0x799828u;
    // 0x799828: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79982c: 0x0  nop
    ctx->pc = 0x79982cu;
    // NOP
label_799830:
    // 0x799830: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x799830u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799834: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x799834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799838: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799838u;
    {
        const bool branch_taken_0x799838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799838u;
        // 0x79983c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799838) {
            ctx->pc = 0x799860u;
            goto label_799860;
        }
    }
    ctx->pc = 0x799840u;
    // 0x799840: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799840u;
    {
        const bool branch_taken_0x799840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799840u;
        // 0x799844: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799840) {
            ctx->pc = 0x799868u;
            goto label_799868;
        }
    }
    ctx->pc = 0x799848u;
    // 0x799848: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799848u;
    {
        const bool branch_taken_0x799848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799848u;
        // 0x79984c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799848) {
            ctx->pc = 0x799858u;
            goto label_799858;
        }
    }
    ctx->pc = 0x799850u;
    // 0x799850: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799850u;
    {
        const bool branch_taken_0x799850 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x799850) {
            ctx->pc = 0x799854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799850u;
            // 0x799854: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799830;
        }
    }
    ctx->pc = 0x799858u;
label_799858:
    // 0x799858: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x799858u;
    {
        const bool branch_taken_0x799858 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799858u;
        // 0x79985c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799858) {
            ctx->pc = 0x799870u;
            goto label_799870;
        }
    }
    ctx->pc = 0x799860u;
label_799860:
    // 0x799860: 0x3e00008  jr          $ra
    ctx->pc = 0x799860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799860u;
        // 0x799864: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799868u;
label_799868:
    // 0x799868: 0x3e00008  jr          $ra
    ctx->pc = 0x799868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799868u;
        // 0x79986c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799870u;
label_799870:
    // 0x799870: 0x3e00008  jr          $ra
    ctx->pc = 0x799870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799870u;
        // 0x799874: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799878u;
}
} // namespace gh_r509
