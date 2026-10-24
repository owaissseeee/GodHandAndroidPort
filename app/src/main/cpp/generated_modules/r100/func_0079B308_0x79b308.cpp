#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: func_0079B308
// Address: 0x79b308 - 0x79b510
void func_0079B308_0x79b308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B308_0x79b308");
#endif

    switch (ctx->pc) {
        case 0x79b33cu: goto label_79b33c;
        case 0x79b350u: goto label_79b350;
        case 0x79b35cu: goto label_79b35c;
        case 0x79b364u: goto label_79b364;
        case 0x79b388u: goto label_79b388;
        case 0x79b39cu: goto label_79b39c;
        case 0x79b3bcu: goto label_79b3bc;
        case 0x79b3ccu: goto label_79b3cc;
        case 0x79b3d4u: goto label_79b3d4;
        case 0x79b3e4u: goto label_79b3e4;
        case 0x79b3ecu: goto label_79b3ec;
        case 0x79b3fcu: goto label_79b3fc;
        case 0x79b410u: goto label_79b410;
        case 0x79b420u: goto label_79b420;
        case 0x79b444u: goto label_79b444;
        case 0x79b45cu: goto label_79b45c;
        case 0x79b474u: goto label_79b474;
        case 0x79b480u: goto label_79b480;
        case 0x79b488u: goto label_79b488;
        case 0x79b4a0u: goto label_79b4a0;
        case 0x79b4b0u: goto label_79b4b0;
        case 0x79b4b8u: goto label_79b4b8;
        case 0x79b4d0u: goto label_79b4d0;
        case 0x79b4d8u: goto label_79b4d8;
        case 0x79b4e0u: goto label_79b4e0;
        case 0x79b4ecu: goto label_79b4ec;
        default: break;
    }

    ctx->pc = 0x79b308u;

    // 0x79b308: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x79b308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x79b30c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b310: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x79b310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x79b314: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79b314u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79b318: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x79b318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x79b31c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x79b31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x79b320: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x79b320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x79b324: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x79b324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x79b328: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79b328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79b32c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x79b32cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x79b330: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79b330u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79b334: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B334u;
    SET_GPR_U32(ctx, 31, 0x79B33Cu);
    ctx->pc = 0x79B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B334u;
    // 0x79b338: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B334u, 0x79B33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B33Cu;
label_79b33c:
    // 0x79b33c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x79b33cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b340: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x79b340u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
    // 0x79b344: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79B344u;
    {
        const bool branch_taken_0x79b344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B344u;
        // 0x79b348: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b344) {
            ctx->pc = 0x79B35Cu;
            goto label_79b35c;
        }
    }
    ctx->pc = 0x79B34Cu;
    // 0x79b34c: 0x0  nop
    ctx->pc = 0x79b34cu;
    // NOP
label_79b350:
    // 0x79b350: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b354: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B354u;
    SET_GPR_U32(ctx, 31, 0x79B35Cu);
    ctx->pc = 0x79B358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B354u;
    // 0x79b358: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B354u, 0x79B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B35Cu;
label_79b35c:
    // 0x79b35c: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x79B35Cu;
    SET_GPR_U32(ctx, 31, 0x79B364u);
    ctx->pc = 0x79B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B35Cu;
    // 0x79b360: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79B35Cu, 0x79B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B364u;
label_79b364:
    // 0x79b364: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79b364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79b368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b36c: 0x1602fff8  bne         $s0, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79B36Cu;
    {
        const bool branch_taken_0x79b36c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x79B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B36Cu;
        // 0x79b370: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b36c) {
            ctx->pc = 0x79B350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b350;
        }
    }
    ctx->pc = 0x79B374u;
    // 0x79b374: 0x2674ea60  addiu       $s4, $s3, -0x15A0
    ctx->pc = 0x79b374u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
    // 0x79b378: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x79b378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79b37c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79b37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b380: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79B380u;
    SET_GPR_U32(ctx, 31, 0x79B388u);
    ctx->pc = 0x79B384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B380u;
    // 0x79b384: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79B380u, 0x79B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B388u;
label_79b388:
    // 0x79b388: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B388u;
    {
        const bool branch_taken_0x79b388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x79B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B388u;
        // 0x79b38c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b388) {
            ctx->pc = 0x79B3A4u;
            goto label_79b3a4;
        }
    }
    ctx->pc = 0x79B390u;
    // 0x79b390: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x79b390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x79b394: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79B394u;
    SET_GPR_U32(ctx, 31, 0x79B39Cu);
    ctx->pc = 0x79B398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B394u;
    // 0x79b398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79B394u, 0x79B39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B39Cu;
label_79b39c:
    // 0x79b39c: 0x1450ffec  bne         $v0, $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x79B39Cu;
    {
        const bool branch_taken_0x79b39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x79B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B39Cu;
        // 0x79b3a0: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b39c) {
            ctx->pc = 0x79B350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b350;
        }
    }
    ctx->pc = 0x79B3A4u;
label_79b3a4:
    // 0x79b3a4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x79b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79b3a8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x79b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79b3ac: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79b3acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b3b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b3b4: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79B3B4u;
    SET_GPR_U32(ctx, 31, 0x79B3BCu);
    ctx->pc = 0x79B3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3B4u;
    // 0x79b3b8: 0xa3a30010  sb          $v1, 0x10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79B3B4u, 0x79B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3BCu;
label_79b3bc:
    // 0x79b3bc: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B3BCu;
    {
        const bool branch_taken_0x79b3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x79B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3BCu;
        // 0x79b3c0: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3bc) {
            ctx->pc = 0x79B3CCu;
            goto label_79b3cc;
        }
    }
    ctx->pc = 0x79B3C4u;
    // 0x79b3c4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B3C4u;
    SET_GPR_U32(ctx, 31, 0x79B3CCu);
    ctx->pc = 0x79B3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3C4u;
    // 0x79b3c8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B3C4u, 0x79B3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3CCu;
label_79b3cc:
    // 0x79b3cc: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79B3CCu;
    SET_GPR_U32(ctx, 31, 0x79B3D4u);
    ctx->pc = 0x79B3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3CCu;
    // 0x79b3d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79B3CCu, 0x79B3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3D4u;
label_79b3d4:
    // 0x79b3d4: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B3D4u;
    {
        const bool branch_taken_0x79b3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x79B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3D4u;
        // 0x79b3d8: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3d4) {
            ctx->pc = 0x79B3E4u;
            goto label_79b3e4;
        }
    }
    ctx->pc = 0x79B3DCu;
    // 0x79b3dc: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B3DCu;
    SET_GPR_U32(ctx, 31, 0x79B3E4u);
    ctx->pc = 0x79B3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3DCu;
    // 0x79b3e0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B3DCu, 0x79B3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3E4u;
label_79b3e4:
    // 0x79b3e4: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x79B3E4u;
    SET_GPR_U32(ctx, 31, 0x79B3ECu);
    ctx->pc = 0x79B3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3E4u;
    // 0x79b3e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x79B3E4u, 0x79B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3ECu;
label_79b3ec:
    // 0x79b3ec: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x79B3ECu;
    {
        const bool branch_taken_0x79b3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3ECu;
        // 0x79b3f0: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3ec) {
            ctx->pc = 0x79B4E4u;
            goto label_79b4e4;
        }
    }
    ctx->pc = 0x79B3F4u;
    // 0x79b3f4: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x79B3F4u;
    SET_GPR_U32(ctx, 31, 0x79B3FCu);
    ctx->pc = 0x79B3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3F4u;
    // 0x79b3f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x79B3F4u, 0x79B3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3FCu;
label_79b3fc:
    // 0x79b3fc: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x79B3FCu;
    {
        const bool branch_taken_0x79b3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3FCu;
        // 0x79b400: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3fc) {
            ctx->pc = 0x79B4E4u;
            goto label_79b4e4;
        }
    }
    ctx->pc = 0x79B404u;
    // 0x79b404: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79b404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b408: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79B408u;
    SET_GPR_U32(ctx, 31, 0x79B410u);
    ctx->pc = 0x79B40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B408u;
    // 0x79b40c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79B408u, 0x79B410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B410u;
label_79b410:
    // 0x79b410: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79b410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b414: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79b414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79b418: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79B418u;
    SET_GPR_U32(ctx, 31, 0x79B420u);
    ctx->pc = 0x79B41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B418u;
    // 0x79b41c: 0x24a5c438  addiu       $a1, $a1, -0x3BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79B418u, 0x79B420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B420u;
label_79b420:
    // 0x79b420: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79b420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79b424: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79b424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b428: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79b428u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b42c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79b42cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b430: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79b430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79b434: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79b434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b438: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x79b438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x79b43c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79B43Cu;
    SET_GPR_U32(ctx, 31, 0x79B444u);
    ctx->pc = 0x79B440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B43Cu;
    // 0x79b440: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79B43Cu, 0x79B444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B444u;
label_79b444:
    // 0x79b444: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x79b444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79b448: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x79b448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b44c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79b44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b450: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x79b450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b454: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x79B454u;
    SET_GPR_U32(ctx, 31, 0x79B45Cu);
    ctx->pc = 0x79B458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B454u;
    // 0x79b458: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79B454u, 0x79B45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B45Cu;
label_79b45c:
    // 0x79b45c: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79b45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79b460: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79b460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79b464: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79b464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79b468: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b46c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79B46Cu;
    SET_GPR_U32(ctx, 31, 0x79B474u);
    ctx->pc = 0x79B470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B46Cu;
    // 0x79b470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79B46Cu, 0x79B474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B474u;
label_79b474:
    // 0x79b474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b478: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79B478u;
    SET_GPR_U32(ctx, 31, 0x79B480u);
    ctx->pc = 0x79B47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B478u;
    // 0x79b47c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79B478u, 0x79B480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B480u;
label_79b480:
    // 0x79b480: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79B480u;
    SET_GPR_U32(ctx, 31, 0x79B488u);
    ctx->pc = 0x79B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B480u;
    // 0x79b484: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79B480u, 0x79B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B488u;
label_79b488:
    // 0x79b488: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79b488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b48c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b48cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b490: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79b490u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79b494: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79b494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b498: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B498u;
    SET_GPR_U32(ctx, 31, 0x79B4A0u);
    ctx->pc = 0x79B49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B498u;
    // 0x79b49c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B498u, 0x79B4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4A0u;
label_79b4a0:
    // 0x79b4a0: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b4a4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x79b4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79b4a8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B4A8u;
    SET_GPR_U32(ctx, 31, 0x79B4B0u);
    ctx->pc = 0x79B4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4A8u;
    // 0x79b4ac: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B4A8u, 0x79B4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4B0u;
label_79b4b0:
    // 0x79b4b0: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79B4B0u;
    SET_GPR_U32(ctx, 31, 0x79B4B8u);
    ctx->pc = 0x79B4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4B0u;
    // 0x79b4b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79B4B0u, 0x79B4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4B8u;
label_79b4b8:
    // 0x79b4b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b4bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79b4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b4c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79b4c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79b4c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79b4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b4c8: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79B4C8u;
    SET_GPR_U32(ctx, 31, 0x79B4D0u);
    ctx->pc = 0x79B4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4C8u;
    // 0x79b4cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79B4C8u, 0x79B4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4D0u;
label_79b4d0:
    // 0x79b4d0: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79B4D0u;
    SET_GPR_U32(ctx, 31, 0x79B4D8u);
    ctx->pc = 0x79B4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4D0u;
    // 0x79b4d4: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79B4D0u, 0x79B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4D8u;
label_79b4d8:
    // 0x79b4d8: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79B4D8u;
    SET_GPR_U32(ctx, 31, 0x79B4E0u);
    ctx->pc = 0x79B4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4D8u;
    // 0x79b4dc: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79B4D8u, 0x79B4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4E0u;
label_79b4e0:
    // 0x79b4e0: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79b4e4:
    // 0x79b4e4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B4E4u;
    SET_GPR_U32(ctx, 31, 0x79B4ECu);
    ctx->pc = 0x79B4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4E4u;
    // 0x79b4e8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B4E4u, 0x79B4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4ECu;
label_79b4ec:
    // 0x79b4ec: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x79b4ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79b4f0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x79b4f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79b4f4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x79b4f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79b4f8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x79b4f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b4fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x79b4fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b500: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79b500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b504: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x79b504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79b508: 0x3e00008  jr          $ra
    ctx->pc = 0x79B508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B508u;
        // 0x79b50c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B510u;
}
} // namespace gh_r100
