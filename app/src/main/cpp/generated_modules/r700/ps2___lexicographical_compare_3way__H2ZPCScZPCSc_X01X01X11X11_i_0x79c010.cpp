#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r700_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r700
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79c010 - 0x79c070
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79c010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79c010");
#endif

    switch (ctx->pc) {
        case 0x79c028u: goto label_79c028;
        default: break;
    }

    ctx->pc = 0x79c010u;

    // 0x79c010: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79C010u;
    {
        const bool branch_taken_0x79c010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79c010) {
            ctx->pc = 0x79C050u;
            goto label_79c050;
        }
    }
    ctx->pc = 0x79C018u;
    // 0x79c018: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79C018u;
    {
        const bool branch_taken_0x79c018 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C018u;
        // 0x79c01c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c018) {
            ctx->pc = 0x79C068u;
            goto label_79c068;
        }
    }
    ctx->pc = 0x79C020u;
    // 0x79c020: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79c020u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79c024: 0x0  nop
    ctx->pc = 0x79c024u;
    // NOP
label_79c028:
    // 0x79c028: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79c028u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79c02c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79c02cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79c030: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79C030u;
    {
        const bool branch_taken_0x79c030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C030u;
        // 0x79c034: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c030) {
            ctx->pc = 0x79C058u;
            goto label_79c058;
        }
    }
    ctx->pc = 0x79C038u;
    // 0x79c038: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79C038u;
    {
        const bool branch_taken_0x79c038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C038u;
        // 0x79c03c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c038) {
            ctx->pc = 0x79C060u;
            goto label_79c060;
        }
    }
    ctx->pc = 0x79C040u;
    // 0x79c040: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C040u;
    {
        const bool branch_taken_0x79c040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C040u;
        // 0x79c044: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c040) {
            ctx->pc = 0x79C050u;
            goto label_79c050;
        }
    }
    ctx->pc = 0x79C048u;
    // 0x79c048: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79C048u;
    {
        const bool branch_taken_0x79c048 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79c048) {
            ctx->pc = 0x79C04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C048u;
            // 0x79c04c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c028;
        }
    }
    ctx->pc = 0x79C050u;
label_79c050:
    // 0x79c050: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C050u;
    {
        const bool branch_taken_0x79c050 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C050u;
        // 0x79c054: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c050) {
            ctx->pc = 0x79C068u;
            goto label_79c068;
        }
    }
    ctx->pc = 0x79C058u;
label_79c058:
    // 0x79c058: 0x3e00008  jr          $ra
    ctx->pc = 0x79C058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C058u;
        // 0x79c05c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C060u;
label_79c060:
    // 0x79c060: 0x3e00008  jr          $ra
    ctx->pc = 0x79C060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C060u;
        // 0x79c064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C068u;
label_79c068:
    // 0x79c068: 0x3e00008  jr          $ra
    ctx->pc = 0x79C068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C068u;
        // 0x79c06c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C070u;
}
} // namespace gh_r700
