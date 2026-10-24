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
// Function: func_0079A2F0
// Address: 0x79a2f0 - 0x79a488
void func_0079A2F0_0x79a2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A2F0_0x79a2f0");
#endif

    switch (ctx->pc) {
        case 0x79a340u: goto label_79a340;
        case 0x79a374u: goto label_79a374;
        case 0x79a388u: goto label_79a388;
        case 0x79a3a0u: goto label_79a3a0;
        case 0x79a3d0u: goto label_79a3d0;
        case 0x79a3d8u: goto label_79a3d8;
        case 0x79a3ecu: goto label_79a3ec;
        case 0x79a418u: goto label_79a418;
        case 0x79a448u: goto label_79a448;
        case 0x79a460u: goto label_79a460;
        default: break;
    }

    ctx->pc = 0x79a2f0u;

    // 0x79a2f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79a2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79a2f4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a2f8: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a2fc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79a2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79a300: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79a300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79a304: 0x2446aff8  addiu       $a2, $v0, -0x5008
    ctx->pc = 0x79a304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946808));
    // 0x79a308: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x79a308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x79a30c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x79a30cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a310: 0x8044aff8  lb          $a0, -0x5008($v0)
    ctx->pc = 0x79a310u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79AFF8u));
    // 0x79a314: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x79a314u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a318: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79a318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79a31c: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79a31cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79a320: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79a320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79a324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a328: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79a328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79a32c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a32cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a334: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79A334u;
    {
        const bool branch_taken_0x79a334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A334u;
        // 0x79a338: 0x3c11003c  lui         $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a334) {
            ctx->pc = 0x79A368u;
            goto label_79a368;
        }
    }
    ctx->pc = 0x79A33Cu;
    // 0x79a33c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a33cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a340:
    // 0x79a340: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a340u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a344: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a348: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a34c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a350: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a350u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a354: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A354u;
    {
        const bool branch_taken_0x79a354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A354u;
        // 0x79a358: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a354) {
            ctx->pc = 0x79A368u;
            goto label_79a368;
        }
    }
    ctx->pc = 0x79A35Cu;
    // 0x79a35c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a35cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a360: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A360u;
    {
        const bool branch_taken_0x79a360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a360) {
            ctx->pc = 0x79A364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A360u;
            // 0x79a364: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a340;
        }
    }
    ctx->pc = 0x79A368u;
label_79a368:
    // 0x79a368: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x79a368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a36c: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A36Cu;
    SET_GPR_U32(ctx, 31, 0x79A374u);
    ctx->pc = 0x79A370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A36Cu;
    // 0x79a370: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A36Cu, 0x79A374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A374u;
label_79a374:
    // 0x79a374: 0x2613aff8  addiu       $s3, $s0, -0x5008
    ctx->pc = 0x79a374u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946808));
    // 0x79a378: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79a378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79a37c: 0x24524c58  addiu       $s2, $v0, 0x4C58
    ctx->pc = 0x79a37cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79a380: 0x8202aff8  lb          $v0, -0x5008($s0)
    ctx->pc = 0x79a380u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294946808)));
    // 0x79a384: 0x0  nop
    ctx->pc = 0x79a384u;
    // NOP
label_79a388:
    // 0x79a388: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a38c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A38Cu;
    {
        const bool branch_taken_0x79a38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A38Cu;
        // 0x79a390: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a38c) {
            ctx->pc = 0x79A3C8u;
            goto label_79a3c8;
        }
    }
    ctx->pc = 0x79A394u;
    // 0x79a394: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x79a394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a398: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a398u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a39c: 0x0  nop
    ctx->pc = 0x79a39cu;
    // NOP
label_79a3a0:
    // 0x79a3a0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a3a4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a3a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a3ac: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a3b0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a3b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a3b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A3B4u;
    {
        const bool branch_taken_0x79a3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3B4u;
        // 0x79a3b8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3b4) {
            ctx->pc = 0x79A3C8u;
            goto label_79a3c8;
        }
    }
    ctx->pc = 0x79A3BCu;
    // 0x79a3bc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a3bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a3c0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A3C0u;
    {
        const bool branch_taken_0x79a3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a3c0) {
            ctx->pc = 0x79A3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A3C0u;
            // 0x79a3c4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a3a0;
        }
    }
    ctx->pc = 0x79A3C8u;
label_79a3c8:
    // 0x79a3c8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A3C8u;
    SET_GPR_U32(ctx, 31, 0x79A3D0u);
    ctx->pc = 0x79A3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3C8u;
    // 0x79a3cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A3C8u, 0x79A3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3D0u;
label_79a3d0:
    // 0x79a3d0: 0xc06b69e  jal         func_1ADA78
    ctx->pc = 0x79A3D0u;
    SET_GPR_U32(ctx, 31, 0x79A3D8u);
    ctx->pc = 0x79A3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3D0u;
    // 0x79a3d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADA78u, 0x79A3D0u, 0x79A3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3D8u;
label_79a3d8:
    // 0x79a3d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A3D8u;
    {
        const bool branch_taken_0x79a3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3D8u;
        // 0x79a3dc: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3d8) {
            ctx->pc = 0x79A3F4u;
            goto label_79a3f4;
        }
    }
    ctx->pc = 0x79A3E0u;
    // 0x79a3e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a3e4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A3E4u;
    SET_GPR_U32(ctx, 31, 0x79A3ECu);
    ctx->pc = 0x79A3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3E4u;
    // 0x79a3e8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A3E4u, 0x79A3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3ECu;
label_79a3ec:
    // 0x79a3ec: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x79A3ECu;
    {
        const bool branch_taken_0x79a3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3ECu;
        // 0x79a3f0: 0x8202aff8  lb          $v0, -0x5008($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294946808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3ec) {
            ctx->pc = 0x79A388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a388;
        }
    }
    ctx->pc = 0x79A3F4u;
label_79a3f4:
    // 0x79a3f4: 0x8282aff8  lb          $v0, -0x5008($s4)
    ctx->pc = 0x79a3f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294946808)));
    // 0x79a3f8: 0x26a84c58  addiu       $t0, $s5, 0x4C58
    ctx->pc = 0x79a3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19544));
    // 0x79a3fc: 0x2683aff8  addiu       $v1, $s4, -0x5008
    ctx->pc = 0x79a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946808));
    // 0x79a400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a404: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A404u;
    {
        const bool branch_taken_0x79a404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A404u;
        // 0x79a408: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a404) {
            ctx->pc = 0x79A440u;
            goto label_79a440;
        }
    }
    ctx->pc = 0x79A40Cu;
    // 0x79a40c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a40cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a410: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a410u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a414: 0x0  nop
    ctx->pc = 0x79a414u;
    // NOP
label_79a418:
    // 0x79a418: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a41c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a41cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a420: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a424: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a428: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a428u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a42c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A42Cu;
    {
        const bool branch_taken_0x79a42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A42Cu;
        // 0x79a430: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a42c) {
            ctx->pc = 0x79A440u;
            goto label_79a440;
        }
    }
    ctx->pc = 0x79A434u;
    // 0x79a434: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a434u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a438: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A438u;
    {
        const bool branch_taken_0x79a438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a438) {
            ctx->pc = 0x79A43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A438u;
            // 0x79a43c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a418;
        }
    }
    ctx->pc = 0x79A440u;
label_79a440:
    // 0x79a440: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A440u;
    SET_GPR_U32(ctx, 31, 0x79A448u);
    ctx->pc = 0x79A444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A440u;
    // 0x79a444: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A440u, 0x79A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A448u;
label_79a448:
    // 0x79a448: 0x8c430250  lw          $v1, 0x250($v0)
    ctx->pc = 0x79a448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x79a44c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x79a44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x79a450: 0xac430250  sw          $v1, 0x250($v0)
    ctx->pc = 0x79a450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 592), GPR_U32(ctx, 3));
    // 0x79a454: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79a454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a458: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A458u;
    SET_GPR_U32(ctx, 31, 0x79A460u);
    ctx->pc = 0x79A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A458u;
    // 0x79a45c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A458u, 0x79A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A460u;
label_79a460:
    // 0x79a460: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79a460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a464: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79a464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a468: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79a468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a46c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x79a46cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a470: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x79a470u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a474: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x79a474u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a47c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A47Cu;
        // 0x79a480: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A484u;
    // 0x79a484: 0x0  nop
    ctx->pc = 0x79a484u;
    // NOP
    ctx->pc = 0x79a488u;
}
} // namespace gh_r608
