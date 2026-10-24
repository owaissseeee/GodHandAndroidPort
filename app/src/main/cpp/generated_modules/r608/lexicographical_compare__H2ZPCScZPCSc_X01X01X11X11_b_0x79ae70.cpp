#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79ae70 - 0x79aed8
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79ae70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79ae70");
#endif

    switch (ctx->pc) {
        case 0x79ae88u: goto label_79ae88;
        default: break;
    }

    ctx->pc = 0x79ae70u;

    // 0x79ae70: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79AE70u;
    {
        const bool branch_taken_0x79ae70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79ae70) {
            ctx->pc = 0x79AEC0u;
            goto label_79aec0;
        }
    }
    ctx->pc = 0x79AE78u;
    // 0x79ae78: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79AE78u;
    {
        const bool branch_taken_0x79ae78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79ae78) {
            ctx->pc = 0x79AEC0u;
            goto label_79aec0;
        }
    }
    ctx->pc = 0x79AE80u;
    // 0x79ae80: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79ae80u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79ae84: 0x0  nop
    ctx->pc = 0x79ae84u;
    // NOP
label_79ae88:
    // 0x79ae88: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79ae88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ae8c: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79ae8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79ae90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AE90u;
    {
        const bool branch_taken_0x79ae90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE90u;
        // 0x79ae94: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae90) {
            ctx->pc = 0x79AEA0u;
            goto label_79aea0;
        }
    }
    ctx->pc = 0x79AE98u;
    // 0x79ae98: 0x3e00008  jr          $ra
    ctx->pc = 0x79AE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE98u;
        // 0x79ae9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AEA0u;
label_79aea0:
    // 0x79aea0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AEA0u;
    {
        const bool branch_taken_0x79aea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEA0u;
        // 0x79aea4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aea0) {
            ctx->pc = 0x79AEB0u;
            goto label_79aeb0;
        }
    }
    ctx->pc = 0x79AEA8u;
    // 0x79aea8: 0x3e00008  jr          $ra
    ctx->pc = 0x79AEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEA8u;
        // 0x79aeac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AEB0u;
label_79aeb0:
    // 0x79aeb0: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AEB0u;
    {
        const bool branch_taken_0x79aeb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEB0u;
        // 0x79aeb4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aeb0) {
            ctx->pc = 0x79AEC0u;
            goto label_79aec0;
        }
    }
    ctx->pc = 0x79AEB8u;
    // 0x79aeb8: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79AEB8u;
    {
        const bool branch_taken_0x79aeb8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79aeb8) {
            ctx->pc = 0x79AEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AEB8u;
            // 0x79aebc: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ae88;
        }
    }
    ctx->pc = 0x79AEC0u;
label_79aec0:
    // 0x79aec0: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AEC0u;
    {
        const bool branch_taken_0x79aec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEC0u;
        // 0x79aec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aec0) {
            ctx->pc = 0x79AED0u;
            goto label_79aed0;
        }
    }
    ctx->pc = 0x79AEC8u;
    // 0x79aec8: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79aec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79aecc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79aeccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79aed0:
    // 0x79aed0: 0x3e00008  jr          $ra
    ctx->pc = 0x79AED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AED8u;
}
} // namespace gh_r608
