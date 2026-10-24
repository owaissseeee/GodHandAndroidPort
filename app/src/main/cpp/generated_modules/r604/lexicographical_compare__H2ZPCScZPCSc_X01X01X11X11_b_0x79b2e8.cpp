#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79b2e8 - 0x79b350
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79b2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79b2e8");
#endif

    switch (ctx->pc) {
        case 0x79b300u: goto label_79b300;
        default: break;
    }

    ctx->pc = 0x79b2e8u;

    // 0x79b2e8: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79B2E8u;
    {
        const bool branch_taken_0x79b2e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79b2e8) {
            ctx->pc = 0x79B338u;
            goto label_79b338;
        }
    }
    ctx->pc = 0x79B2F0u;
    // 0x79b2f0: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79B2F0u;
    {
        const bool branch_taken_0x79b2f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79b2f0) {
            ctx->pc = 0x79B338u;
            goto label_79b338;
        }
    }
    ctx->pc = 0x79B2F8u;
    // 0x79b2f8: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79b2f8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b2fc: 0x0  nop
    ctx->pc = 0x79b2fcu;
    // NOP
label_79b300:
    // 0x79b300: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79b300u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b304: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79b304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79b308: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B308u;
    {
        const bool branch_taken_0x79b308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B308u;
        // 0x79b30c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b308) {
            ctx->pc = 0x79B318u;
            goto label_79b318;
        }
    }
    ctx->pc = 0x79B310u;
    // 0x79b310: 0x3e00008  jr          $ra
    ctx->pc = 0x79B310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B310u;
        // 0x79b314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B318u;
label_79b318:
    // 0x79b318: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B318u;
    {
        const bool branch_taken_0x79b318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B318u;
        // 0x79b31c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b318) {
            ctx->pc = 0x79B328u;
            goto label_79b328;
        }
    }
    ctx->pc = 0x79B320u;
    // 0x79b320: 0x3e00008  jr          $ra
    ctx->pc = 0x79B320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B320u;
        // 0x79b324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B328u;
label_79b328:
    // 0x79b328: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B328u;
    {
        const bool branch_taken_0x79b328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B328u;
        // 0x79b32c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b328) {
            ctx->pc = 0x79B338u;
            goto label_79b338;
        }
    }
    ctx->pc = 0x79B330u;
    // 0x79b330: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79B330u;
    {
        const bool branch_taken_0x79b330 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79b330) {
            ctx->pc = 0x79B334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B330u;
            // 0x79b334: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b300;
        }
    }
    ctx->pc = 0x79B338u;
label_79b338:
    // 0x79b338: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B338u;
    {
        const bool branch_taken_0x79b338 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B338u;
        // 0x79b33c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b338) {
            ctx->pc = 0x79B348u;
            goto label_79b348;
        }
    }
    ctx->pc = 0x79B340u;
    // 0x79b340: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79b340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79b344: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79b344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79b348:
    // 0x79b348: 0x3e00008  jr          $ra
    ctx->pc = 0x79B348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B350u;
}
} // namespace gh_r604
