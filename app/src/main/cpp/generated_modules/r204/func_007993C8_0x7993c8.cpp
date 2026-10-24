#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r204_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r204
{
// Function: func_007993C8
// Address: 0x7993c8 - 0x7996c8
void func_007993C8_0x7993c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007993C8_0x7993c8");
#endif

    switch (ctx->pc) {
        case 0x799418u: goto label_799418;
        case 0x799430u: goto label_799430;
        case 0x799458u: goto label_799458;
        case 0x799488u: goto label_799488;
        case 0x7994c0u: goto label_7994c0;
        case 0x7994d4u: goto label_7994d4;
        case 0x7994f0u: goto label_7994f0;
        case 0x799514u: goto label_799514;
        case 0x799530u: goto label_799530;
        case 0x799540u: goto label_799540;
        case 0x79954cu: goto label_79954c;
        case 0x799558u: goto label_799558;
        case 0x799564u: goto label_799564;
        case 0x799570u: goto label_799570;
        case 0x79957cu: goto label_79957c;
        case 0x79959cu: goto label_79959c;
        case 0x7995bcu: goto label_7995bc;
        case 0x7995c4u: goto label_7995c4;
        case 0x7995d8u: goto label_7995d8;
        case 0x7995e8u: goto label_7995e8;
        case 0x7995f8u: goto label_7995f8;
        case 0x799610u: goto label_799610;
        case 0x799640u: goto label_799640;
        case 0x799670u: goto label_799670;
        case 0x799690u: goto label_799690;
        case 0x79969cu: goto label_79969c;
        default: break;
    }

    ctx->pc = 0x7993c8u;

    // 0x7993c8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x7993c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x7993cc: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7993ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7993d0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x7993d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x7993d4: 0x8c43b000  lw          $v1, -0x5000($v0)
    ctx->pc = 0x7993d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79B000u));
    // 0x7993d8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x7993d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993dc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x7993dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x7993e0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x7993e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x7993e4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x7993e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x7993e8: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x7993ec: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x7993ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x7993f0: 0x3c12005f  lui         $s2, 0x5F
    ctx->pc = 0x7993f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
    // 0x7993f4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x7993f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x7993f8: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
    // 0x7993fc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x7993fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x799400: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
    // 0x799404: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x799404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x799408: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x799408u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x79940c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79940cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x799410: 0xc0a4230  jal         func_2908C0
    ctx->pc = 0x799410u;
    SET_GPR_U32(ctx, 31, 0x799418u);
    ctx->pc = 0x799414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799410u;
    // 0x799414: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2908C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2908C0u, 0x799410u, 0x799418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799418u;
label_799418:
    // 0x799418: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x799418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79941c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799420: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x799420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x799424: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799428: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799428u;
    SET_GPR_U32(ctx, 31, 0x799430u);
    ctx->pc = 0x79942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799428u;
    // 0x79942c: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799428u, 0x799430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799430u;
label_799430:
    // 0x799430: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799434: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x799438: 0x8044af28  lb          $a0, -0x50D8($v0)
    ctx->pc = 0x799438u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79AF28u));
    // 0x79943c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79943cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799440: 0x2446af28  addiu       $a2, $v0, -0x50D8
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946600));
    // 0x799444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799448: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79944c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79944Cu;
    {
        const bool branch_taken_0x79944c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79944Cu;
        // 0x799450: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79944c) {
            ctx->pc = 0x799480u;
            goto label_799480;
        }
    }
    ctx->pc = 0x799454u;
    // 0x799454: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799454u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799458:
    // 0x799458: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79945c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79945cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799460: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799464: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799468: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799468u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79946c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79946Cu;
    {
        const bool branch_taken_0x79946c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79946Cu;
        // 0x799470: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79946c) {
            ctx->pc = 0x799480u;
            goto label_799480;
        }
    }
    ctx->pc = 0x799474u;
    // 0x799474: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799474u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799478: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799478u;
    {
        const bool branch_taken_0x799478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799478) {
            ctx->pc = 0x79947Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799478u;
            // 0x79947c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799458;
        }
    }
    ctx->pc = 0x799480u;
label_799480:
    // 0x799480: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799480u;
    SET_GPR_U32(ctx, 31, 0x799488u);
    ctx->pc = 0x799484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799480u;
    // 0x799484: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799480u, 0x799488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799488u;
label_799488:
    // 0x799488: 0x1680001b  bnez        $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x799488u;
    {
        const bool branch_taken_0x799488 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x79948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799488u;
        // 0x79948c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799488) {
            ctx->pc = 0x7994F8u;
            goto label_7994f8;
        }
    }
    ctx->pc = 0x799490u;
    // 0x799490: 0x8e428658  lw          $v0, -0x79A8($s2)
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x799494: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799498: 0x4600017  bltz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x799498u;
    {
        const bool branch_taken_0x799498 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x79949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799498u;
        // 0x79949c: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799498) {
            ctx->pc = 0x7994F8u;
            goto label_7994f8;
        }
    }
    ctx->pc = 0x7994A0u;
    // 0x7994a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7994a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994a4: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x7994a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x7994a8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7994ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7994acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7994b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994b4: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x7994b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x7994b8: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x7994B8u;
    SET_GPR_U32(ctx, 31, 0x7994C0u);
    ctx->pc = 0x7994BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994B8u;
    // 0x7994bc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x7994B8u, 0x7994C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994C0u;
label_7994c0:
    // 0x7994c0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7994c4: 0x8ec42f84  lw          $a0, 0x2F84($s6)
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
    // 0x7994c8: 0x24a59a48  addiu       $a1, $a1, -0x65B8
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941256));
    // 0x7994cc: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7994CCu;
    SET_GPR_U32(ctx, 31, 0x7994D4u);
    ctx->pc = 0x7994D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994CCu;
    // 0x7994d0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7994CCu, 0x7994D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994D4u;
label_7994d4:
    // 0x7994d4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7994D4u;
    {
        const bool branch_taken_0x7994d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D4u;
        // 0x7994d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994d4) {
            ctx->pc = 0x7994E8u;
            goto label_7994e8;
        }
    }
    ctx->pc = 0x7994DCu;
    // 0x7994dc: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x7994dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x7994e0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x7994e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x7994e4: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x7994e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_7994e8:
    // 0x7994e8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7994E8u;
    SET_GPR_U32(ctx, 31, 0x7994F0u);
    ctx->pc = 0x7994ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E8u;
    // 0x7994ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7994E8u, 0x7994F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994F0u;
label_7994f0:
    // 0x7994f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x7994F0u;
    {
        const bool branch_taken_0x7994f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F0u;
        // 0x7994f4: 0x8e428658  lw          $v0, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994f0) {
            ctx->pc = 0x799518u;
            goto label_799518;
        }
    }
    ctx->pc = 0x7994F8u;
label_7994f8:
    // 0x7994f8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7994F8u;
    {
        const bool branch_taken_0x7994f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F8u;
        // 0x7994fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994f8) {
            ctx->pc = 0x79950Cu;
            goto label_79950c;
        }
    }
    ctx->pc = 0x799500u;
    // 0x799500: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x799504: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x799504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x799508: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x799508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_79950c:
    // 0x79950c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79950Cu;
    SET_GPR_U32(ctx, 31, 0x799514u);
    ctx->pc = 0x799510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79950Cu;
    // 0x799510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79950Cu, 0x799514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799514u;
label_799514:
    // 0x799514: 0x8e428658  lw          $v0, -0x79A8($s2)
    ctx->pc = 0x799514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
label_799518:
    // 0x799518: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x79951c: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79951Cu;
    {
        const bool branch_taken_0x79951c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x799520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79951Cu;
        // 0x799520: 0x2670ea60  addiu       $s0, $s3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79951c) {
            ctx->pc = 0x799534u;
            goto label_799534;
        }
    }
    ctx->pc = 0x799524u;
    // 0x799524: 0x2664ea60  addiu       $a0, $s3, -0x15A0
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
    // 0x799528: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799528u;
    SET_GPR_U32(ctx, 31, 0x799530u);
    ctx->pc = 0x79952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799528u;
    // 0x79952c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799528u, 0x799530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799530u;
label_799530:
    // 0x799530: 0x2670ea60  addiu       $s0, $s3, -0x15A0
    ctx->pc = 0x799530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
label_799534:
    // 0x799534: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x799534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799538: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799538u;
    SET_GPR_U32(ctx, 31, 0x799540u);
    ctx->pc = 0x79953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799538u;
    // 0x79953c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799538u, 0x799540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799540u;
label_799540:
    // 0x799540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799544: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799544u;
    SET_GPR_U32(ctx, 31, 0x79954Cu);
    ctx->pc = 0x799548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799544u;
    // 0x799548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799544u, 0x79954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79954Cu;
label_79954c:
    // 0x79954c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79954cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799550: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799550u;
    SET_GPR_U32(ctx, 31, 0x799558u);
    ctx->pc = 0x799554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799550u;
    // 0x799554: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799550u, 0x799558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799558u;
label_799558:
    // 0x799558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79955c: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x79955Cu;
    SET_GPR_U32(ctx, 31, 0x799564u);
    ctx->pc = 0x799560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79955Cu;
    // 0x799560: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79955Cu, 0x799564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799564u;
label_799564:
    // 0x799564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799568: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x799568u;
    SET_GPR_U32(ctx, 31, 0x799570u);
    ctx->pc = 0x79956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799568u;
    // 0x79956c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799568u, 0x799570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799570u;
label_799570:
    // 0x799570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799574: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x799574u;
    SET_GPR_U32(ctx, 31, 0x79957Cu);
    ctx->pc = 0x799578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799574u;
    // 0x799578: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x799574u, 0x79957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79957Cu;
label_79957c:
    // 0x79957c: 0x8e438658  lw          $v1, -0x79A8($s2)
    ctx->pc = 0x79957cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x799580: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x799584: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799588: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x799588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x79958c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79958Cu;
    {
        const bool branch_taken_0x79958c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79958Cu;
        // 0x799590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79958c) {
            ctx->pc = 0x7995BCu;
            goto label_7995bc;
        }
    }
    ctx->pc = 0x799594u;
    // 0x799594: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799594u;
    SET_GPR_U32(ctx, 31, 0x79959Cu);
    ctx->pc = 0x799598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799594u;
    // 0x799598: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799594u, 0x79959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79959Cu;
label_79959c:
    // 0x79959c: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79959cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x7995a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7995a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7995a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995a8: 0x24e7a828  addiu       $a3, $a3, -0x57D8
    ctx->pc = 0x7995a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944808));
    // 0x7995ac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7995acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7995b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7995b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995b4: 0xc0b09d4  jal         func_2C2750
    ctx->pc = 0x7995B4u;
    SET_GPR_U32(ctx, 31, 0x7995BCu);
    ctx->pc = 0x7995B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995B4u;
    // 0x7995b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2750u, 0x7995B4u, 0x7995BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995BCu;
label_7995bc:
    // 0x7995bc: 0xc1e6b16  jal         func_79AC58
    ctx->pc = 0x7995BCu;
    SET_GPR_U32(ctx, 31, 0x7995C4u);
    ctx->pc = 0x7995C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995BCu;
    // 0x7995c0: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AC58u, 0x7995BCu, 0x7995C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995C4u;
label_7995c4:
    // 0x7995c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7995c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7995c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995cc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7995d0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7995D0u;
    SET_GPR_U32(ctx, 31, 0x7995D8u);
    ctx->pc = 0x7995D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995D0u;
    // 0x7995d4: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7995D0u, 0x7995D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995D8u;
label_7995d8:
    // 0x7995d8: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x7995d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x7995dc: 0x24724c58  addiu       $s2, $v1, 0x4C58
    ctx->pc = 0x7995dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x7995e0: 0x26a5af30  addiu       $a1, $s5, -0x50D0
    ctx->pc = 0x7995e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946608));
    // 0x7995e4: 0x0  nop
    ctx->pc = 0x7995e4u;
    // NOP
label_7995e8:
    // 0x7995e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x7995e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7995ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995f0: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x7995F0u;
    SET_GPR_U32(ctx, 31, 0x7995F8u);
    ctx->pc = 0x7995F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995F0u;
    // 0x7995f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x7995F0u, 0x7995F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995F8u;
label_7995f8:
    // 0x7995f8: 0x83a30010  lb          $v1, 0x10($sp)
    ctx->pc = 0x7995f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7995fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7995fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799600: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x799600u;
    {
        const bool branch_taken_0x799600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799600u;
        // 0x799604: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799600) {
            ctx->pc = 0x799638u;
            goto label_799638;
        }
    }
    ctx->pc = 0x799608u;
    // 0x799608: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x799608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79960c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79960cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799610:
    // 0x799610: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799610u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799614: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799618: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79961c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79961cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799620: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799620u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799624: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799624u;
    {
        const bool branch_taken_0x799624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799624u;
        // 0x799628: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799624) {
            ctx->pc = 0x799638u;
            goto label_799638;
        }
    }
    ctx->pc = 0x79962Cu;
    // 0x79962c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799630: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799630u;
    {
        const bool branch_taken_0x799630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799630) {
            ctx->pc = 0x799634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799630u;
            // 0x799634: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799610;
        }
    }
    ctx->pc = 0x799638u;
label_799638:
    // 0x799638: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799638u;
    SET_GPR_U32(ctx, 31, 0x799640u);
    ctx->pc = 0x79963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799638u;
    // 0x79963c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799638u, 0x799640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799640u;
label_799640:
    // 0x799640: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x799640u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799644: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x799644u;
    {
        const bool branch_taken_0x799644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799644u;
        // 0x799648: 0x2a02001d  slti        $v0, $s0, 0x1D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)29) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799644) {
            ctx->pc = 0x79965Cu;
            goto label_79965c;
        }
    }
    ctx->pc = 0x79964Cu;
    // 0x79964c: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x79964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x799650: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x799650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x799654: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x799654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x799658: 0x2a02001d  slti        $v0, $s0, 0x1D
    ctx->pc = 0x799658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)29) ? 1 : 0);
label_79965c:
    // 0x79965c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x79965Cu;
    {
        const bool branch_taken_0x79965c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79965Cu;
        // 0x799660: 0x26a5af30  addiu       $a1, $s5, -0x50D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79965c) {
            ctx->pc = 0x7995E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995e8;
        }
    }
    ctx->pc = 0x799664u;
    // 0x799664: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799668: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799668u;
    SET_GPR_U32(ctx, 31, 0x799670u);
    ctx->pc = 0x79966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799668u;
    // 0x79966c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799668u, 0x799670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799670u;
label_799670:
    // 0x799670: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x799670u;
    {
        const bool branch_taken_0x799670 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x799674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799670u;
        // 0x799674: 0x8ec22f84  lw          $v0, 0x2F84($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799670) {
            ctx->pc = 0x799694u;
            goto label_799694;
        }
    }
    ctx->pc = 0x799678u;
    // 0x799678: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79967c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79967cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799680: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x799680u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x799684: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799688: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799688u;
    SET_GPR_U32(ctx, 31, 0x799690u);
    ctx->pc = 0x79968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799688u;
    // 0x79968c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799688u, 0x799690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799690u;
label_799690:
    // 0x799690: 0x8ec22f84  lw          $v0, 0x2F84($s6)
    ctx->pc = 0x799690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12164)));
label_799694:
    // 0x799694: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799694u;
    SET_GPR_U32(ctx, 31, 0x79969Cu);
    ctx->pc = 0x799698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799694u;
    // 0x799698: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799694u, 0x79969Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79969Cu;
label_79969c:
    // 0x79969c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x79969cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7996a0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x7996a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7996a4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x7996a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7996a8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x7996a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7996ac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x7996acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7996b0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x7996b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7996b4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x7996b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7996b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7996b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7996bc: 0x3e00008  jr          $ra
    ctx->pc = 0x7996BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7996C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996BCu;
        // 0x7996c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7996C4u;
    // 0x7996c4: 0x0  nop
    ctx->pc = 0x7996c4u;
    // NOP
    ctx->pc = 0x7996c8u;
}
} // namespace gh_r204
