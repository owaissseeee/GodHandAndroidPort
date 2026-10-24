#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r602_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r602
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x799ca8 - 0x799d08
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x799ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x799ca8");
#endif

    switch (ctx->pc) {
        case 0x799cc0u: goto label_799cc0;
        default: break;
    }

    ctx->pc = 0x799ca8u;

    // 0x799ca8: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x799CA8u;
    {
        const bool branch_taken_0x799ca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x799ca8) {
            ctx->pc = 0x799CE8u;
            goto label_799ce8;
        }
    }
    ctx->pc = 0x799CB0u;
    // 0x799cb0: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x799CB0u;
    {
        const bool branch_taken_0x799cb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x799CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CB0u;
        // 0x799cb4: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cb0) {
            ctx->pc = 0x799D00u;
            goto label_799d00;
        }
    }
    ctx->pc = 0x799CB8u;
    // 0x799cb8: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x799cb8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799cbc: 0x0  nop
    ctx->pc = 0x799cbcu;
    // NOP
label_799cc0:
    // 0x799cc0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x799cc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799cc4: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x799cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799cc8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799CC8u;
    {
        const bool branch_taken_0x799cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CC8u;
        // 0x799ccc: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cc8) {
            ctx->pc = 0x799CF0u;
            goto label_799cf0;
        }
    }
    ctx->pc = 0x799CD0u;
    // 0x799cd0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799CD0u;
    {
        const bool branch_taken_0x799cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CD0u;
        // 0x799cd4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cd0) {
            ctx->pc = 0x799CF8u;
            goto label_799cf8;
        }
    }
    ctx->pc = 0x799CD8u;
    // 0x799cd8: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799CD8u;
    {
        const bool branch_taken_0x799cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x799CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CD8u;
        // 0x799cdc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cd8) {
            ctx->pc = 0x799CE8u;
            goto label_799ce8;
        }
    }
    ctx->pc = 0x799CE0u;
    // 0x799ce0: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799CE0u;
    {
        const bool branch_taken_0x799ce0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x799ce0) {
            ctx->pc = 0x799CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799CE0u;
            // 0x799ce4: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799cc0;
        }
    }
    ctx->pc = 0x799CE8u;
label_799ce8:
    // 0x799ce8: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x799CE8u;
    {
        const bool branch_taken_0x799ce8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x799CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CE8u;
        // 0x799cec: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ce8) {
            ctx->pc = 0x799D00u;
            goto label_799d00;
        }
    }
    ctx->pc = 0x799CF0u;
label_799cf0:
    // 0x799cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x799CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CF0u;
        // 0x799cf4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799CF8u;
label_799cf8:
    // 0x799cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x799CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CF8u;
        // 0x799cfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D00u;
label_799d00:
    // 0x799d00: 0x3e00008  jr          $ra
    ctx->pc = 0x799D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D00u;
        // 0x799d04: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D08u;
}
} // namespace gh_r602
