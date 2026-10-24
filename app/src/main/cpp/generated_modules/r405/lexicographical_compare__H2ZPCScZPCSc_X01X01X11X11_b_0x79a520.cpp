#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r405_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r405
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79a520 - 0x79a588
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79a520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79a520");
#endif

    switch (ctx->pc) {
        case 0x79a538u: goto label_79a538;
        default: break;
    }

    ctx->pc = 0x79a520u;

    // 0x79a520: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79A520u;
    {
        const bool branch_taken_0x79a520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79a520) {
            ctx->pc = 0x79A570u;
            goto label_79a570;
        }
    }
    ctx->pc = 0x79A528u;
    // 0x79a528: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79A528u;
    {
        const bool branch_taken_0x79a528 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79a528) {
            ctx->pc = 0x79A570u;
            goto label_79a570;
        }
    }
    ctx->pc = 0x79A530u;
    // 0x79a530: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79a530u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a534: 0x0  nop
    ctx->pc = 0x79a534u;
    // NOP
label_79a538:
    // 0x79a538: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79a538u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a53c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79a53cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a540: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A540u;
    {
        const bool branch_taken_0x79a540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A540u;
        // 0x79a544: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a540) {
            ctx->pc = 0x79A550u;
            goto label_79a550;
        }
    }
    ctx->pc = 0x79A548u;
    // 0x79a548: 0x3e00008  jr          $ra
    ctx->pc = 0x79A548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A548u;
        // 0x79a54c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A550u;
label_79a550:
    // 0x79a550: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A550u;
    {
        const bool branch_taken_0x79a550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A550u;
        // 0x79a554: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a550) {
            ctx->pc = 0x79A560u;
            goto label_79a560;
        }
    }
    ctx->pc = 0x79A558u;
    // 0x79a558: 0x3e00008  jr          $ra
    ctx->pc = 0x79A558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A558u;
        // 0x79a55c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A560u;
label_79a560:
    // 0x79a560: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A560u;
    {
        const bool branch_taken_0x79a560 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A560u;
        // 0x79a564: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a560) {
            ctx->pc = 0x79A570u;
            goto label_79a570;
        }
    }
    ctx->pc = 0x79A568u;
    // 0x79a568: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79A568u;
    {
        const bool branch_taken_0x79a568 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79a568) {
            ctx->pc = 0x79A56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A568u;
            // 0x79a56c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a538;
        }
    }
    ctx->pc = 0x79A570u;
label_79a570:
    // 0x79a570: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A570u;
    {
        const bool branch_taken_0x79a570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A570u;
        // 0x79a574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a570) {
            ctx->pc = 0x79A580u;
            goto label_79a580;
        }
    }
    ctx->pc = 0x79A578u;
    // 0x79a578: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79a578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79a57c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79a57cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79a580:
    // 0x79a580: 0x3e00008  jr          $ra
    ctx->pc = 0x79A580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A588u;
}
} // namespace gh_r405
