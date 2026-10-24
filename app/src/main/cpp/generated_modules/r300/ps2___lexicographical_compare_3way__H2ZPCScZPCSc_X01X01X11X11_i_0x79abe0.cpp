#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r300_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r300
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79abe0 - 0x79ac40
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79abe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79abe0");
#endif

    switch (ctx->pc) {
        case 0x79abf8u: goto label_79abf8;
        default: break;
    }

    ctx->pc = 0x79abe0u;

    // 0x79abe0: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79ABE0u;
    {
        const bool branch_taken_0x79abe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79abe0) {
            ctx->pc = 0x79AC20u;
            goto label_79ac20;
        }
    }
    ctx->pc = 0x79ABE8u;
    // 0x79abe8: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79ABE8u;
    {
        const bool branch_taken_0x79abe8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABE8u;
        // 0x79abec: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abe8) {
            ctx->pc = 0x79AC38u;
            goto label_79ac38;
        }
    }
    ctx->pc = 0x79ABF0u;
    // 0x79abf0: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79abf0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79abf4: 0x0  nop
    ctx->pc = 0x79abf4u;
    // NOP
label_79abf8:
    // 0x79abf8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79abf8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79abfc: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79abfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79ac00: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AC00u;
    {
        const bool branch_taken_0x79ac00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC00u;
        // 0x79ac04: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac00) {
            ctx->pc = 0x79AC28u;
            goto label_79ac28;
        }
    }
    ctx->pc = 0x79AC08u;
    // 0x79ac08: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79AC08u;
    {
        const bool branch_taken_0x79ac08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC08u;
        // 0x79ac0c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac08) {
            ctx->pc = 0x79AC30u;
            goto label_79ac30;
        }
    }
    ctx->pc = 0x79AC10u;
    // 0x79ac10: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AC10u;
    {
        const bool branch_taken_0x79ac10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC10u;
        // 0x79ac14: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac10) {
            ctx->pc = 0x79AC20u;
            goto label_79ac20;
        }
    }
    ctx->pc = 0x79AC18u;
    // 0x79ac18: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AC18u;
    {
        const bool branch_taken_0x79ac18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79ac18) {
            ctx->pc = 0x79AC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AC18u;
            // 0x79ac1c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ABF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79abf8;
        }
    }
    ctx->pc = 0x79AC20u;
label_79ac20:
    // 0x79ac20: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AC20u;
    {
        const bool branch_taken_0x79ac20 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC20u;
        // 0x79ac24: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac20) {
            ctx->pc = 0x79AC38u;
            goto label_79ac38;
        }
    }
    ctx->pc = 0x79AC28u;
label_79ac28:
    // 0x79ac28: 0x3e00008  jr          $ra
    ctx->pc = 0x79AC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC28u;
        // 0x79ac2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AC30u;
label_79ac30:
    // 0x79ac30: 0x3e00008  jr          $ra
    ctx->pc = 0x79AC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC30u;
        // 0x79ac34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AC38u;
label_79ac38:
    // 0x79ac38: 0x3e00008  jr          $ra
    ctx->pc = 0x79AC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC38u;
        // 0x79ac3c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AC40u;
}
} // namespace gh_r300
