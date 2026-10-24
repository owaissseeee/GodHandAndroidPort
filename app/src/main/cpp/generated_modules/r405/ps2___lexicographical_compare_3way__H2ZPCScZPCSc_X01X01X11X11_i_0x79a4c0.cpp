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
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79a4c0 - 0x79a520
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79a4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79a4c0");
#endif

    switch (ctx->pc) {
        case 0x79a4d8u: goto label_79a4d8;
        default: break;
    }

    ctx->pc = 0x79a4c0u;

    // 0x79a4c0: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79A4C0u;
    {
        const bool branch_taken_0x79a4c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79a4c0) {
            ctx->pc = 0x79A500u;
            goto label_79a500;
        }
    }
    ctx->pc = 0x79A4C8u;
    // 0x79a4c8: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79A4C8u;
    {
        const bool branch_taken_0x79a4c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4C8u;
        // 0x79a4cc: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4c8) {
            ctx->pc = 0x79A518u;
            goto label_79a518;
        }
    }
    ctx->pc = 0x79A4D0u;
    // 0x79a4d0: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79a4d0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a4d4: 0x0  nop
    ctx->pc = 0x79a4d4u;
    // NOP
label_79a4d8:
    // 0x79a4d8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79a4d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a4dc: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79a4dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a4e0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A4E0u;
    {
        const bool branch_taken_0x79a4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4E0u;
        // 0x79a4e4: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4e0) {
            ctx->pc = 0x79A508u;
            goto label_79a508;
        }
    }
    ctx->pc = 0x79A4E8u;
    // 0x79a4e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A4E8u;
    {
        const bool branch_taken_0x79a4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4E8u;
        // 0x79a4ec: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4e8) {
            ctx->pc = 0x79A510u;
            goto label_79a510;
        }
    }
    ctx->pc = 0x79A4F0u;
    // 0x79a4f0: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A4F0u;
    {
        const bool branch_taken_0x79a4f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4F0u;
        // 0x79a4f4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4f0) {
            ctx->pc = 0x79A500u;
            goto label_79a500;
        }
    }
    ctx->pc = 0x79A4F8u;
    // 0x79a4f8: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A4F8u;
    {
        const bool branch_taken_0x79a4f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79a4f8) {
            ctx->pc = 0x79A4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A4F8u;
            // 0x79a4fc: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a4d8;
        }
    }
    ctx->pc = 0x79A500u;
label_79a500:
    // 0x79a500: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A500u;
    {
        const bool branch_taken_0x79a500 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A500u;
        // 0x79a504: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a500) {
            ctx->pc = 0x79A518u;
            goto label_79a518;
        }
    }
    ctx->pc = 0x79A508u;
label_79a508:
    // 0x79a508: 0x3e00008  jr          $ra
    ctx->pc = 0x79A508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A508u;
        // 0x79a50c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A510u;
label_79a510:
    // 0x79a510: 0x3e00008  jr          $ra
    ctx->pc = 0x79A510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A510u;
        // 0x79a514: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A518u;
label_79a518:
    // 0x79a518: 0x3e00008  jr          $ra
    ctx->pc = 0x79A518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A518u;
        // 0x79a51c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
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
}
} // namespace gh_r405
