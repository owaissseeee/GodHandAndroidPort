#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r404_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r404
{
// Function: func_0079A260
// Address: 0x79a260 - 0x79a3d8
void func_0079A260_0x79a260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A260_0x79a260");
#endif

    switch (ctx->pc) {
        case 0x79a290u: goto label_79a290;
        case 0x79a2acu: goto label_79a2ac;
        case 0x79a2d4u: goto label_79a2d4;
        case 0x79a2e0u: goto label_79a2e0;
        case 0x79a2f0u: goto label_79a2f0;
        case 0x79a314u: goto label_79a314;
        case 0x79a324u: goto label_79a324;
        case 0x79a348u: goto label_79a348;
        case 0x79a378u: goto label_79a378;
        case 0x79a3a0u: goto label_79a3a0;
        case 0x79a3a8u: goto label_79a3a8;
        case 0x79a3b0u: goto label_79a3b0;
        case 0x79a3b8u: goto label_79a3b8;
        case 0x79a3c4u: goto label_79a3c4;
        default: break;
    }

    ctx->pc = 0x79a260u;

    // 0x79a260: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a264: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a264u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79a268: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79a268u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a26c: 0x24053006  addiu       $a1, $zero, 0x3006
    ctx->pc = 0x79a26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12294));
    // 0x79a270: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79a270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79a274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a278: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a27c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a280: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a284: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a284u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a288: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A288u;
    SET_GPR_U32(ctx, 31, 0x79A290u);
    ctx->pc = 0x79A28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A288u;
    // 0x79a28c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A288u, 0x79A290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A290u;
label_79a290:
    // 0x79a290: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a294: 0x8c4323a4  lw          $v1, 0x23A4($v0)
    ctx->pc = 0x79a294u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x79a298: 0x84640bec  lh          $a0, 0xBEC($v1)
    ctx->pc = 0x79a298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 3052)));
    // 0x79a29c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A29Cu;
    {
        const bool branch_taken_0x79a29c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A29Cu;
        // 0x79a2a0: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a29c) {
            ctx->pc = 0x79A2ACu;
            goto label_79a2ac;
        }
    }
    ctx->pc = 0x79A2A4u;
    // 0x79a2a4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A2A4u;
    SET_GPR_U32(ctx, 31, 0x79A2ACu);
    ctx->pc = 0x79A2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2A4u;
    // 0x79a2a8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A2A4u, 0x79A2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2ACu;
label_79a2ac:
    // 0x79a2ac: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x79a2b0: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x79a2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x79a2b4: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79a2b8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a2bc: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79a2c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79a2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a2c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a2c8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79a2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79a2cc: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79A2CCu;
    SET_GPR_U32(ctx, 31, 0x79A2D4u);
    ctx->pc = 0x79A2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2CCu;
    // 0x79a2d0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79A2CCu, 0x79A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2D4u;
label_79a2d4:
    // 0x79a2d4: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a2d8: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79A2D8u;
    SET_GPR_U32(ctx, 31, 0x79A2E0u);
    ctx->pc = 0x79A2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2D8u;
    // 0x79a2dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A2D8u, 0x79A2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2E0u;
label_79a2e0:
    // 0x79a2e0: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a2e4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a2e8: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79A2E8u;
    SET_GPR_U32(ctx, 31, 0x79A2F0u);
    ctx->pc = 0x79A2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2E8u;
    // 0x79a2ec: 0x24a5ac00  addiu       $a1, $a1, -0x5400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A2E8u, 0x79A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2F0u;
label_79a2f0:
    // 0x79a2f0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a2f4: 0x240600b8  addiu       $a2, $zero, 0xB8
    ctx->pc = 0x79a2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x79a2f8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a2fc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a2fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a300: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a300u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a304: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a308: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a30c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A30Cu;
    SET_GPR_U32(ctx, 31, 0x79A314u);
    ctx->pc = 0x79A310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A30Cu;
    // 0x79a310: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A30Cu, 0x79A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A314u;
label_79a314:
    // 0x79a314: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x79a314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a318: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x79a318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79a31c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A31Cu;
    SET_GPR_U32(ctx, 31, 0x79A324u);
    ctx->pc = 0x79A320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A31Cu;
    // 0x79a320: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A31Cu, 0x79A324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A324u;
label_79a324:
    // 0x79a324: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a328: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79a328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79a32c: 0x8064aba0  lb          $a0, -0x5460($v1)
    ctx->pc = 0x79a32cu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79ABA0u));
    // 0x79a330: 0x2466aba0  addiu       $a2, $v1, -0x5460
    ctx->pc = 0x79a330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945696));
    // 0x79a334: 0x24484c38  addiu       $t0, $v0, 0x4C38
    ctx->pc = 0x79a334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19512));
    // 0x79a338: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a33c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79A33Cu;
    {
        const bool branch_taken_0x79a33c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A33Cu;
        // 0x79a340: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a33c) {
            ctx->pc = 0x79A370u;
            goto label_79a370;
        }
    }
    ctx->pc = 0x79A344u;
    // 0x79a344: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a344u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a348:
    // 0x79a348: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a348u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a34c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a34cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a350: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a354: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a358: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a358u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a35c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A35Cu;
    {
        const bool branch_taken_0x79a35c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A35Cu;
        // 0x79a360: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a35c) {
            ctx->pc = 0x79A370u;
            goto label_79a370;
        }
    }
    ctx->pc = 0x79A364u;
    // 0x79a364: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a364u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a368: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A368u;
    {
        const bool branch_taken_0x79a368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a368) {
            ctx->pc = 0x79A36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A368u;
            // 0x79a36c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a348;
        }
    }
    ctx->pc = 0x79A370u;
label_79a370:
    // 0x79a370: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A370u;
    SET_GPR_U32(ctx, 31, 0x79A378u);
    ctx->pc = 0x79A374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A370u;
    // 0x79a374: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A370u, 0x79A378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A378u;
label_79a378:
    // 0x79a378: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79a378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a37c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A37Cu;
    {
        const bool branch_taken_0x79a37c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a37c) {
            ctx->pc = 0x79A398u;
            goto label_79a398;
        }
    }
    ctx->pc = 0x79A384u;
    // 0x79a384: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x79a384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x79a388: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79a388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79a38c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x79a38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x79a390: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79a390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a394: 0xac830250  sw          $v1, 0x250($a0)
    ctx->pc = 0x79a394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 3));
label_79a398:
    // 0x79a398: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79A398u;
    SET_GPR_U32(ctx, 31, 0x79A3A0u);
    ctx->pc = 0x79A39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A398u;
    // 0x79a39c: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79A398u, 0x79A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3A0u;
label_79a3a0:
    // 0x79a3a0: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A3A0u;
    SET_GPR_U32(ctx, 31, 0x79A3A8u);
    ctx->pc = 0x79A3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3A0u;
    // 0x79a3a4: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A3A0u, 0x79A3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3A8u;
label_79a3a8:
    // 0x79a3a8: 0xc1e6808  jal         func_79A020
    ctx->pc = 0x79A3A8u;
    SET_GPR_U32(ctx, 31, 0x79A3B0u);
    ctx->pc = 0x79A020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A020u, 0x79A3A8u, 0x79A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3B0u;
label_79a3b0:
    // 0x79a3b0: 0xc1e69b2  jal         func_79A6C8
    ctx->pc = 0x79A3B0u;
    SET_GPR_U32(ctx, 31, 0x79A3B8u);
    ctx->pc = 0x79A6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A6C8u, 0x79A3B0u, 0x79A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3B8u;
label_79a3b8:
    // 0x79a3b8: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a3bc: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A3BCu;
    SET_GPR_U32(ctx, 31, 0x79A3C4u);
    ctx->pc = 0x79A3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3BCu;
    // 0x79a3c0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A3BCu, 0x79A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3C4u;
label_79a3c4:
    // 0x79a3c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a3c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a3c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x79A3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3CCu;
        // 0x79a3d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A3D4u;
    // 0x79a3d4: 0x0  nop
    ctx->pc = 0x79a3d4u;
    // NOP
    ctx->pc = 0x79a3d8u;
}
} // namespace gh_r404
