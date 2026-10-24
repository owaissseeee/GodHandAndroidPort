#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r203_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r203
{
// Function: func_00799308
// Address: 0x799308 - 0x7994a0
void func_00799308_0x799308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799308_0x799308");
#endif

    switch (ctx->pc) {
        case 0x799308u: goto label_799308;
        case 0x79930cu: goto label_79930c;
        case 0x799310u: goto label_799310;
        case 0x799314u: goto label_799314;
        case 0x799318u: goto label_799318;
        case 0x79931cu: goto label_79931c;
        case 0x799320u: goto label_799320;
        case 0x799324u: goto label_799324;
        case 0x799328u: goto label_799328;
        case 0x79932cu: goto label_79932c;
        case 0x799330u: goto label_799330;
        case 0x799334u: goto label_799334;
        case 0x799338u: goto label_799338;
        case 0x79933cu: goto label_79933c;
        case 0x799340u: goto label_799340;
        case 0x799344u: goto label_799344;
        case 0x799348u: goto label_799348;
        case 0x79934cu: goto label_79934c;
        case 0x799350u: goto label_799350;
        case 0x799354u: goto label_799354;
        case 0x799358u: goto label_799358;
        case 0x79935cu: goto label_79935c;
        case 0x799360u: goto label_799360;
        case 0x799364u: goto label_799364;
        case 0x799368u: goto label_799368;
        case 0x79936cu: goto label_79936c;
        case 0x799370u: goto label_799370;
        case 0x799374u: goto label_799374;
        case 0x799378u: goto label_799378;
        case 0x79937cu: goto label_79937c;
        case 0x799380u: goto label_799380;
        case 0x799384u: goto label_799384;
        case 0x799388u: goto label_799388;
        case 0x79938cu: goto label_79938c;
        case 0x799390u: goto label_799390;
        case 0x799394u: goto label_799394;
        case 0x799398u: goto label_799398;
        case 0x79939cu: goto label_79939c;
        case 0x7993a0u: goto label_7993a0;
        case 0x7993a4u: goto label_7993a4;
        case 0x7993a8u: goto label_7993a8;
        case 0x7993acu: goto label_7993ac;
        case 0x7993b0u: goto label_7993b0;
        case 0x7993b4u: goto label_7993b4;
        case 0x7993b8u: goto label_7993b8;
        case 0x7993bcu: goto label_7993bc;
        case 0x7993c0u: goto label_7993c0;
        case 0x7993c4u: goto label_7993c4;
        case 0x7993c8u: goto label_7993c8;
        case 0x7993ccu: goto label_7993cc;
        case 0x7993d0u: goto label_7993d0;
        case 0x7993d4u: goto label_7993d4;
        case 0x7993d8u: goto label_7993d8;
        case 0x7993dcu: goto label_7993dc;
        case 0x7993e0u: goto label_7993e0;
        case 0x7993e4u: goto label_7993e4;
        case 0x7993e8u: goto label_7993e8;
        case 0x7993ecu: goto label_7993ec;
        case 0x7993f0u: goto label_7993f0;
        case 0x7993f4u: goto label_7993f4;
        case 0x7993f8u: goto label_7993f8;
        case 0x7993fcu: goto label_7993fc;
        case 0x799400u: goto label_799400;
        case 0x799404u: goto label_799404;
        case 0x799408u: goto label_799408;
        case 0x79940cu: goto label_79940c;
        case 0x799410u: goto label_799410;
        case 0x799414u: goto label_799414;
        case 0x799418u: goto label_799418;
        case 0x79941cu: goto label_79941c;
        case 0x799420u: goto label_799420;
        case 0x799424u: goto label_799424;
        case 0x799428u: goto label_799428;
        case 0x79942cu: goto label_79942c;
        case 0x799430u: goto label_799430;
        case 0x799434u: goto label_799434;
        case 0x799438u: goto label_799438;
        case 0x79943cu: goto label_79943c;
        case 0x799440u: goto label_799440;
        case 0x799444u: goto label_799444;
        case 0x799448u: goto label_799448;
        case 0x79944cu: goto label_79944c;
        case 0x799450u: goto label_799450;
        case 0x799454u: goto label_799454;
        case 0x799458u: goto label_799458;
        case 0x79945cu: goto label_79945c;
        case 0x799460u: goto label_799460;
        case 0x799464u: goto label_799464;
        case 0x799468u: goto label_799468;
        case 0x79946cu: goto label_79946c;
        case 0x799470u: goto label_799470;
        case 0x799474u: goto label_799474;
        case 0x799478u: goto label_799478;
        case 0x79947cu: goto label_79947c;
        case 0x799480u: goto label_799480;
        case 0x799484u: goto label_799484;
        case 0x799488u: goto label_799488;
        case 0x79948cu: goto label_79948c;
        case 0x799490u: goto label_799490;
        case 0x799494u: goto label_799494;
        case 0x799498u: goto label_799498;
        case 0x79949cu: goto label_79949c;
        default: break;
    }

    ctx->pc = 0x799308u;

label_799308:
    // 0x799308: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_79930c:
    // 0x79930c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79930cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_799310:
    // 0x799310: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x799310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_799314:
    // 0x799314: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x799314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_799318:
    // 0x799318: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
label_79931c:
    // 0x79931c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x79931cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_799320:
    // 0x799320: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x799320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_799324:
    // 0x799324: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x799324u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799328:
    // 0x799328: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x799328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_79932c:
    // 0x79932c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x79932cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_799330:
    // 0x799330: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_799334:
    // 0x799334: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x799334u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_799338:
    // 0x799338: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x799338u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_79933c:
    // 0x79933c: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_799340:
    // 0x799340: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799344:
    // 0x799344: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_799348:
    if (ctx->pc == 0x799348u) {
        ctx->pc = 0x799348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799344u;
        // 0x799348: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79934Cu;
        goto label_79934c;
    }
    ctx->pc = 0x799344u;
    {
        const bool branch_taken_0x799344 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x799348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799344u;
        // 0x799348: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799344) {
            ctx->pc = 0x799368u;
            goto label_799368;
        }
    }
    ctx->pc = 0x79934Cu;
label_79934c:
    // 0x79934c: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79934cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799350:
    // 0x799350: 0x26659590  addiu       $a1, $s3, -0x6A70
    ctx->pc = 0x799350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294940048));
label_799354:
    // 0x799354: 0xc0b0e24  jal         func_2C3890
label_799358:
    if (ctx->pc == 0x799358u) {
        ctx->pc = 0x799358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799354u;
        // 0x799358: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79935Cu;
        goto label_79935c;
    }
    ctx->pc = 0x799354u;
    SET_GPR_U32(ctx, 31, 0x79935Cu);
    ctx->pc = 0x799358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799354u;
    // 0x799358: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799354u, 0x79935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79935Cu;
label_79935c:
    // 0x79935c: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799360:
    // 0x799360: 0xc0b5692  jal         func_2D5A48
label_799364:
    if (ctx->pc == 0x799364u) {
        ctx->pc = 0x799364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799360u;
        // 0x799364: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799368u;
        goto label_799368;
    }
    ctx->pc = 0x799360u;
    SET_GPR_U32(ctx, 31, 0x799368u);
    ctx->pc = 0x799364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799360u;
    // 0x799364: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799360u, 0x799368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799368u;
label_799368:
    // 0x799368: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_79936c:
    // 0x79936c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79936cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_799370:
    // 0x799370: 0x10000005  b           . + 4 + (0x5 << 2)
label_799374:
    if (ctx->pc == 0x799374u) {
        ctx->pc = 0x799374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799370u;
        // 0x799374: 0x3c15003c  lui         $s5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799378u;
        goto label_799378;
    }
    ctx->pc = 0x799370u;
    {
        const bool branch_taken_0x799370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799370u;
        // 0x799374: 0x3c15003c  lui         $s5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799370) {
            ctx->pc = 0x799388u;
            goto label_799388;
        }
    }
    ctx->pc = 0x799378u;
label_799378:
    // 0x799378: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79937c:
    // 0x79937c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799380:
    // 0x799380: 0xc0b56a8  jal         func_2D5AA0
label_799384:
    if (ctx->pc == 0x799384u) {
        ctx->pc = 0x799384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799380u;
        // 0x799384: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799388u;
        goto label_799388;
    }
    ctx->pc = 0x799380u;
    SET_GPR_U32(ctx, 31, 0x799388u);
    ctx->pc = 0x799384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799380u;
    // 0x799384: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799380u, 0x799388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799388u;
label_799388:
    // 0x799388: 0xc0b0f90  jal         func_2C3E40
label_79938c:
    if (ctx->pc == 0x79938Cu) {
        ctx->pc = 0x79938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799388u;
        // 0x79938c: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799390u;
        goto label_799390;
    }
    ctx->pc = 0x799388u;
    SET_GPR_U32(ctx, 31, 0x799390u);
    ctx->pc = 0x79938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799388u;
    // 0x79938c: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x799388u, 0x799390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799390u;
label_799390:
    // 0x799390: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_799394:
    if (ctx->pc == 0x799394u) {
        ctx->pc = 0x799394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799390u;
        // 0x799394: 0x8e868658  lw          $a2, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799398u;
        goto label_799398;
    }
    ctx->pc = 0x799390u;
    {
        const bool branch_taken_0x799390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799390u;
        // 0x799394: 0x8e868658  lw          $a2, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799390) {
            ctx->pc = 0x799378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799378;
        }
    }
    ctx->pc = 0x799398u;
label_799398:
    // 0x799398: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x799398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_79939c:
    // 0x79939c: 0x26046af0  addiu       $a0, $s0, 0x6AF0
    ctx->pc = 0x79939cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 27376));
label_7993a0:
    // 0x7993a0: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_7993a4:
    // 0x7993a4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_7993a8:
    // 0x7993a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_7993ac:
    // 0x7993ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7993acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_7993b0:
    // 0x7993b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7993b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_7993b4:
    // 0x7993b4: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
label_7993b8:
    // 0x7993b8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x7993b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_7993bc:
    // 0x7993bc: 0xc0a58dc  jal         func_296370
label_7993c0:
    if (ctx->pc == 0x7993C0u) {
        ctx->pc = 0x7993C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993BCu;
        // 0x7993c0: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993C4u;
        goto label_7993c4;
    }
    ctx->pc = 0x7993BCu;
    SET_GPR_U32(ctx, 31, 0x7993C4u);
    ctx->pc = 0x7993C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993BCu;
    // 0x7993c0: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x7993BCu, 0x7993C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993C4u;
label_7993c4:
    // 0x7993c4: 0xc0b6dac  jal         func_2DB6B0
label_7993c8:
    if (ctx->pc == 0x7993C8u) {
        ctx->pc = 0x7993CCu;
        goto label_7993cc;
    }
    ctx->pc = 0x7993C4u;
    SET_GPR_U32(ctx, 31, 0x7993CCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7993C4u, 0x7993CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993CCu;
label_7993cc:
    // 0x7993cc: 0x3c01bf83  lui         $at, 0xBF83
    ctx->pc = 0x7993ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49027 << 16));
label_7993d0:
    // 0x7993d0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x7993d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_7993d4:
    // 0x7993d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7993d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_7993d8:
    // 0x7993d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7993d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7993dc:
    // 0x7993dc: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_7993e0:
    // 0x7993e0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x7993e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_7993e4:
    // 0x7993e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7993e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_7993e8:
    // 0x7993e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7993e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7993ec:
    // 0x7993ec: 0x3c0140b6  lui         $at, 0x40B6
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16566 << 16));
label_7993f0:
    // 0x7993f0: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x7993f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_7993f4:
    // 0x7993f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7993f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7993f8:
    // 0x7993f8: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x7993f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_7993fc:
    // 0x7993fc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x7993fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_799400:
    // 0x799400: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x799400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_799404:
    // 0x799404: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x799404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_799408:
    // 0x799408: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x799408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79940c:
    // 0x79940c: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x79940cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_799410:
    // 0x799410: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x799410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_799414:
    // 0x799414: 0x60f809  jalr        $v1
label_799418:
    if (ctx->pc == 0x799418u) {
        ctx->pc = 0x799418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799414u;
        // 0x799418: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79941Cu;
        goto label_79941c;
    }
    ctx->pc = 0x799414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79941Cu);
        ctx->pc = 0x799418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799414u;
        // 0x799418: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799414u, 0x79941Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79941Cu;
label_79941c:
    // 0x79941c: 0x8e060214  lw          $a2, 0x214($s0)
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_799420:
    // 0x799420: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x799420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799424:
    // 0x799424: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_799428:
    // 0x799428: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x799428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_79942c:
    // 0x79942c: 0xe6350004  swc1        $f21, 0x4($s1)
    ctx->pc = 0x79942cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_799430:
    // 0x799430: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x799430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_799434:
    // 0x799434: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x799434u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_799438:
    // 0x799438: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x799438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_79943c:
    // 0x79943c: 0x40f809  jalr        $v0
label_799440:
    if (ctx->pc == 0x799440u) {
        ctx->pc = 0x799440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79943Cu;
        // 0x799440: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799444u;
        goto label_799444;
    }
    ctx->pc = 0x79943Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799444u);
        ctx->pc = 0x799440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79943Cu;
        // 0x799440: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79943Cu, 0x799444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799444u;
label_799444:
    // 0x799444: 0x8ea4264c  lw          $a0, 0x264C($s5)
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 9804)));
label_799448:
    // 0x799448: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79944c:
    // 0x79944c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79944cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799450:
    // 0x799450: 0xc0b016c  jal         func_2C05B0
label_799454:
    if (ctx->pc == 0x799454u) {
        ctx->pc = 0x799454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799450u;
        // 0x799454: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799458u;
        goto label_799458;
    }
    ctx->pc = 0x799450u;
    SET_GPR_U32(ctx, 31, 0x799458u);
    ctx->pc = 0x799454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799450u;
    // 0x799454: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799450u, 0x799458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799458u;
label_799458:
    // 0x799458: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79945c:
    // 0x79945c: 0x26659590  addiu       $a1, $s3, -0x6A70
    ctx->pc = 0x79945cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294940048));
label_799460:
    // 0x799460: 0xc0b0e24  jal         func_2C3890
label_799464:
    if (ctx->pc == 0x799464u) {
        ctx->pc = 0x799464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799460u;
        // 0x799464: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799468u;
        goto label_799468;
    }
    ctx->pc = 0x799460u;
    SET_GPR_U32(ctx, 31, 0x799468u);
    ctx->pc = 0x799464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799460u;
    // 0x799464: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799460u, 0x799468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799468u;
label_799468:
    // 0x799468: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79946c:
    // 0x79946c: 0xc0b5692  jal         func_2D5A48
label_799470:
    if (ctx->pc == 0x799470u) {
        ctx->pc = 0x799470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79946Cu;
        // 0x799470: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799474u;
        goto label_799474;
    }
    ctx->pc = 0x79946Cu;
    SET_GPR_U32(ctx, 31, 0x799474u);
    ctx->pc = 0x799470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79946Cu;
    // 0x799470: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79946Cu, 0x799474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799474u;
label_799474:
    // 0x799474: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x799474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_799478:
    // 0x799478: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x799478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79947c:
    // 0x79947c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x79947cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_799480:
    // 0x799480: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x799480u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_799484:
    // 0x799484: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x799484u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_799488:
    // 0x799488: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x799488u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79948c:
    // 0x79948c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79948cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799490:
    // 0x799490: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x799490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_799494:
    // 0x799494: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x799494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_799498:
    // 0x799498: 0x3e00008  jr          $ra
label_79949c:
    if (ctx->pc == 0x79949Cu) {
        ctx->pc = 0x79949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799498u;
        // 0x79949c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994A0u;
        goto label_fallthrough_0x799498;
    }
    ctx->pc = 0x799498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799498u;
        // 0x79949c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799498:
    ctx->pc = 0x7994A0u;
}
} // namespace gh_r203
