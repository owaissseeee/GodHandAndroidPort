#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r603_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r603
{
// Function: func_00799308
// Address: 0x799308 - 0x799520
void func_00799308_0x799308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799308_0x799308");
#endif

    switch (ctx->pc) {
        case 0x799358u: goto label_799358;
        case 0x799368u: goto label_799368;
        case 0x799390u: goto label_799390;
        case 0x7993c8u: goto label_7993c8;
        case 0x7993d4u: goto label_7993d4;
        case 0x7993e0u: goto label_7993e0;
        case 0x7993f8u: goto label_7993f8;
        case 0x799414u: goto label_799414;
        case 0x79942cu: goto label_79942c;
        case 0x799438u: goto label_799438;
        case 0x799440u: goto label_799440;
        case 0x799464u: goto label_799464;
        case 0x799484u: goto label_799484;
        case 0x7994b4u: goto label_7994b4;
        case 0x7994d0u: goto label_7994d0;
        case 0x7994f0u: goto label_7994f0;
        default: break;
    }

    ctx->pc = 0x799308u;

    // 0x799308: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x79930c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79930cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799310: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x799310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x799314: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x799314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x799318: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x79931c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x79931cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x799320: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x799320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x799324: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x799324u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799328: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x799328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x79932c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x79932cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x799330: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x799330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x799334: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x799334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x799338: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x799338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x79933c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x79933cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x799340: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799340u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799344: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799348: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x799348u;
    {
        const bool branch_taken_0x799348 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x79934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799348u;
        // 0x79934c: 0x3c15003c  lui         $s5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799348) {
            ctx->pc = 0x799390u;
            goto label_799390;
        }
    }
    ctx->pc = 0x799350u;
    // 0x799350: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x799350u;
    SET_GPR_U32(ctx, 31, 0x799358u);
    ctx->pc = 0x799354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799350u;
    // 0x799354: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x799350u, 0x799358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799358u;
label_799358:
    // 0x799358: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79935c: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x799360: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x799360u;
    SET_GPR_U32(ctx, 31, 0x799368u);
    ctx->pc = 0x799364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799360u;
    // 0x799364: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x799360u, 0x799368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799368u;
label_799368:
    // 0x799368: 0x8ee38658  lw          $v1, -0x79A8($s7)
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294936152)));
    // 0x79936c: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x79936cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x799370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799374: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799378: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79937c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79937cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799380: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x799380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x799384: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x799384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x799388: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799388u;
    SET_GPR_U32(ctx, 31, 0x799390u);
    ctx->pc = 0x79938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799388u;
    // 0x79938c: 0x8d04264c  lw          $a0, 0x264C($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799388u, 0x799390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799390u;
label_799390:
    // 0x799390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799394: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x799394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799398: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x799398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79939c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79939cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7993a0: 0xa3a20008  sb          $v0, 0x8($sp)
    ctx->pc = 0x7993a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x7993a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x7993a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993a8: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x7993a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x7993ac: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x7993acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x7993b0: 0xa3a40018  sb          $a0, 0x18($sp)
    ctx->pc = 0x7993b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x7993b4: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
    // 0x7993b8: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x7993b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x7993bc: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x7993bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993c0: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x7993c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x7993c4: 0x0  nop
    ctx->pc = 0x7993c4u;
    // NOP
label_7993c8:
    // 0x7993c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7993c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993cc: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x7993CCu;
    SET_GPR_U32(ctx, 31, 0x7993D4u);
    ctx->pc = 0x7993D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993CCu;
    // 0x7993d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x7993CCu, 0x7993D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D4u;
label_7993d4:
    // 0x7993d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7993d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993d8: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x7993D8u;
    SET_GPR_U32(ctx, 31, 0x7993E0u);
    ctx->pc = 0x7993DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D8u;
    // 0x7993dc: 0x240509c1  addiu       $a1, $zero, 0x9C1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2497));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x7993D8u, 0x7993E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993E0u;
label_7993e0:
    // 0x7993e0: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x7993e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x7993e4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x7993E4u;
    {
        const bool branch_taken_0x7993e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7993E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993E4u;
        // 0x7993e8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993e4) {
            ctx->pc = 0x7993C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993c8;
        }
    }
    ctx->pc = 0x7993ECu;
    // 0x7993ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7993ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993f0: 0xc1e6612  jal         func_799848
    ctx->pc = 0x7993F0u;
    SET_GPR_U32(ctx, 31, 0x7993F8u);
    ctx->pc = 0x7993F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F0u;
    // 0x7993f4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799848u, 0x7993F0u, 0x7993F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993F8u;
label_7993f8:
    // 0x7993f8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x7993fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x799400: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x799404: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x799408: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79940c: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x79940Cu;
    SET_GPR_U32(ctx, 31, 0x799414u);
    ctx->pc = 0x799410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79940Cu;
    // 0x799410: 0x3a22021  addu        $a0, $sp, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79940Cu, 0x799414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799414u;
label_799414:
    // 0x799414: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x799414u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79941c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79941cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799420: 0x240603d9  addiu       $a2, $zero, 0x3D9
    ctx->pc = 0x799420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
    // 0x799424: 0xc0a48fa  jal         func_2923E8
    ctx->pc = 0x799424u;
    SET_GPR_U32(ctx, 31, 0x79942Cu);
    ctx->pc = 0x799428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799424u;
    // 0x799428: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2923E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2923E8u, 0x799424u, 0x79942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79942Cu;
label_79942c:
    // 0x79942c: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x799430: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x799430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799434: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x799434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799438:
    // 0x799438: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799438u;
    SET_GPR_U32(ctx, 31, 0x799440u);
    ctx->pc = 0x79943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799438u;
    // 0x79943c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799438u, 0x799440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799440u;
label_799440:
    // 0x799440: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x799440u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799444: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x799444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799448: 0x8e44a300  lw          $a0, -0x5D00($s2)
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943488)));
    // 0x79944c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x79944cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799450: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799454: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799458: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x79945c: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x79945Cu;
    SET_GPR_U32(ctx, 31, 0x799464u);
    ctx->pc = 0x799460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79945Cu;
    // 0x799460: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x79945Cu, 0x799464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799464u;
label_799464:
    // 0x799464: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x799464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x799468: 0x8e44a300  lw          $a0, -0x5D00($s2)
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943488)));
    // 0x79946c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x79946cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799470: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799470u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799474: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x799474u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x799478: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x79947c: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x79947Cu;
    SET_GPR_U32(ctx, 31, 0x799484u);
    ctx->pc = 0x799480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79947Cu;
    // 0x799480: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x79947Cu, 0x799484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799484u;
label_799484:
    // 0x799484: 0x8e42a300  lw          $v0, -0x5D00($s2)
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943488)));
    // 0x799488: 0x26631002  addiu       $v1, $s3, 0x1002
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4098));
    // 0x79948c: 0x26c4ea60  addiu       $a0, $s6, -0x15A0
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961760));
    // 0x799490: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799494: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x799494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x799498: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79949c: 0xa443005e  sh          $v1, 0x5E($v0)
    ctx->pc = 0x79949cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x7994a0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7994a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7994a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x7994a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x7994a8: 0x8e45a300  lw          $a1, -0x5D00($s2)
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943488)));
    // 0x7994ac: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x7994ACu;
    SET_GPR_U32(ctx, 31, 0x7994B4u);
    ctx->pc = 0x7994B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994ACu;
    // 0x7994b0: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x7994ACu, 0x7994B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B4u;
label_7994b4:
    // 0x7994b4: 0x2e620005  sltiu       $v0, $s3, 0x5
    ctx->pc = 0x7994b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x7994b8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x7994B8u;
    {
        const bool branch_taken_0x7994b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7994BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994B8u;
        // 0x7994bc: 0x2610009c  addiu       $s0, $s0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994b8) {
            ctx->pc = 0x799438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799438;
        }
    }
    ctx->pc = 0x7994C0u;
    // 0x7994c0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7994c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7994c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994c8: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x7994C8u;
    SET_GPR_U32(ctx, 31, 0x7994D0u);
    ctx->pc = 0x7994CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994C8u;
    // 0x7994cc: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x7994C8u, 0x7994D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994D0u;
label_7994d0:
    // 0x7994d0: 0x8ee48658  lw          $a0, -0x79A8($s7)
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294936152)));
    // 0x7994d4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x7994d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x7994d8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7994d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7994dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7994dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7994e0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7994e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x7994e4: 0x8ea32f84  lw          $v1, 0x2F84($s5)
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x7994e8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7994E8u;
    SET_GPR_U32(ctx, 31, 0x7994F0u);
    ctx->pc = 0x7994ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E8u;
    // 0x7994ec: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7994E8u, 0x7994F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994F0u;
label_7994f0:
    // 0x7994f0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x7994f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x7994f4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x7994f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x7994f8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x7994f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x7994fc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x7994fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799500: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x799500u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799504: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x799504u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799508: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x799508u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79950c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x79950cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799510: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x799510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799514: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x799514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799518: 0x3e00008  jr          $ra
    ctx->pc = 0x799518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799518u;
        // 0x79951c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799520u;
}
} // namespace gh_r603
