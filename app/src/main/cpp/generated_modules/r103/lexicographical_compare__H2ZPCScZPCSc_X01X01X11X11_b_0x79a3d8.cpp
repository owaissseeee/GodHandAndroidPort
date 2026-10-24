#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r103_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r103
{
// Function: lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b
// Address: 0x79a3d8 - 0x79a440
void lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79a3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("lexicographical_compare__H2ZPCScZPCSc_X01X01X11X11_b_0x79a3d8");
#endif

    switch (ctx->pc) {
        case 0x79a3f0u: goto label_79a3f0;
        default: break;
    }

    ctx->pc = 0x79a3d8u;

    // 0x79a3d8: 0x10850013  beq         $a0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x79A3D8u;
    {
        const bool branch_taken_0x79a3d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79a3d8) {
            ctx->pc = 0x79A428u;
            goto label_79a428;
        }
    }
    ctx->pc = 0x79A3E0u;
    // 0x79a3e0: 0x10c70011  beq         $a2, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x79A3E0u;
    {
        const bool branch_taken_0x79a3e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x79a3e0) {
            ctx->pc = 0x79A428u;
            goto label_79a428;
        }
    }
    ctx->pc = 0x79A3E8u;
    // 0x79a3e8: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79a3e8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a3ec: 0x0  nop
    ctx->pc = 0x79a3ecu;
    // NOP
label_79a3f0:
    // 0x79a3f0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79a3f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a3f4: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79a3f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a3f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A3F8u;
    {
        const bool branch_taken_0x79a3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3F8u;
        // 0x79a3fc: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3f8) {
            ctx->pc = 0x79A408u;
            goto label_79a408;
        }
    }
    ctx->pc = 0x79A400u;
    // 0x79a400: 0x3e00008  jr          $ra
    ctx->pc = 0x79A400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A400u;
        // 0x79a404: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A408u;
label_79a408:
    // 0x79a408: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A408u;
    {
        const bool branch_taken_0x79a408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A408u;
        // 0x79a40c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a408) {
            ctx->pc = 0x79A418u;
            goto label_79a418;
        }
    }
    ctx->pc = 0x79A410u;
    // 0x79a410: 0x3e00008  jr          $ra
    ctx->pc = 0x79A410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A410u;
        // 0x79a414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A418u;
label_79a418:
    // 0x79a418: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A418u;
    {
        const bool branch_taken_0x79a418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A418u;
        // 0x79a41c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a418) {
            ctx->pc = 0x79A428u;
            goto label_79a428;
        }
    }
    ctx->pc = 0x79A420u;
    // 0x79a420: 0x54c7fff3  bnel        $a2, $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x79A420u;
    {
        const bool branch_taken_0x79a420 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79a420) {
            ctx->pc = 0x79A424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A420u;
            // 0x79a424: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a3f0;
        }
    }
    ctx->pc = 0x79A428u;
label_79a428:
    // 0x79a428: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A428u;
    {
        const bool branch_taken_0x79a428 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x79A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A428u;
        // 0x79a42c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a428) {
            ctx->pc = 0x79A438u;
            goto label_79a438;
        }
    }
    ctx->pc = 0x79A430u;
    // 0x79a430: 0xc71026  xor         $v0, $a2, $a3
    ctx->pc = 0x79a430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x79a434: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79a434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_79a438:
    // 0x79a438: 0x3e00008  jr          $ra
    ctx->pc = 0x79A438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A440u;
}
} // namespace gh_r103
