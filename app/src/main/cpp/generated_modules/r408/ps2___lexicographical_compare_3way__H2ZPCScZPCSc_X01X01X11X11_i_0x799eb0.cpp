#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r408_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r408
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x799eb0 - 0x799f10
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x799eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x799eb0");
#endif

    switch (ctx->pc) {
        case 0x799ec8u: goto label_799ec8;
        default: break;
    }

    ctx->pc = 0x799eb0u;

    // 0x799eb0: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x799EB0u;
    {
        const bool branch_taken_0x799eb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x799eb0) {
            ctx->pc = 0x799EF0u;
            goto label_799ef0;
        }
    }
    ctx->pc = 0x799EB8u;
    // 0x799eb8: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x799EB8u;
    {
        const bool branch_taken_0x799eb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x799EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EB8u;
        // 0x799ebc: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799eb8) {
            ctx->pc = 0x799F08u;
            goto label_799f08;
        }
    }
    ctx->pc = 0x799EC0u;
    // 0x799ec0: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x799ec0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799ec4: 0x0  nop
    ctx->pc = 0x799ec4u;
    // NOP
label_799ec8:
    // 0x799ec8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x799ec8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799ecc: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x799eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799ed0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799ED0u;
    {
        const bool branch_taken_0x799ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ED0u;
        // 0x799ed4: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ed0) {
            ctx->pc = 0x799EF8u;
            goto label_799ef8;
        }
    }
    ctx->pc = 0x799ED8u;
    // 0x799ed8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799ED8u;
    {
        const bool branch_taken_0x799ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ED8u;
        // 0x799edc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ed8) {
            ctx->pc = 0x799F00u;
            goto label_799f00;
        }
    }
    ctx->pc = 0x799EE0u;
    // 0x799ee0: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799EE0u;
    {
        const bool branch_taken_0x799ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x799EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EE0u;
        // 0x799ee4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ee0) {
            ctx->pc = 0x799EF0u;
            goto label_799ef0;
        }
    }
    ctx->pc = 0x799EE8u;
    // 0x799ee8: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799EE8u;
    {
        const bool branch_taken_0x799ee8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x799ee8) {
            ctx->pc = 0x799EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799EE8u;
            // 0x799eec: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ec8;
        }
    }
    ctx->pc = 0x799EF0u;
label_799ef0:
    // 0x799ef0: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x799EF0u;
    {
        const bool branch_taken_0x799ef0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x799EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EF0u;
        // 0x799ef4: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ef0) {
            ctx->pc = 0x799F08u;
            goto label_799f08;
        }
    }
    ctx->pc = 0x799EF8u;
label_799ef8:
    // 0x799ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x799EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EF8u;
        // 0x799efc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799F00u;
label_799f00:
    // 0x799f00: 0x3e00008  jr          $ra
    ctx->pc = 0x799F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F00u;
        // 0x799f04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799F08u;
label_799f08:
    // 0x799f08: 0x3e00008  jr          $ra
    ctx->pc = 0x799F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F08u;
        // 0x799f0c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799F10u;
}
} // namespace gh_r408
