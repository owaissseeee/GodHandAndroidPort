#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r605_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r605
{
// Function: func_007992E8
// Address: 0x7992e8 - 0x7995c0
void func_007992E8_0x7992e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007992E8_0x7992e8");
#endif

    switch (ctx->pc) {
        case 0x799330u: goto label_799330;
        case 0x799340u: goto label_799340;
        case 0x799368u: goto label_799368;
        case 0x799374u: goto label_799374;
        case 0x7993a8u: goto label_7993a8;
        case 0x7993d8u: goto label_7993d8;
        case 0x7993ecu: goto label_7993ec;
        case 0x79941cu: goto label_79941c;
        case 0x799428u: goto label_799428;
        case 0x799438u: goto label_799438;
        case 0x799440u: goto label_799440;
        case 0x799454u: goto label_799454;
        case 0x799460u: goto label_799460;
        case 0x799480u: goto label_799480;
        case 0x7994b0u: goto label_7994b0;
        case 0x7994c8u: goto label_7994c8;
        case 0x799518u: goto label_799518;
        case 0x799524u: goto label_799524;
        case 0x79952cu: goto label_79952c;
        case 0x79954cu: goto label_79954c;
        case 0x799568u: goto label_799568;
        case 0x79958cu: goto label_79958c;
        case 0x799598u: goto label_799598;
        default: break;
    }

    ctx->pc = 0x7992e8u;

    // 0x7992e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x7992ec: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x7992f0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x7992f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x7992f4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x7992f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x7992f8: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x7992fc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x7992fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x799300: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x799300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x799304: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x799304u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799308: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x799308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x79930c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x79930cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x799310: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x799310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x799314: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x799318: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79931c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799320: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x799320u;
    {
        const bool branch_taken_0x799320 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x799324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799320u;
        // 0x799324: 0x3c13003c  lui         $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799320) {
            ctx->pc = 0x799368u;
            goto label_799368;
        }
    }
    ctx->pc = 0x799328u;
    // 0x799328: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x799328u;
    SET_GPR_U32(ctx, 31, 0x799330u);
    ctx->pc = 0x79932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799328u;
    // 0x79932c: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x799328u, 0x799330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799330u;
label_799330:
    // 0x799330: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799334: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x799338: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x799338u;
    SET_GPR_U32(ctx, 31, 0x799340u);
    ctx->pc = 0x79933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799338u;
    // 0x79933c: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x799338u, 0x799340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799340u;
label_799340:
    // 0x799340: 0x8ec38658  lw          $v1, -0x79A8($s6)
    ctx->pc = 0x799340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936152)));
    // 0x799344: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x799344u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x799348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79934c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79934cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799350: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799354: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799358: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x799358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x79935c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79935cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x799360: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799360u;
    SET_GPR_U32(ctx, 31, 0x799368u);
    ctx->pc = 0x799364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799360u;
    // 0x799364: 0x8d04264c  lw          $a0, 0x264C($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799360u, 0x799368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799368u;
label_799368:
    // 0x799368: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79936c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79936Cu;
    SET_GPR_U32(ctx, 31, 0x799374u);
    ctx->pc = 0x799370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79936Cu;
    // 0x799370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79936Cu, 0x799374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799374u;
label_799374:
    // 0x799374: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799374u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x799378: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79937c: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x799380: 0x8044a0a0  lb          $a0, -0x5F60($v0)
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79A0A0u));
    // 0x799384: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x799384u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799388: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x799388u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79938c: 0x2446a0a0  addiu       $a2, $v0, -0x5F60
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942880));
    // 0x799390: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x799390u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799394: 0x24684c38  addiu       $t0, $v1, 0x4C38
    ctx->pc = 0x799394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19512));
    // 0x799398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79939c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79939Cu;
    {
        const bool branch_taken_0x79939c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79939Cu;
        // 0x7993a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79939c) {
            ctx->pc = 0x7993D0u;
            goto label_7993d0;
        }
    }
    ctx->pc = 0x7993A4u;
    // 0x7993a4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7993a8:
    // 0x7993a8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7993ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7993acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7993b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7993b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7993b4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7993b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7993b8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7993b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7993bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7993BCu;
    {
        const bool branch_taken_0x7993bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993BCu;
        // 0x7993c0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993bc) {
            ctx->pc = 0x7993D0u;
            goto label_7993d0;
        }
    }
    ctx->pc = 0x7993C4u;
    // 0x7993c4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7993c8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7993C8u;
    {
        const bool branch_taken_0x7993c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7993c8) {
            ctx->pc = 0x7993CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7993C8u;
            // 0x7993cc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7993A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993a8;
        }
    }
    ctx->pc = 0x7993D0u;
label_7993d0:
    // 0x7993d0: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x7993D0u;
    SET_GPR_U32(ctx, 31, 0x7993D8u);
    ctx->pc = 0x7993D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D0u;
    // 0x7993d4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x7993D0u, 0x7993D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D8u;
label_7993d8:
    // 0x7993d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7993d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993dc: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x7993DCu;
    {
        const bool branch_taken_0x7993dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993DCu;
        // 0x7993e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993dc) {
            ctx->pc = 0x79940Cu;
            goto label_79940c;
        }
    }
    ctx->pc = 0x7993E4u;
    // 0x7993e4: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x7993E4u;
    SET_GPR_U32(ctx, 31, 0x7993ECu);
    ctx->pc = 0x7993E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993E4u;
    // 0x7993e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x7993E4u, 0x7993ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993ECu;
label_7993ec:
    // 0x7993ec: 0x8c440380  lw          $a0, 0x380($v0)
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x7993f0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7993f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x7993f4: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x7993f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x7993f8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x7993f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x7993fc: 0xac440380  sw          $a0, 0x380($v0)
    ctx->pc = 0x7993fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 4));
    // 0x799400: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x799404: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x799404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x799408: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x799408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_79940c:
    // 0x79940c: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79940cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x799410: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799414: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x799414u;
    SET_GPR_U32(ctx, 31, 0x79941Cu);
    ctx->pc = 0x799418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799414u;
    // 0x799418: 0x240503d2  addiu       $a1, $zero, 0x3D2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 978));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799414u, 0x79941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79941Cu;
label_79941c:
    // 0x79941c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79941Cu;
    {
        const bool branch_taken_0x79941c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79941c) {
            ctx->pc = 0x799438u;
            goto label_799438;
        }
    }
    ctx->pc = 0x799424u;
    // 0x799424: 0x0  nop
    ctx->pc = 0x799424u;
    // NOP
label_799428:
    // 0x799428: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79942c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799430: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799430u;
    SET_GPR_U32(ctx, 31, 0x799438u);
    ctx->pc = 0x799434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799430u;
    // 0x799434: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799430u, 0x799438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799438u;
label_799438:
    // 0x799438: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799438u;
    SET_GPR_U32(ctx, 31, 0x799440u);
    ctx->pc = 0x79943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799438u;
    // 0x79943c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799438u, 0x799440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799440u;
label_799440:
    // 0x799440: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799440u;
    {
        const bool branch_taken_0x799440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799440u;
        // 0x799444: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799440) {
            ctx->pc = 0x799428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799428;
        }
    }
    ctx->pc = 0x799448u;
    // 0x799448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79944c: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x79944Cu;
    SET_GPR_U32(ctx, 31, 0x799454u);
    ctx->pc = 0x799450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79944Cu;
    // 0x799450: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x79944Cu, 0x799454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799454u;
label_799454:
    // 0x799454: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799458: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799458u;
    SET_GPR_U32(ctx, 31, 0x799460u);
    ctx->pc = 0x79945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799458u;
    // 0x79945c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799458u, 0x799460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799460u;
label_799460:
    // 0x799460: 0x8242a0a0  lb          $v0, -0x5F60($s2)
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294942880)));
    // 0x799464: 0x26884c38  addiu       $t0, $s4, 0x4C38
    ctx->pc = 0x799464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 19512));
    // 0x799468: 0x2643a0a0  addiu       $v1, $s2, -0x5F60
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942880));
    // 0x79946c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79946cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799470: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799470u;
    {
        const bool branch_taken_0x799470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799470u;
        // 0x799474: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799470) {
            ctx->pc = 0x7994A8u;
            goto label_7994a8;
        }
    }
    ctx->pc = 0x799478u;
    // 0x799478: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79947c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799480:
    // 0x799480: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799480u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799484: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799488: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79948c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79948cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799490: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799490u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799494: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799494u;
    {
        const bool branch_taken_0x799494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799494u;
        // 0x799498: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799494) {
            ctx->pc = 0x7994A8u;
            goto label_7994a8;
        }
    }
    ctx->pc = 0x79949Cu;
    // 0x79949c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7994a0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7994A0u;
    {
        const bool branch_taken_0x7994a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7994a0) {
            ctx->pc = 0x7994A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7994A0u;
            // 0x7994a4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799480;
        }
    }
    ctx->pc = 0x7994A8u;
label_7994a8:
    // 0x7994a8: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x7994A8u;
    SET_GPR_U32(ctx, 31, 0x7994B0u);
    ctx->pc = 0x7994ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994A8u;
    // 0x7994ac: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x7994A8u, 0x7994B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B0u;
label_7994b0:
    // 0x7994b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7994b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994b4: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x7994B4u;
    {
        const bool branch_taken_0x7994b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994B4u;
        // 0x7994b8: 0x8ec38658  lw          $v1, -0x79A8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994b4) {
            ctx->pc = 0x7994F4u;
            goto label_7994f4;
        }
    }
    ctx->pc = 0x7994BCu;
    // 0x7994bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7994bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994c0: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x7994C0u;
    SET_GPR_U32(ctx, 31, 0x7994C8u);
    ctx->pc = 0x7994C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994C0u;
    // 0x7994c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x7994C0u, 0x7994C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994C8u;
label_7994c8:
    // 0x7994c8: 0x8c440380  lw          $a0, 0x380($v0)
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x7994cc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x7994d0: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x7994d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x7994d4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x7994d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x7994d8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x7994d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x7994dc: 0x34a5fffd  ori         $a1, $a1, 0xFFFD
    ctx->pc = 0x7994dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65533);
    // 0x7994e0: 0xac440380  sw          $a0, 0x380($v0)
    ctx->pc = 0x7994e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 4));
    // 0x7994e4: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x7994e8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x7994e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x7994ec: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x7994ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x7994f0: 0x8ec38658  lw          $v1, -0x79A8($s6)
    ctx->pc = 0x7994f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936152)));
label_7994f4:
    // 0x7994f4: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x7994f8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x7994fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799500: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799504: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79950c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79950cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x799510: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799510u;
    SET_GPR_U32(ctx, 31, 0x799518u);
    ctx->pc = 0x799514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799510u;
    // 0x799514: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799510u, 0x799518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799518u;
label_799518:
    // 0x799518: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79951c: 0xc0b0a02  jal         func_2C2808
    ctx->pc = 0x79951Cu;
    SET_GPR_U32(ctx, 31, 0x799524u);
    ctx->pc = 0x799520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79951Cu;
    // 0x799520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2808u, 0x79951Cu, 0x799524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799524u;
label_799524:
    // 0x799524: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799524u;
    SET_GPR_U32(ctx, 31, 0x79952Cu);
    ctx->pc = 0x799528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799524u;
    // 0x799528: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799524u, 0x79952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79952Cu;
label_79952c:
    // 0x79952c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79952cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799530: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x799530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799534: 0x8e24a180  lw          $a0, -0x5E80($s1)
    ctx->pc = 0x799534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943104)));
    // 0x799538: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x799538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79953c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799540: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799544: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x799544u;
    SET_GPR_U32(ctx, 31, 0x79954Cu);
    ctx->pc = 0x799548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799544u;
    // 0x799548: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x799544u, 0x79954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79954Cu;
label_79954c:
    // 0x79954c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x799550: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799554: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x799554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799558: 0x8e24a180  lw          $a0, -0x5E80($s1)
    ctx->pc = 0x799558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943104)));
    // 0x79955c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79955cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799560: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x799560u;
    SET_GPR_U32(ctx, 31, 0x799568u);
    ctx->pc = 0x799564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799560u;
    // 0x799564: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x799560u, 0x799568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799568u;
label_799568:
    // 0x799568: 0x8e23a180  lw          $v1, -0x5E80($s1)
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943104)));
    // 0x79956c: 0x24021001  addiu       $v0, $zero, 0x1001
    ctx->pc = 0x79956cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x799570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799574: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799578: 0xa462005e  sh          $v0, 0x5E($v1)
    ctx->pc = 0x799578u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x79957c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79957cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799580: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799584: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x799584u;
    SET_GPR_U32(ctx, 31, 0x79958Cu);
    ctx->pc = 0x799588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799584u;
    // 0x799588: 0x8e25a180  lw          $a1, -0x5E80($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x799584u, 0x79958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79958Cu;
label_79958c:
    // 0x79958c: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799590: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799590u;
    SET_GPR_U32(ctx, 31, 0x799598u);
    ctx->pc = 0x799594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799590u;
    // 0x799594: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799590u, 0x799598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799598u;
label_799598:
    // 0x799598: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x799598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79959c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x79959cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7995a0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x7995a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7995a4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x7995a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7995a8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x7995a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7995ac: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x7995acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7995b0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x7995b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7995b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7995b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7995b8: 0x3e00008  jr          $ra
    ctx->pc = 0x7995B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B8u;
        // 0x7995bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995C0u;
}
} // namespace gh_r605
