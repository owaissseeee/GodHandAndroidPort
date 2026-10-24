#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r402_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r402
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x7999d0 - 0x799a30
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x7999d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x7999d0");
#endif

    switch (ctx->pc) {
        case 0x7999e8u: goto label_7999e8;
        default: break;
    }

    ctx->pc = 0x7999d0u;

    // 0x7999d0: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x7999D0u;
    {
        const bool branch_taken_0x7999d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x7999d0) {
            ctx->pc = 0x799A10u;
            goto label_799a10;
        }
    }
    ctx->pc = 0x7999D8u;
    // 0x7999d8: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x7999D8u;
    {
        const bool branch_taken_0x7999d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x7999DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D8u;
        // 0x7999dc: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999d8) {
            ctx->pc = 0x799A28u;
            goto label_799a28;
        }
    }
    ctx->pc = 0x7999E0u;
    // 0x7999e0: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x7999e0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7999e4: 0x0  nop
    ctx->pc = 0x7999e4u;
    // NOP
label_7999e8:
    // 0x7999e8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x7999e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7999ec: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x7999ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7999f0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7999F0u;
    {
        const bool branch_taken_0x7999f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7999F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999F0u;
        // 0x7999f4: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999f0) {
            ctx->pc = 0x799A18u;
            goto label_799a18;
        }
    }
    ctx->pc = 0x7999F8u;
    // 0x7999f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7999F8u;
    {
        const bool branch_taken_0x7999f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7999FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999F8u;
        // 0x7999fc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999f8) {
            ctx->pc = 0x799A20u;
            goto label_799a20;
        }
    }
    ctx->pc = 0x799A00u;
    // 0x799a00: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x799A00u;
    {
        const bool branch_taken_0x799a00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x799A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A00u;
        // 0x799a04: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a00) {
            ctx->pc = 0x799A10u;
            goto label_799a10;
        }
    }
    ctx->pc = 0x799A08u;
    // 0x799a08: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799A08u;
    {
        const bool branch_taken_0x799a08 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x799a08) {
            ctx->pc = 0x799A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A08u;
            // 0x799a0c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7999E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7999e8;
        }
    }
    ctx->pc = 0x799A10u;
label_799a10:
    // 0x799a10: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x799A10u;
    {
        const bool branch_taken_0x799a10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x799A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A10u;
        // 0x799a14: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a10) {
            ctx->pc = 0x799A28u;
            goto label_799a28;
        }
    }
    ctx->pc = 0x799A18u;
label_799a18:
    // 0x799a18: 0x3e00008  jr          $ra
    ctx->pc = 0x799A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A18u;
        // 0x799a1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A20u;
label_799a20:
    // 0x799a20: 0x3e00008  jr          $ra
    ctx->pc = 0x799A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A20u;
        // 0x799a24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A28u;
label_799a28:
    // 0x799a28: 0x3e00008  jr          $ra
    ctx->pc = 0x799A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A28u;
        // 0x799a2c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A30u;
}
} // namespace gh_r402
