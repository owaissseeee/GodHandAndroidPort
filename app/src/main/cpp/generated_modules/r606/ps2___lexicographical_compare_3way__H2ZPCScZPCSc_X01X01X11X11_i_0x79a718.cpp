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
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79a718 - 0x79a778
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79a718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79a718");
#endif

    switch (ctx->pc) {
        case 0x79a730u: goto label_79a730;
        default: break;
    }

    ctx->pc = 0x79a718u;

    // 0x79a718: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79A718u;
    {
        const bool branch_taken_0x79a718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79a718) {
            ctx->pc = 0x79A758u;
            goto label_79a758;
        }
    }
    ctx->pc = 0x79A720u;
    // 0x79a720: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79A720u;
    {
        const bool branch_taken_0x79a720 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A720u;
        // 0x79a724: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a720) {
            ctx->pc = 0x79A770u;
            goto label_79a770;
        }
    }
    ctx->pc = 0x79A728u;
    // 0x79a728: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79a728u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a72c: 0x0  nop
    ctx->pc = 0x79a72cu;
    // NOP
label_79a730:
    // 0x79a730: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79a730u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a734: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79a734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a738: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A738u;
    {
        const bool branch_taken_0x79a738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A738u;
        // 0x79a73c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a738) {
            ctx->pc = 0x79A760u;
            goto label_79a760;
        }
    }
    ctx->pc = 0x79A740u;
    // 0x79a740: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A740u;
    {
        const bool branch_taken_0x79a740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A740u;
        // 0x79a744: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a740) {
            ctx->pc = 0x79A768u;
            goto label_79a768;
        }
    }
    ctx->pc = 0x79A748u;
    // 0x79a748: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A748u;
    {
        const bool branch_taken_0x79a748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A748u;
        // 0x79a74c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a748) {
            ctx->pc = 0x79A758u;
            goto label_79a758;
        }
    }
    ctx->pc = 0x79A750u;
    // 0x79a750: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A750u;
    {
        const bool branch_taken_0x79a750 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79a750) {
            ctx->pc = 0x79A754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A750u;
            // 0x79a754: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a730;
        }
    }
    ctx->pc = 0x79A758u;
label_79a758:
    // 0x79a758: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A758u;
    {
        const bool branch_taken_0x79a758 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A758u;
        // 0x79a75c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a758) {
            ctx->pc = 0x79A770u;
            goto label_79a770;
        }
    }
    ctx->pc = 0x79A760u;
label_79a760:
    // 0x79a760: 0x3e00008  jr          $ra
    ctx->pc = 0x79A760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A760u;
        // 0x79a764: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A768u;
label_79a768:
    // 0x79a768: 0x3e00008  jr          $ra
    ctx->pc = 0x79A768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A768u;
        // 0x79a76c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A770u;
label_79a770:
    // 0x79a770: 0x3e00008  jr          $ra
    ctx->pc = 0x79A770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A770u;
        // 0x79a774: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A778u;
}
} // namespace gh_r606
