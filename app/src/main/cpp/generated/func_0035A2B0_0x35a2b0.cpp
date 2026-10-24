#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0035A2B0
// Address: 0x35a2b0 - 0x35a4d0
void func_0035A2B0_0x35a2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035A2B0_0x35a2b0");
#endif

    switch (ctx->pc) {
        case 0x35a2d8u: goto label_35a2d8;
        case 0x35a2ecu: goto label_35a2ec;
        case 0x35a2fcu: goto label_35a2fc;
        case 0x35a310u: goto label_35a310;
        case 0x35a320u: goto label_35a320;
        case 0x35a334u: goto label_35a334;
        case 0x35a340u: goto label_35a340;
        case 0x35a34cu: goto label_35a34c;
        case 0x35a35cu: goto label_35a35c;
        case 0x35a368u: goto label_35a368;
        case 0x35a374u: goto label_35a374;
        case 0x35a380u: goto label_35a380;
        case 0x35a390u: goto label_35a390;
        case 0x35a3c0u: goto label_35a3c0;
        case 0x35a3f8u: goto label_35a3f8;
        default: break;
    }

    ctx->pc = 0x35a2b0u;

    // 0x35a2b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a2b4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x35a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x35a2b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a2bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35a2bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a2c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35a2c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a2c4: 0x2445ac58  addiu       $a1, $v0, -0x53A8
    ctx->pc = 0x35a2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945880));
    // 0x35a2c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a2cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35a2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35a2d0: 0xc0d6c36  jal         func_35B0D8
    ctx->pc = 0x35A2D0u;
    SET_GPR_U32(ctx, 31, 0x35A2D8u);
    ctx->pc = 0x35A2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A2D0u;
    // 0x35a2d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B0D8u, 0x35A2D0u, 0x35A2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A2D8u;
label_35a2d8:
    // 0x35a2d8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x35a2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x35a2dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35a2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a2e0: 0x24a5aca0  addiu       $a1, $a1, -0x5360
    ctx->pc = 0x35a2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945952));
    // 0x35a2e4: 0xc0d6c36  jal         func_35B0D8
    ctx->pc = 0x35A2E4u;
    SET_GPR_U32(ctx, 31, 0x35A2ECu);
    ctx->pc = 0x35A2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A2E4u;
    // 0x35a2e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B0D8u, 0x35A2E4u, 0x35A2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A2ECu;
label_35a2ec:
    // 0x35a2ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35a2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a2f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35a2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a2f4: 0xc0d6c36  jal         func_35B0D8
    ctx->pc = 0x35A2F4u;
    SET_GPR_U32(ctx, 31, 0x35A2FCu);
    ctx->pc = 0x35A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A2F4u;
    // 0x35a2f8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B0D8u, 0x35A2F4u, 0x35A2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A2FCu;
label_35a2fc:
    // 0x35a2fc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x35a2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x35a300: 0x24a5ad00  addiu       $a1, $a1, -0x5300
    ctx->pc = 0x35a300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946048));
    // 0x35a304: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x35a304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35a308: 0xc0d6c36  jal         func_35B0D8
    ctx->pc = 0x35A308u;
    SET_GPR_U32(ctx, 31, 0x35A310u);
    ctx->pc = 0x35A30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A308u;
    // 0x35a30c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B0D8u, 0x35A308u, 0x35A310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A310u;
label_35a310:
    // 0x35a310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35a310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35a314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a318: 0xc0d6c36  jal         func_35B0D8
    ctx->pc = 0x35A318u;
    SET_GPR_U32(ctx, 31, 0x35A320u);
    ctx->pc = 0x35A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A318u;
    // 0x35a31c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B0D8u, 0x35A318u, 0x35A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A320u;
label_35a320:
    // 0x35a320: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x35a320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x35a324: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x35a324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35a328: 0x24a5ad20  addiu       $a1, $a1, -0x52E0
    ctx->pc = 0x35a328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946080));
    // 0x35a32c: 0xc0d6c36  jal         func_35B0D8
    ctx->pc = 0x35A32Cu;
    SET_GPR_U32(ctx, 31, 0x35A334u);
    ctx->pc = 0x35A330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A32Cu;
    // 0x35a330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B0D8u, 0x35A32Cu, 0x35A334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A334u;
label_35a334:
    // 0x35a334: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x35a334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x35a338: 0xc0d6946  jal         func_35A518
    ctx->pc = 0x35A338u;
    SET_GPR_U32(ctx, 31, 0x35A340u);
    ctx->pc = 0x35A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A338u;
    // 0x35a33c: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A518u, 0x35A338u, 0x35A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A340u;
label_35a340:
    // 0x35a340: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x35a340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x35a344: 0xc0d6934  jal         func_35A4D0
    ctx->pc = 0x35A344u;
    SET_GPR_U32(ctx, 31, 0x35A34Cu);
    ctx->pc = 0x35A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A344u;
    // 0x35a348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A4D0u, 0x35A344u, 0x35A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A34Cu;
label_35a34c:
    // 0x35a34c: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x35a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x35a350: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x35a350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x35a354: 0xc0d6934  jal         func_35A4D0
    ctx->pc = 0x35A354u;
    SET_GPR_U32(ctx, 31, 0x35A35Cu);
    ctx->pc = 0x35A358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A354u;
    // 0x35a358: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A4D0u, 0x35A354u, 0x35A35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A35Cu;
label_35a35c:
    // 0x35a35c: 0x26240068  addiu       $a0, $s1, 0x68
    ctx->pc = 0x35a35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x35a360: 0xc0d6934  jal         func_35A4D0
    ctx->pc = 0x35A360u;
    SET_GPR_U32(ctx, 31, 0x35A368u);
    ctx->pc = 0x35A364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A360u;
    // 0x35a364: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A4D0u, 0x35A360u, 0x35A368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A368u;
label_35a368:
    // 0x35a368: 0x26240094  addiu       $a0, $s1, 0x94
    ctx->pc = 0x35a368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
    // 0x35a36c: 0xc0d6934  jal         func_35A4D0
    ctx->pc = 0x35A36Cu;
    SET_GPR_U32(ctx, 31, 0x35A374u);
    ctx->pc = 0x35A370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A36Cu;
    // 0x35a370: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A4D0u, 0x35A36Cu, 0x35A374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A374u;
label_35a374:
    // 0x35a374: 0x262400ec  addiu       $a0, $s1, 0xEC
    ctx->pc = 0x35a374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 236));
    // 0x35a378: 0xc0d6934  jal         func_35A4D0
    ctx->pc = 0x35A378u;
    SET_GPR_U32(ctx, 31, 0x35A380u);
    ctx->pc = 0x35A37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A378u;
    // 0x35a37c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A4D0u, 0x35A378u, 0x35A380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A380u;
label_35a380:
    // 0x35a380: 0x26240118  addiu       $a0, $s1, 0x118
    ctx->pc = 0x35a380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 280));
    // 0x35a384: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x35a384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x35a388: 0xc0d6934  jal         func_35A4D0
    ctx->pc = 0x35A388u;
    SET_GPR_U32(ctx, 31, 0x35A390u);
    ctx->pc = 0x35A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A388u;
    // 0x35a38c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A4D0u, 0x35A388u, 0x35A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A390u;
label_35a390:
    // 0x35a390: 0xae200144  sw          $zero, 0x144($s1)
    ctx->pc = 0x35a390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 0));
    // 0x35a394: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35a394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35a398: 0xae200148  sw          $zero, 0x148($s1)
    ctx->pc = 0x35a398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 0));
    // 0x35a39c: 0xae200160  sw          $zero, 0x160($s1)
    ctx->pc = 0x35a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
    // 0x35a3a0: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x35a3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x35a3a4: 0xae200164  sw          $zero, 0x164($s1)
    ctx->pc = 0x35a3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 0));
    // 0x35a3a8: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x35a3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x35a3ac: 0xae200168  sw          $zero, 0x168($s1)
    ctx->pc = 0x35a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 0));
    // 0x35a3b0: 0xfe220158  sd          $v0, 0x158($s1)
    ctx->pc = 0x35a3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 344), GPR_U64(ctx, 2));
    // 0x35a3b4: 0xfe220150  sd          $v0, 0x150($s1)
    ctx->pc = 0x35a3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 336), GPR_U64(ctx, 2));
    // 0x35a3b8: 0x262201e8  addiu       $v0, $s1, 0x1E8
    ctx->pc = 0x35a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 488));
    // 0x35a3bc: 0x0  nop
    ctx->pc = 0x35a3bcu;
    // NOP
label_35a3c0:
    // 0x35a3c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x35a3c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x35a3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x35a3c8: 0x0  nop
    ctx->pc = 0x35a3c8u;
    // NOP
    // 0x35a3cc: 0x0  nop
    ctx->pc = 0x35a3ccu;
    // NOP
    // 0x35a3d0: 0x0  nop
    ctx->pc = 0x35a3d0u;
    // NOP
    // 0x35a3d4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35A3D4u;
    {
        const bool branch_taken_0x35a3d4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x35A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A3D4u;
        // 0x35a3d8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a3d4) {
            ctx->pc = 0x35A3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a3c0;
        }
    }
    ctx->pc = 0x35A3DCu;
    // 0x35a3dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a3e0: 0xae2001f0  sw          $zero, 0x1F0($s1)
    ctx->pc = 0x35a3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
    // 0x35a3e4: 0xae2001f4  sw          $zero, 0x1F4($s1)
    ctx->pc = 0x35a3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 0));
    // 0x35a3e8: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x35a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x35a3ec: 0xae2001f8  sw          $zero, 0x1F8($s1)
    ctx->pc = 0x35a3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 0));
    // 0x35a3f0: 0xae2201ec  sw          $v0, 0x1EC($s1)
    ctx->pc = 0x35a3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 2));
    // 0x35a3f4: 0x2482026c  addiu       $v0, $a0, 0x26C
    ctx->pc = 0x35a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 620));
label_35a3f8:
    // 0x35a3f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35a3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x35a3fc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x35a3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x35a400: 0x0  nop
    ctx->pc = 0x35a400u;
    // NOP
    // 0x35a404: 0x0  nop
    ctx->pc = 0x35a404u;
    // NOP
    // 0x35a408: 0x0  nop
    ctx->pc = 0x35a408u;
    // NOP
    // 0x35a40c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35A40Cu;
    {
        const bool branch_taken_0x35a40c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x35A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A40Cu;
        // 0x35a410: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a40c) {
            ctx->pc = 0x35A3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a3f8;
        }
    }
    ctx->pc = 0x35A414u;
    // 0x35a414: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x35a414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35a418: 0xae2002a8  sw          $zero, 0x2A8($s1)
    ctx->pc = 0x35a418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 0));
    // 0x35a41c: 0xae2702cc  sw          $a3, 0x2CC($s1)
    ctx->pc = 0x35a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 7));
    // 0x35a420: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x35a420u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
    // 0x35a424: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x35a424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x35a428: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35a428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35a42c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a430: 0x8e2802a8  lw          $t0, 0x2A8($s1)
    ctx->pc = 0x35a430u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x35a434: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x35a434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x35a438: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x35a438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x35a43c: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x35a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x35a440: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x35a440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x35a444: 0xae2202d8  sw          $v0, 0x2D8($s1)
    ctx->pc = 0x35a444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 2));
    // 0x35a448: 0xae2602a0  sw          $a2, 0x2A0($s1)
    ctx->pc = 0x35a448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 672), GPR_U32(ctx, 6));
    // 0x35a44c: 0xae2002dc  sw          $zero, 0x2DC($s1)
    ctx->pc = 0x35a44cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 0));
    // 0x35a450: 0xae2302ac  sw          $v1, 0x2AC($s1)
    ctx->pc = 0x35a450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 3));
    // 0x35a454: 0xae2502e0  sw          $a1, 0x2E0($s1)
    ctx->pc = 0x35a454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 5));
    // 0x35a458: 0xae2402bc  sw          $a0, 0x2BC($s1)
    ctx->pc = 0x35a458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 4));
    // 0x35a45c: 0xe62002c8  swc1        $f0, 0x2C8($s1)
    ctx->pc = 0x35a45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 712), bits); }
    // 0x35a460: 0xae2802d0  sw          $t0, 0x2D0($s1)
    ctx->pc = 0x35a460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 8));
    // 0x35a464: 0xae2005b8  sw          $zero, 0x5B8($s1)
    ctx->pc = 0x35a464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 0));
    // 0x35a468: 0xae2702e4  sw          $a3, 0x2E4($s1)
    ctx->pc = 0x35a468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 740), GPR_U32(ctx, 7));
    // 0x35a46c: 0xae22027c  sw          $v0, 0x27C($s1)
    ctx->pc = 0x35a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 636), GPR_U32(ctx, 2));
    // 0x35a470: 0xae250280  sw          $a1, 0x280($s1)
    ctx->pc = 0x35a470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 5));
    // 0x35a474: 0xae220284  sw          $v0, 0x284($s1)
    ctx->pc = 0x35a474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 2));
    // 0x35a478: 0xae250288  sw          $a1, 0x288($s1)
    ctx->pc = 0x35a478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 5));
    // 0x35a47c: 0xae27028c  sw          $a3, 0x28C($s1)
    ctx->pc = 0x35a47cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 652), GPR_U32(ctx, 7));
    // 0x35a480: 0xae250290  sw          $a1, 0x290($s1)
    ctx->pc = 0x35a480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 5));
    // 0x35a484: 0xae220294  sw          $v0, 0x294($s1)
    ctx->pc = 0x35a484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 2));
    // 0x35a488: 0xae260298  sw          $a2, 0x298($s1)
    ctx->pc = 0x35a488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 6));
    // 0x35a48c: 0xae20029c  sw          $zero, 0x29C($s1)
    ctx->pc = 0x35a48cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 0));
    // 0x35a490: 0xae2002a4  sw          $zero, 0x2A4($s1)
    ctx->pc = 0x35a490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 0));
    // 0x35a494: 0xae2002b0  sw          $zero, 0x2B0($s1)
    ctx->pc = 0x35a494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 0));
    // 0x35a498: 0xae2002b4  sw          $zero, 0x2B4($s1)
    ctx->pc = 0x35a498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 0));
    // 0x35a49c: 0xae2502b8  sw          $a1, 0x2B8($s1)
    ctx->pc = 0x35a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 5));
    // 0x35a4a0: 0xe62002c0  swc1        $f0, 0x2C0($s1)
    ctx->pc = 0x35a4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 704), bits); }
    // 0x35a4a4: 0xae2002c4  sw          $zero, 0x2C4($s1)
    ctx->pc = 0x35a4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 708), GPR_U32(ctx, 0));
    // 0x35a4a8: 0xae2002d4  sw          $zero, 0x2D4($s1)
    ctx->pc = 0x35a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 0));
    // 0x35a4ac: 0xae2002e8  sw          $zero, 0x2E8($s1)
    ctx->pc = 0x35a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 744), GPR_U32(ctx, 0));
    // 0x35a4b0: 0xae2005b0  sw          $zero, 0x5B0($s1)
    ctx->pc = 0x35a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1456), GPR_U32(ctx, 0));
    // 0x35a4b4: 0xae2005b4  sw          $zero, 0x5B4($s1)
    ctx->pc = 0x35a4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 0));
    // 0x35a4b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a4b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a4bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a4bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a4c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35a4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x35A4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A4C4u;
        // 0x35a4c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A4CCu;
    // 0x35a4cc: 0x0  nop
    ctx->pc = 0x35a4ccu;
    // NOP
    ctx->pc = 0x35a4d0u;
}
