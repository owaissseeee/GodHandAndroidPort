#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r200_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r200
{
// Function: func_0079A3C0
// Address: 0x79a3c0 - 0x79a4f8
void func_0079A3C0_0x79a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A3C0_0x79a3c0");
#endif

    switch (ctx->pc) {
        case 0x79a3e8u: goto label_79a3e8;
        case 0x79a410u: goto label_79a410;
        case 0x79a41cu: goto label_79a41c;
        case 0x79a448u: goto label_79a448;
        case 0x79a468u: goto label_79a468;
        case 0x79a478u: goto label_79a478;
        case 0x79a484u: goto label_79a484;
        case 0x79a49cu: goto label_79a49c;
        case 0x79a4c4u: goto label_79a4c4;
        case 0x79a4d0u: goto label_79a4d0;
        case 0x79a4dcu: goto label_79a4dc;
        default: break;
    }

    ctx->pc = 0x79a3c0u;

    // 0x79a3c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79a3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79a3c4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x79a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x79a3c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79a3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79a3cc: 0x24539b70  addiu       $s3, $v0, -0x6490
    ctx->pc = 0x79a3ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x79a3d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79a3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79a3d4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79a3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79a3d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79a3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79a3dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a3e0: 0xc07ea80  jal         func_1FAA00
    ctx->pc = 0x79A3E0u;
    SET_GPR_U32(ctx, 31, 0x79A3E8u);
    ctx->pc = 0x79A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3E0u;
    // 0x79a3e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA00u, 0x79A3E0u, 0x79A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3E8u;
label_79a3e8:
    // 0x79a3e8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x79a3e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x79a3ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A3ECu;
    {
        const bool branch_taken_0x79a3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3ECu;
        // 0x79a3f0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3ec) {
            ctx->pc = 0x79A424u;
            goto label_79a424;
        }
    }
    ctx->pc = 0x79A3F4u;
    // 0x79a3f4: 0x24051002  addiu       $a1, $zero, 0x1002
    ctx->pc = 0x79a3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
    // 0x79a3f8: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a3fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a3fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a400: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a404: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a408: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A408u;
    SET_GPR_U32(ctx, 31, 0x79A410u);
    ctx->pc = 0x79A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A408u;
    // 0x79a40c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A408u, 0x79A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A410u;
label_79a410:
    // 0x79a410: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a414: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A414u;
    SET_GPR_U32(ctx, 31, 0x79A41Cu);
    ctx->pc = 0x79A418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A414u;
    // 0x79a418: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A414u, 0x79A41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A41Cu;
label_79a41c:
    // 0x79a41c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x79A41Cu;
    {
        const bool branch_taken_0x79a41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A41Cu;
        // 0x79a420: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a41c) {
            ctx->pc = 0x79A4E0u;
            goto label_79a4e0;
        }
    }
    ctx->pc = 0x79A424u;
label_79a424:
    // 0x79a424: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a428: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a428u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a42c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a430: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a434: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x79a434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79a438: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a43c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a43cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a440: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A440u;
    SET_GPR_U32(ctx, 31, 0x79A448u);
    ctx->pc = 0x79A444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A440u;
    // 0x79a444: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A440u, 0x79A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A448u;
label_79a448:
    // 0x79a448: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x79a448u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x79a44c: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a44cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a450: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a454: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a458: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a458u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a45c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x79a45cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a460: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A460u;
    SET_GPR_U32(ctx, 31, 0x79A468u);
    ctx->pc = 0x79A464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A460u;
    // 0x79a464: 0x24051003  addiu       $a1, $zero, 0x1003 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A460u, 0x79A468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A468u;
label_79a468:
    // 0x79a468: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x79a468u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
    // 0x79a46c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a470: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A470u;
    SET_GPR_U32(ctx, 31, 0x79A478u);
    ctx->pc = 0x79A474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A470u;
    // 0x79a474: 0x26248658  addiu       $a0, $s1, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A470u, 0x79A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A478u;
label_79a478:
    // 0x79a478: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a47c: 0xc07ea80  jal         func_1FAA00
    ctx->pc = 0x79A47Cu;
    SET_GPR_U32(ctx, 31, 0x79A484u);
    ctx->pc = 0x79A480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A47Cu;
    // 0x79a480: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA00u, 0x79A47Cu, 0x79A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A484u;
label_79a484:
    // 0x79a484: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x79a484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a488: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79a488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a48c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a490: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79a494: 0xc07ea6e  jal         func_1FA9B8
    ctx->pc = 0x79A494u;
    SET_GPR_U32(ctx, 31, 0x79A49Cu);
    ctx->pc = 0x79A498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A494u;
    // 0x79a498: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA9B8u, 0x79A494u, 0x79A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A49Cu;
label_79a49c:
    // 0x79a49c: 0x8e238658  lw          $v1, -0x79A8($s1)
    ctx->pc = 0x79a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
    // 0x79a4a0: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x79a4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x79a4a4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79a4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79a4a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a4ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a4b0: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x79a4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x79a4b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4b8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79a4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79a4bc: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x79A4BCu;
    SET_GPR_U32(ctx, 31, 0x79A4C4u);
    ctx->pc = 0x79A4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4BCu;
    // 0x79a4c0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x79A4BCu, 0x79A4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4C4u;
label_79a4c4:
    // 0x79a4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4c8: 0xc0b0a02  jal         func_2C2808
    ctx->pc = 0x79A4C8u;
    SET_GPR_U32(ctx, 31, 0x79A4D0u);
    ctx->pc = 0x79A4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4C8u;
    // 0x79a4cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2808u, 0x79A4C8u, 0x79A4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4D0u;
label_79a4d0:
    // 0x79a4d0: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a4d4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A4D4u;
    SET_GPR_U32(ctx, 31, 0x79A4DCu);
    ctx->pc = 0x79A4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4D4u;
    // 0x79a4d8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A4D4u, 0x79A4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4DCu;
label_79a4dc:
    // 0x79a4dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a4dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79a4e0:
    // 0x79a4e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79a4e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a4e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79a4e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a4e8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79a4e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a4ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4F0u;
        // 0x79a4f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A4F8u;
}
} // namespace gh_r200
