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
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x799bd0 - 0x799c38
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x799bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x799bd0");
#endif

    switch (ctx->pc) {
        case 0x799be8u: goto label_799be8;
        default: break;
    }

    ctx->pc = 0x799bd0u;

    // 0x799bd0: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x799BD0u;
    {
        const bool branch_taken_0x799bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x799bd0) {
            ctx->pc = 0x799C20u;
            goto label_799c20;
        }
    }
    ctx->pc = 0x799BD8u;
    // 0x799bd8: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x799BD8u;
    {
        const bool branch_taken_0x799bd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x799bd8) {
            ctx->pc = 0x799C20u;
            goto label_799c20;
        }
    }
    ctx->pc = 0x799BE0u;
    // 0x799be0: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x799be0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799be4: 0x0  nop
    ctx->pc = 0x799be4u;
    // NOP
label_799be8:
    // 0x799be8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x799be8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799bec: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x799becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799bf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799BF0u;
    {
        const bool branch_taken_0x799bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BF0u;
        // 0x799bf4: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bf0) {
            ctx->pc = 0x799C00u;
            goto label_799c00;
        }
    }
    ctx->pc = 0x799BF8u;
    // 0x799bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x799BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BF8u;
        // 0x799bfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799C00u;
label_799c00:
    // 0x799c00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799C00u;
    {
        const bool branch_taken_0x799c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C00u;
        // 0x799c04: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c00) {
            ctx->pc = 0x799C10u;
            goto label_799c10;
        }
    }
    ctx->pc = 0x799C08u;
    // 0x799c08: 0x3e00008  jr          $ra
    ctx->pc = 0x799C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C08u;
        // 0x799c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799C10u;
label_799c10:
    // 0x799c10: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799C10u;
    {
        const bool branch_taken_0x799c10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x799C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C10u;
        // 0x799c14: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c10) {
            ctx->pc = 0x799C20u;
            goto label_799c20;
        }
    }
    ctx->pc = 0x799C18u;
    // 0x799c18: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x799C18u;
    {
        const bool branch_taken_0x799c18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x799c18) {
            ctx->pc = 0x799C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C18u;
            // 0x799c1c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799be8;
        }
    }
    ctx->pc = 0x799C20u;
label_799c20:
    // 0x799c20: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799C20u;
    {
        const bool branch_taken_0x799c20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x799C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C20u;
        // 0x799c24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c20) {
            ctx->pc = 0x799C30u;
            goto label_799c30;
        }
    }
    ctx->pc = 0x799C28u;
    // 0x799c28: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x799c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x799c2c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x799c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_799c30:
    // 0x799c30: 0x3e00008  jr          $ra
    ctx->pc = 0x799C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799C38u;
}
} // namespace gh_r800
