#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79be58 - 0x79beb8
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79be58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79be58");
#endif

    switch (ctx->pc) {
        case 0x79be70u: goto label_79be70;
        default: break;
    }

    ctx->pc = 0x79be58u;

    // 0x79be58: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79BE58u;
    {
        const bool branch_taken_0x79be58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79be58) {
            ctx->pc = 0x79BE98u;
            goto label_79be98;
        }
    }
    ctx->pc = 0x79BE60u;
    // 0x79be60: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79BE60u;
    {
        const bool branch_taken_0x79be60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE60u;
        // 0x79be64: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be60) {
            ctx->pc = 0x79BEB0u;
            goto label_79beb0;
        }
    }
    ctx->pc = 0x79BE68u;
    // 0x79be68: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79be68u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79be6c: 0x0  nop
    ctx->pc = 0x79be6cu;
    // NOP
label_79be70:
    // 0x79be70: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79be70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79be74: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79be74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79be78: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79BE78u;
    {
        const bool branch_taken_0x79be78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE78u;
        // 0x79be7c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be78) {
            ctx->pc = 0x79BEA0u;
            goto label_79bea0;
        }
    }
    ctx->pc = 0x79BE80u;
    // 0x79be80: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79BE80u;
    {
        const bool branch_taken_0x79be80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE80u;
        // 0x79be84: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be80) {
            ctx->pc = 0x79BEA8u;
            goto label_79bea8;
        }
    }
    ctx->pc = 0x79BE88u;
    // 0x79be88: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BE88u;
    {
        const bool branch_taken_0x79be88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE88u;
        // 0x79be8c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be88) {
            ctx->pc = 0x79BE98u;
            goto label_79be98;
        }
    }
    ctx->pc = 0x79BE90u;
    // 0x79be90: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79BE90u;
    {
        const bool branch_taken_0x79be90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79be90) {
            ctx->pc = 0x79BE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BE90u;
            // 0x79be94: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79be70;
        }
    }
    ctx->pc = 0x79BE98u;
label_79be98:
    // 0x79be98: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BE98u;
    {
        const bool branch_taken_0x79be98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE98u;
        // 0x79be9c: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be98) {
            ctx->pc = 0x79BEB0u;
            goto label_79beb0;
        }
    }
    ctx->pc = 0x79BEA0u;
label_79bea0:
    // 0x79bea0: 0x3e00008  jr          $ra
    ctx->pc = 0x79BEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEA0u;
        // 0x79bea4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BEA8u;
label_79bea8:
    // 0x79bea8: 0x3e00008  jr          $ra
    ctx->pc = 0x79BEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEA8u;
        // 0x79beac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BEB0u;
label_79beb0:
    // 0x79beb0: 0x3e00008  jr          $ra
    ctx->pc = 0x79BEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEB0u;
        // 0x79beb4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BEB8u;
}
} // namespace gh_r409
