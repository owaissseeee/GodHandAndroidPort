#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: Initialize__5cR020
// Address: 0x7992f8 - 0x799600
void Initialize__5cR020_0x7992f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__5cR020_0x7992f8");
#endif

    switch (ctx->pc) {
        case 0x7993d4u: goto label_7993d4;
        case 0x799404u: goto label_799404;
        case 0x799410u: goto label_799410;
        case 0x799428u: goto label_799428;
        case 0x799438u: goto label_799438;
        case 0x799448u: goto label_799448;
        case 0x799458u: goto label_799458;
        case 0x799468u: goto label_799468;
        case 0x799478u: goto label_799478;
        case 0x799484u: goto label_799484;
        case 0x79949cu: goto label_79949c;
        case 0x7994b8u: goto label_7994b8;
        case 0x7994c0u: goto label_7994c0;
        case 0x799578u: goto label_799578;
        case 0x7995a0u: goto label_7995a0;
        default: break;
    }

    ctx->pc = 0x7992f8u;

    // 0x7992f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x7992fc: 0x3c0a0074  lui         $t2, 0x74
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)116 << 16));
    // 0x799300: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x799300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x799304: 0x25497a84  addiu       $t1, $t2, 0x7A84
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 31364));
    // 0x799308: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x799308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x79930c: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x79930cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x799310: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x799310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x799314: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x799318: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x799318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x79931c: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x799320: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x799320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x799324: 0x3c122000  lui         $s2, 0x2000
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)8192 << 16));
    // 0x799328: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x799328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x79932c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x799330: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x799330u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799334: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799338: 0x8d22fffc  lw          $v0, -0x4($t1)
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x79933c: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x799340: 0x8d23fff4  lw          $v1, -0xC($t1)
    ctx->pc = 0x799340u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x799344: 0x26710080  addiu       $s1, $s3, 0x80
    ctx->pc = 0x799344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x799348: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x799348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x79934c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x79934cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x799350: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x799350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x799354: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x799354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x799358: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x799358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x79935c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x79935cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x799360: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x799364: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x799364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x799368: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x799368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x79936c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79936cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x799370: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x799370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x799374: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x799374u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x799378: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x79937c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79937cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x799380: 0x8d487a84  lw          $t0, 0x7A84($t2)
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x747A84u));
    // 0x799384: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x799384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x799388: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x79938c: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x799390: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x799390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x799394: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x799394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x799398: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x799398u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x79939c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x79939cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x7993a0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x7993a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x7993a4: 0x35084000  ori         $t0, $t0, 0x4000
    ctx->pc = 0x7993a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x7993a8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x7993ac: 0x8ca42388  lw          $a0, 0x2388($a1)
    ctx->pc = 0x7993acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x7993b0: 0x3c06007a  lui         $a2, 0x7A
    ctx->pc = 0x7993b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)122 << 16));
    // 0x7993b4: 0xad487a84  sw          $t0, 0x7A84($t2)
    ctx->pc = 0x7993b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x747A84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A84u, _value); } while (0);
    // 0x7993b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7993b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993bc: 0xad23fff4  sw          $v1, -0xC($t1)
    ctx->pc = 0x7993bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x747A78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A78u, _value); } while (0);
    // 0x7993c0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7993c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7993c4: 0x24c6cb20  addiu       $a2, $a2, -0x34E0
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953760));
    // 0x7993c8: 0xad22fffc  sw          $v0, -0x4($t1)
    ctx->pc = 0x7993c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A80u, _value); } while (0);
    // 0x7993cc: 0xc0ab3ea  jal         func_2ACFA8
    ctx->pc = 0x7993CCu;
    SET_GPR_U32(ctx, 31, 0x7993D4u);
    ctx->pc = 0x7993D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993CCu;
    // 0x7993d0: 0xad34fa2c  sw          $s4, -0x5D4($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294965804), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA8u, 0x7993CCu, 0x7993D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D4u;
label_7993d4:
    // 0x7993d4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x7993d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x7993d8: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x7993d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x7993dc: 0x26103f20  addiu       $s0, $s0, 0x3F20
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16160));
    // 0x7993e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7993e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7993e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7993e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x7993ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993f0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x7993f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993f4: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
    // 0x7993f8: 0x266600d0  addiu       $a2, $s3, 0xD0
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    // 0x7993fc: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x7993FCu;
    SET_GPR_U32(ctx, 31, 0x799404u);
    ctx->pc = 0x799400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993FCu;
    // 0x799400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x7993FCu, 0x799404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799404u;
label_799404:
    // 0x799404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799408: 0xc080458  jal         func_201160
    ctx->pc = 0x799408u;
    SET_GPR_U32(ctx, 31, 0x799410u);
    ctx->pc = 0x79940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799408u;
    // 0x79940c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201160u, 0x799408u, 0x799410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799410u;
label_799410:
    // 0x799410: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799414: 0x8e6600d0  lw          $a2, 0xD0($s3)
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x799418: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x799418u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x79941c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799420: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x799420u;
    SET_GPR_U32(ctx, 31, 0x799428u);
    ctx->pc = 0x799424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799420u;
    // 0x799424: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x799420u, 0x799428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799428u;
label_799428:
    // 0x799428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79942c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799430: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x799430u;
    SET_GPR_U32(ctx, 31, 0x799438u);
    ctx->pc = 0x799434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799430u;
    // 0x799434: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x799430u, 0x799438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799438u;
label_799438:
    // 0x799438: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79943c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79943cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799440: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x799440u;
    SET_GPR_U32(ctx, 31, 0x799448u);
    ctx->pc = 0x799444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799440u;
    // 0x799444: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x799440u, 0x799448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799448u;
label_799448:
    // 0x799448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79944c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79944cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799450: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x799450u;
    SET_GPR_U32(ctx, 31, 0x799458u);
    ctx->pc = 0x799454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799450u;
    // 0x799454: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x799450u, 0x799458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799458u;
label_799458:
    // 0x799458: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79945c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79945cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799460: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x799460u;
    SET_GPR_U32(ctx, 31, 0x799468u);
    ctx->pc = 0x799464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799460u;
    // 0x799464: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x799460u, 0x799468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799468u;
label_799468:
    // 0x799468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79946c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79946cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799470: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x799470u;
    SET_GPR_U32(ctx, 31, 0x799478u);
    ctx->pc = 0x799474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799470u;
    // 0x799474: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x799470u, 0x799478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799478u;
label_799478:
    // 0x799478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79947c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79947Cu;
    SET_GPR_U32(ctx, 31, 0x799484u);
    ctx->pc = 0x799480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79947Cu;
    // 0x799480: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79947Cu, 0x799484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799484u;
label_799484:
    // 0x799484: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x799488: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x79948c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79948cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799490: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x799490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x799494: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x799494u;
    SET_GPR_U32(ctx, 31, 0x79949Cu);
    ctx->pc = 0x799498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799494u;
    // 0x799498: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x799494u, 0x79949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79949Cu;
label_79949c:
    // 0x79949c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x7994a0: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x7994a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x7994a4: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x7994a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x7994a8: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x7994a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x7994ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7994acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994b0: 0xc07e634  jal         func_1F98D0
    ctx->pc = 0x7994B0u;
    SET_GPR_U32(ctx, 31, 0x7994B8u);
    ctx->pc = 0x7994B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994B0u;
    // 0x7994b4: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F98D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F98D0u, 0x7994B0u, 0x7994B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B8u;
label_7994b8:
    // 0x7994b8: 0xc07e99e  jal         func_1FA678
    ctx->pc = 0x7994B8u;
    SET_GPR_U32(ctx, 31, 0x7994C0u);
    ctx->pc = 0x7994BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994B8u;
    // 0x7994bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x7994B8u, 0x7994C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994C0u;
label_7994c0:
    // 0x7994c0: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x7994c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x7994c4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x7994c8: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x7994c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    // 0x7994cc: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x7994d0: 0x210ba  dsrl        $v0, $v0, 2
    ctx->pc = 0x7994d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 2);
    // 0x7994d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7994d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7994d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7994D8u;
    {
        const bool branch_taken_0x7994d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D8u;
        // 0x7994dc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994d8) {
            ctx->pc = 0x7994E8u;
            goto label_7994e8;
        }
    }
    ctx->pc = 0x7994E0u;
    // 0x7994e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7994E0u;
    {
        const bool branch_taken_0x7994e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994E0u;
        // 0x7994e4: 0xae740014  sw          $s4, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994e0) {
            ctx->pc = 0x7994ECu;
            goto label_7994ec;
        }
    }
    ctx->pc = 0x7994E8u;
label_7994e8:
    // 0x7994e8: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x7994e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_7994ec:
    // 0x7994ec: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x7994ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x7994f0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x7994f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x7994f4: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x7994f8: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x7994fc: 0x24070023  addiu       $a3, $zero, 0x23
    ctx->pc = 0x7994fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x799500: 0x24080024  addiu       $t0, $zero, 0x24
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x799504: 0x24090025  addiu       $t1, $zero, 0x25
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x799508: 0xae630050  sw          $v1, 0x50($s3)
    ctx->pc = 0x799508u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 3));
    // 0x79950c: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x79950cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
    // 0x799510: 0x24847a24  addiu       $a0, $a0, 0x7A24
    ctx->pc = 0x799510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31268));
    // 0x799514: 0xae650054  sw          $a1, 0x54($s3)
    ctx->pc = 0x799514u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 5));
    // 0x799518: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x799518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x79951c: 0xae660058  sw          $a2, 0x58($s3)
    ctx->pc = 0x79951cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 6));
    // 0x799520: 0xae67005c  sw          $a3, 0x5C($s3)
    ctx->pc = 0x799520u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 7));
    // 0x799524: 0xae680060  sw          $t0, 0x60($s3)
    ctx->pc = 0x799524u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 8));
    // 0x799528: 0xae690064  sw          $t1, 0x64($s3)
    ctx->pc = 0x799528u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 9));
    // 0x79952c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79952cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799530: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x799534: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799534u;
    {
        const bool branch_taken_0x799534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799534u;
        // 0x799538: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799534) {
            ctx->pc = 0x799548u;
            goto label_799548;
        }
    }
    ctx->pc = 0x79953Cu;
    // 0x79953c: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x799540: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799540u;
    {
        const bool branch_taken_0x799540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799540u;
        // 0x799544: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799540) {
            ctx->pc = 0x799554u;
            goto label_799554;
        }
    }
    ctx->pc = 0x799548u;
label_799548:
    // 0x799548: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x799548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79954c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799550: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x799550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_799554:
    // 0x799554: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x799554u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x799558: 0xae63006c  sw          $v1, 0x6C($s3)
    ctx->pc = 0x799558u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 3));
    // 0x79955c: 0xae640070  sw          $a0, 0x70($s3)
    ctx->pc = 0x79955cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 4));
    // 0x799560: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799568: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79956c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79956cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799570: 0xc0b456a  jal         func_2D15A8
    ctx->pc = 0x799570u;
    SET_GPR_U32(ctx, 31, 0x799578u);
    ctx->pc = 0x799574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799570u;
    // 0x799574: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D15A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D15A8u, 0x799570u, 0x799578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799578u;
label_799578:
    // 0x799578: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x799578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x79957c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x79957cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799580: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x799584: 0xae64000c  sw          $a0, 0xC($s3)
    ctx->pc = 0x799584u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 4));
    // 0x799588: 0xa66300d8  sh          $v1, 0xD8($s3)
    ctx->pc = 0x799588u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 216), (uint16_t)GPR_U32(ctx, 3));
    // 0x79958c: 0x245074a0  addiu       $s0, $v0, 0x74A0
    ctx->pc = 0x79958cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x799590: 0xae6000d4  sw          $zero, 0xD4($s3)
    ctx->pc = 0x799590u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 0));
    // 0x799594: 0x266400dc  addiu       $a0, $s3, 0xDC
    ctx->pc = 0x799594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 220));
    // 0x799598: 0xc0afa64  jal         func_2BE990
    ctx->pc = 0x799598u;
    SET_GPR_U32(ctx, 31, 0x7995A0u);
    ctx->pc = 0x79959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799598u;
    // 0x79959c: 0x8e0505a4  lw          $a1, 0x5A4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1444)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE990u, 0x799598u, 0x7995A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995A0u;
label_7995a0:
    // 0x7995a0: 0x8e020584  lw          $v0, 0x584($s0)
    ctx->pc = 0x7995a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
    // 0x7995a4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x7995a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x7995a8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7995A8u;
    {
        const bool branch_taken_0x7995a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7995ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995A8u;
        // 0x7995ac: 0xa2600003  sb          $zero, 0x3($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995a8) {
            ctx->pc = 0x7995D0u;
            goto label_7995d0;
        }
    }
    ctx->pc = 0x7995B0u;
    // 0x7995b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7995b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7995b4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x7995b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x7995b8: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x7995b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x7995bc: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x7995bcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x7995c0: 0x8e020584  lw          $v0, 0x584($s0)
    ctx->pc = 0x7995c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
    // 0x7995c4: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x7995c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x7995c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7995C8u;
    {
        const bool branch_taken_0x7995c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995C8u;
        // 0x7995cc: 0xae020584  sw          $v0, 0x584($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995c8) {
            ctx->pc = 0x7995DCu;
            goto label_7995dc;
        }
    }
    ctx->pc = 0x7995D0u;
label_7995d0:
    // 0x7995d0: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x7995d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x7995d4: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x7995d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x7995d8: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x7995d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_7995dc:
    // 0x7995dc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x7995dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7995e0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x7995e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7995e4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x7995e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7995e8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x7995e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7995ec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x7995ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7995f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7995f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7995f4: 0x3e00008  jr          $ra
    ctx->pc = 0x7995F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F4u;
        // 0x7995f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995FCu;
    // 0x7995fc: 0x0  nop
    ctx->pc = 0x7995fcu;
    // NOP
    ctx->pc = 0x799600u;
}
} // namespace gh_r020
