#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79dbf8 - 0x79dc60
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79dbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79dbf8");
#endif

    switch (ctx->pc) {
        case 0x79dc10u: goto label_79dc10;
        default: break;
    }

    ctx->pc = 0x79dbf8u;

    // 0x79dbf8: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79DBF8u;
    {
        const bool branch_taken_0x79dbf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79dbf8) {
            ctx->pc = 0x79DC48u;
            goto label_79dc48;
        }
    }
    ctx->pc = 0x79DC00u;
    // 0x79dc00: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79DC00u;
    {
        const bool branch_taken_0x79dc00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79dc00) {
            ctx->pc = 0x79DC48u;
            goto label_79dc48;
        }
    }
    ctx->pc = 0x79DC08u;
    // 0x79dc08: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79dc08u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79dc0c: 0x0  nop
    ctx->pc = 0x79dc0cu;
    // NOP
label_79dc10:
    // 0x79dc10: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79dc10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79dc14: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79dc14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79dc18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79DC18u;
    {
        const bool branch_taken_0x79dc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DC18u;
        // 0x79dc1c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dc18) {
            ctx->pc = 0x79DC28u;
            goto label_79dc28;
        }
    }
    ctx->pc = 0x79DC20u;
    // 0x79dc20: 0x3e00008  jr          $ra
    ctx->pc = 0x79DC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DC20u;
        // 0x79dc24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79DC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79DC28u;
label_79dc28:
    // 0x79dc28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79DC28u;
    {
        const bool branch_taken_0x79dc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DC28u;
        // 0x79dc2c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dc28) {
            ctx->pc = 0x79DC38u;
            goto label_79dc38;
        }
    }
    ctx->pc = 0x79DC30u;
    // 0x79dc30: 0x3e00008  jr          $ra
    ctx->pc = 0x79DC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DC30u;
        // 0x79dc34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79DC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79DC38u;
label_79dc38:
    // 0x79dc38: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79DC38u;
    {
        const bool branch_taken_0x79dc38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DC38u;
        // 0x79dc3c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dc38) {
            ctx->pc = 0x79DC48u;
            goto label_79dc48;
        }
    }
    ctx->pc = 0x79DC40u;
    // 0x79dc40: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79DC40u;
    {
        const bool branch_taken_0x79dc40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79dc40) {
            ctx->pc = 0x79DC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79DC40u;
            // 0x79dc44: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79DC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79dc10;
        }
    }
    ctx->pc = 0x79DC48u;
label_79dc48:
    // 0x79dc48: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79DC48u;
    {
        const bool branch_taken_0x79dc48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79DC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DC48u;
        // 0x79dc4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dc48) {
            ctx->pc = 0x79DC58u;
            goto label_79dc58;
        }
    }
    ctx->pc = 0x79DC50u;
    // 0x79dc50: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79dc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79dc54: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79dc54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79dc58:
    // 0x79dc58: 0x3e00008  jr          $ra
    ctx->pc = 0x79DC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79DC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79DC60u;
}
} // namespace gh_r301
