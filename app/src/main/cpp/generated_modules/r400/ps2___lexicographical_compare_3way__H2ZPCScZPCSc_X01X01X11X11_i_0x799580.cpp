#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r400_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r400
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x799580 - 0x7995e0
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x799580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x799580");
#endif

    switch (ctx->pc) {
        case 0x799598u: goto label_799598;
        default: break;
    }

    ctx->pc = 0x799580u;

    // 0x799580: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x799580u;
    {
        const bool branch_taken_0x799580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x799580) {
            ctx->pc = 0x7995C0u;
            goto label_7995c0;
        }
    }
    ctx->pc = 0x799588u;
    // 0x799588: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x799588u;
    {
        const bool branch_taken_0x799588 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799588u;
        // 0x79958c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799588) {
            ctx->pc = 0x7995D8u;
            goto label_7995d8;
        }
    }
    ctx->pc = 0x799590u;
    // 0x799590: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x799590u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799594: 0x0  nop
    ctx->pc = 0x799594u;
    // NOP
label_799598:
    // 0x799598: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x799598u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79959c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79959cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7995a0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7995A0u;
    {
        const bool branch_taken_0x7995a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7995A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995A0u;
        // 0x7995a4: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995a0) {
            ctx->pc = 0x7995C8u;
            goto label_7995c8;
        }
    }
    ctx->pc = 0x7995A8u;
    // 0x7995a8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7995A8u;
    {
        const bool branch_taken_0x7995a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7995ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995A8u;
        // 0x7995ac: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995a8) {
            ctx->pc = 0x7995D0u;
            goto label_7995d0;
        }
    }
    ctx->pc = 0x7995B0u;
    // 0x7995b0: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7995B0u;
    {
        const bool branch_taken_0x7995b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x7995B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B0u;
        // 0x7995b4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995b0) {
            ctx->pc = 0x7995C0u;
            goto label_7995c0;
        }
    }
    ctx->pc = 0x7995B8u;
    // 0x7995b8: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7995B8u;
    {
        const bool branch_taken_0x7995b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x7995b8) {
            ctx->pc = 0x7995BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7995B8u;
            // 0x7995bc: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799598;
        }
    }
    ctx->pc = 0x7995C0u;
label_7995c0:
    // 0x7995c0: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x7995C0u;
    {
        const bool branch_taken_0x7995c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x7995C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995C0u;
        // 0x7995c4: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995c0) {
            ctx->pc = 0x7995D8u;
            goto label_7995d8;
        }
    }
    ctx->pc = 0x7995C8u;
label_7995c8:
    // 0x7995c8: 0x3e00008  jr          $ra
    ctx->pc = 0x7995C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995C8u;
        // 0x7995cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995D0u;
label_7995d0:
    // 0x7995d0: 0x3e00008  jr          $ra
    ctx->pc = 0x7995D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D0u;
        // 0x7995d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995D8u;
label_7995d8:
    // 0x7995d8: 0x3e00008  jr          $ra
    ctx->pc = 0x7995D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D8u;
        // 0x7995dc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995E0u;
}
} // namespace gh_r400
