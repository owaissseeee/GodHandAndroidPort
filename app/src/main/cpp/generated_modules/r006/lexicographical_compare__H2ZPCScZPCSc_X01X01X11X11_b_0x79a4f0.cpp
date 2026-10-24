#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r006_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r006
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79a4f0 - 0x79a558
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79a4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79a4f0");
#endif

    switch (ctx->pc) {
        case 0x79a508u: goto label_79a508;
        default: break;
    }

    ctx->pc = 0x79a4f0u;

    // 0x79a4f0: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79A4F0u;
    {
        const bool branch_taken_0x79a4f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79a4f0) {
            ctx->pc = 0x79A540u;
            goto label_79a540;
        }
    }
    ctx->pc = 0x79A4F8u;
    // 0x79a4f8: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79A4F8u;
    {
        const bool branch_taken_0x79a4f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79a4f8) {
            ctx->pc = 0x79A540u;
            goto label_79a540;
        }
    }
    ctx->pc = 0x79A500u;
    // 0x79a500: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79a500u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a504: 0x0  nop
    ctx->pc = 0x79a504u;
    // NOP
label_79a508:
    // 0x79a508: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79a508u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a50c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79a50cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a510: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A510u;
    {
        const bool branch_taken_0x79a510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A510u;
        // 0x79a514: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a510) {
            ctx->pc = 0x79A520u;
            goto label_79a520;
        }
    }
    ctx->pc = 0x79A518u;
    // 0x79a518: 0x3e00008  jr          $ra
    ctx->pc = 0x79A518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A518u;
        // 0x79a51c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A520u;
label_79a520:
    // 0x79a520: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A520u;
    {
        const bool branch_taken_0x79a520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A520u;
        // 0x79a524: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a520) {
            ctx->pc = 0x79A530u;
            goto label_79a530;
        }
    }
    ctx->pc = 0x79A528u;
    // 0x79a528: 0x3e00008  jr          $ra
    ctx->pc = 0x79A528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A528u;
        // 0x79a52c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A530u;
label_79a530:
    // 0x79a530: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A530u;
    {
        const bool branch_taken_0x79a530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A530u;
        // 0x79a534: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a530) {
            ctx->pc = 0x79A540u;
            goto label_79a540;
        }
    }
    ctx->pc = 0x79A538u;
    // 0x79a538: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79A538u;
    {
        const bool branch_taken_0x79a538 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79a538) {
            ctx->pc = 0x79A53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A538u;
            // 0x79a53c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a508;
        }
    }
    ctx->pc = 0x79A540u;
label_79a540:
    // 0x79a540: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A540u;
    {
        const bool branch_taken_0x79a540 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A540u;
        // 0x79a544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a540) {
            ctx->pc = 0x79A550u;
            goto label_79a550;
        }
    }
    ctx->pc = 0x79A548u;
    // 0x79a548: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79a548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79a54c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79a54cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79a550:
    // 0x79a550: 0x3e00008  jr          $ra
    ctx->pc = 0x79A550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A558u;
}
} // namespace gh_r006
