#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r802_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r802
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79ac68 - 0x79acc8
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79ac68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79ac68");
#endif

    switch (ctx->pc) {
        case 0x79ac80u: goto label_79ac80;
        default: break;
    }

    ctx->pc = 0x79ac68u;

    // 0x79ac68: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79AC68u;
    {
        const bool branch_taken_0x79ac68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79ac68) {
            ctx->pc = 0x79ACA8u;
            goto label_79aca8;
        }
    }
    ctx->pc = 0x79AC70u;
    // 0x79ac70: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79AC70u;
    {
        const bool branch_taken_0x79ac70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC70u;
        // 0x79ac74: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac70) {
            ctx->pc = 0x79ACC0u;
            goto label_79acc0;
        }
    }
    ctx->pc = 0x79AC78u;
    // 0x79ac78: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79ac78u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79ac7c: 0x0  nop
    ctx->pc = 0x79ac7cu;
    // NOP
label_79ac80:
    // 0x79ac80: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79ac80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ac84: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79ac84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79ac88: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AC88u;
    {
        const bool branch_taken_0x79ac88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC88u;
        // 0x79ac8c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac88) {
            ctx->pc = 0x79ACB0u;
            goto label_79acb0;
        }
    }
    ctx->pc = 0x79AC90u;
    // 0x79ac90: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AC90u;
    {
        const bool branch_taken_0x79ac90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC90u;
        // 0x79ac94: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac90) {
            ctx->pc = 0x79ACB8u;
            goto label_79acb8;
        }
    }
    ctx->pc = 0x79AC98u;
    // 0x79ac98: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AC98u;
    {
        const bool branch_taken_0x79ac98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC98u;
        // 0x79ac9c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac98) {
            ctx->pc = 0x79ACA8u;
            goto label_79aca8;
        }
    }
    ctx->pc = 0x79ACA0u;
    // 0x79aca0: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79ACA0u;
    {
        const bool branch_taken_0x79aca0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79aca0) {
            ctx->pc = 0x79ACA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ACA0u;
            // 0x79aca4: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ac80;
        }
    }
    ctx->pc = 0x79ACA8u;
label_79aca8:
    // 0x79aca8: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79ACA8u;
    {
        const bool branch_taken_0x79aca8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACA8u;
        // 0x79acac: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aca8) {
            ctx->pc = 0x79ACC0u;
            goto label_79acc0;
        }
    }
    ctx->pc = 0x79ACB0u;
label_79acb0:
    // 0x79acb0: 0x3e00008  jr          $ra
    ctx->pc = 0x79ACB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACB0u;
        // 0x79acb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ACB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ACB8u;
label_79acb8:
    // 0x79acb8: 0x3e00008  jr          $ra
    ctx->pc = 0x79ACB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACB8u;
        // 0x79acbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ACB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ACC0u;
label_79acc0:
    // 0x79acc0: 0x3e00008  jr          $ra
    ctx->pc = 0x79ACC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACC0u;
        // 0x79acc4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ACC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ACC8u;
}
} // namespace gh_r802
