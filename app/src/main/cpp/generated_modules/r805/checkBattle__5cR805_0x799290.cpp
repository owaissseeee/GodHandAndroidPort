#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r805_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r805
{
// Function: checkBattle__5cR805
// Address: 0x799290 - 0x799610
void checkBattle__5cR805_0x799290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkBattle__5cR805_0x799290");
#endif

    switch (ctx->pc) {
        case 0x7992e0u: goto label_7992e0;
        case 0x799324u: goto label_799324;
        case 0x799344u: goto label_799344;
        case 0x799354u: goto label_799354;
        case 0x799364u: goto label_799364;
        case 0x799378u: goto label_799378;
        case 0x799384u: goto label_799384;
        case 0x799390u: goto label_799390;
        case 0x79939cu: goto label_79939c;
        case 0x7993a8u: goto label_7993a8;
        case 0x7993b4u: goto label_7993b4;
        case 0x7993bcu: goto label_7993bc;
        case 0x7993c4u: goto label_7993c4;
        case 0x7993ccu: goto label_7993cc;
        case 0x7993dcu: goto label_7993dc;
        case 0x7993ecu: goto label_7993ec;
        case 0x7993f4u: goto label_7993f4;
        case 0x799404u: goto label_799404;
        case 0x799414u: goto label_799414;
        case 0x79941cu: goto label_79941c;
        case 0x79942cu: goto label_79942c;
        case 0x79943cu: goto label_79943c;
        case 0x799454u: goto label_799454;
        case 0x799460u: goto label_799460;
        case 0x79946cu: goto label_79946c;
        case 0x799474u: goto label_799474;
        case 0x799494u: goto label_799494;
        case 0x7994a0u: goto label_7994a0;
        case 0x7994b0u: goto label_7994b0;
        case 0x7994bcu: goto label_7994bc;
        case 0x7994c4u: goto label_7994c4;
        case 0x7994d8u: goto label_7994d8;
        case 0x7994e0u: goto label_7994e0;
        case 0x79950cu: goto label_79950c;
        case 0x79953cu: goto label_79953c;
        case 0x799560u: goto label_799560;
        case 0x799570u: goto label_799570;
        case 0x799578u: goto label_799578;
        case 0x799584u: goto label_799584;
        case 0x799594u: goto label_799594;
        case 0x7995b0u: goto label_7995b0;
        case 0x7995c0u: goto label_7995c0;
        case 0x7995ccu: goto label_7995cc;
        case 0x7995d8u: goto label_7995d8;
        default: break;
    }

    ctx->pc = 0x799290u;

    // 0x799290: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x799294: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x799298: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x799298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x79929c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992a0: 0x2450ee00  addiu       $s0, $v0, -0x1200
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x7992a4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x7992a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x7992a8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x7992a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x7992ac: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x7992acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992b0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x7992b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x7992b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7992b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992b8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x7992b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x7992bc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x7992bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x7992c0: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x7992c0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x7992c4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x7992c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x7992c8: 0x3c15005f  lui         $s5, 0x5F
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)95 << 16));
    // 0x7992cc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7992ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x7992d0: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x7992d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x7992d4: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x7992d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x7992d8: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x7992D8u;
    SET_GPR_U32(ctx, 31, 0x7992E0u);
    ctx->pc = 0x7992DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D8u;
    // 0x7992dc: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x7992D8u, 0x7992E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992E0u;
label_7992e0:
    // 0x7992e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7992e8: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x7992e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x7992ec: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x7992f0: 0x8ea48658  lw          $a0, -0x79A8($s5)
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936152)));
    // 0x7992f4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7992f8: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x7992f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x7992fc: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x7992fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x799300: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799304: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x799304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x799308: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x799308u;
    {
        const bool branch_taken_0x799308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799308u;
        // 0x79930c: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799308) {
            ctx->pc = 0x799454u;
            goto label_799454;
        }
    }
    ctx->pc = 0x799310u;
    // 0x799310: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x799310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x799314: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x799314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x799318: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79931c: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79931Cu;
    SET_GPR_U32(ctx, 31, 0x799324u);
    ctx->pc = 0x799320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79931Cu;
    // 0x799320: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79931Cu, 0x799324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799324u;
label_799324:
    // 0x799324: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799328: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799328u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79932c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79932cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799330: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799334: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x799338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79933c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79933Cu;
    SET_GPR_U32(ctx, 31, 0x799344u);
    ctx->pc = 0x799340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79933Cu;
    // 0x799340: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79933Cu, 0x799344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799344u;
label_799344:
    // 0x799344: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x799344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799348: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79934c: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79934Cu;
    SET_GPR_U32(ctx, 31, 0x799354u);
    ctx->pc = 0x799350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79934Cu;
    // 0x799350: 0x24a598a0  addiu       $a1, $a1, -0x6760 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79934Cu, 0x799354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799354u;
label_799354:
    // 0x799354: 0x8e832f84  lw          $v1, 0x2F84($s4)
    ctx->pc = 0x799354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799358: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x79935c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79935Cu;
    SET_GPR_U32(ctx, 31, 0x799364u);
    ctx->pc = 0x799360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79935Cu;
    // 0x799360: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79935Cu, 0x799364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799364u;
label_799364:
    // 0x799364: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x799368: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x799368u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79936c: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x79936cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x799370: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799370u;
    SET_GPR_U32(ctx, 31, 0x799378u);
    ctx->pc = 0x799374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799370u;
    // 0x799374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799370u, 0x799378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799378u;
label_799378:
    // 0x799378: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79937c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79937Cu;
    SET_GPR_U32(ctx, 31, 0x799384u);
    ctx->pc = 0x799380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79937Cu;
    // 0x799380: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79937Cu, 0x799384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799384u;
label_799384:
    // 0x799384: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x799384u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799388: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799388u;
    SET_GPR_U32(ctx, 31, 0x799390u);
    ctx->pc = 0x79938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799388u;
    // 0x79938c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799388u, 0x799390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799390u;
label_799390:
    // 0x799390: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799394: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799394u;
    SET_GPR_U32(ctx, 31, 0x79939Cu);
    ctx->pc = 0x799398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799394u;
    // 0x799398: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799394u, 0x79939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79939Cu;
label_79939c:
    // 0x79939c: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x79939cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7993a0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x7993A0u;
    SET_GPR_U32(ctx, 31, 0x7993A8u);
    ctx->pc = 0x7993A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A0u;
    // 0x7993a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7993A0u, 0x7993A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A8u;
label_7993a8:
    // 0x7993a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7993a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993ac: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x7993ACu;
    SET_GPR_U32(ctx, 31, 0x7993B4u);
    ctx->pc = 0x7993B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993ACu;
    // 0x7993b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x7993ACu, 0x7993B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B4u;
label_7993b4:
    // 0x7993b4: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x7993B4u;
    SET_GPR_U32(ctx, 31, 0x7993BCu);
    ctx->pc = 0x7993B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B4u;
    // 0x7993b8: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x7993B4u, 0x7993BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993BCu;
label_7993bc:
    // 0x7993bc: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x7993BCu;
    SET_GPR_U32(ctx, 31, 0x7993C4u);
    ctx->pc = 0x7993C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993BCu;
    // 0x7993c0: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x7993BCu, 0x7993C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993C4u;
label_7993c4:
    // 0x7993c4: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x7993C4u;
    SET_GPR_U32(ctx, 31, 0x7993CCu);
    ctx->pc = 0x7993C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993C4u;
    // 0x7993c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x7993C4u, 0x7993CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993CCu;
label_7993cc:
    // 0x7993cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x7993ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7993d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993d4: 0xc0a54e0  jal         func_295380
    ctx->pc = 0x7993D4u;
    SET_GPR_U32(ctx, 31, 0x7993DCu);
    ctx->pc = 0x7993D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D4u;
    // 0x7993d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295380u, 0x7993D4u, 0x7993DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993DCu;
label_7993dc:
    // 0x7993dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7993dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7993e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e4: 0xc0a5516  jal         func_295458
    ctx->pc = 0x7993E4u;
    SET_GPR_U32(ctx, 31, 0x7993ECu);
    ctx->pc = 0x7993E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993E4u;
    // 0x7993e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295458u, 0x7993E4u, 0x7993ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993ECu;
label_7993ec:
    // 0x7993ec: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x7993ECu;
    SET_GPR_U32(ctx, 31, 0x7993F4u);
    ctx->pc = 0x7993F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993ECu;
    // 0x7993f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x7993ECu, 0x7993F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993F4u;
label_7993f4:
    // 0x7993f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x7993f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7993f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993fc: 0xc0a54e0  jal         func_295380
    ctx->pc = 0x7993FCu;
    SET_GPR_U32(ctx, 31, 0x799404u);
    ctx->pc = 0x799400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993FCu;
    // 0x799400: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295380u, 0x7993FCu, 0x799404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799404u;
label_799404:
    // 0x799404: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799408: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79940c: 0xc0a5516  jal         func_295458
    ctx->pc = 0x79940Cu;
    SET_GPR_U32(ctx, 31, 0x799414u);
    ctx->pc = 0x799410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79940Cu;
    // 0x799410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295458u, 0x79940Cu, 0x799414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799414u;
label_799414:
    // 0x799414: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799414u;
    SET_GPR_U32(ctx, 31, 0x79941Cu);
    ctx->pc = 0x799418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799414u;
    // 0x799418: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799414u, 0x79941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79941Cu;
label_79941c:
    // 0x79941c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79941cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799424: 0xc0a54e0  jal         func_295380
    ctx->pc = 0x799424u;
    SET_GPR_U32(ctx, 31, 0x79942Cu);
    ctx->pc = 0x799428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799424u;
    // 0x799428: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295380u, 0x799424u, 0x79942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79942Cu;
label_79942c:
    // 0x79942c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79942cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799430: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799434: 0xc0a5516  jal         func_295458
    ctx->pc = 0x799434u;
    SET_GPR_U32(ctx, 31, 0x79943Cu);
    ctx->pc = 0x799438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799434u;
    // 0x799438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295458u, 0x799434u, 0x79943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79943Cu;
label_79943c:
    // 0x79943c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79943cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799444: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x799448: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79944c: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x79944Cu;
    SET_GPR_U32(ctx, 31, 0x799454u);
    ctx->pc = 0x799450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79944Cu;
    // 0x799450: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x79944Cu, 0x799454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799454u;
label_799454:
    // 0x799454: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799458: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799458u;
    SET_GPR_U32(ctx, 31, 0x799460u);
    ctx->pc = 0x79945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799458u;
    // 0x79945c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799458u, 0x799460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799460u;
label_799460:
    // 0x799460: 0x2611ea60  addiu       $s1, $s0, -0x15A0
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799464: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799464u;
    SET_GPR_U32(ctx, 31, 0x79946Cu);
    ctx->pc = 0x799468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799464u;
    // 0x799468: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799464u, 0x79946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79946Cu;
label_79946c:
    // 0x79946c: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79946Cu;
    SET_GPR_U32(ctx, 31, 0x799474u);
    ctx->pc = 0x799470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79946Cu;
    // 0x799470: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79946Cu, 0x799474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799474u;
label_799474:
    // 0x799474: 0x8ea38658  lw          $v1, -0x79A8($s5)
    ctx->pc = 0x799474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936152)));
    // 0x799478: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x79947c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79947cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799480: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799484: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799488: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x799488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79948c: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x79948Cu;
    SET_GPR_U32(ctx, 31, 0x799494u);
    ctx->pc = 0x799490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79948Cu;
    // 0x799490: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x79948Cu, 0x799494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799494u;
label_799494:
    // 0x799494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799498: 0xc0b0a68  jal         func_2C29A0
    ctx->pc = 0x799498u;
    SET_GPR_U32(ctx, 31, 0x7994A0u);
    ctx->pc = 0x79949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799498u;
    // 0x79949c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29A0u, 0x799498u, 0x7994A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A0u;
label_7994a0:
    // 0x7994a0: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x7994a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x7994a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7994A4u;
    {
        const bool branch_taken_0x7994a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A4u;
        // 0x7994a8: 0x27b20030  addiu       $s2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994a4) {
            ctx->pc = 0x7994BCu;
            goto label_7994bc;
        }
    }
    ctx->pc = 0x7994ACu;
    // 0x7994ac: 0x0  nop
    ctx->pc = 0x7994acu;
    // NOP
label_7994b0:
    // 0x7994b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994b4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7994B4u;
    SET_GPR_U32(ctx, 31, 0x7994BCu);
    ctx->pc = 0x7994B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994B4u;
    // 0x7994b8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994B4u, 0x7994BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994BCu;
label_7994bc:
    // 0x7994bc: 0xc1e6584  jal         func_799610
    ctx->pc = 0x7994BCu;
    SET_GPR_U32(ctx, 31, 0x7994C4u);
    ctx->pc = 0x7994C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994BCu;
    // 0x7994c0: 0x8e249980  lw          $a0, -0x6680($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941056)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799610u, 0x7994BCu, 0x7994C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994C4u;
label_7994c4:
    // 0x7994c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7994C4u;
    {
        const bool branch_taken_0x7994c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7994C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994C4u;
        // 0x7994c8: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994c4) {
            ctx->pc = 0x7994B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994b0;
        }
    }
    ctx->pc = 0x7994CCu;
    // 0x7994cc: 0x26c4ee00  addiu       $a0, $s6, -0x1200
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    // 0x7994d0: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x7994D0u;
    SET_GPR_U32(ctx, 31, 0x7994D8u);
    ctx->pc = 0x7994D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D0u;
    // 0x7994d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x7994D0u, 0x7994D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994D8u;
label_7994d8:
    // 0x7994d8: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x7994D8u;
    SET_GPR_U32(ctx, 31, 0x7994E0u);
    ctx->pc = 0x7994DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D8u;
    // 0x7994dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x7994D8u, 0x7994E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E0u;
label_7994e0:
    // 0x7994e0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7994e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7994e4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x7994e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7994e8: 0x8e249980  lw          $a0, -0x6680($s1)
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941056)));
    // 0x7994ec: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x7994ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7994f0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x7994f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7994f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7994f8: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x7994fc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x7994fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x799500: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x799504: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x799504u;
    SET_GPR_U32(ctx, 31, 0x79950Cu);
    ctx->pc = 0x799508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799504u;
    // 0x799508: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x799504u, 0x79950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79950Cu;
label_79950c:
    // 0x79950c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x79950cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x799510: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799514: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799518: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x79951c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79951cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799520: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x799520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799524: 0x8e249980  lw          $a0, -0x6680($s1)
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941056)));
    // 0x799528: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79952c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79952cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799530: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799534: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x799534u;
    SET_GPR_U32(ctx, 31, 0x79953Cu);
    ctx->pc = 0x799538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799534u;
    // 0x799538: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x799534u, 0x79953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79953Cu;
label_79953c:
    // 0x79953c: 0x8e239980  lw          $v1, -0x6680($s1)
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941056)));
    // 0x799540: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x799544: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799548: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79954c: 0xa462005e  sh          $v0, 0x5E($v1)
    ctx->pc = 0x79954cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x799550: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799554: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799558: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x799558u;
    SET_GPR_U32(ctx, 31, 0x799560u);
    ctx->pc = 0x79955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799558u;
    // 0x79955c: 0x8e259980  lw          $a1, -0x6680($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941056)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x799558u, 0x799560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799560u;
label_799560:
    // 0x799560: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799564: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x799568: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799568u;
    SET_GPR_U32(ctx, 31, 0x799570u);
    ctx->pc = 0x79956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799568u;
    // 0x79956c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799568u, 0x799570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799570u;
label_799570:
    // 0x799570: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x799570u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x799574: 0x0  nop
    ctx->pc = 0x799574u;
    // NOP
label_799578:
    // 0x799578: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x799578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79957c: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x79957Cu;
    SET_GPR_U32(ctx, 31, 0x799584u);
    ctx->pc = 0x799580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79957Cu;
    // 0x799580: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x79957Cu, 0x799584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799584u;
label_799584:
    // 0x799584: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x799584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799588: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79958c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79958Cu;
    SET_GPR_U32(ctx, 31, 0x799594u);
    ctx->pc = 0x799590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79958Cu;
    // 0x799590: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79958Cu, 0x799594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799594u;
label_799594:
    // 0x799594: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x799594u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799598: 0x0  nop
    ctx->pc = 0x799598u;
    // NOP
    // 0x79959c: 0x4503fff6  bc1tl       . + 4 + (-0xA << 2)
    ctx->pc = 0x79959Cu;
    {
        const bool branch_taken_0x79959c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79959c) {
            ctx->pc = 0x7995A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79959Cu;
            // 0x7995a0: 0x4616a501  sub.s       $f20, $f20, $f22 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x799578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799578;
        }
    }
    ctx->pc = 0x7995A4u;
    // 0x7995a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x7995a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7995a8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7995A8u;
    SET_GPR_U32(ctx, 31, 0x7995B0u);
    ctx->pc = 0x7995ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995A8u;
    // 0x7995ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7995A8u, 0x7995B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995B0u;
label_7995b0:
    // 0x7995b0: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x7995b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x7995b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7995b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995b8: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x7995B8u;
    SET_GPR_U32(ctx, 31, 0x7995C0u);
    ctx->pc = 0x7995BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995B8u;
    // 0x7995bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x7995B8u, 0x7995C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995C0u;
label_7995c0:
    // 0x7995c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7995c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995c4: 0xc0b0a3e  jal         func_2C28F8
    ctx->pc = 0x7995C4u;
    SET_GPR_U32(ctx, 31, 0x7995CCu);
    ctx->pc = 0x7995C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995C4u;
    // 0x7995c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28F8u, 0x7995C4u, 0x7995CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995CCu;
label_7995cc:
    // 0x7995cc: 0x8e832f84  lw          $v1, 0x2F84($s4)
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x7995d0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7995D0u;
    SET_GPR_U32(ctx, 31, 0x7995D8u);
    ctx->pc = 0x7995D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995D0u;
    // 0x7995d4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7995D0u, 0x7995D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995D8u;
label_7995d8:
    // 0x7995d8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x7995d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x7995dc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x7995dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x7995e0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x7995e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7995e4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x7995e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7995e8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x7995e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7995ec: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x7995ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7995f0: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x7995f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7995f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7995f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7995f8: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x7995f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x7995fc: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x7995fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799600: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x799600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799604: 0x3e00008  jr          $ra
    ctx->pc = 0x799604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799604u;
        // 0x799608: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79960Cu;
    // 0x79960c: 0x0  nop
    ctx->pc = 0x79960cu;
    // NOP
    ctx->pc = 0x799610u;
}
} // namespace gh_r805
