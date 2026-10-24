#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: func_0079A390
// Address: 0x79a390 - 0x79a448
void func_0079A390_0x79a390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A390_0x79a390");
#endif

    switch (ctx->pc) {
        case 0x79a3c0u: goto label_79a3c0;
        case 0x79a3d0u: goto label_79a3d0;
        case 0x79a3e4u: goto label_79a3e4;
        case 0x79a3f4u: goto label_79a3f4;
        case 0x79a41cu: goto label_79a41c;
        case 0x79a428u: goto label_79a428;
        default: break;
    }

    ctx->pc = 0x79a390u;

    // 0x79a390: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79a390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79a394: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79a394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79a398: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79a398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79a39c: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x79a39cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x79a3a0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x79a3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x79a3a4: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x79a3a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x79a3a8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x79a3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x79a3ac: 0x3c13005f  lui         $s3, 0x5F
    ctx->pc = 0x79a3acu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)95 << 16));
    // 0x79a3b0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79a3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79a3b4: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x79a3b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x79a3b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A3B8u;
    {
        const bool branch_taken_0x79a3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3B8u;
        // 0x79a3bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3b8) {
            ctx->pc = 0x79A3D0u;
            goto label_79a3d0;
        }
    }
    ctx->pc = 0x79A3C0u;
label_79a3c0:
    // 0x79a3c0: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a3c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a3c8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A3C8u;
    SET_GPR_U32(ctx, 31, 0x79A3D0u);
    ctx->pc = 0x79A3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3C8u;
    // 0x79a3cc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A3C8u, 0x79A3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3D0u;
label_79a3d0:
    // 0x79a3d0: 0x2630ea60  addiu       $s0, $s1, -0x15A0
    ctx->pc = 0x79a3d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x79a3d4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x79a3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a3d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3dc: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79A3DCu;
    SET_GPR_U32(ctx, 31, 0x79A3E4u);
    ctx->pc = 0x79A3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3DCu;
    // 0x79a3e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79A3DCu, 0x79A3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3E4u;
label_79a3e4:
    // 0x79a3e4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x79A3E4u;
    {
        const bool branch_taken_0x79a3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3E4u;
        // 0x79a3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3e4) {
            ctx->pc = 0x79A3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a3c0;
        }
    }
    ctx->pc = 0x79A3ECu;
    // 0x79a3ec: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79A3ECu;
    SET_GPR_U32(ctx, 31, 0x79A3F4u);
    ctx->pc = 0x79A3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3ECu;
    // 0x79a3f0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79A3ECu, 0x79A3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3F4u;
label_79a3f4:
    // 0x79a3f4: 0x8e638658  lw          $v1, -0x79A8($s3)
    ctx->pc = 0x79a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
    // 0x79a3f8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x79a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x79a3fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a3fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a404: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a408: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a40c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x79a40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x79a410: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79a410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x79a414: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x79A414u;
    SET_GPR_U32(ctx, 31, 0x79A41Cu);
    ctx->pc = 0x79A418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A414u;
    // 0x79a418: 0x8e84264c  lw          $a0, 0x264C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x79A414u, 0x79A41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A41Cu;
label_79a41c:
    // 0x79a41c: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a420: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A420u;
    SET_GPR_U32(ctx, 31, 0x79A428u);
    ctx->pc = 0x79A424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A420u;
    // 0x79a424: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A420u, 0x79A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A428u;
label_79a428:
    // 0x79a428: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79a428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a42c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79a42cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a430: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79a430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a434: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79a434u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a438: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x79a438u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a43c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a440: 0x3e00008  jr          $ra
    ctx->pc = 0x79A440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A440u;
        // 0x79a444: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A448u;
}
} // namespace gh_r600
