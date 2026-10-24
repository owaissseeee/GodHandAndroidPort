#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79b630 - 0x79b690
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79b630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79b630");
#endif

    switch (ctx->pc) {
        case 0x79b648u: goto label_79b648;
        default: break;
    }

    ctx->pc = 0x79b630u;

    // 0x79b630: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79B630u;
    {
        const bool branch_taken_0x79b630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79b630) {
            ctx->pc = 0x79B670u;
            goto label_79b670;
        }
    }
    ctx->pc = 0x79B638u;
    // 0x79b638: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79B638u;
    {
        const bool branch_taken_0x79b638 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B638u;
        // 0x79b63c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b638) {
            ctx->pc = 0x79B688u;
            goto label_79b688;
        }
    }
    ctx->pc = 0x79B640u;
    // 0x79b640: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79b640u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b644: 0x0  nop
    ctx->pc = 0x79b644u;
    // NOP
label_79b648:
    // 0x79b648: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79b648u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b64c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79b64cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79b650: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79B650u;
    {
        const bool branch_taken_0x79b650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B650u;
        // 0x79b654: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b650) {
            ctx->pc = 0x79B678u;
            goto label_79b678;
        }
    }
    ctx->pc = 0x79B658u;
    // 0x79b658: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79B658u;
    {
        const bool branch_taken_0x79b658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B658u;
        // 0x79b65c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b658) {
            ctx->pc = 0x79B680u;
            goto label_79b680;
        }
    }
    ctx->pc = 0x79B660u;
    // 0x79b660: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B660u;
    {
        const bool branch_taken_0x79b660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B660u;
        // 0x79b664: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b660) {
            ctx->pc = 0x79B670u;
            goto label_79b670;
        }
    }
    ctx->pc = 0x79B668u;
    // 0x79b668: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79B668u;
    {
        const bool branch_taken_0x79b668 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79b668) {
            ctx->pc = 0x79B66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B668u;
            // 0x79b66c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b648;
        }
    }
    ctx->pc = 0x79B670u;
label_79b670:
    // 0x79b670: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B670u;
    {
        const bool branch_taken_0x79b670 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B670u;
        // 0x79b674: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b670) {
            ctx->pc = 0x79B688u;
            goto label_79b688;
        }
    }
    ctx->pc = 0x79B678u;
label_79b678:
    // 0x79b678: 0x3e00008  jr          $ra
    ctx->pc = 0x79B678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B678u;
        // 0x79b67c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B680u;
label_79b680:
    // 0x79b680: 0x3e00008  jr          $ra
    ctx->pc = 0x79B680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B680u;
        // 0x79b684: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B688u;
label_79b688:
    // 0x79b688: 0x3e00008  jr          $ra
    ctx->pc = 0x79B688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B688u;
        // 0x79b68c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B690u;
}
} // namespace gh_r600
