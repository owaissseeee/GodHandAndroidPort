#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r304_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r304
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79aa78 - 0x79aae0
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79aa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79aa78");
#endif

    switch (ctx->pc) {
        case 0x79aa90u: goto label_79aa90;
        default: break;
    }

    ctx->pc = 0x79aa78u;

    // 0x79aa78: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79AA78u;
    {
        const bool branch_taken_0x79aa78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79aa78) {
            ctx->pc = 0x79AAC8u;
            goto label_79aac8;
        }
    }
    ctx->pc = 0x79AA80u;
    // 0x79aa80: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79AA80u;
    {
        const bool branch_taken_0x79aa80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79aa80) {
            ctx->pc = 0x79AAC8u;
            goto label_79aac8;
        }
    }
    ctx->pc = 0x79AA88u;
    // 0x79aa88: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79aa88u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79aa8c: 0x0  nop
    ctx->pc = 0x79aa8cu;
    // NOP
label_79aa90:
    // 0x79aa90: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79aa90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79aa94: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79aa94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79aa98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AA98u;
    {
        const bool branch_taken_0x79aa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA98u;
        // 0x79aa9c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa98) {
            ctx->pc = 0x79AAA8u;
            goto label_79aaa8;
        }
    }
    ctx->pc = 0x79AAA0u;
    // 0x79aaa0: 0x3e00008  jr          $ra
    ctx->pc = 0x79AAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAA0u;
        // 0x79aaa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AAA8u;
label_79aaa8:
    // 0x79aaa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AAA8u;
    {
        const bool branch_taken_0x79aaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAA8u;
        // 0x79aaac: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aaa8) {
            ctx->pc = 0x79AAB8u;
            goto label_79aab8;
        }
    }
    ctx->pc = 0x79AAB0u;
    // 0x79aab0: 0x3e00008  jr          $ra
    ctx->pc = 0x79AAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAB0u;
        // 0x79aab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AAB8u;
label_79aab8:
    // 0x79aab8: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AAB8u;
    {
        const bool branch_taken_0x79aab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAB8u;
        // 0x79aabc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aab8) {
            ctx->pc = 0x79AAC8u;
            goto label_79aac8;
        }
    }
    ctx->pc = 0x79AAC0u;
    // 0x79aac0: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79AAC0u;
    {
        const bool branch_taken_0x79aac0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79aac0) {
            ctx->pc = 0x79AAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AAC0u;
            // 0x79aac4: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aa90;
        }
    }
    ctx->pc = 0x79AAC8u;
label_79aac8:
    // 0x79aac8: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AAC8u;
    {
        const bool branch_taken_0x79aac8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAC8u;
        // 0x79aacc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aac8) {
            ctx->pc = 0x79AAD8u;
            goto label_79aad8;
        }
    }
    ctx->pc = 0x79AAD0u;
    // 0x79aad0: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79aad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79aad4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79aad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79aad8:
    // 0x79aad8: 0x3e00008  jr          $ra
    ctx->pc = 0x79AAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AAE0u;
}
} // namespace gh_r304
