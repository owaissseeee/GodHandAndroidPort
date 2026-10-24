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
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79bf48 - 0x79bfa8
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79bf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79bf48");
#endif

    switch (ctx->pc) {
        case 0x79bf60u: goto label_79bf60;
        default: break;
    }

    ctx->pc = 0x79bf48u;

    // 0x79bf48: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79BF48u;
    {
        const bool branch_taken_0x79bf48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79bf48) {
            ctx->pc = 0x79BF88u;
            goto label_79bf88;
        }
    }
    ctx->pc = 0x79BF50u;
    // 0x79bf50: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79BF50u;
    {
        const bool branch_taken_0x79bf50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF50u;
        // 0x79bf54: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf50) {
            ctx->pc = 0x79BFA0u;
            goto label_79bfa0;
        }
    }
    ctx->pc = 0x79BF58u;
    // 0x79bf58: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79bf58u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79bf5c: 0x0  nop
    ctx->pc = 0x79bf5cu;
    // NOP
label_79bf60:
    // 0x79bf60: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79bf60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79bf64: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79bf64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79bf68: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79BF68u;
    {
        const bool branch_taken_0x79bf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF68u;
        // 0x79bf6c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf68) {
            ctx->pc = 0x79BF90u;
            goto label_79bf90;
        }
    }
    ctx->pc = 0x79BF70u;
    // 0x79bf70: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79BF70u;
    {
        const bool branch_taken_0x79bf70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF70u;
        // 0x79bf74: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf70) {
            ctx->pc = 0x79BF98u;
            goto label_79bf98;
        }
    }
    ctx->pc = 0x79BF78u;
    // 0x79bf78: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BF78u;
    {
        const bool branch_taken_0x79bf78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF78u;
        // 0x79bf7c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf78) {
            ctx->pc = 0x79BF88u;
            goto label_79bf88;
        }
    }
    ctx->pc = 0x79BF80u;
    // 0x79bf80: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79BF80u;
    {
        const bool branch_taken_0x79bf80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79bf80) {
            ctx->pc = 0x79BF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BF80u;
            // 0x79bf84: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bf60;
        }
    }
    ctx->pc = 0x79BF88u;
label_79bf88:
    // 0x79bf88: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BF88u;
    {
        const bool branch_taken_0x79bf88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF88u;
        // 0x79bf8c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf88) {
            ctx->pc = 0x79BFA0u;
            goto label_79bfa0;
        }
    }
    ctx->pc = 0x79BF90u;
label_79bf90:
    // 0x79bf90: 0x3e00008  jr          $ra
    ctx->pc = 0x79BF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF90u;
        // 0x79bf94: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BF98u;
label_79bf98:
    // 0x79bf98: 0x3e00008  jr          $ra
    ctx->pc = 0x79BF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF98u;
        // 0x79bf9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BFA0u;
label_79bfa0:
    // 0x79bfa0: 0x3e00008  jr          $ra
    ctx->pc = 0x79BFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BFA0u;
        // 0x79bfa4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BFA8u;
}
} // namespace gh_r505
