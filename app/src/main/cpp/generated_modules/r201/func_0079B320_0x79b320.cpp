#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r201_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r201
{
// Function: func_0079B320
// Address: 0x79b320 - 0x79b4b0
void func_0079B320_0x79b320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B320_0x79b320");
#endif

    switch (ctx->pc) {
        case 0x79b358u: goto label_79b358;
        case 0x79b368u: goto label_79b368;
        case 0x79b370u: goto label_79b370;
        case 0x79b380u: goto label_79b380;
        case 0x79b38cu: goto label_79b38c;
        case 0x79b3acu: goto label_79b3ac;
        case 0x79b3c4u: goto label_79b3c4;
        case 0x79b3d8u: goto label_79b3d8;
        case 0x79b3e8u: goto label_79b3e8;
        case 0x79b400u: goto label_79b400;
        case 0x79b414u: goto label_79b414;
        case 0x79b424u: goto label_79b424;
        case 0x79b42cu: goto label_79b42c;
        case 0x79b434u: goto label_79b434;
        case 0x79b484u: goto label_79b484;
        case 0x79b490u: goto label_79b490;
        default: break;
    }

    ctx->pc = 0x79b320u;

    // 0x79b320: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x79b320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x79b324: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x79b324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x79b328: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x79b328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x79b32c: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79b32cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79b330: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x79b330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x79b334: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79b334u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79b338: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x79b338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x79b33c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x79b33cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b340: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x79b340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x79b344: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x79b344u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
    // 0x79b348: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79b348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79b34c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79B34Cu;
    {
        const bool branch_taken_0x79b34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B34Cu;
        // 0x79b350: 0x3c140060  lui         $s4, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b34c) {
            ctx->pc = 0x79B368u;
            goto label_79b368;
        }
    }
    ctx->pc = 0x79B354u;
    // 0x79b354: 0x0  nop
    ctx->pc = 0x79b354u;
    // NOP
label_79b358:
    // 0x79b358: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b35c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b360: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B360u;
    SET_GPR_U32(ctx, 31, 0x79B368u);
    ctx->pc = 0x79B364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B360u;
    // 0x79b364: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B360u, 0x79B368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B368u;
label_79b368:
    // 0x79b368: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x79B368u;
    SET_GPR_U32(ctx, 31, 0x79B370u);
    ctx->pc = 0x79B36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B368u;
    // 0x79b36c: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79B368u, 0x79B370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B370u;
label_79b370:
    // 0x79b370: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79B370u;
    {
        const bool branch_taken_0x79b370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B370u;
        // 0x79b374: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b370) {
            ctx->pc = 0x79B358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b358;
        }
    }
    ctx->pc = 0x79B378u;
    // 0x79b378: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79B378u;
    SET_GPR_U32(ctx, 31, 0x79B380u);
    ctx->pc = 0x79B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B378u;
    // 0x79b37c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79B378u, 0x79B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B380u;
label_79b380:
    // 0x79b380: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79b380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b384: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79B384u;
    SET_GPR_U32(ctx, 31, 0x79B38Cu);
    ctx->pc = 0x79B388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B384u;
    // 0x79b388: 0x2665bcd8  addiu       $a1, $s3, -0x4328 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79B384u, 0x79B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B38Cu;
label_79b38c:
    // 0x79b38c: 0x2684ee00  addiu       $a0, $s4, -0x1200
    ctx->pc = 0x79b38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
    // 0x79b390: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79b390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b394: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x79b394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x79b398: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79b398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b39c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79b39cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b3a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79b3a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b3a4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79B3A4u;
    SET_GPR_U32(ctx, 31, 0x79B3ACu);
    ctx->pc = 0x79B3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3A4u;
    // 0x79b3a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79B3A4u, 0x79B3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3ACu;
label_79b3ac:
    // 0x79b3ac: 0x8e03bd80  lw          $v1, -0x4280($s0)
    ctx->pc = 0x79b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
    // 0x79b3b0: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x79b3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x79b3b4: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x79B3B4u;
    {
        const bool branch_taken_0x79b3b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3B4u;
        // 0x79b3b8: 0x8e02bd80  lw          $v0, -0x4280($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3b4) {
            ctx->pc = 0x79B3ECu;
            goto label_79b3ec;
        }
    }
    ctx->pc = 0x79B3BCu;
    // 0x79b3bc: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79B3BCu;
    SET_GPR_U32(ctx, 31, 0x79B3C4u);
    ctx->pc = 0x79B3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3BCu;
    // 0x79b3c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79B3BCu, 0x79B3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3C4u;
label_79b3c4:
    // 0x79b3c4: 0x8e02bd80  lw          $v0, -0x4280($s0)
    ctx->pc = 0x79b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
    // 0x79b3c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b3cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b3ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b3d0: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x79B3D0u;
    SET_GPR_U32(ctx, 31, 0x79B3D8u);
    ctx->pc = 0x79B3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3D0u;
    // 0x79b3d4: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x79B3D0u, 0x79B3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3D8u;
label_79b3d8:
    // 0x79b3d8: 0x8e02bd80  lw          $v0, -0x4280($s0)
    ctx->pc = 0x79b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
    // 0x79b3dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b3e0: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79B3E0u;
    SET_GPR_U32(ctx, 31, 0x79B3E8u);
    ctx->pc = 0x79B3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3E0u;
    // 0x79b3e4: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79B3E0u, 0x79B3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3E8u;
label_79b3e8:
    // 0x79b3e8: 0x8e02bd80  lw          $v0, -0x4280($s0)
    ctx->pc = 0x79b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
label_79b3ec:
    // 0x79b3ec: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x79b3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x79b3f0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79B3F0u;
    {
        const bool branch_taken_0x79b3f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b3f0) {
            ctx->pc = 0x79B424u;
            goto label_79b424;
        }
    }
    ctx->pc = 0x79B3F8u;
    // 0x79b3f8: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79B3F8u;
    SET_GPR_U32(ctx, 31, 0x79B400u);
    ctx->pc = 0x79B3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3F8u;
    // 0x79b3fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79B3F8u, 0x79B400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B400u;
label_79b400:
    // 0x79b400: 0x8e02bd80  lw          $v0, -0x4280($s0)
    ctx->pc = 0x79b400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
    // 0x79b404: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b408: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b40c: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x79B40Cu;
    SET_GPR_U32(ctx, 31, 0x79B414u);
    ctx->pc = 0x79B410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B40Cu;
    // 0x79b410: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x79B40Cu, 0x79B414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B414u;
label_79b414:
    // 0x79b414: 0x8e02bd80  lw          $v0, -0x4280($s0)
    ctx->pc = 0x79b414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950272)));
    // 0x79b418: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b41c: 0xc06f45e  jal         func_1BD178
    ctx->pc = 0x79B41Cu;
    SET_GPR_U32(ctx, 31, 0x79B424u);
    ctx->pc = 0x79B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B41Cu;
    // 0x79b420: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD178u, 0x79B41Cu, 0x79B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B424u;
label_79b424:
    // 0x79b424: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79B424u;
    SET_GPR_U32(ctx, 31, 0x79B42Cu);
    ctx->pc = 0x79B428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B424u;
    // 0x79b428: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79B424u, 0x79B42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B42Cu;
label_79b42c:
    // 0x79b42c: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79B42Cu;
    SET_GPR_U32(ctx, 31, 0x79B434u);
    ctx->pc = 0x79B430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B42Cu;
    // 0x79b430: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79B42Cu, 0x79B434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B434u;
label_79b434:
    // 0x79b434: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79b438: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79b438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79b43c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79b43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b440: 0x3c01c1b4  lui         $at, 0xC1B4
    ctx->pc = 0x79b440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49588 << 16));
    // 0x79b444: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79b448: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b44c: 0x3c014214  lui         $at, 0x4214
    ctx->pc = 0x79b44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16916 << 16));
    // 0x79b450: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b454: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x79b454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x79b458: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79b458u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x79b45c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b45cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b460: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x79b460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79b464: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x79b464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x79b468: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x79b468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x79b46c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x79b46cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x79b470: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x79b470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x79b474: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x79b474u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x79b478: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x79b478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x79b47c: 0xc1e6e3e  jal         func_79B8F8
    ctx->pc = 0x79B47Cu;
    SET_GPR_U32(ctx, 31, 0x79B484u);
    ctx->pc = 0x79B480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B47Cu;
    // 0x79b480: 0xe643000c  swc1        $f3, 0xC($s2) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B8F8u, 0x79B47Cu, 0x79B484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B484u;
label_79b484:
    // 0x79b484: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b488: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B488u;
    SET_GPR_U32(ctx, 31, 0x79B490u);
    ctx->pc = 0x79B48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B488u;
    // 0x79b48c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B488u, 0x79B490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B490u;
label_79b490:
    // 0x79b490: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x79b490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79b494: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x79b494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79b498: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x79b498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b49c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x79b49cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b4a0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x79b4a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b4a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79b4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x79B4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4A8u;
        // 0x79b4ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B4B0u;
}
} // namespace gh_r201
