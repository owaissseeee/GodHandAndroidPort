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

// Function: sceCdDiskReady_old
// Address: 0x3992f0 - 0x399508
void sceCdDiskReady_old_0x3992f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceCdDiskReady_old_0x3992f0");
#endif

    switch (ctx->pc) {
        case 0x399334u: goto label_399334;
        case 0x39933cu: goto label_39933c;
        case 0x399354u: goto label_399354;
        case 0x39935cu: goto label_39935c;
        case 0x399368u: goto label_399368;
        case 0x39937cu: goto label_39937c;
        case 0x39938cu: goto label_39938c;
        case 0x3993a8u: goto label_3993a8;
        case 0x3993b0u: goto label_3993b0;
        case 0x3993d0u: goto label_3993d0;
        case 0x3993e4u: goto label_3993e4;
        case 0x399404u: goto label_399404;
        case 0x399410u: goto label_399410;
        case 0x399460u: goto label_399460;
        case 0x39948cu: goto label_39948c;
        case 0x3994a0u: goto label_3994a0;
        case 0x3994c4u: goto label_3994c4;
        case 0x3994d8u: goto label_3994d8;
        default: break;
    }

    ctx->pc = 0x3992f0u;

    // 0x3992f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3992f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3992f4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x3992f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x3992f8: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x3992f8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x3992fc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3992fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x399300: 0x8ec28650  lw          $v0, -0x79B0($s6)
    ctx->pc = 0x399300u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F8650u));
    // 0x399304: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x399304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399308: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x399308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x39930c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x39930cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x399310: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x399310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x399314: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x399314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x399318: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x399318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x39931c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x39931cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x399320: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x399320u;
    {
        const bool branch_taken_0x399320 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x399324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399320u;
        // 0x399324: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399320) {
            ctx->pc = 0x399334u;
            goto label_399334;
        }
    }
    ctx->pc = 0x399328u;
    // 0x399328: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x399328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x39932c: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x39932Cu;
    SET_GPR_U32(ctx, 31, 0x399334u);
    ctx->pc = 0x399330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39932Cu;
    // 0x399330: 0x2484e330  addiu       $a0, $a0, -0x1CD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x39932Cu, 0x399334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399334u;
label_399334:
    // 0x399334: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x399334u;
    SET_GPR_U32(ctx, 31, 0x39933Cu);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x399334u, 0x39933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39933Cu;
label_39933c:
    // 0x39933c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x39933cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x399340: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x399340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399344: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x399344u;
    {
        const bool branch_taken_0x399344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399344u;
        // 0x399348: 0xac838680  sw          $v1, -0x7980($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294936192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399344) {
            ctx->pc = 0x399354u;
            goto label_399354;
        }
    }
    ctx->pc = 0x39934Cu;
    // 0x39934c: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x39934Cu;
    SET_GPR_U32(ctx, 31, 0x399354u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x39934Cu, 0x399354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399354u;
label_399354:
    // 0x399354: 0xc0e618e  jal         func_398638
    ctx->pc = 0x399354u;
    SET_GPR_U32(ctx, 31, 0x39935Cu);
    ctx->pc = 0x399358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399354u;
    // 0x399358: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398638u, 0x399354u, 0x39935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39935Cu;
label_39935c:
    // 0x39935c: 0x8e64866c  lw          $a0, -0x7994($s3)
    ctx->pc = 0x39935cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936172)));
    // 0x399360: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x399360u;
    SET_GPR_U32(ctx, 31, 0x399368u);
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x399360u, 0x399368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399368u;
label_399368:
    // 0x399368: 0x8e63866c  lw          $v1, -0x7994($s3)
    ctx->pc = 0x399368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936172)));
    // 0x39936c: 0x1462005b  bne         $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x39936Cu;
    {
        const bool branch_taken_0x39936c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x399370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39936Cu;
        // 0x399370: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39936c) {
            ctx->pc = 0x3994DCu;
            goto label_3994dc;
        }
    }
    ctx->pc = 0x399374u;
    // 0x399374: 0xc0e6390  jal         func_398E40
    ctx->pc = 0x399374u;
    SET_GPR_U32(ctx, 31, 0x39937Cu);
    ctx->pc = 0x399378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399374u;
    // 0x399378: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E40u, 0x399374u, 0x39937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39937Cu;
label_39937c:
    // 0x39937c: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x39937Cu;
    {
        const bool branch_taken_0x39937c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39937Cu;
        // 0x399380: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39937c) {
            ctx->pc = 0x399494u;
            goto label_399494;
        }
    }
    ctx->pc = 0x399384u;
    // 0x399384: 0xc0eca40  jal         func_3B2900
    ctx->pc = 0x399384u;
    SET_GPR_U32(ctx, 31, 0x39938Cu);
    ctx->pc = 0x399388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399384u;
    // 0x399388: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2900u, 0x399384u, 0x39938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39938Cu;
label_39938c:
    // 0x39938c: 0x8e228690  lw          $v0, -0x7970($s1)
    ctx->pc = 0x39938cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936208)));
    // 0x399390: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x399390u;
    {
        const bool branch_taken_0x399390 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x399394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399390u;
        // 0x399394: 0x3c150078  lui         $s5, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399390) {
            ctx->pc = 0x399444u;
            goto label_399444;
        }
    }
    ctx->pc = 0x399398u;
    // 0x399398: 0x3c140078  lui         $s4, 0x78
    ctx->pc = 0x399398u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)120 << 16));
    // 0x39939c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x39939Cu;
    {
        const bool branch_taken_0x39939c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3993A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39939Cu;
        // 0x3993a0: 0x3c170040  lui         $s7, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39939c) {
            ctx->pc = 0x3993CCu;
            goto label_3993cc;
        }
    }
    ctx->pc = 0x3993A4u;
    // 0x3993a4: 0x0  nop
    ctx->pc = 0x3993a4u;
    // NOP
label_3993a8:
    // 0x3993a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3993a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3993ac: 0x0  nop
    ctx->pc = 0x3993acu;
    // NOP
label_3993b0:
    // 0x3993b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3993b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3993b4: 0x0  nop
    ctx->pc = 0x3993b4u;
    // NOP
    // 0x3993b8: 0x0  nop
    ctx->pc = 0x3993b8u;
    // NOP
    // 0x3993bc: 0x0  nop
    ctx->pc = 0x3993bcu;
    // NOP
    // 0x3993c0: 0x0  nop
    ctx->pc = 0x3993c0u;
    // NOP
    // 0x3993c4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3993C4u;
    {
        const bool branch_taken_0x3993c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3993c4) {
            ctx->pc = 0x3993B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3993b0;
        }
    }
    ctx->pc = 0x3993CCu;
label_3993cc:
    // 0x3993cc: 0x26b0c610  addiu       $s0, $s5, -0x39F0
    ctx->pc = 0x3993ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952464));
label_3993d0:
    // 0x3993d0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3993d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3993d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3993d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3993d8: 0x34a5059a  ori         $a1, $a1, 0x59A
    ctx->pc = 0x3993d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1434);
    // 0x3993dc: 0xc0ecbd2  jal         func_3B2F48
    ctx->pc = 0x3993DCu;
    SET_GPR_U32(ctx, 31, 0x3993E4u);
    ctx->pc = 0x3993E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3993DCu;
    // 0x3993e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F48u, 0x3993DCu, 0x3993E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3993E4u;
label_3993e4:
    // 0x3993e4: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3993E4u;
    {
        const bool branch_taken_0x3993e4 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3993e4) {
            ctx->pc = 0x3993E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3993E4u;
            // 0x3993e8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399434u;
            goto label_399434;
        }
    }
    ctx->pc = 0x3993ECu;
    // 0x3993ec: 0x8ec28650  lw          $v0, -0x79B0($s6)
    ctx->pc = 0x3993ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936144)));
    // 0x3993f0: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3993F0u;
    {
        const bool branch_taken_0x3993f0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3993F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3993F0u;
        // 0x3993f4: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3993f0) {
            ctx->pc = 0x399408u;
            goto label_399408;
        }
    }
    ctx->pc = 0x3993F8u;
    // 0x3993f8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3993f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3993fc: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x3993FCu;
    SET_GPR_U32(ctx, 31, 0x399404u);
    ctx->pc = 0x399400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3993FCu;
    // 0x399400: 0x2484e348  addiu       $a0, $a0, -0x1CB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x3993FCu, 0x399404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399404u;
label_399404:
    // 0x399404: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x399404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_399408:
    // 0x399408: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x399408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39940c: 0x0  nop
    ctx->pc = 0x39940cu;
    // NOP
label_399410:
    // 0x399410: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x399410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x399414: 0x0  nop
    ctx->pc = 0x399414u;
    // NOP
    // 0x399418: 0x0  nop
    ctx->pc = 0x399418u;
    // NOP
    // 0x39941c: 0x0  nop
    ctx->pc = 0x39941cu;
    // NOP
    // 0x399420: 0x0  nop
    ctx->pc = 0x399420u;
    // NOP
    // 0x399424: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x399424u;
    {
        const bool branch_taken_0x399424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x399424) {
            ctx->pc = 0x399410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399410;
        }
    }
    ctx->pc = 0x39942Cu;
    // 0x39942c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x39942Cu;
    {
        const bool branch_taken_0x39942c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39942Cu;
        // 0x399430: 0x26b0c610  addiu       $s0, $s5, -0x39F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39942c) {
            ctx->pc = 0x3993D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3993d0;
        }
    }
    ctx->pc = 0x399434u;
label_399434:
    // 0x399434: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x399434u;
    {
        const bool branch_taken_0x399434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399434u;
        // 0x399438: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399434) {
            ctx->pc = 0x3993A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3993a8;
        }
    }
    ctx->pc = 0x39943Cu;
    // 0x39943c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39943Cu;
    {
        const bool branch_taken_0x39943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39943Cu;
        // 0x399440: 0xae208690  sw          $zero, -0x7970($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294936208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39943c) {
            ctx->pc = 0x39944Cu;
            goto label_39944c;
        }
    }
    ctx->pc = 0x399444u;
label_399444:
    // 0x399444: 0x3c140078  lui         $s4, 0x78
    ctx->pc = 0x399444u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)120 << 16));
    // 0x399448: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x399448u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_39944c:
    // 0x39944c: 0x2690c650  addiu       $s0, $s4, -0x39B0
    ctx->pc = 0x39944cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952528));
    // 0x399450: 0xae92c650  sw          $s2, -0x39B0($s4)
    ctx->pc = 0x399450u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294952528), GPR_U32(ctx, 18));
    // 0x399454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399458: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x399458u;
    SET_GPR_U32(ctx, 31, 0x399460u);
    ctx->pc = 0x39945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399458u;
    // 0x39945c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x399458u, 0x399460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399460u;
label_399460:
    // 0x399460: 0x26f19840  addiu       $s1, $s7, -0x67C0
    ctx->pc = 0x399460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294940736));
    // 0x399464: 0x26a4c610  addiu       $a0, $s5, -0x39F0
    ctx->pc = 0x399464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952464));
    // 0x399468: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x399468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39946c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x39946cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x399470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x399470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399474: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x399474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399478: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x399478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39947c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x39947cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399480: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x399480u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x399484: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x399484u;
    SET_GPR_U32(ctx, 31, 0x39948Cu);
    ctx->pc = 0x399488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399484u;
    // 0x399488: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x399484u, 0x39948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39948Cu;
label_39948c:
    // 0x39948c: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39948Cu;
    {
        const bool branch_taken_0x39948c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x39948c) {
            ctx->pc = 0x399490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39948Cu;
            // 0x399490: 0x8ec28650  lw          $v0, -0x79B0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3994B4u;
            goto label_3994b4;
        }
    }
    ctx->pc = 0x399494u;
label_399494:
    // 0x399494: 0x8e64866c  lw          $a0, -0x7994($s3)
    ctx->pc = 0x399494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936172)));
    // 0x399498: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x399498u;
    SET_GPR_U32(ctx, 31, 0x3994A0u);
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x399498u, 0x3994A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3994A0u;
label_3994a0:
    // 0x3994a0: 0x3a440008  xori        $a0, $s2, 0x8
    ctx->pc = 0x3994a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
    // 0x3994a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3994a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3994a8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3994a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3994ac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3994ACu;
    {
        const bool branch_taken_0x3994ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3994B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3994ACu;
        // 0x3994b0: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3994ac) {
            ctx->pc = 0x3994DCu;
            goto label_3994dc;
        }
    }
    ctx->pc = 0x3994B4u;
label_3994b4:
    // 0x3994b4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3994B4u;
    {
        const bool branch_taken_0x3994b4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3994B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3994B4u;
        // 0x3994b8: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3994b4) {
            ctx->pc = 0x3994C4u;
            goto label_3994c4;
        }
    }
    ctx->pc = 0x3994BCu;
    // 0x3994bc: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x3994BCu;
    SET_GPR_U32(ctx, 31, 0x3994C4u);
    ctx->pc = 0x3994C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3994BCu;
    // 0x3994c0: 0x2484e368  addiu       $a0, $a0, -0x1C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x3994BCu, 0x3994C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3994C4u;
label_3994c4:
    // 0x3994c4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3994c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3994c8: 0x8e64866c  lw          $a0, -0x7994($s3)
    ctx->pc = 0x3994c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936172)));
    // 0x3994cc: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x3994ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3994d0: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x3994D0u;
    SET_GPR_U32(ctx, 31, 0x3994D8u);
    ctx->pc = 0x3994D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3994D0u;
    // 0x3994d4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x3994D0u, 0x3994D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3994D8u;
label_3994d8:
    // 0x3994d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3994d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3994dc:
    // 0x3994dc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3994dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3994e0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x3994e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3994e4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x3994e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3994e8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x3994e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3994ec: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x3994ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3994f0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x3994f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3994f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3994f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3994f8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3994f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3994fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3994fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399500: 0x3e00008  jr          $ra
    ctx->pc = 0x399500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399500u;
        // 0x399504: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399508u;
}
