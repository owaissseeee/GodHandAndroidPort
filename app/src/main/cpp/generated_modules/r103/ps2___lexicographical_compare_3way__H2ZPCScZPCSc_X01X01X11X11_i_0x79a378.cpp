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
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79a378 - 0x79a3d8
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79a378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79a378");
#endif

    switch (ctx->pc) {
        case 0x79a390u: goto label_79a390;
        default: break;
    }

    ctx->pc = 0x79a378u;

    // 0x79a378: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79A378u;
    {
        const bool branch_taken_0x79a378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79a378) {
            ctx->pc = 0x79A3B8u;
            goto label_79a3b8;
        }
    }
    ctx->pc = 0x79A380u;
    // 0x79a380: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79A380u;
    {
        const bool branch_taken_0x79a380 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A380u;
        // 0x79a384: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a380) {
            ctx->pc = 0x79A3D0u;
            goto label_79a3d0;
        }
    }
    ctx->pc = 0x79A388u;
    // 0x79a388: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79a388u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a38c: 0x0  nop
    ctx->pc = 0x79a38cu;
    // NOP
label_79a390:
    // 0x79a390: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79a390u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a394: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79a394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a398: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A398u;
    {
        const bool branch_taken_0x79a398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A398u;
        // 0x79a39c: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a398) {
            ctx->pc = 0x79A3C0u;
            goto label_79a3c0;
        }
    }
    ctx->pc = 0x79A3A0u;
    // 0x79a3a0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A3A0u;
    {
        const bool branch_taken_0x79a3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3A0u;
        // 0x79a3a4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3a0) {
            ctx->pc = 0x79A3C8u;
            goto label_79a3c8;
        }
    }
    ctx->pc = 0x79A3A8u;
    // 0x79a3a8: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A3A8u;
    {
        const bool branch_taken_0x79a3a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3A8u;
        // 0x79a3ac: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3a8) {
            ctx->pc = 0x79A3B8u;
            goto label_79a3b8;
        }
    }
    ctx->pc = 0x79A3B0u;
    // 0x79a3b0: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A3B0u;
    {
        const bool branch_taken_0x79a3b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79a3b0) {
            ctx->pc = 0x79A3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A3B0u;
            // 0x79a3b4: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a390;
        }
    }
    ctx->pc = 0x79A3B8u;
label_79a3b8:
    // 0x79a3b8: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A3B8u;
    {
        const bool branch_taken_0x79a3b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3B8u;
        // 0x79a3bc: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3b8) {
            ctx->pc = 0x79A3D0u;
            goto label_79a3d0;
        }
    }
    ctx->pc = 0x79A3C0u;
label_79a3c0:
    // 0x79a3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3C0u;
        // 0x79a3c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A3C8u;
label_79a3c8:
    // 0x79a3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3C8u;
        // 0x79a3cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A3D0u;
label_79a3d0:
    // 0x79a3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3D0u;
        // 0x79a3d4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A3D8u;
}
} // namespace gh_r103
