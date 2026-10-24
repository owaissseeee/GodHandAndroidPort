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

// Function: func_0011C348
// Address: 0x11c348 - 0x11c608
void func_0011C348_0x11c348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011C348_0x11c348");
#endif

    switch (ctx->pc) {
        case 0x11c394u: goto label_11c394;
        case 0x11c3a0u: goto label_11c3a0;
        case 0x11c408u: goto label_11c408;
        case 0x11c41cu: goto label_11c41c;
        case 0x11c42cu: goto label_11c42c;
        case 0x11c434u: goto label_11c434;
        case 0x11c480u: goto label_11c480;
        case 0x11c488u: goto label_11c488;
        case 0x11c4a8u: goto label_11c4a8;
        case 0x11c4e8u: goto label_11c4e8;
        case 0x11c4f4u: goto label_11c4f4;
        case 0x11c548u: goto label_11c548;
        case 0x11c558u: goto label_11c558;
        case 0x11c594u: goto label_11c594;
        case 0x11c59cu: goto label_11c59c;
        case 0x11c5acu: goto label_11c5ac;
        case 0x11c5e0u: goto label_11c5e0;
        case 0x11c5ecu: goto label_11c5ec;
        default: break;
    }

    ctx->pc = 0x11c348u;

    // 0x11c348: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11c348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11c34c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x11c34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x11c350: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11c350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11c354: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c358: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11c358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11c35c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11c35cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c360: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11c360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11c364: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x11c364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11c368: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x11c368u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11c36c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x11c370: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11c370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11c374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11c374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11c378: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11c378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c37c: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x11c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x11c380: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x11c380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x11c384: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11c384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11c388: 0x8e300694  lw          $s0, 0x694($s1)
    ctx->pc = 0x11c388u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x11c38c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x11C38Cu;
    SET_GPR_U32(ctx, 31, 0x11C394u);
    ctx->pc = 0x11C390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C38Cu;
    // 0x11c390: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x11C38Cu, 0x11C394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C394u;
label_11c394:
    // 0x11c394: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x11c394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x11c398: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x11C398u;
    SET_GPR_U32(ctx, 31, 0x11C3A0u);
    ctx->pc = 0x11C39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C398u;
    // 0x11c39c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x11C398u, 0x11C3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C3A0u;
label_11c3a0:
    // 0x11c3a0: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x11c3a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11c3a4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C3A4u;
    {
        const bool branch_taken_0x11c3a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C3A4u;
        // 0x11c3a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3a4) {
            ctx->pc = 0x11C3BCu;
            goto label_11c3bc;
        }
    }
    ctx->pc = 0x11C3ACu;
    // 0x11c3ac: 0x50620027  beql        $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x11C3ACu;
    {
        const bool branch_taken_0x11c3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11c3ac) {
            ctx->pc = 0x11C3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C3ACu;
            // 0x11c3b0: 0x8622056e  lh          $v0, 0x56E($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C44Cu;
            goto label_11c44c;
        }
    }
    ctx->pc = 0x11C3B4u;
    // 0x11c3b4: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x11C3B4u;
    {
        const bool branch_taken_0x11c3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C3B4u;
        // 0x11c3b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3b4) {
            ctx->pc = 0x11C5F0u;
            goto label_11c5f0;
        }
    }
    ctx->pc = 0x11C3BCu;
label_11c3bc:
    // 0x11c3bc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11c3c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11c3c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3c4: 0x3c01bf01  lui         $at, 0xBF01
    ctx->pc = 0x11c3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48897 << 16));
    // 0x11c3c8: 0x3421bda5  ori         $at, $at, 0xBDA5
    ctx->pc = 0x11c3c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48549);
    // 0x11c3cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11c3ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11c3d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c3d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3d4: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x11c3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11c3d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3dc: 0x3c013e0e  lui         $at, 0x3E0E
    ctx->pc = 0x11c3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15886 << 16));
    // 0x11c3e0: 0x3421d917  ori         $at, $at, 0xD917
    ctx->pc = 0x11c3e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55575);
    // 0x11c3e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11c3e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11c3e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11c3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11c3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11c3f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11c3f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11c3f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11c3f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11c3f8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11c3f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11c3fc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11c3fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11c400: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x11C400u;
    SET_GPR_U32(ctx, 31, 0x11C408u);
    ctx->pc = 0x11C404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C400u;
    // 0x11c404: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x11C400u, 0x11C408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C408u;
label_11c408:
    // 0x11c408: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11c408u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11c40c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x11c40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11c410: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x11c410u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x11c414: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11C414u;
    SET_GPR_U32(ctx, 31, 0x11C41Cu);
    ctx->pc = 0x11C418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C414u;
    // 0x11c418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11C414u, 0x11C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C41Cu;
label_11c41c:
    // 0x11c41c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c424: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11C424u;
    SET_GPR_U32(ctx, 31, 0x11C42Cu);
    ctx->pc = 0x11C428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C424u;
    // 0x11c428: 0xae2215b0  sw          $v0, 0x15B0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11C424u, 0x11C42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C42Cu;
label_11c42c:
    // 0x11c42c: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11C42Cu;
    SET_GPR_U32(ctx, 31, 0x11C434u);
    ctx->pc = 0x11C430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C42Cu;
    // 0x11c430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11C42Cu, 0x11C434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C434u;
label_11c434:
    // 0x11c434: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11c434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11c438: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x11c438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11c43c: 0xa623056e  sh          $v1, 0x56E($s1)
    ctx->pc = 0x11c43cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x11c440: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c444: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11c444u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x11c448: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x11c448u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
label_11c44c:
    // 0x11c44c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11C44Cu;
    {
        const bool branch_taken_0x11c44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C44Cu;
        // 0x11c450: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c44c) {
            ctx->pc = 0x11C478u;
            goto label_11c478;
        }
    }
    ctx->pc = 0x11C454u;
    // 0x11c454: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C454u;
    {
        const bool branch_taken_0x11c454 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C454u;
        // 0x11c458: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c454) {
            ctx->pc = 0x11C478u;
            goto label_11c478;
        }
    }
    ctx->pc = 0x11C45Cu;
    // 0x11c45c: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x11c45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11c460: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x11c460u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11c464: 0x26030550  addiu       $v1, $s0, 0x550
    ctx->pc = 0x11c464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x11c468: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11c468u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11c46c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x11c46cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c470: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11c470u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11c474: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11c474u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_11c478:
    // 0x11c478: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11C478u;
    SET_GPR_U32(ctx, 31, 0x11C480u);
    ctx->pc = 0x11C47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C478u;
    // 0x11c47c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11C478u, 0x11C480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C480u;
label_11c480:
    // 0x11c480: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11C480u;
    SET_GPR_U32(ctx, 31, 0x11C488u);
    ctx->pc = 0x11C484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C480u;
    // 0x11c484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11C480u, 0x11C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C488u;
label_11c488:
    // 0x11c488: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11C488u;
    {
        const bool branch_taken_0x11c488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c488) {
            ctx->pc = 0x11C4D4u;
            goto label_11c4d4;
        }
    }
    ctx->pc = 0x11C490u;
    // 0x11c490: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11c490u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x11c494: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11C494u;
    {
        const bool branch_taken_0x11c494 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C494u;
        // 0x11c498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c494) {
            ctx->pc = 0x11C4C4u;
            goto label_11c4c4;
        }
    }
    ctx->pc = 0x11C49Cu;
    // 0x11c49c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4a0: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11C4A0u;
    SET_GPR_U32(ctx, 31, 0x11C4A8u);
    ctx->pc = 0x11C4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4A0u;
    // 0x11c4a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11C4A0u, 0x11C4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4A8u;
label_11c4a8:
    // 0x11c4a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c4ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c4b0: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x11c4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x11c4b4: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x11c4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x11c4b8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11c4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11c4bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11C4BCu;
    {
        const bool branch_taken_0x11c4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4BCu;
        // 0x11c4c0: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4bc) {
            ctx->pc = 0x11C4D4u;
            goto label_11c4d4;
        }
    }
    ctx->pc = 0x11C4C4u;
label_11c4c4:
    // 0x11c4c4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x11c4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x11c4c8: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x11c4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x11c4cc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11c4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11c4d0: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x11c4d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_11c4d4:
    // 0x11c4d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11c4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11c4d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11c4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11c4dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4e0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11C4E0u;
    SET_GPR_U32(ctx, 31, 0x11C4E8u);
    ctx->pc = 0x11C4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4E0u;
    // 0x11c4e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11C4E0u, 0x11C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4E8u;
label_11c4e8:
    // 0x11c4e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11c4e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11c4ec: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11C4ECu;
    SET_GPR_U32(ctx, 31, 0x11C4F4u);
    ctx->pc = 0x11C4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4ECu;
    // 0x11c4f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11C4ECu, 0x11C4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4F4u;
label_11c4f4:
    // 0x11c4f4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11c4f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x11c4f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11c4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11c4fc: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x11C4FCu;
    {
        const bool branch_taken_0x11c4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c4fc) {
            ctx->pc = 0x11C500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C4FCu;
            // 0x11c500: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C5F0u;
            goto label_11c5f0;
        }
    }
    ctx->pc = 0x11C504u;
    // 0x11c504: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x11c504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x11c508: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x11C508u;
    {
        const bool branch_taken_0x11c508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C508u;
        // 0x11c50c: 0x2403023b  addiu       $v1, $zero, 0x23B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 571));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c508) {
            ctx->pc = 0x11C5ECu;
            goto label_11c5ec;
        }
    }
    ctx->pc = 0x11C510u;
    // 0x11c510: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x11c510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x11c514: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x11c514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x11c518: 0x50430010  beql        $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x11C518u;
    {
        const bool branch_taken_0x11c518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c518) {
            ctx->pc = 0x11C51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C518u;
            // 0x11c51c: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C55Cu;
            goto label_11c55c;
        }
    }
    ctx->pc = 0x11C520u;
    // 0x11c520: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11C520u;
    {
        const bool branch_taken_0x11c520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c520) {
            ctx->pc = 0x11C524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C520u;
            // 0x11c524: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C54Cu;
            goto label_11c54c;
        }
    }
    ctx->pc = 0x11C528u;
    // 0x11c528: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x11c528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x11c52c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11c52cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11c530: 0xc600076c  lwc1        $f0, 0x76C($s0)
    ctx->pc = 0x11c530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c534: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11c534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11c538: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11c538u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11c53c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11c53cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11c540: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11C540u;
    SET_GPR_U32(ctx, 31, 0x11C548u);
    ctx->pc = 0x11C544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C540u;
    // 0x11c544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11C540u, 0x11C548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C548u;
label_11c548:
    // 0x11c548: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11c548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_11c54c:
    // 0x11c54c: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x11c54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x11c550: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11C550u;
    SET_GPR_U32(ctx, 31, 0x11C558u);
    ctx->pc = 0x11C554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C550u;
    // 0x11c554: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11C550u, 0x11C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C558u;
label_11c558:
    // 0x11c558: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11c558u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_11c55c:
    // 0x11c55c: 0x1c400017  bgtz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x11C55Cu;
    {
        const bool branch_taken_0x11c55c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x11C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C55Cu;
        // 0x11c560: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c55c) {
            ctx->pc = 0x11C5BCu;
            goto label_11c5bc;
        }
    }
    ctx->pc = 0x11C564u;
    // 0x11c564: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x11c564u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x11c568: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x11c568u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x11c56c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x11c56cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x11c570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c574: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x11c574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x11c578: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11c578u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c57c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11c57cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c580: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11c580u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c584: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11c584u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c588: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11c588u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c58c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11C58Cu;
    SET_GPR_U32(ctx, 31, 0x11C594u);
    ctx->pc = 0x11C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C58Cu;
    // 0x11c590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11C58Cu, 0x11C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C594u;
label_11c594:
    // 0x11c594: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x11C594u;
    SET_GPR_U32(ctx, 31, 0x11C59Cu);
    ctx->pc = 0x11C598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C594u;
    // 0x11c598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x11C594u, 0x11C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C59Cu;
label_11c59c:
    // 0x11c59c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11c59cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11c5a0: 0x2405fc18  addiu       $a1, $zero, -0x3E8
    ctx->pc = 0x11c5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x11c5a4: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11C5A4u;
    SET_GPR_U32(ctx, 31, 0x11C5ACu);
    ctx->pc = 0x11C5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C5A4u;
    // 0x11c5a8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11C5A4u, 0x11C5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5ACu;
label_11c5ac:
    // 0x11c5ac: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x11c5acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x11c5b0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11c5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11c5b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11C5B4u;
    {
        const bool branch_taken_0x11c5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5B4u;
        // 0x11c5b8: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c5b4) {
            ctx->pc = 0x11C5E0u;
            goto label_11c5e0;
        }
    }
    ctx->pc = 0x11C5BCu;
label_11c5bc:
    // 0x11c5bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5c0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11c5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11c5c4: 0x240600d7  addiu       $a2, $zero, 0xD7
    ctx->pc = 0x11c5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x11c5c8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11c5c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11c5ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11c5d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11c5d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5d8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11C5D8u;
    SET_GPR_U32(ctx, 31, 0x11C5E0u);
    ctx->pc = 0x11C5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C5D8u;
    // 0x11c5dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11C5D8u, 0x11C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5E0u;
label_11c5e0:
    // 0x11c5e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5e4: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11C5E4u;
    SET_GPR_U32(ctx, 31, 0x11C5ECu);
    ctx->pc = 0x11C5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C5E4u;
    // 0x11c5e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11C5E4u, 0x11C5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C5ECu;
label_11c5ec:
    // 0x11c5ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11c5ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11c5f0:
    // 0x11c5f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11c5f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c5f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11c5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c5f8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x11c5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11c5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x11C5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C5FCu;
        // 0x11c600: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C604u;
    // 0x11c604: 0x0  nop
    ctx->pc = 0x11c604u;
    // NOP
    ctx->pc = 0x11c608u;
}
