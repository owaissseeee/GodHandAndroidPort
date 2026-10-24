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
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79c070 - 0x79c0d8
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79c070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79c070");
#endif

    switch (ctx->pc) {
        case 0x79c088u: goto label_79c088;
        default: break;
    }

    ctx->pc = 0x79c070u;

    // 0x79c070: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79C070u;
    {
        const bool branch_taken_0x79c070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79c070) {
            ctx->pc = 0x79C0C0u;
            goto label_79c0c0;
        }
    }
    ctx->pc = 0x79C078u;
    // 0x79c078: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79C078u;
    {
        const bool branch_taken_0x79c078 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79c078) {
            ctx->pc = 0x79C0C0u;
            goto label_79c0c0;
        }
    }
    ctx->pc = 0x79C080u;
    // 0x79c080: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79c080u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79c084: 0x0  nop
    ctx->pc = 0x79c084u;
    // NOP
label_79c088:
    // 0x79c088: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79c088u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79c08c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79c08cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79c090: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C090u;
    {
        const bool branch_taken_0x79c090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C090u;
        // 0x79c094: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c090) {
            ctx->pc = 0x79C0A0u;
            goto label_79c0a0;
        }
    }
    ctx->pc = 0x79C098u;
    // 0x79c098: 0x3e00008  jr          $ra
    ctx->pc = 0x79C098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C098u;
        // 0x79c09c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C0A0u;
label_79c0a0:
    // 0x79c0a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C0A0u;
    {
        const bool branch_taken_0x79c0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0A0u;
        // 0x79c0a4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c0a0) {
            ctx->pc = 0x79C0B0u;
            goto label_79c0b0;
        }
    }
    ctx->pc = 0x79C0A8u;
    // 0x79c0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x79C0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0A8u;
        // 0x79c0ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C0B0u;
label_79c0b0:
    // 0x79c0b0: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C0B0u;
    {
        const bool branch_taken_0x79c0b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0B0u;
        // 0x79c0b4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c0b0) {
            ctx->pc = 0x79C0C0u;
            goto label_79c0c0;
        }
    }
    ctx->pc = 0x79C0B8u;
    // 0x79c0b8: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79C0B8u;
    {
        const bool branch_taken_0x79c0b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79c0b8) {
            ctx->pc = 0x79C0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C0B8u;
            // 0x79c0bc: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c088;
        }
    }
    ctx->pc = 0x79C0C0u;
label_79c0c0:
    // 0x79c0c0: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C0C0u;
    {
        const bool branch_taken_0x79c0c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0C0u;
        // 0x79c0c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c0c0) {
            ctx->pc = 0x79C0D0u;
            goto label_79c0d0;
        }
    }
    ctx->pc = 0x79C0C8u;
    // 0x79c0c8: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79c0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79c0cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79c0ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79c0d0:
    // 0x79c0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x79C0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C0D8u;
}
} // namespace gh_r700
