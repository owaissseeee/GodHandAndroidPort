#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: sceMcInit
// Address: 0x7cd2e0 - 0x7cd578
void sceMcInit_0x7cd2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcInit_0x7cd2e0");
#endif

    switch (ctx->pc) {
        case 0x7cd330u: goto label_7cd330;
        case 0x7cd35cu: goto label_7cd35c;
        case 0x7cd374u: goto label_7cd374;
        case 0x7cd390u: goto label_7cd390;
        case 0x7cd398u: goto label_7cd398;
        case 0x7cd3a0u: goto label_7cd3a0;
        case 0x7cd3a8u: goto label_7cd3a8;
        case 0x7cd3b0u: goto label_7cd3b0;
        case 0x7cd3d0u: goto label_7cd3d0;
        case 0x7cd3e4u: goto label_7cd3e4;
        case 0x7cd3e8u: goto label_7cd3e8;
        case 0x7cd418u: goto label_7cd418;
        case 0x7cd434u: goto label_7cd434;
        case 0x7cd440u: goto label_7cd440;
        case 0x7cd484u: goto label_7cd484;
        case 0x7cd4a0u: goto label_7cd4a0;
        case 0x7cd4acu: goto label_7cd4ac;
        case 0x7cd4d4u: goto label_7cd4d4;
        case 0x7cd4e0u: goto label_7cd4e0;
        case 0x7cd4ecu: goto label_7cd4ec;
        case 0x7cd518u: goto label_7cd518;
        case 0x7cd524u: goto label_7cd524;
        case 0x7cd530u: goto label_7cd530;
        case 0x7cd544u: goto label_7cd544;
        case 0x7cd554u: goto label_7cd554;
        default: break;
    }

    ctx->pc = 0x7cd2e0u;

    // 0x7cd2e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x7cd2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x7cd2e4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x7cd2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x7cd2e8: 0x3c12007d  lui         $s2, 0x7D
    ctx->pc = 0x7cd2e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)125 << 16));
    // 0x7cd2ec: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x7cd2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x7cd2f0: 0x8e4207b4  lw          $v0, 0x7B4($s2)
    ctx->pc = 0x7cd2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D07B4u));
    // 0x7cd2f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x7cd2f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd2f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x7cd2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x7cd2fc: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x7cd2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x7cd300: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x7cd300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x7cd304: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7CD304u;
    {
        const bool branch_taken_0x7cd304 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7CD308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD304u;
        // 0x7cd308: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd304) {
            ctx->pc = 0x7CD380u;
            goto label_7cd380;
        }
    }
    ctx->pc = 0x7CD30Cu;
    // 0x7cd30c: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cd30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cd310: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x7cd310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cd314: 0x24421310  addiu       $v0, $v0, 0x1310
    ctx->pc = 0x7cd314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4880));
    // 0x7cd318: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x7cd318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x7cd31c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x7cd31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x7cd320: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x7cd320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7cd324: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x7cd324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    // 0x7cd328: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x7CD328u;
    SET_GPR_U32(ctx, 31, 0x7CD330u);
    ctx->pc = 0x7CD32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD328u;
    // 0x7cd32c: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x7CD328u, 0x7CD330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD330u;
label_7cd330:
    // 0x7cd330: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CD330u;
    {
        const bool branch_taken_0x7cd330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x7CD334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD330u;
        // 0x7cd334: 0xae4207b4  sw          $v0, 0x7B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd330) {
            ctx->pc = 0x7CD340u;
            goto label_7cd340;
        }
    }
    ctx->pc = 0x7CD338u;
    // 0x7cd338: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x7CD338u;
    {
        const bool branch_taken_0x7cd338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD338u;
        // 0x7cd33c: 0x2402ff9b  addiu       $v0, $zero, -0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd338) {
            ctx->pc = 0x7CD558u;
            goto label_7cd558;
        }
    }
    ctx->pc = 0x7CD340u;
label_7cd340:
    // 0x7cd340: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cd340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cd344: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x7cd344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    // 0x7cd348: 0x24421320  addiu       $v0, $v0, 0x1320
    ctx->pc = 0x7cd348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4896));
    // 0x7cd34c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x7cd34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x7cd350: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x7cd350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x7cd354: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x7CD354u;
    SET_GPR_U32(ctx, 31, 0x7CD35Cu);
    ctx->pc = 0x7CD358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD354u;
    // 0x7cd358: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x7CD354u, 0x7CD35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD35Cu;
label_7cd35c:
    // 0x7cd35c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7cd35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd360: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cd360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cd364: 0x16130006  bne         $s0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CD364u;
    {
        const bool branch_taken_0x7cd364 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x7CD368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD364u;
        // 0x7cd368: 0xac5007b8  sw          $s0, 0x7B8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1976), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd364) {
            ctx->pc = 0x7CD380u;
            goto label_7cd380;
        }
    }
    ctx->pc = 0x7CD36Cu;
    // 0x7cd36c: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x7CD36Cu;
    SET_GPR_U32(ctx, 31, 0x7CD374u);
    ctx->pc = 0x7CD370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD36Cu;
    // 0x7cd370: 0x8e4407b4  lw          $a0, 0x7B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x7CD36Cu, 0x7CD374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD374u;
label_7cd374:
    // 0x7cd374: 0xae5007b4  sw          $s0, 0x7B4($s2)
    ctx->pc = 0x7cd374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1972), GPR_U32(ctx, 16));
    // 0x7cd378: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x7CD378u;
    {
        const bool branch_taken_0x7cd378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD378u;
        // 0x7cd37c: 0x2402ff9b  addiu       $v0, $zero, -0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd378) {
            ctx->pc = 0x7CD558u;
            goto label_7cd558;
        }
    }
    ctx->pc = 0x7CD380u;
label_7cd380:
    // 0x7cd380: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7cd380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7cd384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd388: 0xc1f377e  jal         func_7CDDF8
    ctx->pc = 0x7CD388u;
    SET_GPR_U32(ctx, 31, 0x7CD390u);
    ctx->pc = 0x7CD38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD388u;
    // 0x7cd38c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CDDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CDDF8u, 0x7CD388u, 0x7CD390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD390u;
label_7cd390:
    // 0x7cd390: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x7CD390u;
    SET_GPR_U32(ctx, 31, 0x7CD398u);
    ctx->pc = 0x7CD394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD390u;
    // 0x7cd394: 0x8e4407b4  lw          $a0, 0x7B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x7CD390u, 0x7CD398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD398u;
label_7cd398:
    // 0x7cd398: 0xc0eca40  jal         func_3B2900
    ctx->pc = 0x7CD398u;
    SET_GPR_U32(ctx, 31, 0x7CD3A0u);
    ctx->pc = 0x7CD39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD398u;
    // 0x7cd39c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2900u, 0x7CD398u, 0x7CD3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD3A0u;
label_7cd3a0:
    // 0x7cd3a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7CD3A0u;
    {
        const bool branch_taken_0x7cd3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD3A0u;
        // 0x7cd3a4: 0x3c10007d  lui         $s0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd3a0) {
            ctx->pc = 0x7CD3BCu;
            goto label_7cd3bc;
        }
    }
    ctx->pc = 0x7CD3A8u;
label_7cd3a8:
    // 0x7cd3a8: 0xc0ec2b8  jal         func_3B0AE0
    ctx->pc = 0x7CD3A8u;
    SET_GPR_U32(ctx, 31, 0x7CD3B0u);
    ctx->pc = 0x7CD3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD3A8u;
    // 0x7cd3ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0AE0u, 0x7CD3A8u, 0x7CD3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD3B0u;
label_7cd3b0:
    // 0x7cd3b0: 0x2a230200  slti        $v1, $s1, 0x200
    ctx->pc = 0x7cd3b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x7cd3b4: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x7CD3B4u;
    {
        const bool branch_taken_0x7cd3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD3B4u;
        // 0x7cd3b8: 0x3c04007d  lui         $a0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd3b4) {
            ctx->pc = 0x7CD53Cu;
            goto label_7cd53c;
        }
    }
    ctx->pc = 0x7CD3BCu;
label_7cd3bc:
    // 0x7cd3bc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x7cd3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x7cd3c0: 0x26041980  addiu       $a0, $s0, 0x1980
    ctx->pc = 0x7cd3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6528));
    // 0x7cd3c4: 0x34a50400  ori         $a1, $a1, 0x400
    ctx->pc = 0x7cd3c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
    // 0x7cd3c8: 0xc0ecbd2  jal         func_3B2F48
    ctx->pc = 0x7CD3C8u;
    SET_GPR_U32(ctx, 31, 0x7CD3D0u);
    ctx->pc = 0x7CD3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD3C8u;
    // 0x7cd3cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F48u, 0x7CD3C8u, 0x7CD3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD3D0u;
label_7cd3d0:
    // 0x7cd3d0: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7CD3D0u;
    {
        const bool branch_taken_0x7cd3d0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7CD3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD3D0u;
        // 0x7cd3d4: 0x26131980  addiu       $s3, $s0, 0x1980 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 6528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd3d0) {
            ctx->pc = 0x7CD404u;
            goto label_7cd404;
        }
    }
    ctx->pc = 0x7CD3D8u;
    // 0x7cd3d8: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7cd3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7cd3dc: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x7CD3DCu;
    SET_GPR_U32(ctx, 31, 0x7CD3E4u);
    ctx->pc = 0x7CD3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD3DCu;
    // 0x7cd3e0: 0x24841338  addiu       $a0, $a0, 0x1338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x7CD3DCu, 0x7CD3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD3E4u;
label_7cd3e4:
    // 0x7cd3e4: 0x0  nop
    ctx->pc = 0x7cd3e4u;
    // NOP
label_7cd3e8:
    // 0x7cd3e8: 0x0  nop
    ctx->pc = 0x7cd3e8u;
    // NOP
    // 0x7cd3ec: 0x0  nop
    ctx->pc = 0x7cd3ecu;
    // NOP
    // 0x7cd3f0: 0x0  nop
    ctx->pc = 0x7cd3f0u;
    // NOP
    // 0x7cd3f4: 0x0  nop
    ctx->pc = 0x7cd3f4u;
    // NOP
    // 0x7cd3f8: 0x0  nop
    ctx->pc = 0x7cd3f8u;
    // NOP
    // 0x7cd3fc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x7CD3FCu;
    {
        const bool branch_taken_0x7cd3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7cd3fc) {
            ctx->pc = 0x7CD3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cd3e8;
        }
    }
    ctx->pc = 0x7CD404u;
label_7cd404:
    // 0x7cd404: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x7cd404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x7cd408: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x7CD408u;
    {
        const bool branch_taken_0x7cd408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD408u;
        // 0x7cd40c: 0x24042710  addiu       $a0, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd408) {
            ctx->pc = 0x7CD3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cd3a8;
        }
    }
    ctx->pc = 0x7CD410u;
    // 0x7cd410: 0xc1f3b12  jal         func_7CEC48
    ctx->pc = 0x7CD410u;
    SET_GPR_U32(ctx, 31, 0x7CD418u);
    ctx->pc = 0x7CEC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CEC48u, 0x7CD410u, 0x7CD418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD418u;
label_7cd418:
    // 0x7cd418: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cd418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cd41c: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7CD41Cu;
    {
        const bool branch_taken_0x7cd41c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7CD420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD41Cu;
        // 0x7cd420: 0xac6207bc  sw          $v0, 0x7BC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd41c) {
            ctx->pc = 0x7CD44Cu;
            goto label_7cd44c;
        }
    }
    ctx->pc = 0x7CD424u;
    // 0x7cd424: 0x8e4407b4  lw          $a0, 0x7B4($s2)
    ctx->pc = 0x7cd424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
    // 0x7cd428: 0x3c11007d  lui         $s1, 0x7D
    ctx->pc = 0x7cd428u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)125 << 16));
    // 0x7cd42c: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x7CD42Cu;
    SET_GPR_U32(ctx, 31, 0x7CD434u);
    ctx->pc = 0x7CD430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD42Cu;
    // 0x7cd430: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x7CD42Cu, 0x7CD434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD434u;
label_7cd434:
    // 0x7cd434: 0x8e2407b8  lw          $a0, 0x7B8($s1)
    ctx->pc = 0x7cd434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1976)));
    // 0x7cd438: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x7CD438u;
    SET_GPR_U32(ctx, 31, 0x7CD440u);
    ctx->pc = 0x7CD43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD438u;
    // 0x7cd43c: 0xae5007b4  sw          $s0, 0x7B4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1972), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x7CD438u, 0x7CD440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD440u;
label_7cd440:
    // 0x7cd440: 0xae3007b8  sw          $s0, 0x7B8($s1)
    ctx->pc = 0x7cd440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1976), GPR_U32(ctx, 16));
    // 0x7cd444: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x7CD444u;
    {
        const bool branch_taken_0x7cd444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD444u;
        // 0x7cd448: 0x2402ff9b  addiu       $v0, $zero, -0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd444) {
            ctx->pc = 0x7CD558u;
            goto label_7cd558;
        }
    }
    ctx->pc = 0x7CD44Cu;
label_7cd44c:
    // 0x7cd44c: 0x3c11007d  lui         $s1, 0x7D
    ctx->pc = 0x7cd44cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)125 << 16));
    // 0x7cd450: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x7cd450u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd454: 0x26302f40  addiu       $s0, $s1, 0x2F40
    ctx->pc = 0x7cd454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12096));
    // 0x7cd458: 0x3c07007d  lui         $a3, 0x7D
    ctx->pc = 0x7cd458u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)125 << 16));
    // 0x7cd45c: 0x24e71a00  addiu       $a3, $a3, 0x1A00
    ctx->pc = 0x7cd45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6656));
    // 0x7cd460: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7cd460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7cd464: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x7cd464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd468: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x7cd468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x7cd46c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7cd46cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd470: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x7cd470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x7cd474: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x7cd474u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd478: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x7cd478u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x7cd47c: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CD47Cu;
    SET_GPR_U32(ctx, 31, 0x7CD484u);
    ctx->pc = 0x7CD480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD47Cu;
    // 0x7cd480: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CD47Cu, 0x7CD484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD484u;
label_7cd484:
    // 0x7cd484: 0x443000c  bgezl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7CD484u;
    {
        const bool branch_taken_0x7cd484 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x7cd484) {
            ctx->pc = 0x7CD488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CD484u;
            // 0x7cd488: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CD4B8u;
            goto label_7cd4b8;
        }
    }
    ctx->pc = 0x7CD48Cu;
    // 0x7cd48c: 0x8e4407b4  lw          $a0, 0x7B4($s2)
    ctx->pc = 0x7cd48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
    // 0x7cd490: 0x3c11007d  lui         $s1, 0x7D
    ctx->pc = 0x7cd490u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)125 << 16));
    // 0x7cd494: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x7cd494u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
    // 0x7cd498: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x7CD498u;
    SET_GPR_U32(ctx, 31, 0x7CD4A0u);
    ctx->pc = 0x7CD49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD498u;
    // 0x7cd49c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x7CD498u, 0x7CD4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD4A0u;
label_7cd4a0:
    // 0x7cd4a0: 0x8e2407b8  lw          $a0, 0x7B8($s1)
    ctx->pc = 0x7cd4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1976)));
    // 0x7cd4a4: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x7CD4A4u;
    SET_GPR_U32(ctx, 31, 0x7CD4ACu);
    ctx->pc = 0x7CD4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD4A4u;
    // 0x7cd4a8: 0xae5007b4  sw          $s0, 0x7B4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1972), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x7CD4A4u, 0x7CD4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD4ACu;
label_7cd4ac:
    // 0x7cd4ac: 0xae3007b8  sw          $s0, 0x7B8($s1)
    ctx->pc = 0x7cd4acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1976), GPR_U32(ctx, 16));
    // 0x7cd4b0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x7CD4B0u;
    {
        const bool branch_taken_0x7cd4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD4B0u;
        // 0x7cd4b4: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd4b0) {
            ctx->pc = 0x7CD558u;
            goto label_7cd558;
        }
    }
    ctx->pc = 0x7CD4B8u;
label_7cd4b8:
    // 0x7cd4b8: 0x2842020a  slti        $v0, $v0, 0x20A
    ctx->pc = 0x7cd4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)522) ? 1 : 0);
    // 0x7cd4bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7CD4BCu;
    {
        const bool branch_taken_0x7cd4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD4BCu;
        // 0x7cd4c0: 0x3c04007d  lui         $a0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd4bc) {
            ctx->pc = 0x7CD4F8u;
            goto label_7cd4f8;
        }
    }
    ctx->pc = 0x7CD4C4u;
    // 0x7cd4c4: 0x3c11007d  lui         $s1, 0x7D
    ctx->pc = 0x7cd4c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)125 << 16));
    // 0x7cd4c8: 0x24841370  addiu       $a0, $a0, 0x1370
    ctx->pc = 0x7cd4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4976));
    // 0x7cd4cc: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x7CD4CCu;
    SET_GPR_U32(ctx, 31, 0x7CD4D4u);
    ctx->pc = 0x7CD4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD4CCu;
    // 0x7cd4d0: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x7CD4CCu, 0x7CD4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD4D4u;
label_7cd4d4:
    // 0x7cd4d4: 0x8e4407b4  lw          $a0, 0x7B4($s2)
    ctx->pc = 0x7cd4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
    // 0x7cd4d8: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x7CD4D8u;
    SET_GPR_U32(ctx, 31, 0x7CD4E0u);
    ctx->pc = 0x7CD4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD4D8u;
    // 0x7cd4dc: 0xae800024  sw          $zero, 0x24($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x7CD4D8u, 0x7CD4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD4E0u;
label_7cd4e0:
    // 0x7cd4e0: 0x8e2407b8  lw          $a0, 0x7B8($s1)
    ctx->pc = 0x7cd4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1976)));
    // 0x7cd4e4: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x7CD4E4u;
    SET_GPR_U32(ctx, 31, 0x7CD4ECu);
    ctx->pc = 0x7CD4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD4E4u;
    // 0x7cd4e8: 0xae5007b4  sw          $s0, 0x7B4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1972), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x7CD4E4u, 0x7CD4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD4ECu;
label_7cd4ec:
    // 0x7cd4ec: 0xae3007b8  sw          $s0, 0x7B8($s1)
    ctx->pc = 0x7cd4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1976), GPR_U32(ctx, 16));
    // 0x7cd4f0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x7CD4F0u;
    {
        const bool branch_taken_0x7cd4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD4F0u;
        // 0x7cd4f4: 0x2402ff88  addiu       $v0, $zero, -0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd4f0) {
            ctx->pc = 0x7CD558u;
            goto label_7cd558;
        }
    }
    ctx->pc = 0x7CD4F8u;
label_7cd4f8:
    // 0x7cd4f8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x7cd4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7cd4fc: 0x2842020e  slti        $v0, $v0, 0x20E
    ctx->pc = 0x7cd4fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)526) ? 1 : 0);
    // 0x7cd500: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x7CD500u;
    {
        const bool branch_taken_0x7cd500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD500u;
        // 0x7cd504: 0x3c04007d  lui         $a0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd500) {
            ctx->pc = 0x7CD54Cu;
            goto label_7cd54c;
        }
    }
    ctx->pc = 0x7CD508u;
    // 0x7cd508: 0x3c11007d  lui         $s1, 0x7D
    ctx->pc = 0x7cd508u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)125 << 16));
    // 0x7cd50c: 0x24841398  addiu       $a0, $a0, 0x1398
    ctx->pc = 0x7cd50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5016));
    // 0x7cd510: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x7CD510u;
    SET_GPR_U32(ctx, 31, 0x7CD518u);
    ctx->pc = 0x7CD514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD510u;
    // 0x7cd514: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x7CD510u, 0x7CD518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD518u;
label_7cd518:
    // 0x7cd518: 0x8e4407b4  lw          $a0, 0x7B4($s2)
    ctx->pc = 0x7cd518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
    // 0x7cd51c: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x7CD51Cu;
    SET_GPR_U32(ctx, 31, 0x7CD524u);
    ctx->pc = 0x7CD520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD51Cu;
    // 0x7cd520: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x7CD51Cu, 0x7CD524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD524u;
label_7cd524:
    // 0x7cd524: 0x8e2407b8  lw          $a0, 0x7B8($s1)
    ctx->pc = 0x7cd524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1976)));
    // 0x7cd528: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x7CD528u;
    SET_GPR_U32(ctx, 31, 0x7CD530u);
    ctx->pc = 0x7CD52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD528u;
    // 0x7cd52c: 0xae5007b4  sw          $s0, 0x7B4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1972), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x7CD528u, 0x7CD530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD530u;
label_7cd530:
    // 0x7cd530: 0xae3007b8  sw          $s0, 0x7B8($s1)
    ctx->pc = 0x7cd530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1976), GPR_U32(ctx, 16));
    // 0x7cd534: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x7CD534u;
    {
        const bool branch_taken_0x7cd534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD534u;
        // 0x7cd538: 0x2402ff87  addiu       $v0, $zero, -0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd534) {
            ctx->pc = 0x7CD558u;
            goto label_7cd558;
        }
    }
    ctx->pc = 0x7CD53Cu;
label_7cd53c:
    // 0x7cd53c: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x7CD53Cu;
    SET_GPR_U32(ctx, 31, 0x7CD544u);
    ctx->pc = 0x7CD540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD53Cu;
    // 0x7cd540: 0x24841350  addiu       $a0, $a0, 0x1350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x7CD53Cu, 0x7CD544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD544u;
label_7cd544:
    // 0x7cd544: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CD544u;
    {
        const bool branch_taken_0x7cd544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD544u;
        // 0x7cd548: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd544) {
            ctx->pc = 0x7CD558u;
            goto label_7cd558;
        }
    }
    ctx->pc = 0x7CD54Cu;
label_7cd54c:
    // 0x7cd54c: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CD54Cu;
    SET_GPR_U32(ctx, 31, 0x7CD554u);
    ctx->pc = 0x7CD550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD54Cu;
    // 0x7cd550: 0x8e4407b4  lw          $a0, 0x7B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CD54Cu, 0x7CD554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD554u;
label_7cd554:
    // 0x7cd554: 0x8e222f40  lw          $v0, 0x2F40($s1)
    ctx->pc = 0x7cd554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12096)));
label_7cd558:
    // 0x7cd558: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x7cd558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7cd55c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x7cd55cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7cd560: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x7cd560u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7cd564: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x7cd564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7cd568: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x7cd568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7cd56c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x7cd56cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cd570: 0x3e00008  jr          $ra
    ctx->pc = 0x7CD570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD570u;
        // 0x7cd574: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CD570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CD578u;
}
} // namespace gh_mcport
