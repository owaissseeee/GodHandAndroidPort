#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r205_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r205
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79a450 - 0x79a4b8
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79a450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79a450");
#endif

    switch (ctx->pc) {
        case 0x79a468u: goto label_79a468;
        default: break;
    }

    ctx->pc = 0x79a450u;

    // 0x79a450: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79A450u;
    {
        const bool branch_taken_0x79a450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79a450) {
            ctx->pc = 0x79A4A0u;
            goto label_79a4a0;
        }
    }
    ctx->pc = 0x79A458u;
    // 0x79a458: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79A458u;
    {
        const bool branch_taken_0x79a458 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79a458) {
            ctx->pc = 0x79A4A0u;
            goto label_79a4a0;
        }
    }
    ctx->pc = 0x79A460u;
    // 0x79a460: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79a460u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a464: 0x0  nop
    ctx->pc = 0x79a464u;
    // NOP
label_79a468:
    // 0x79a468: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79a468u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a46c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79a46cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a470: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A470u;
    {
        const bool branch_taken_0x79a470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A470u;
        // 0x79a474: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a470) {
            ctx->pc = 0x79A480u;
            goto label_79a480;
        }
    }
    ctx->pc = 0x79A478u;
    // 0x79a478: 0x3e00008  jr          $ra
    ctx->pc = 0x79A478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A478u;
        // 0x79a47c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A480u;
label_79a480:
    // 0x79a480: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A480u;
    {
        const bool branch_taken_0x79a480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A480u;
        // 0x79a484: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a480) {
            ctx->pc = 0x79A490u;
            goto label_79a490;
        }
    }
    ctx->pc = 0x79A488u;
    // 0x79a488: 0x3e00008  jr          $ra
    ctx->pc = 0x79A488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A488u;
        // 0x79a48c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A490u;
label_79a490:
    // 0x79a490: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A490u;
    {
        const bool branch_taken_0x79a490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A490u;
        // 0x79a494: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a490) {
            ctx->pc = 0x79A4A0u;
            goto label_79a4a0;
        }
    }
    ctx->pc = 0x79A498u;
    // 0x79a498: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79A498u;
    {
        const bool branch_taken_0x79a498 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79a498) {
            ctx->pc = 0x79A49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A498u;
            // 0x79a49c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a468;
        }
    }
    ctx->pc = 0x79A4A0u;
label_79a4a0:
    // 0x79a4a0: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A4A0u;
    {
        const bool branch_taken_0x79a4a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4A0u;
        // 0x79a4a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4a0) {
            ctx->pc = 0x79A4B0u;
            goto label_79a4b0;
        }
    }
    ctx->pc = 0x79A4A8u;
    // 0x79a4a8: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79a4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79a4ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79a4acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79a4b0:
    // 0x79a4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A4B8u;
}
} // namespace gh_r205
