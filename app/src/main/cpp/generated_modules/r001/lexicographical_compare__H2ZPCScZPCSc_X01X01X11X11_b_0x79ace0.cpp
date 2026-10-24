#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r001_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r001
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79ace0 - 0x79ad48
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79ace0");
#endif

    switch (ctx->pc) {
        case 0x79acf8u: goto label_79acf8;
        default: break;
    }

    ctx->pc = 0x79ace0u;

    // 0x79ace0: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79ACE0u;
    {
        const bool branch_taken_0x79ace0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79ace0) {
            ctx->pc = 0x79AD30u;
            goto label_79ad30;
        }
    }
    ctx->pc = 0x79ACE8u;
    // 0x79ace8: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79ACE8u;
    {
        const bool branch_taken_0x79ace8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79ace8) {
            ctx->pc = 0x79AD30u;
            goto label_79ad30;
        }
    }
    ctx->pc = 0x79ACF0u;
    // 0x79acf0: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79acf0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79acf4: 0x0  nop
    ctx->pc = 0x79acf4u;
    // NOP
label_79acf8:
    // 0x79acf8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79acf8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79acfc: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79acfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79ad00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AD00u;
    {
        const bool branch_taken_0x79ad00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD00u;
        // 0x79ad04: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad00) {
            ctx->pc = 0x79AD10u;
            goto label_79ad10;
        }
    }
    ctx->pc = 0x79AD08u;
    // 0x79ad08: 0x3e00008  jr          $ra
    ctx->pc = 0x79AD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD08u;
        // 0x79ad0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AD10u;
label_79ad10:
    // 0x79ad10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AD10u;
    {
        const bool branch_taken_0x79ad10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD10u;
        // 0x79ad14: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad10) {
            ctx->pc = 0x79AD20u;
            goto label_79ad20;
        }
    }
    ctx->pc = 0x79AD18u;
    // 0x79ad18: 0x3e00008  jr          $ra
    ctx->pc = 0x79AD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD18u;
        // 0x79ad1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AD20u;
label_79ad20:
    // 0x79ad20: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AD20u;
    {
        const bool branch_taken_0x79ad20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD20u;
        // 0x79ad24: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad20) {
            ctx->pc = 0x79AD30u;
            goto label_79ad30;
        }
    }
    ctx->pc = 0x79AD28u;
    // 0x79ad28: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79AD28u;
    {
        const bool branch_taken_0x79ad28 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79ad28) {
            ctx->pc = 0x79AD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AD28u;
            // 0x79ad2c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ACF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79acf8;
        }
    }
    ctx->pc = 0x79AD30u;
label_79ad30:
    // 0x79ad30: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AD30u;
    {
        const bool branch_taken_0x79ad30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD30u;
        // 0x79ad34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad30) {
            ctx->pc = 0x79AD40u;
            goto label_79ad40;
        }
    }
    ctx->pc = 0x79AD38u;
    // 0x79ad38: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79ad38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79ad3c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79ad3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79ad40:
    // 0x79ad40: 0x3e00008  jr          $ra
    ctx->pc = 0x79AD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AD48u;
}
} // namespace gh_r001
