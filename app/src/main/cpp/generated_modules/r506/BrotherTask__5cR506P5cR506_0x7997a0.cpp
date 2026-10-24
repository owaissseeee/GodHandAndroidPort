#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r506_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r506
{
// Function: BrotherTask__5cR506P5cR506
// Address: 0x7997a0 - 0x799928
void BrotherTask__5cR506P5cR506_0x7997a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BrotherTask__5cR506P5cR506_0x7997a0");
#endif

    switch (ctx->pc) {
        case 0x7997f8u: goto label_7997f8;
        case 0x799814u: goto label_799814;
        case 0x79981cu: goto label_79981c;
        case 0x799834u: goto label_799834;
        case 0x799848u: goto label_799848;
        case 0x799858u: goto label_799858;
        case 0x799864u: goto label_799864;
        case 0x799874u: goto label_799874;
        case 0x79987cu: goto label_79987c;
        case 0x799888u: goto label_799888;
        case 0x79989cu: goto label_79989c;
        case 0x7998a8u: goto label_7998a8;
        case 0x7998b4u: goto label_7998b4;
        case 0x7998c0u: goto label_7998c0;
        case 0x7998ccu: goto label_7998cc;
        case 0x7998d4u: goto label_7998d4;
        case 0x7998e4u: goto label_7998e4;
        case 0x7998f0u: goto label_7998f0;
        case 0x7998fcu: goto label_7998fc;
        case 0x799908u: goto label_799908;
        default: break;
    }

    ctx->pc = 0x7997a0u;

    // 0x7997a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7997a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7997a4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7997a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x7997a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7997a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7997ac: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x7997acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x7997b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7997b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7997b4: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x7997b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x7997b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7997b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7997bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7997bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997c0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7997c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7997c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7997c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7997c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7997cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7997ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997d0: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x7997d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x7997d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7997d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997d8: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x7997d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x7997dc: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x7997dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x7997e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7997e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7997e4: 0x2650ee00  addiu       $s0, $s2, -0x1200
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962688));
    // 0x7997e8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x7997e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x7997ec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x7997ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x7997f0: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x7997F0u;
    SET_GPR_U32(ctx, 31, 0x7997F8u);
    ctx->pc = 0x7997F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997F0u;
    // 0x7997f4: 0x8d24264c  lw          $a0, 0x264C($t1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x7997F0u, 0x7997F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997F8u;
label_7997f8:
    // 0x7997f8: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7997f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7997fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7997fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799800: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x799800u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799804: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799808: 0x24051003  addiu       $a1, $zero, 0x1003
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    // 0x79980c: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79980Cu;
    SET_GPR_U32(ctx, 31, 0x799814u);
    ctx->pc = 0x799810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79980Cu;
    // 0x799810: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79980Cu, 0x799814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799814u;
label_799814:
    // 0x799814: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x799814u;
    SET_GPR_U32(ctx, 31, 0x79981Cu);
    ctx->pc = 0x799818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799814u;
    // 0x799818: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x799814u, 0x79981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79981Cu;
label_79981c:
    // 0x79981c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x79981cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x799820: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799824: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79982c: 0xc0b485e  jal         func_2D2178
    ctx->pc = 0x79982Cu;
    SET_GPR_U32(ctx, 31, 0x799834u);
    ctx->pc = 0x799830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79982Cu;
    // 0x799830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2178u, 0x79982Cu, 0x799834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799834u;
label_799834:
    // 0x799834: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799838: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x799838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79983c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79983cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799840: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799840u;
    SET_GPR_U32(ctx, 31, 0x799848u);
    ctx->pc = 0x799844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799840u;
    // 0x799844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799840u, 0x799848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799848u;
label_799848:
    // 0x799848: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x799848u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79984c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79984cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799850: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799850u;
    SET_GPR_U32(ctx, 31, 0x799858u);
    ctx->pc = 0x799854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799850u;
    // 0x799854: 0x24846ab0  addiu       $a0, $a0, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799850u, 0x799858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799858u;
label_799858:
    // 0x799858: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79985c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79985Cu;
    SET_GPR_U32(ctx, 31, 0x799864u);
    ctx->pc = 0x799860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79985Cu;
    // 0x799860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79985Cu, 0x799864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799864u;
label_799864:
    // 0x799864: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799868: 0x240500f1  addiu       $a1, $zero, 0xF1
    ctx->pc = 0x799868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x79986c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79986Cu;
    SET_GPR_U32(ctx, 31, 0x799874u);
    ctx->pc = 0x799870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79986Cu;
    // 0x799870: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79986Cu, 0x799874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799874u;
label_799874:
    // 0x799874: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799874u;
    SET_GPR_U32(ctx, 31, 0x79987Cu);
    ctx->pc = 0x799878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799874u;
    // 0x799878: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799874u, 0x79987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79987Cu;
label_79987c:
    // 0x79987c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79987cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799880: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x799880u;
    SET_GPR_U32(ctx, 31, 0x799888u);
    ctx->pc = 0x799884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799880u;
    // 0x799884: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x799880u, 0x799888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799888u;
label_799888:
    // 0x799888: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799888u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79988c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x79988cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799890: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x799890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799894: 0xc0b0bf6  jal         func_2C2FD8
    ctx->pc = 0x799894u;
    SET_GPR_U32(ctx, 31, 0x79989Cu);
    ctx->pc = 0x799898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799894u;
    // 0x799898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2FD8u, 0x799894u, 0x79989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79989Cu;
label_79989c:
    // 0x79989c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79989cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998a0: 0xc0b0bf6  jal         func_2C2FD8
    ctx->pc = 0x7998A0u;
    SET_GPR_U32(ctx, 31, 0x7998A8u);
    ctx->pc = 0x7998A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998A0u;
    // 0x7998a4: 0x2665009c  addiu       $a1, $s3, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2FD8u, 0x7998A0u, 0x7998A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998A8u;
label_7998a8:
    // 0x7998a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7998a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998ac: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x7998ACu;
    SET_GPR_U32(ctx, 31, 0x7998B4u);
    ctx->pc = 0x7998B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998ACu;
    // 0x7998b0: 0x240503d8  addiu       $a1, $zero, 0x3D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x7998ACu, 0x7998B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998B4u;
label_7998b4:
    // 0x7998b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7998B4u;
    {
        const bool branch_taken_0x7998b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7998b4) {
            ctx->pc = 0x7998CCu;
            goto label_7998cc;
        }
    }
    ctx->pc = 0x7998BCu;
    // 0x7998bc: 0x0  nop
    ctx->pc = 0x7998bcu;
    // NOP
label_7998c0:
    // 0x7998c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7998c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7998c4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7998C4u;
    SET_GPR_U32(ctx, 31, 0x7998CCu);
    ctx->pc = 0x7998C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998C4u;
    // 0x7998c8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7998C4u, 0x7998CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998CCu;
label_7998cc:
    // 0x7998cc: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7998CCu;
    SET_GPR_U32(ctx, 31, 0x7998D4u);
    ctx->pc = 0x7998D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998CCu;
    // 0x7998d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7998CCu, 0x7998D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998D4u;
label_7998d4:
    // 0x7998d4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7998D4u;
    {
        const bool branch_taken_0x7998d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998D4u;
        // 0x7998d8: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998d4) {
            ctx->pc = 0x7998C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998c0;
        }
    }
    ctx->pc = 0x7998DCu;
    // 0x7998dc: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x7998DCu;
    SET_GPR_U32(ctx, 31, 0x7998E4u);
    ctx->pc = 0x7998E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998DCu;
    // 0x7998e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x7998DCu, 0x7998E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998E4u;
label_7998e4:
    // 0x7998e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7998e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998e8: 0xc1e6676  jal         func_7999D8
    ctx->pc = 0x7998E8u;
    SET_GPR_U32(ctx, 31, 0x7998F0u);
    ctx->pc = 0x7998ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998E8u;
    // 0x7998ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7999D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7999D8u, 0x7998E8u, 0x7998F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998F0u;
label_7998f0:
    // 0x7998f0: 0x2644ee00  addiu       $a0, $s2, -0x1200
    ctx->pc = 0x7998f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962688));
    // 0x7998f4: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x7998F4u;
    SET_GPR_U32(ctx, 31, 0x7998FCu);
    ctx->pc = 0x7998F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998F4u;
    // 0x7998f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x7998F4u, 0x7998FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998FCu;
label_7998fc:
    // 0x7998fc: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x7998fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799900: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799900u;
    SET_GPR_U32(ctx, 31, 0x799908u);
    ctx->pc = 0x799904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799900u;
    // 0x799904: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799900u, 0x799908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799908u;
label_799908:
    // 0x799908: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79990c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79990cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799910: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x799910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799914: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x799914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799918: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79991c: 0x3e00008  jr          $ra
    ctx->pc = 0x79991Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79991Cu;
        // 0x799920: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79991Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799924u;
    // 0x799924: 0x0  nop
    ctx->pc = 0x799924u;
    // NOP
    ctx->pc = 0x799928u;
}
} // namespace gh_r506
