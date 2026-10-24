#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r804_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r804
{
// Function: checkBattle__5cR804
// Address: 0x799290 - 0x799540
void checkBattle__5cR804_0x799290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkBattle__5cR804_0x799290");
#endif

    switch (ctx->pc) {
        case 0x7992dcu: goto label_7992dc;
        case 0x799308u: goto label_799308;
        case 0x799314u: goto label_799314;
        case 0x799334u: goto label_799334;
        case 0x799344u: goto label_799344;
        case 0x79934cu: goto label_79934c;
        case 0x799354u: goto label_799354;
        case 0x799364u: goto label_799364;
        case 0x799374u: goto label_799374;
        case 0x799384u: goto label_799384;
        case 0x79939cu: goto label_79939c;
        case 0x7993a8u: goto label_7993a8;
        case 0x7993ccu: goto label_7993cc;
        case 0x7993d8u: goto label_7993d8;
        case 0x7993e8u: goto label_7993e8;
        case 0x7993f4u: goto label_7993f4;
        case 0x7993fcu: goto label_7993fc;
        case 0x799410u: goto label_799410;
        case 0x799418u: goto label_799418;
        case 0x799444u: goto label_799444;
        case 0x799474u: goto label_799474;
        case 0x799498u: goto label_799498;
        case 0x7994a8u: goto label_7994a8;
        case 0x7994b0u: goto label_7994b0;
        case 0x7994bcu: goto label_7994bc;
        case 0x7994ccu: goto label_7994cc;
        case 0x7994e8u: goto label_7994e8;
        case 0x7994f8u: goto label_7994f8;
        case 0x799504u: goto label_799504;
        case 0x799510u: goto label_799510;
        default: break;
    }

    ctx->pc = 0x799290u;

    // 0x799290: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x799294: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x799298: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x799298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x79929c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992a0: 0x2450ee00  addiu       $s0, $v0, -0x1200
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x7992a4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x7992a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x7992a8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x7992a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x7992ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x7992acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x7992b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x7992b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7992b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992b8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x7992b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x7992bc: 0x3c13005f  lui         $s3, 0x5F
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)95 << 16));
    // 0x7992c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7992c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x7992c4: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x7992c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x7992c8: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x7992c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x7992cc: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x7992ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x7992d0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x7992d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x7992d4: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x7992D4u;
    SET_GPR_U32(ctx, 31, 0x7992DCu);
    ctx->pc = 0x7992D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D4u;
    // 0x7992d8: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x7992D4u, 0x7992DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992DCu;
label_7992dc:
    // 0x7992dc: 0x8e648658  lw          $a0, -0x79A8($s3)
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
    // 0x7992e0: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x7992e4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7992e8: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x7992e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x7992ec: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x7992ECu;
    {
        const bool branch_taken_0x7992ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7992ec) {
            ctx->pc = 0x7992F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7992ECu;
            // 0x7992f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7993A0u;
            goto label_7993a0;
        }
    }
    ctx->pc = 0x7992F4u;
    // 0x7992f4: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x7992f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x7992f8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7992f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x7992fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7992fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799300: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799300u;
    SET_GPR_U32(ctx, 31, 0x799308u);
    ctx->pc = 0x799304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799300u;
    // 0x799304: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799300u, 0x799308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799308u;
label_799308:
    // 0x799308: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79930c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79930Cu;
    SET_GPR_U32(ctx, 31, 0x799314u);
    ctx->pc = 0x799310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79930Cu;
    // 0x799310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79930Cu, 0x799314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799314u;
label_799314:
    // 0x799314: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799318: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799318u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79931c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79931cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799320: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799324: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x799328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79932c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79932Cu;
    SET_GPR_U32(ctx, 31, 0x799334u);
    ctx->pc = 0x799330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79932Cu;
    // 0x799330: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79932Cu, 0x799334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799334u;
label_799334:
    // 0x799334: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799338: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79933c: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79933Cu;
    SET_GPR_U32(ctx, 31, 0x799344u);
    ctx->pc = 0x799340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79933Cu;
    // 0x799340: 0x24a59820  addiu       $a1, $a1, -0x67E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79933Cu, 0x799344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799344u;
label_799344:
    // 0x799344: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799344u;
    SET_GPR_U32(ctx, 31, 0x79934Cu);
    ctx->pc = 0x799348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799344u;
    // 0x799348: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799344u, 0x79934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79934Cu;
label_79934c:
    // 0x79934c: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79934Cu;
    SET_GPR_U32(ctx, 31, 0x799354u);
    ctx->pc = 0x799350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79934Cu;
    // 0x799350: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79934Cu, 0x799354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799354u;
label_799354:
    // 0x799354: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x799354u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x799358: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79935c: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x79935Cu;
    SET_GPR_U32(ctx, 31, 0x799364u);
    ctx->pc = 0x799360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79935Cu;
    // 0x799360: 0x26106ab0  addiu       $s0, $s0, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79935Cu, 0x799364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799364u;
label_799364:
    // 0x799364: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x799364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79936c: 0xc0a54e0  jal         func_295380
    ctx->pc = 0x79936Cu;
    SET_GPR_U32(ctx, 31, 0x799374u);
    ctx->pc = 0x799370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79936Cu;
    // 0x799370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295380u, 0x79936Cu, 0x799374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799374u;
label_799374:
    // 0x799374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79937c: 0xc0a5516  jal         func_295458
    ctx->pc = 0x79937Cu;
    SET_GPR_U32(ctx, 31, 0x799384u);
    ctx->pc = 0x799380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79937Cu;
    // 0x799380: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295458u, 0x79937Cu, 0x799384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799384u;
label_799384:
    // 0x799384: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799388: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79938c: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x799390: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799394: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799394u;
    SET_GPR_U32(ctx, 31, 0x79939Cu);
    ctx->pc = 0x799398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799394u;
    // 0x799398: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799394u, 0x79939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79939Cu;
label_79939c:
    // 0x79939c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79939cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7993a0:
    // 0x7993a0: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x7993A0u;
    SET_GPR_U32(ctx, 31, 0x7993A8u);
    ctx->pc = 0x7993A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A0u;
    // 0x7993a4: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x7993A0u, 0x7993A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A8u;
label_7993a8:
    // 0x7993a8: 0x2611ea60  addiu       $s1, $s0, -0x15A0
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x7993ac: 0x8e638658  lw          $v1, -0x79A8($s3)
    ctx->pc = 0x7993acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
    // 0x7993b0: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x7993b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x7993b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7993b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7993b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7993bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7993c0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x7993c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x7993c4: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x7993C4u;
    SET_GPR_U32(ctx, 31, 0x7993CCu);
    ctx->pc = 0x7993C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993C4u;
    // 0x7993c8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x7993C4u, 0x7993CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993CCu;
label_7993cc:
    // 0x7993cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7993ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993d0: 0xc0b0a68  jal         func_2C29A0
    ctx->pc = 0x7993D0u;
    SET_GPR_U32(ctx, 31, 0x7993D8u);
    ctx->pc = 0x7993D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D0u;
    // 0x7993d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29A0u, 0x7993D0u, 0x7993D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D8u;
label_7993d8:
    // 0x7993d8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x7993d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993dc: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x7993e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7993E0u;
    {
        const bool branch_taken_0x7993e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993E0u;
        // 0x7993e4: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993e0) {
            ctx->pc = 0x7993F4u;
            goto label_7993f4;
        }
    }
    ctx->pc = 0x7993E8u;
label_7993e8:
    // 0x7993e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7993ec: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7993ECu;
    SET_GPR_U32(ctx, 31, 0x7993F4u);
    ctx->pc = 0x7993F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993ECu;
    // 0x7993f0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7993ECu, 0x7993F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993F4u;
label_7993f4:
    // 0x7993f4: 0xc1e6550  jal         func_799540
    ctx->pc = 0x7993F4u;
    SET_GPR_U32(ctx, 31, 0x7993FCu);
    ctx->pc = 0x7993F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F4u;
    // 0x7993f8: 0x8e249900  lw          $a0, -0x6700($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294940928)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799540u, 0x7993F4u, 0x7993FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993FCu;
label_7993fc:
    // 0x7993fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7993FCu;
    {
        const bool branch_taken_0x7993fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993FCu;
        // 0x799400: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993fc) {
            ctx->pc = 0x7993E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993e8;
        }
    }
    ctx->pc = 0x799404u;
    // 0x799404: 0x2684ee00  addiu       $a0, $s4, -0x1200
    ctx->pc = 0x799404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
    // 0x799408: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x799408u;
    SET_GPR_U32(ctx, 31, 0x799410u);
    ctx->pc = 0x79940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799408u;
    // 0x79940c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x799408u, 0x799410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799410u;
label_799410:
    // 0x799410: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799410u;
    SET_GPR_U32(ctx, 31, 0x799418u);
    ctx->pc = 0x799414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799410u;
    // 0x799414: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799410u, 0x799418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799418u;
label_799418:
    // 0x799418: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x799418u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79941c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79941cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799420: 0x8e249900  lw          $a0, -0x6700($s1)
    ctx->pc = 0x799420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294940928)));
    // 0x799424: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799428: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79942c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799430: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x799434: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x799434u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x799438: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x79943c: 0xc0b0346  jal         func_2C0D18
    ctx->pc = 0x79943Cu;
    SET_GPR_U32(ctx, 31, 0x799444u);
    ctx->pc = 0x799440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79943Cu;
    // 0x799440: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x79943Cu, 0x799444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799444u;
label_799444:
    // 0x799444: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x799448: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79944c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79944cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799450: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x799454: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799458: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79945c: 0x8e249900  lw          $a0, -0x6700($s1)
    ctx->pc = 0x79945cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294940928)));
    // 0x799460: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799464: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799468: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79946c: 0xc0b036a  jal         func_2C0DA8
    ctx->pc = 0x79946Cu;
    SET_GPR_U32(ctx, 31, 0x799474u);
    ctx->pc = 0x799470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79946Cu;
    // 0x799470: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x79946Cu, 0x799474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799474u;
label_799474:
    // 0x799474: 0x8e239900  lw          $v1, -0x6700($s1)
    ctx->pc = 0x799474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294940928)));
    // 0x799478: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x79947c: 0x2664ea60  addiu       $a0, $s3, -0x15A0
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
    // 0x799480: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799484: 0xa462005e  sh          $v0, 0x5E($v1)
    ctx->pc = 0x799484u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x799488: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79948c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799490: 0xc0b0be4  jal         func_2C2F90
    ctx->pc = 0x799490u;
    SET_GPR_U32(ctx, 31, 0x799498u);
    ctx->pc = 0x799494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799490u;
    // 0x799494: 0x8e259900  lw          $a1, -0x6700($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294940928)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x799490u, 0x799498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799498u;
label_799498:
    // 0x799498: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79949c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x7994a0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7994A0u;
    SET_GPR_U32(ctx, 31, 0x7994A8u);
    ctx->pc = 0x7994A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994A0u;
    // 0x7994a4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994A0u, 0x7994A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A8u;
label_7994a8:
    // 0x7994a8: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x7994a8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x7994ac: 0x0  nop
    ctx->pc = 0x7994acu;
    // NOP
label_7994b0:
    // 0x7994b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x7994b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7994b4: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x7994B4u;
    SET_GPR_U32(ctx, 31, 0x7994BCu);
    ctx->pc = 0x7994B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994B4u;
    // 0x7994b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x7994B4u, 0x7994BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994BCu;
label_7994bc:
    // 0x7994bc: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x7994bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x7994c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994c4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7994C4u;
    SET_GPR_U32(ctx, 31, 0x7994CCu);
    ctx->pc = 0x7994C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994C4u;
    // 0x7994c8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994C4u, 0x7994CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994CCu;
label_7994cc:
    // 0x7994cc: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x7994ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7994d0: 0x0  nop
    ctx->pc = 0x7994d0u;
    // NOP
    // 0x7994d4: 0x4503fff6  bc1tl       . + 4 + (-0xA << 2)
    ctx->pc = 0x7994D4u;
    {
        const bool branch_taken_0x7994d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7994d4) {
            ctx->pc = 0x7994D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7994D4u;
            // 0x7994d8: 0x4616a501  sub.s       $f20, $f20, $f22 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7994B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994b0;
        }
    }
    ctx->pc = 0x7994DCu;
    // 0x7994dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x7994dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7994e0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7994E0u;
    SET_GPR_U32(ctx, 31, 0x7994E8u);
    ctx->pc = 0x7994E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E0u;
    // 0x7994e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7994E0u, 0x7994E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E8u;
label_7994e8:
    // 0x7994e8: 0x2670ea60  addiu       $s0, $s3, -0x15A0
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
    // 0x7994ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7994ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994f0: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x7994F0u;
    SET_GPR_U32(ctx, 31, 0x7994F8u);
    ctx->pc = 0x7994F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994F0u;
    // 0x7994f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x7994F0u, 0x7994F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994F8u;
label_7994f8:
    // 0x7994f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7994f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994fc: 0xc0b0a3e  jal         func_2C28F8
    ctx->pc = 0x7994FCu;
    SET_GPR_U32(ctx, 31, 0x799504u);
    ctx->pc = 0x799500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994FCu;
    // 0x799500: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28F8u, 0x7994FCu, 0x799504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799504u;
label_799504:
    // 0x799504: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799508: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799508u;
    SET_GPR_U32(ctx, 31, 0x799510u);
    ctx->pc = 0x79950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799508u;
    // 0x79950c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799508u, 0x799510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799510u;
label_799510:
    // 0x799510: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x799510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799514: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x799514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799518: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x799518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79951c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x79951cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799520: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x799520u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799524: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799528: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x799528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x79952c: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x79952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799530: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x799530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799534: 0x3e00008  jr          $ra
    ctx->pc = 0x799534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799534u;
        // 0x799538: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79953Cu;
    // 0x79953c: 0x0  nop
    ctx->pc = 0x79953cu;
    // NOP
    ctx->pc = 0x799540u;
}
} // namespace gh_r804
