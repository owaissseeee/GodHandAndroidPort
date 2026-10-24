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
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79a490 - 0x79a4f0
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79a490");
#endif

    switch (ctx->pc) {
        case 0x79a4a8u: goto label_79a4a8;
        default: break;
    }

    ctx->pc = 0x79a490u;

    // 0x79a490: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79A490u;
    {
        const bool branch_taken_0x79a490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79a490) {
            ctx->pc = 0x79A4D0u;
            goto label_79a4d0;
        }
    }
    ctx->pc = 0x79A498u;
    // 0x79a498: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79A498u;
    {
        const bool branch_taken_0x79a498 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A498u;
        // 0x79a49c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a498) {
            ctx->pc = 0x79A4E8u;
            goto label_79a4e8;
        }
    }
    ctx->pc = 0x79A4A0u;
    // 0x79a4a0: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79a4a0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a4a4: 0x0  nop
    ctx->pc = 0x79a4a4u;
    // NOP
label_79a4a8:
    // 0x79a4a8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79a4a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a4ac: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79a4acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a4b0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A4B0u;
    {
        const bool branch_taken_0x79a4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4B0u;
        // 0x79a4b4: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4b0) {
            ctx->pc = 0x79A4D8u;
            goto label_79a4d8;
        }
    }
    ctx->pc = 0x79A4B8u;
    // 0x79a4b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A4B8u;
    {
        const bool branch_taken_0x79a4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4B8u;
        // 0x79a4bc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4b8) {
            ctx->pc = 0x79A4E0u;
            goto label_79a4e0;
        }
    }
    ctx->pc = 0x79A4C0u;
    // 0x79a4c0: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A4C0u;
    {
        const bool branch_taken_0x79a4c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4C0u;
        // 0x79a4c4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4c0) {
            ctx->pc = 0x79A4D0u;
            goto label_79a4d0;
        }
    }
    ctx->pc = 0x79A4C8u;
    // 0x79a4c8: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A4C8u;
    {
        const bool branch_taken_0x79a4c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79a4c8) {
            ctx->pc = 0x79A4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A4C8u;
            // 0x79a4cc: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a4a8;
        }
    }
    ctx->pc = 0x79A4D0u;
label_79a4d0:
    // 0x79a4d0: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A4D0u;
    {
        const bool branch_taken_0x79a4d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4D0u;
        // 0x79a4d4: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4d0) {
            ctx->pc = 0x79A4E8u;
            goto label_79a4e8;
        }
    }
    ctx->pc = 0x79A4D8u;
label_79a4d8:
    // 0x79a4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4D8u;
        // 0x79a4dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A4E0u;
label_79a4e0:
    // 0x79a4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4E0u;
        // 0x79a4e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A4E8u;
label_79a4e8:
    // 0x79a4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4E8u;
        // 0x79a4ec: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A4F0u;
}
} // namespace gh_r006
