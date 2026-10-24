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

// Function: func_001AC370
// Address: 0x1ac370 - 0x1ac838
void func_001AC370_0x1ac370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AC370_0x1ac370");
#endif

    switch (ctx->pc) {
        case 0x1ac3dcu: goto label_1ac3dc;
        case 0x1ac3ecu: goto label_1ac3ec;
        case 0x1ac3fcu: goto label_1ac3fc;
        case 0x1ac418u: goto label_1ac418;
        case 0x1ac43cu: goto label_1ac43c;
        case 0x1ac44cu: goto label_1ac44c;
        case 0x1ac474u: goto label_1ac474;
        case 0x1ac484u: goto label_1ac484;
        case 0x1ac4a0u: goto label_1ac4a0;
        case 0x1ac4b0u: goto label_1ac4b0;
        case 0x1ac4c4u: goto label_1ac4c4;
        case 0x1ac4d4u: goto label_1ac4d4;
        case 0x1ac4e8u: goto label_1ac4e8;
        case 0x1ac4f8u: goto label_1ac4f8;
        case 0x1ac508u: goto label_1ac508;
        case 0x1ac518u: goto label_1ac518;
        case 0x1ac540u: goto label_1ac540;
        case 0x1ac558u: goto label_1ac558;
        case 0x1ac568u: goto label_1ac568;
        case 0x1ac578u: goto label_1ac578;
        case 0x1ac588u: goto label_1ac588;
        case 0x1ac598u: goto label_1ac598;
        case 0x1ac5dcu: goto label_1ac5dc;
        case 0x1ac5fcu: goto label_1ac5fc;
        case 0x1ac60cu: goto label_1ac60c;
        case 0x1ac628u: goto label_1ac628;
        case 0x1ac638u: goto label_1ac638;
        case 0x1ac648u: goto label_1ac648;
        case 0x1ac658u: goto label_1ac658;
        case 0x1ac668u: goto label_1ac668;
        case 0x1ac6acu: goto label_1ac6ac;
        case 0x1ac6c0u: goto label_1ac6c0;
        case 0x1ac75cu: goto label_1ac75c;
        case 0x1ac774u: goto label_1ac774;
        case 0x1ac78cu: goto label_1ac78c;
        case 0x1ac7e4u: goto label_1ac7e4;
        case 0x1ac7fcu: goto label_1ac7fc;
        case 0x1ac814u: goto label_1ac814;
        default: break;
    }

    ctx->pc = 0x1ac370u;

    // 0x1ac370: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ac370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ac374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac378: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ac378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ac37c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ac380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac384: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x1ac384u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1ac388: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1ac388u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1ac38c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1ac38cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ac390: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ac390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ac394: 0x8e110608  lw          $s1, 0x608($s0)
    ctx->pc = 0x1ac394u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x1ac398: 0x1222006b  beq         $s1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1AC398u;
    {
        const bool branch_taken_0x1ac398 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC398u;
        // 0x1ac39c: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac398) {
            ctx->pc = 0x1AC548u;
            goto label_1ac548;
        }
    }
    ctx->pc = 0x1AC3A0u;
    // 0x1ac3a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AC3A0u;
    {
        const bool branch_taken_0x1ac3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3A0u;
        // 0x1ac3a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3a0) {
            ctx->pc = 0x1AC3B8u;
            goto label_1ac3b8;
        }
    }
    ctx->pc = 0x1AC3A8u;
    // 0x1ac3a8: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AC3A8u;
    {
        const bool branch_taken_0x1ac3a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac3a8) {
            ctx->pc = 0x1AC3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC3A8u;
            // 0x1ac3ac: 0x9202060c  lbu         $v0, 0x60C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC3C8u;
            goto label_1ac3c8;
        }
    }
    ctx->pc = 0x1AC3B0u;
    // 0x1ac3b0: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x1AC3B0u;
    {
        const bool branch_taken_0x1ac3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3B0u;
        // 0x1ac3b4: 0x8602054a  lh          $v0, 0x54A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3b0) {
            ctx->pc = 0x1AC6C4u;
            goto label_1ac6c4;
        }
    }
    ctx->pc = 0x1AC3B8u;
label_1ac3b8:
    // 0x1ac3b8: 0x12220096  beq         $s1, $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x1AC3B8u;
    {
        const bool branch_taken_0x1ac3b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3B8u;
        // 0x1ac3bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3b8) {
            ctx->pc = 0x1AC614u;
            goto label_1ac614;
        }
    }
    ctx->pc = 0x1AC3C0u;
    // 0x1ac3c0: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x1AC3C0u;
    {
        const bool branch_taken_0x1ac3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3C0u;
        // 0x1ac3c4: 0x8602054a  lh          $v0, 0x54A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3c0) {
            ctx->pc = 0x1AC6C4u;
            goto label_1ac6c4;
        }
    }
    ctx->pc = 0x1AC3C8u;
label_1ac3c8:
    // 0x1ac3c8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AC3C8u;
    {
        const bool branch_taken_0x1ac3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3C8u;
        // 0x1ac3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3c8) {
            ctx->pc = 0x1AC40Cu;
            goto label_1ac40c;
        }
    }
    ctx->pc = 0x1AC3D0u;
    // 0x1ac3d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ac3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac3d4: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC3D4u;
    SET_GPR_U32(ctx, 31, 0x1AC3DCu);
    ctx->pc = 0x1AC3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC3D4u;
    // 0x1ac3d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC3D4u, 0x1AC3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3DCu;
label_1ac3dc:
    // 0x1ac3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac3e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ac3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ac3e4: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC3E4u;
    SET_GPR_U32(ctx, 31, 0x1AC3ECu);
    ctx->pc = 0x1AC3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC3E4u;
    // 0x1ac3e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC3E4u, 0x1AC3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3ECu;
label_1ac3ec:
    // 0x1ac3ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac3f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac3f4: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC3F4u;
    SET_GPR_U32(ctx, 31, 0x1AC3FCu);
    ctx->pc = 0x1AC3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC3F4u;
    // 0x1ac3f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC3F4u, 0x1AC3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3FCu;
label_1ac3fc:
    // 0x1ac3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac400: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ac400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ac404: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1AC404u;
    {
        const bool branch_taken_0x1ac404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC404u;
        // 0x1ac408: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac404) {
            ctx->pc = 0x1AC4BCu;
            goto label_1ac4bc;
        }
    }
    ctx->pc = 0x1AC40Cu;
label_1ac40c:
    // 0x1ac40c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ac40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac410: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC410u;
    SET_GPR_U32(ctx, 31, 0x1AC418u);
    ctx->pc = 0x1AC414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC410u;
    // 0x1ac414: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC410u, 0x1AC418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC418u;
label_1ac418:
    // 0x1ac418: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x1ac418u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x1ac41c: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1AC41Cu;
    {
        const bool branch_taken_0x1ac41c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1AC420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC41Cu;
        // 0x1ac420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac41c) {
            ctx->pc = 0x1AC4DCu;
            goto label_1ac4dc;
        }
    }
    ctx->pc = 0x1AC424u;
    // 0x1ac424: 0x8e030618  lw          $v1, 0x618($s0)
    ctx->pc = 0x1ac424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1560)));
    // 0x1ac428: 0x28620014  slti        $v0, $v1, 0x14
    ctx->pc = 0x1ac428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1ac42c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AC42Cu;
    {
        const bool branch_taken_0x1ac42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC42Cu;
        // 0x1ac430: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac42c) {
            ctx->pc = 0x1AC45Cu;
            goto label_1ac45c;
        }
    }
    ctx->pc = 0x1AC434u;
    // 0x1ac434: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC434u;
    SET_GPR_U32(ctx, 31, 0x1AC43Cu);
    ctx->pc = 0x1AC438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC434u;
    // 0x1ac438: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC434u, 0x1AC43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC43Cu;
label_1ac43c:
    // 0x1ac43c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac440: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac444: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC444u;
    SET_GPR_U32(ctx, 31, 0x1AC44Cu);
    ctx->pc = 0x1AC448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC444u;
    // 0x1ac448: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC444u, 0x1AC44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC44Cu;
label_1ac44c:
    // 0x1ac44c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac450: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ac450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ac454: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1AC454u;
    {
        const bool branch_taken_0x1ac454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC454u;
        // 0x1ac458: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac454) {
            ctx->pc = 0x1AC4BCu;
            goto label_1ac4bc;
        }
    }
    ctx->pc = 0x1AC45Cu;
label_1ac45c:
    // 0x1ac45c: 0x28620028  slti        $v0, $v1, 0x28
    ctx->pc = 0x1ac45cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x1ac460: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AC460u;
    {
        const bool branch_taken_0x1ac460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC460u;
        // 0x1ac464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac460) {
            ctx->pc = 0x1AC494u;
            goto label_1ac494;
        }
    }
    ctx->pc = 0x1AC468u;
    // 0x1ac468: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ac468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ac46c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC46Cu;
    SET_GPR_U32(ctx, 31, 0x1AC474u);
    ctx->pc = 0x1AC470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC46Cu;
    // 0x1ac470: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC46Cu, 0x1AC474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC474u;
label_1ac474:
    // 0x1ac474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac478: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac47c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC47Cu;
    SET_GPR_U32(ctx, 31, 0x1AC484u);
    ctx->pc = 0x1AC480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC47Cu;
    // 0x1ac480: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC47Cu, 0x1AC484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC484u;
label_1ac484:
    // 0x1ac484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac488: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ac488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ac48c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AC48Cu;
    {
        const bool branch_taken_0x1ac48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC48Cu;
        // 0x1ac490: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac48c) {
            ctx->pc = 0x1AC4BCu;
            goto label_1ac4bc;
        }
    }
    ctx->pc = 0x1AC494u;
label_1ac494:
    // 0x1ac494: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ac494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ac498: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC498u;
    SET_GPR_U32(ctx, 31, 0x1AC4A0u);
    ctx->pc = 0x1AC49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC498u;
    // 0x1ac49c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC498u, 0x1AC4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC4A0u;
label_1ac4a0:
    // 0x1ac4a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac4a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac4a8: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC4A8u;
    SET_GPR_U32(ctx, 31, 0x1AC4B0u);
    ctx->pc = 0x1AC4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC4A8u;
    // 0x1ac4ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC4A8u, 0x1AC4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC4B0u;
label_1ac4b0:
    // 0x1ac4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac4b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ac4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ac4b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ac4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac4bc:
    // 0x1ac4bc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC4BCu;
    SET_GPR_U32(ctx, 31, 0x1AC4C4u);
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC4BCu, 0x1AC4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC4C4u;
label_1ac4c4:
    // 0x1ac4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac4c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ac4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ac4cc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC4CCu;
    SET_GPR_U32(ctx, 31, 0x1AC4D4u);
    ctx->pc = 0x1AC4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC4CCu;
    // 0x1ac4d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC4CCu, 0x1AC4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC4D4u;
label_1ac4d4:
    // 0x1ac4d4: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1AC4D4u;
    {
        const bool branch_taken_0x1ac4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC4D4u;
        // 0x1ac4d8: 0x8602054a  lh          $v0, 0x54A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac4d4) {
            ctx->pc = 0x1AC6C4u;
            goto label_1ac6c4;
        }
    }
    ctx->pc = 0x1AC4DCu;
label_1ac4dc:
    // 0x1ac4dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ac4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ac4e0: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC4E0u;
    SET_GPR_U32(ctx, 31, 0x1AC4E8u);
    ctx->pc = 0x1AC4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC4E0u;
    // 0x1ac4e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC4E0u, 0x1AC4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC4E8u;
label_1ac4e8:
    // 0x1ac4e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac4ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac4f0: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC4F0u;
    SET_GPR_U32(ctx, 31, 0x1AC4F8u);
    ctx->pc = 0x1AC4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC4F0u;
    // 0x1ac4f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC4F0u, 0x1AC4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC4F8u;
label_1ac4f8:
    // 0x1ac4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac4fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ac4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ac500: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC500u;
    SET_GPR_U32(ctx, 31, 0x1AC508u);
    ctx->pc = 0x1AC504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC500u;
    // 0x1ac504: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC500u, 0x1AC508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC508u;
label_1ac508:
    // 0x1ac508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac50c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ac50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ac510: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC510u;
    SET_GPR_U32(ctx, 31, 0x1AC518u);
    ctx->pc = 0x1AC514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC510u;
    // 0x1ac514: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC510u, 0x1AC518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC518u;
label_1ac518:
    // 0x1ac518: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1ac518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1ac51c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ac51cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ac520: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ac520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ac524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac528: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1ac528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1ac52c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ac52cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ac530: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ac530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ac534: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ac534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ac538: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x1AC538u;
    SET_GPR_U32(ctx, 31, 0x1AC540u);
    ctx->pc = 0x1AC53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC538u;
    // 0x1ac53c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x1AC538u, 0x1AC540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC540u;
label_1ac540:
    // 0x1ac540: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1AC540u;
    {
        const bool branch_taken_0x1ac540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC540u;
        // 0x1ac544: 0x8602054a  lh          $v0, 0x54A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac540) {
            ctx->pc = 0x1AC6C4u;
            goto label_1ac6c4;
        }
    }
    ctx->pc = 0x1AC548u;
label_1ac548:
    // 0x1ac548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac54c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ac54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac550: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC550u;
    SET_GPR_U32(ctx, 31, 0x1AC558u);
    ctx->pc = 0x1AC554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC550u;
    // 0x1ac554: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC550u, 0x1AC558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC558u;
label_1ac558:
    // 0x1ac558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac55c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ac55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ac560: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC560u;
    SET_GPR_U32(ctx, 31, 0x1AC568u);
    ctx->pc = 0x1AC564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC560u;
    // 0x1ac564: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC560u, 0x1AC568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC568u;
label_1ac568:
    // 0x1ac568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac56c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac570: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC570u;
    SET_GPR_U32(ctx, 31, 0x1AC578u);
    ctx->pc = 0x1AC574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC570u;
    // 0x1ac574: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC570u, 0x1AC578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC578u;
label_1ac578:
    // 0x1ac578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac57c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ac57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ac580: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC580u;
    SET_GPR_U32(ctx, 31, 0x1AC588u);
    ctx->pc = 0x1AC584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC580u;
    // 0x1ac584: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC580u, 0x1AC588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC588u;
label_1ac588:
    // 0x1ac588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac58c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ac58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ac590: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC590u;
    SET_GPR_U32(ctx, 31, 0x1AC598u);
    ctx->pc = 0x1AC594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC590u;
    // 0x1ac594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC590u, 0x1AC598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC598u;
label_1ac598:
    // 0x1ac598: 0xc6000604  lwc1        $f0, 0x604($s0)
    ctx->pc = 0x1ac598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac59c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1ac59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1ac5a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ac5a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ac5a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ac5a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ac5a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ac5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ac5ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ac5acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ac5b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ac5b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ac5b4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1ac5b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ac5b8: 0x0  nop
    ctx->pc = 0x1ac5b8u;
    // NOP
    // 0x1ac5bc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1AC5BCu;
    {
        const bool branch_taken_0x1ac5bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AC5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5BCu;
        // 0x1ac5c0: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac5bc) {
            ctx->pc = 0x1AC5E0u;
            goto label_1ac5e0;
        }
    }
    ctx->pc = 0x1AC5C4u;
    // 0x1ac5c4: 0x8e040624  lw          $a0, 0x624($s0)
    ctx->pc = 0x1ac5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1572)));
    // 0x1ac5c8: 0xe6020604  swc1        $f2, 0x604($s0)
    ctx->pc = 0x1ac5c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
    // 0x1ac5cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC5CCu;
    {
        const bool branch_taken_0x1ac5cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC5CCu;
        // 0x1ac5d0: 0xa211060c  sb          $s1, 0x60C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac5cc) {
            ctx->pc = 0x1AC5DCu;
            goto label_1ac5dc;
        }
    }
    ctx->pc = 0x1AC5D4u;
    // 0x1ac5d4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1AC5D4u;
    SET_GPR_U32(ctx, 31, 0x1AC5DCu);
    ctx->pc = 0x1AC5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5D4u;
    // 0x1ac5d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1AC5D4u, 0x1AC5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC5DCu;
label_1ac5dc:
    // 0x1ac5dc: 0xae000608  sw          $zero, 0x608($s0)
    ctx->pc = 0x1ac5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 0));
label_1ac5e0:
    // 0x1ac5e0: 0xc6000604  lwc1        $f0, 0x604($s0)
    ctx->pc = 0x1ac5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac5e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ac5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ac5ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ac5ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ac5f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ac5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac5f4: 0xc06dc88  jal         func_1B7220
    ctx->pc = 0x1AC5F4u;
    SET_GPR_U32(ctx, 31, 0x1AC5FCu);
    ctx->pc = 0x1AC5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5F4u;
    // 0x1ac5f8: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7220u, 0x1AC5F4u, 0x1AC5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC5FCu;
label_1ac5fc:
    // 0x1ac5fc: 0xc60c0604  lwc1        $f12, 0x604($s0)
    ctx->pc = 0x1ac5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ac600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac604: 0xc06dc88  jal         func_1B7220
    ctx->pc = 0x1AC604u;
    SET_GPR_U32(ctx, 31, 0x1AC60Cu);
    ctx->pc = 0x1AC608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC604u;
    // 0x1ac608: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7220u, 0x1AC604u, 0x1AC60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC60Cu;
label_1ac60c:
    // 0x1ac60c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1AC60Cu;
    {
        const bool branch_taken_0x1ac60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC60Cu;
        // 0x1ac610: 0x8602054a  lh          $v0, 0x54A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac60c) {
            ctx->pc = 0x1AC6C4u;
            goto label_1ac6c4;
        }
    }
    ctx->pc = 0x1AC614u;
label_1ac614:
    // 0x1ac614: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ac614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac618: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ac618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ac61c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ac61cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ac620: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC620u;
    SET_GPR_U32(ctx, 31, 0x1AC628u);
    ctx->pc = 0x1AC624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC620u;
    // 0x1ac624: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC620u, 0x1AC628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC628u;
label_1ac628:
    // 0x1ac628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac62c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ac62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ac630: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC630u;
    SET_GPR_U32(ctx, 31, 0x1AC638u);
    ctx->pc = 0x1AC634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC630u;
    // 0x1ac634: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC630u, 0x1AC638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC638u;
label_1ac638:
    // 0x1ac638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac63c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac640: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC640u;
    SET_GPR_U32(ctx, 31, 0x1AC648u);
    ctx->pc = 0x1AC644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC640u;
    // 0x1ac644: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC640u, 0x1AC648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC648u;
label_1ac648:
    // 0x1ac648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac64c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ac64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ac650: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC650u;
    SET_GPR_U32(ctx, 31, 0x1AC658u);
    ctx->pc = 0x1AC654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC650u;
    // 0x1ac654: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC650u, 0x1AC658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC658u;
label_1ac658:
    // 0x1ac658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac65c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ac65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ac660: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1AC660u;
    SET_GPR_U32(ctx, 31, 0x1AC668u);
    ctx->pc = 0x1AC664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC660u;
    // 0x1ac664: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1AC660u, 0x1AC668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC668u;
label_1ac668:
    // 0x1ac668: 0xc6000604  lwc1        $f0, 0x604($s0)
    ctx->pc = 0x1ac668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac66c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1ac66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1ac670: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ac670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ac674: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ac674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ac678: 0x0  nop
    ctx->pc = 0x1ac678u;
    // NOP
    // 0x1ac67c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ac67cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ac680: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1ac680u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ac684: 0x0  nop
    ctx->pc = 0x1ac684u;
    // NOP
    // 0x1ac688: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC688u;
    {
        const bool branch_taken_0x1ac688 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AC68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC688u;
        // 0x1ac68c: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac688) {
            ctx->pc = 0x1AC69Cu;
            goto label_1ac69c;
        }
    }
    ctx->pc = 0x1AC690u;
    // 0x1ac690: 0xe6140604  swc1        $f20, 0x604($s0)
    ctx->pc = 0x1ac690u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
    // 0x1ac694: 0xa200060c  sb          $zero, 0x60C($s0)
    ctx->pc = 0x1ac694u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac698: 0xae000608  sw          $zero, 0x608($s0)
    ctx->pc = 0x1ac698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 0));
label_1ac69c:
    // 0x1ac69c: 0xc60c0604  lwc1        $f12, 0x604($s0)
    ctx->pc = 0x1ac69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ac6a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac6a4: 0xc06dc88  jal         func_1B7220
    ctx->pc = 0x1AC6A4u;
    SET_GPR_U32(ctx, 31, 0x1AC6ACu);
    ctx->pc = 0x1AC6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC6A4u;
    // 0x1ac6a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7220u, 0x1AC6A4u, 0x1AC6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC6ACu;
label_1ac6ac:
    // 0x1ac6ac: 0xc60c0604  lwc1        $f12, 0x604($s0)
    ctx->pc = 0x1ac6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ac6b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac6b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ac6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ac6b8: 0xc06dc88  jal         func_1B7220
    ctx->pc = 0x1AC6B8u;
    SET_GPR_U32(ctx, 31, 0x1AC6C0u);
    ctx->pc = 0x1AC6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC6B8u;
    // 0x1ac6bc: 0x460ca301  sub.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7220u, 0x1AC6B8u, 0x1AC6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC6C0u;
label_1ac6c0:
    // 0x1ac6c0: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x1ac6c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_1ac6c4:
    // 0x1ac6c4: 0x86030548  lh          $v1, 0x548($s0)
    ctx->pc = 0x1ac6c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x1ac6c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ac6cc: 0x0  nop
    ctx->pc = 0x1ac6ccu;
    // NOP
    // 0x1ac6d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ac6d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ac6d4: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1ac6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1ac6d8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ac6d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1ac6dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ac6dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ac6e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ac6e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac6e4: 0x0  nop
    ctx->pc = 0x1ac6e4u;
    // NOP
    // 0x1ac6e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ac6e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ac6ec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ac6ecu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x1ac6f0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1ac6f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ac6f4: 0x0  nop
    ctx->pc = 0x1ac6f4u;
    // NOP
    // 0x1ac6f8: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x1AC6F8u;
    {
        const bool branch_taken_0x1ac6f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AC6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6F8u;
        // 0x1ac6fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac6f8) {
            ctx->pc = 0x1AC794u;
            goto label_1ac794;
        }
    }
    ctx->pc = 0x1AC700u;
    // 0x1ac700: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ac700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ac704: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1ac704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1ac708: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1ac708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1ac70c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ac70cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1ac710: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ac710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ac714: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ac714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ac718: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x1ac718u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x1ac71c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1ac71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1ac720: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ac720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ac724: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ac724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ac728: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1ac728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1ac72c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ac72cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ac730: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1ac730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1ac734: 0x0  nop
    ctx->pc = 0x1ac734u;
    // NOP
    // 0x1ac738: 0x0  nop
    ctx->pc = 0x1ac738u;
    // NOP
    // 0x1ac73c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1ac73cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x1ac740: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1ac740u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1ac744: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x1ac744u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1ac748: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x1ac748u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x1ac74c: 0x4614b581  sub.s       $f22, $f22, $f20
    ctx->pc = 0x1ac74cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x1ac750: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1ac750u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1ac754: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x1AC754u;
    SET_GPR_U32(ctx, 31, 0x1AC75Cu);
    ctx->pc = 0x1AC758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC754u;
    // 0x1ac758: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x1AC754u, 0x1AC75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC75Cu;
label_1ac75c:
    // 0x1ac75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac760: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac764: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1ac764u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1ac768: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1ac768u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1ac76c: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x1AC76Cu;
    SET_GPR_U32(ctx, 31, 0x1AC774u);
    ctx->pc = 0x1AC770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC76Cu;
    // 0x1ac770: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x1AC76Cu, 0x1AC774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC774u;
label_1ac774:
    // 0x1ac774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac778: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1ac778u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1ac77c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1ac77cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1ac780: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1ac780u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1ac784: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x1AC784u;
    SET_GPR_U32(ctx, 31, 0x1AC78Cu);
    ctx->pc = 0x1AC788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC784u;
    // 0x1ac788: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x1AC784u, 0x1AC78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC78Cu;
label_1ac78c:
    // 0x1ac78c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1AC78Cu;
    {
        const bool branch_taken_0x1ac78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC78Cu;
        // 0x1ac790: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac78c) {
            ctx->pc = 0x1AC818u;
            goto label_1ac818;
        }
    }
    ctx->pc = 0x1AC794u;
label_1ac794:
    // 0x1ac794: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1ac794u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1ac798: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1ac798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1ac79c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ac79cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ac7a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ac7a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ac7a4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1ac7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1ac7a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ac7a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ac7ac: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1ac7acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1ac7b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ac7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ac7b4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1ac7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1ac7b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ac7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ac7bc: 0x0  nop
    ctx->pc = 0x1ac7bcu;
    // NOP
    // 0x1ac7c0: 0x0  nop
    ctx->pc = 0x1ac7c0u;
    // NOP
    // 0x1ac7c4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1ac7c4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x1ac7c8: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1ac7c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1ac7cc: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x1ac7ccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1ac7d0: 0x4616a500  add.s       $f20, $f20, $f22
    ctx->pc = 0x1ac7d0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
    // 0x1ac7d4: 0x4614ad41  sub.s       $f21, $f21, $f20
    ctx->pc = 0x1ac7d4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x1ac7d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ac7d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ac7dc: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x1AC7DCu;
    SET_GPR_U32(ctx, 31, 0x1AC7E4u);
    ctx->pc = 0x1AC7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC7DCu;
    // 0x1ac7e0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x1AC7DCu, 0x1AC7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC7E4u;
label_1ac7e4:
    // 0x1ac7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac7e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ac7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ac7ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ac7ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ac7f0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1ac7f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1ac7f4: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x1AC7F4u;
    SET_GPR_U32(ctx, 31, 0x1AC7FCu);
    ctx->pc = 0x1AC7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC7F4u;
    // 0x1ac7f8: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x1AC7F4u, 0x1AC7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC7FCu;
label_1ac7fc:
    // 0x1ac7fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac800: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ac800u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ac804: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1ac804u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1ac808: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1ac808u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1ac80c: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x1AC80Cu;
    SET_GPR_U32(ctx, 31, 0x1AC814u);
    ctx->pc = 0x1AC810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC80Cu;
    // 0x1ac810: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x1AC80Cu, 0x1AC814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC814u;
label_1ac814:
    // 0x1ac814: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ac814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac818:
    // 0x1ac818: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ac818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac81c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac820: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x1ac820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ac824: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1ac824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ac828: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1ac828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ac82c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC82Cu;
        // 0x1ac830: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC834u;
    // 0x1ac834: 0x0  nop
    ctx->pc = 0x1ac834u;
    // NOP
    ctx->pc = 0x1ac838u;
}
