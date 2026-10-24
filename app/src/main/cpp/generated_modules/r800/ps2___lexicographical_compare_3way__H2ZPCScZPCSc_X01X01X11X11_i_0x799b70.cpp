#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r800_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r800
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x799b70 - 0x799bd0
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x799b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x799b70");
#endif

    switch (ctx->pc) {
        case 0x799b88u: goto label_799b88;
        default: break;
    }

    ctx->pc = 0x799b70u;

    // 0x799b70: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x799B70u;
    {
        const bool branch_taken_0x799b70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x799b70) {
            ctx->pc = 0x799BB0u;
            goto label_799bb0;
        }
    }
    ctx->pc = 0x799B78u;
    // 0x799b78: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x799B78u;
    {
        const bool branch_taken_0x799b78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x799B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B78u;
        // 0x799b7c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b78) {
            ctx->pc = 0x799BC8u;
            goto label_799bc8;
        }
    }
    ctx->pc = 0x799B80u;
    // 0x799b80: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x799b80u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799b84: 0x0  nop
    ctx->pc = 0x799b84u;
    // NOP
label_799b88:
    // 0x799b88: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x799b88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799b8c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x799b8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799b90: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799B90u;
    {
        const bool branch_taken_0x799b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B90u;
        // 0x799b94: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b90) {
            ctx->pc = 0x799BB8u;
            goto label_799bb8;
        }
    }
    ctx->pc = 0x799B98u;
    // 0x799b98: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799B98u;
    {
        const bool branch_taken_0x799b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B98u;
        // 0x799b9c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b98) {
            ctx->pc = 0x799BC0u;
            goto label_799bc0;
        }
    }
    ctx->pc = 0x799BA0u;
    // 0x799ba0: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799BA0u;
    {
        const bool branch_taken_0x799ba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x799BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BA0u;
        // 0x799ba4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ba0) {
            ctx->pc = 0x799BB0u;
            goto label_799bb0;
        }
    }
    ctx->pc = 0x799BA8u;
    // 0x799ba8: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799BA8u;
    {
        const bool branch_taken_0x799ba8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x799ba8) {
            ctx->pc = 0x799BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BA8u;
            // 0x799bac: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b88;
        }
    }
    ctx->pc = 0x799BB0u;
label_799bb0:
    // 0x799bb0: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x799BB0u;
    {
        const bool branch_taken_0x799bb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x799BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BB0u;
        // 0x799bb4: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bb0) {
            ctx->pc = 0x799BC8u;
            goto label_799bc8;
        }
    }
    ctx->pc = 0x799BB8u;
label_799bb8:
    // 0x799bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x799BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BB8u;
        // 0x799bbc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799BC0u;
label_799bc0:
    // 0x799bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x799BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC0u;
        // 0x799bc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799BC8u;
label_799bc8:
    // 0x799bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x799BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC8u;
        // 0x799bcc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799BD0u;
}
} // namespace gh_r800
