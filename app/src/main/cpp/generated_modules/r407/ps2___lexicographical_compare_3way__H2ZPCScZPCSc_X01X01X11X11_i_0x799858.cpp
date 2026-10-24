#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r407_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r407
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x799858 - 0x7998b8
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x799858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x799858");
#endif

    switch (ctx->pc) {
        case 0x799870u: goto label_799870;
        default: break;
    }

    ctx->pc = 0x799858u;

    // 0x799858: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x799858u;
    {
        const bool branch_taken_0x799858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x799858) {
            ctx->pc = 0x799898u;
            goto label_799898;
        }
    }
    ctx->pc = 0x799860u;
    // 0x799860: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x799860u;
    {
        const bool branch_taken_0x799860 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x799864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799860u;
        // 0x799864: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799860) {
            ctx->pc = 0x7998B0u;
            goto label_7998b0;
        }
    }
    ctx->pc = 0x799868u;
    // 0x799868: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x799868u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79986c: 0x0  nop
    ctx->pc = 0x79986cu;
    // NOP
label_799870:
    // 0x799870: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x799870u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799874: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x799874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799878: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799878u;
    {
        const bool branch_taken_0x799878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799878u;
        // 0x79987c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799878) {
            ctx->pc = 0x7998A0u;
            goto label_7998a0;
        }
    }
    ctx->pc = 0x799880u;
    // 0x799880: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799880u;
    {
        const bool branch_taken_0x799880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799880u;
        // 0x799884: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799880) {
            ctx->pc = 0x7998A8u;
            goto label_7998a8;
        }
    }
    ctx->pc = 0x799888u;
    // 0x799888: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799888u;
    {
        const bool branch_taken_0x799888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799888u;
        // 0x79988c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799888) {
            ctx->pc = 0x799898u;
            goto label_799898;
        }
    }
    ctx->pc = 0x799890u;
    // 0x799890: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799890u;
    {
        const bool branch_taken_0x799890 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x799890) {
            ctx->pc = 0x799894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799890u;
            // 0x799894: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799870;
        }
    }
    ctx->pc = 0x799898u;
label_799898:
    // 0x799898: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x799898u;
    {
        const bool branch_taken_0x799898 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799898u;
        // 0x79989c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799898) {
            ctx->pc = 0x7998B0u;
            goto label_7998b0;
        }
    }
    ctx->pc = 0x7998A0u;
label_7998a0:
    // 0x7998a0: 0x3e00008  jr          $ra
    ctx->pc = 0x7998A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A0u;
        // 0x7998a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998A8u;
label_7998a8:
    // 0x7998a8: 0x3e00008  jr          $ra
    ctx->pc = 0x7998A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998A8u;
        // 0x7998ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998B0u;
label_7998b0:
    // 0x7998b0: 0x3e00008  jr          $ra
    ctx->pc = 0x7998B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7998B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998B0u;
        // 0x7998b4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998B8u;
}
} // namespace gh_r407
