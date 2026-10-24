#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r606_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r606
{
// Function: r6xx_isOpenLever__FPCc
// Address: 0x79a3a8 - 0x79a428
void r6xx_isOpenLever__FPCc_0x79a3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_isOpenLever__FPCc_0x79a3a8");
#endif

    switch (ctx->pc) {
        case 0x79a3d0u: goto label_79a3d0;
        case 0x79a400u: goto label_79a400;
        case 0x79a410u: goto label_79a410;
        default: break;
    }

    ctx->pc = 0x79a3a8u;

    // 0x79a3a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79a3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79a3ac: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79a3b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a3b4: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79a3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79a3b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3bc: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x79a3bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a3c0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x79A3C0u;
    {
        const bool branch_taken_0x79a3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3C0u;
        // 0x79a3c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3c0) {
            ctx->pc = 0x79A3F8u;
            goto label_79a3f8;
        }
    }
    ctx->pc = 0x79A3C8u;
    // 0x79a3c8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79a3c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3cc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a3ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a3d0:
    // 0x79a3d0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a3d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a3d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a3d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a3dc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a3e0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a3e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a3e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A3E4u;
    {
        const bool branch_taken_0x79a3e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3E4u;
        // 0x79a3e8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3e4) {
            ctx->pc = 0x79A3F8u;
            goto label_79a3f8;
        }
    }
    ctx->pc = 0x79A3ECu;
    // 0x79a3ec: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a3ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a3f0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A3F0u;
    {
        const bool branch_taken_0x79a3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a3f0) {
            ctx->pc = 0x79A3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A3F0u;
            // 0x79a3f4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a3d0;
        }
    }
    ctx->pc = 0x79A3F8u;
label_79a3f8:
    // 0x79a3f8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A3F8u;
    SET_GPR_U32(ctx, 31, 0x79A400u);
    ctx->pc = 0x79A3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3F8u;
    // 0x79a3fc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A3F8u, 0x79A400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A400u;
label_79a400:
    // 0x79a400: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A400u;
    {
        const bool branch_taken_0x79a400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a400) {
            ctx->pc = 0x79A404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A400u;
            // 0x79a404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A418u;
            goto label_79a418;
        }
    }
    ctx->pc = 0x79A408u;
    // 0x79a408: 0xc0693c4  jal         func_1A4F10
    ctx->pc = 0x79A408u;
    SET_GPR_U32(ctx, 31, 0x79A410u);
    ctx->pc = 0x79A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A408u;
    // 0x79a40c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F10u, 0x79A408u, 0x79A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A410u;
label_79a410:
    // 0x79a410: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A410u;
    {
        const bool branch_taken_0x79a410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A410u;
        // 0x79a414: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a410) {
            ctx->pc = 0x79A41Cu;
            goto label_79a41c;
        }
    }
    ctx->pc = 0x79A418u;
label_79a418:
    // 0x79a418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a41c:
    // 0x79a41c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A41Cu;
        // 0x79a420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A424u;
    // 0x79a424: 0x0  nop
    ctx->pc = 0x79a424u;
    // NOP
    ctx->pc = 0x79a428u;
}
} // namespace gh_r606
