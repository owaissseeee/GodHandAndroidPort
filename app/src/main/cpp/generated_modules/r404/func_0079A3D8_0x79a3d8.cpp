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
// Function: func_0079A3D8
// Address: 0x79a3d8 - 0x79a550
void func_0079A3D8_0x79a3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A3D8_0x79a3d8");
#endif

    switch (ctx->pc) {
        case 0x79a408u: goto label_79a408;
        case 0x79a424u: goto label_79a424;
        case 0x79a44cu: goto label_79a44c;
        case 0x79a458u: goto label_79a458;
        case 0x79a468u: goto label_79a468;
        case 0x79a48cu: goto label_79a48c;
        case 0x79a49cu: goto label_79a49c;
        case 0x79a4c0u: goto label_79a4c0;
        case 0x79a4f0u: goto label_79a4f0;
        case 0x79a518u: goto label_79a518;
        case 0x79a520u: goto label_79a520;
        case 0x79a528u: goto label_79a528;
        case 0x79a530u: goto label_79a530;
        case 0x79a53cu: goto label_79a53c;
        default: break;
    }

    ctx->pc = 0x79a3d8u;

    // 0x79a3d8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a3dc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a3dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79a3e0: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a3e4: 0x24053006  addiu       $a1, $zero, 0x3006
    ctx->pc = 0x79a3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12294));
    // 0x79a3e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79a3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79a3ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a3ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a3f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a3f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a3fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a400: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A400u;
    SET_GPR_U32(ctx, 31, 0x79A408u);
    ctx->pc = 0x79A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A400u;
    // 0x79a404: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A400u, 0x79A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A408u;
label_79a408:
    // 0x79a408: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a40c: 0x8c4323a4  lw          $v1, 0x23A4($v0)
    ctx->pc = 0x79a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x79a410: 0x84640bec  lh          $a0, 0xBEC($v1)
    ctx->pc = 0x79a410u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 3052)));
    // 0x79a414: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A414u;
    {
        const bool branch_taken_0x79a414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A414u;
        // 0x79a418: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a414) {
            ctx->pc = 0x79A424u;
            goto label_79a424;
        }
    }
    ctx->pc = 0x79A41Cu;
    // 0x79a41c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A41Cu;
    SET_GPR_U32(ctx, 31, 0x79A424u);
    ctx->pc = 0x79A420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A41Cu;
    // 0x79a420: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A41Cu, 0x79A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A424u;
label_79a424:
    // 0x79a424: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79a424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x79a428: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x79a428u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x79a42c: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79a42cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79a430: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a434: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79a434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79a438: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x79a438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a43c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a440: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79a440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79a444: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79A444u;
    SET_GPR_U32(ctx, 31, 0x79A44Cu);
    ctx->pc = 0x79A448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A444u;
    // 0x79a448: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79A444u, 0x79A44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A44Cu;
label_79a44c:
    // 0x79a44c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a450: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79A450u;
    SET_GPR_U32(ctx, 31, 0x79A458u);
    ctx->pc = 0x79A454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A450u;
    // 0x79a454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A450u, 0x79A458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A458u;
label_79a458:
    // 0x79a458: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a45c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a45cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a460: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79A460u;
    SET_GPR_U32(ctx, 31, 0x79A468u);
    ctx->pc = 0x79A464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A460u;
    // 0x79a464: 0x24a5ac00  addiu       $a1, $a1, -0x5400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A460u, 0x79A468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A468u;
label_79a468:
    // 0x79a468: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a46c: 0x240600b8  addiu       $a2, $zero, 0xB8
    ctx->pc = 0x79a46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x79a470: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a474: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a478: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a478u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a47c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a480: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a484: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A484u;
    SET_GPR_U32(ctx, 31, 0x79A48Cu);
    ctx->pc = 0x79A488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A484u;
    // 0x79a488: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A484u, 0x79A48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A48Cu;
label_79a48c:
    // 0x79a48c: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x79a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a490: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x79a490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79a494: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A494u;
    SET_GPR_U32(ctx, 31, 0x79A49Cu);
    ctx->pc = 0x79A498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A494u;
    // 0x79a498: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A494u, 0x79A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A49Cu;
label_79a49c:
    // 0x79a49c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a4a0: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79a4a4: 0x8064aba8  lb          $a0, -0x5458($v1)
    ctx->pc = 0x79a4a4u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79ABA8u));
    // 0x79a4a8: 0x2466aba8  addiu       $a2, $v1, -0x5458
    ctx->pc = 0x79a4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945704));
    // 0x79a4ac: 0x24484c38  addiu       $t0, $v0, 0x4C38
    ctx->pc = 0x79a4acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19512));
    // 0x79a4b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4b4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79A4B4u;
    {
        const bool branch_taken_0x79a4b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4B4u;
        // 0x79a4b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4b4) {
            ctx->pc = 0x79A4E8u;
            goto label_79a4e8;
        }
    }
    ctx->pc = 0x79A4BCu;
    // 0x79a4bc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a4bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a4c0:
    // 0x79a4c0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a4c4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a4c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a4cc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a4d0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a4d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a4d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A4D4u;
    {
        const bool branch_taken_0x79a4d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4D4u;
        // 0x79a4d8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4d4) {
            ctx->pc = 0x79A4E8u;
            goto label_79a4e8;
        }
    }
    ctx->pc = 0x79A4DCu;
    // 0x79a4dc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a4dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a4e0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A4E0u;
    {
        const bool branch_taken_0x79a4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a4e0) {
            ctx->pc = 0x79A4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A4E0u;
            // 0x79a4e4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a4c0;
        }
    }
    ctx->pc = 0x79A4E8u;
label_79a4e8:
    // 0x79a4e8: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x79A4E8u;
    SET_GPR_U32(ctx, 31, 0x79A4F0u);
    ctx->pc = 0x79A4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4E8u;
    // 0x79a4ec: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x79A4E8u, 0x79A4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4F0u;
label_79a4f0:
    // 0x79a4f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79a4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4f4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A4F4u;
    {
        const bool branch_taken_0x79a4f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a4f4) {
            ctx->pc = 0x79A510u;
            goto label_79a510;
        }
    }
    ctx->pc = 0x79A4FCu;
    // 0x79a4fc: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x79a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x79a500: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79a500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79a504: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x79a504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x79a508: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79a508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79a50c: 0xac830250  sw          $v1, 0x250($a0)
    ctx->pc = 0x79a50cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 3));
label_79a510:
    // 0x79a510: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79A510u;
    SET_GPR_U32(ctx, 31, 0x79A518u);
    ctx->pc = 0x79A514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A510u;
    // 0x79a514: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79A510u, 0x79A518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A518u;
label_79a518:
    // 0x79a518: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A518u;
    SET_GPR_U32(ctx, 31, 0x79A520u);
    ctx->pc = 0x79A51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A518u;
    // 0x79a51c: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A518u, 0x79A520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A520u;
label_79a520:
    // 0x79a520: 0xc1e6808  jal         func_79A020
    ctx->pc = 0x79A520u;
    SET_GPR_U32(ctx, 31, 0x79A528u);
    ctx->pc = 0x79A020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A020u, 0x79A520u, 0x79A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A528u;
label_79a528:
    // 0x79a528: 0xc1e69b2  jal         func_79A6C8
    ctx->pc = 0x79A528u;
    SET_GPR_U32(ctx, 31, 0x79A530u);
    ctx->pc = 0x79A6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A6C8u, 0x79A528u, 0x79A530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A530u;
label_79a530:
    // 0x79a530: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a534: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A534u;
    SET_GPR_U32(ctx, 31, 0x79A53Cu);
    ctx->pc = 0x79A538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A534u;
    // 0x79a538: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A534u, 0x79A53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A53Cu;
label_79a53c:
    // 0x79a53c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a53cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a544: 0x3e00008  jr          $ra
    ctx->pc = 0x79A544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A544u;
        // 0x79a548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A54Cu;
    // 0x79a54c: 0x0  nop
    ctx->pc = 0x79a54cu;
    // NOP
    ctx->pc = 0x79a550u;
}
} // namespace gh_r404
