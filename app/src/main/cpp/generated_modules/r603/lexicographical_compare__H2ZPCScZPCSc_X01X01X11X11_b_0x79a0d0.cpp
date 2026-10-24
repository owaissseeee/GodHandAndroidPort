#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r603_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r603
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79a0d0 - 0x79a138
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79a0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79a0d0");
#endif

    switch (ctx->pc) {
        case 0x79a0e8u: goto label_79a0e8;
        default: break;
    }

    ctx->pc = 0x79a0d0u;

    // 0x79a0d0: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79A0D0u;
    {
        const bool branch_taken_0x79a0d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79a0d0) {
            ctx->pc = 0x79A120u;
            goto label_79a120;
        }
    }
    ctx->pc = 0x79A0D8u;
    // 0x79a0d8: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79A0D8u;
    {
        const bool branch_taken_0x79a0d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79a0d8) {
            ctx->pc = 0x79A120u;
            goto label_79a120;
        }
    }
    ctx->pc = 0x79A0E0u;
    // 0x79a0e0: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79a0e0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a0e4: 0x0  nop
    ctx->pc = 0x79a0e4u;
    // NOP
label_79a0e8:
    // 0x79a0e8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79a0e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a0ec: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79a0ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a0f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A0F0u;
    {
        const bool branch_taken_0x79a0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0F0u;
        // 0x79a0f4: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0f0) {
            ctx->pc = 0x79A100u;
            goto label_79a100;
        }
    }
    ctx->pc = 0x79A0F8u;
    // 0x79a0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0F8u;
        // 0x79a0fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A100u;
label_79a100:
    // 0x79a100: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A100u;
    {
        const bool branch_taken_0x79a100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A100u;
        // 0x79a104: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a100) {
            ctx->pc = 0x79A110u;
            goto label_79a110;
        }
    }
    ctx->pc = 0x79A108u;
    // 0x79a108: 0x3e00008  jr          $ra
    ctx->pc = 0x79A108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A108u;
        // 0x79a10c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A110u;
label_79a110:
    // 0x79a110: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A110u;
    {
        const bool branch_taken_0x79a110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A110u;
        // 0x79a114: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a110) {
            ctx->pc = 0x79A120u;
            goto label_79a120;
        }
    }
    ctx->pc = 0x79A118u;
    // 0x79a118: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79A118u;
    {
        const bool branch_taken_0x79a118 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79a118) {
            ctx->pc = 0x79A11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A118u;
            // 0x79a11c: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a0e8;
        }
    }
    ctx->pc = 0x79A120u;
label_79a120:
    // 0x79a120: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A120u;
    {
        const bool branch_taken_0x79a120 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A120u;
        // 0x79a124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a120) {
            ctx->pc = 0x79A130u;
            goto label_79a130;
        }
    }
    ctx->pc = 0x79A128u;
    // 0x79a128: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79a128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79a12c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79a12cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79a130:
    // 0x79a130: 0x3e00008  jr          $ra
    ctx->pc = 0x79A130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A138u;
}
} // namespace gh_r603
