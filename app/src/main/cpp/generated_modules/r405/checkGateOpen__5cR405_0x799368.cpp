#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r405_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r405
{
// Function: checkGateOpen__5cR405
// Address: 0x799368 - 0x7995d0
void checkGateOpen__5cR405_0x799368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkGateOpen__5cR405_0x799368");
#endif

    switch (ctx->pc) {
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
        case 0x7994a0u: goto label_7994a0;
        case 0x7994a4u: goto label_7994a4;
        case 0x7994a8u: goto label_7994a8;
        case 0x7994acu: goto label_7994ac;
        case 0x7994b0u: goto label_7994b0;
        case 0x7994b4u: goto label_7994b4;
        case 0x7994b8u: goto label_7994b8;
        case 0x7994bcu: goto label_7994bc;
        case 0x7994c0u: goto label_7994c0;
        case 0x7994c4u: goto label_7994c4;
        case 0x7994c8u: goto label_7994c8;
        case 0x7994ccu: goto label_7994cc;
        case 0x7994d0u: goto label_7994d0;
        case 0x7994d4u: goto label_7994d4;
        case 0x7994d8u: goto label_7994d8;
        case 0x7994dcu: goto label_7994dc;
        case 0x7994e0u: goto label_7994e0;
        case 0x7994e4u: goto label_7994e4;
        case 0x7994e8u: goto label_7994e8;
        case 0x7994ecu: goto label_7994ec;
        case 0x7994f0u: goto label_7994f0;
        case 0x7994f4u: goto label_7994f4;
        case 0x7994f8u: goto label_7994f8;
        case 0x7994fcu: goto label_7994fc;
        case 0x799500u: goto label_799500;
        case 0x799504u: goto label_799504;
        case 0x799508u: goto label_799508;
        case 0x79950cu: goto label_79950c;
        case 0x799510u: goto label_799510;
        case 0x799514u: goto label_799514;
        case 0x799518u: goto label_799518;
        case 0x79951cu: goto label_79951c;
        case 0x799520u: goto label_799520;
        case 0x799524u: goto label_799524;
        case 0x799528u: goto label_799528;
        case 0x79952cu: goto label_79952c;
        case 0x799530u: goto label_799530;
        case 0x799534u: goto label_799534;
        case 0x799538u: goto label_799538;
        case 0x79953cu: goto label_79953c;
        case 0x799540u: goto label_799540;
        case 0x799544u: goto label_799544;
        case 0x799548u: goto label_799548;
        case 0x79954cu: goto label_79954c;
        case 0x799550u: goto label_799550;
        case 0x799554u: goto label_799554;
        case 0x799558u: goto label_799558;
        case 0x79955cu: goto label_79955c;
        case 0x799560u: goto label_799560;
        case 0x799564u: goto label_799564;
        case 0x799568u: goto label_799568;
        case 0x79956cu: goto label_79956c;
        case 0x799570u: goto label_799570;
        case 0x799574u: goto label_799574;
        case 0x799578u: goto label_799578;
        case 0x79957cu: goto label_79957c;
        case 0x799580u: goto label_799580;
        case 0x799584u: goto label_799584;
        case 0x799588u: goto label_799588;
        case 0x79958cu: goto label_79958c;
        case 0x799590u: goto label_799590;
        case 0x799594u: goto label_799594;
        case 0x799598u: goto label_799598;
        case 0x79959cu: goto label_79959c;
        case 0x7995a0u: goto label_7995a0;
        case 0x7995a4u: goto label_7995a4;
        case 0x7995a8u: goto label_7995a8;
        case 0x7995acu: goto label_7995ac;
        case 0x7995b0u: goto label_7995b0;
        case 0x7995b4u: goto label_7995b4;
        case 0x7995b8u: goto label_7995b8;
        case 0x7995bcu: goto label_7995bc;
        case 0x7995c0u: goto label_7995c0;
        case 0x7995c4u: goto label_7995c4;
        case 0x7995c8u: goto label_7995c8;
        case 0x7995ccu: goto label_7995cc;
        default: break;
    }

    ctx->pc = 0x799368u;

label_799368:
    // 0x799368: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_79936c:
    // 0x79936c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79936cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799370:
    // 0x799370: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x799370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_799374:
    // 0x799374: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799374u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
label_799378:
    // 0x799378: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x799378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_79937c:
    // 0x79937c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x79937cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_799380:
    // 0x799380: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x799380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_799384:
    // 0x799384: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x799384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_799388:
    // 0x799388: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x799388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_79938c:
    // 0x79938c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x79938cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_799390:
    // 0x799390: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x799390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_799394:
    // 0x799394: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x799394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_799398:
    // 0x799398: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x799398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_79939c:
    // 0x79939c: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79939cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_7993a0:
    // 0x7993a0: 0xc0b56a8  jal         func_2D5AA0
label_7993a4:
    if (ctx->pc == 0x7993A4u) {
        ctx->pc = 0x7993A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A0u;
        // 0x7993a4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993A8u;
        goto label_7993a8;
    }
    ctx->pc = 0x7993A0u;
    SET_GPR_U32(ctx, 31, 0x7993A8u);
    ctx->pc = 0x7993A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A0u;
    // 0x7993a4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7993A0u, 0x7993A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A8u;
label_7993a8:
    // 0x7993a8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x7993a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7993ac:
    // 0x7993ac: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x7993acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
label_7993b0:
    // 0x7993b0: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x7993b0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
label_7993b4:
    // 0x7993b4: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
label_7993b8:
    // 0x7993b8: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x7993b8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
label_7993bc:
    // 0x7993bc: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
label_7993c0:
    // 0x7993c0: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x7993c0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
label_7993c4:
    // 0x7993c4: 0x10000005  b           . + 4 + (0x5 << 2)
label_7993c8:
    if (ctx->pc == 0x7993C8u) {
        ctx->pc = 0x7993C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C4u;
        // 0x7993c8: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993CCu;
        goto label_7993cc;
    }
    ctx->pc = 0x7993C4u;
    {
        const bool branch_taken_0x7993c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C4u;
        // 0x7993c8: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993c4) {
            ctx->pc = 0x7993DCu;
            goto label_7993dc;
        }
    }
    ctx->pc = 0x7993CCu;
label_7993cc:
    // 0x7993cc: 0x0  nop
    ctx->pc = 0x7993ccu;
    // NOP
label_7993d0:
    // 0x7993d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7993d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7993d4:
    // 0x7993d4: 0xc0b56a8  jal         func_2D5AA0
label_7993d8:
    if (ctx->pc == 0x7993D8u) {
        ctx->pc = 0x7993D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993D4u;
        // 0x7993d8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993DCu;
        goto label_7993dc;
    }
    ctx->pc = 0x7993D4u;
    SET_GPR_U32(ctx, 31, 0x7993DCu);
    ctx->pc = 0x7993D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D4u;
    // 0x7993d8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7993D4u, 0x7993DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993DCu;
label_7993dc:
    // 0x7993dc: 0x26048658  addiu       $a0, $s0, -0x79A8
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936152));
label_7993e0:
    // 0x7993e0: 0xc0afc42  jal         func_2BF108
label_7993e4:
    if (ctx->pc == 0x7993E4u) {
        ctx->pc = 0x7993E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993E0u;
        // 0x7993e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993E8u;
        goto label_7993e8;
    }
    ctx->pc = 0x7993E0u;
    SET_GPR_U32(ctx, 31, 0x7993E8u);
    ctx->pc = 0x7993E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993E0u;
    // 0x7993e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x7993E0u, 0x7993E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993E8u;
label_7993e8:
    // 0x7993e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7993ec:
    // 0x7993ec: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x7993ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_7993f0:
    // 0x7993f0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_7993f4:
    if (ctx->pc == 0x7993F4u) {
        ctx->pc = 0x7993F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F0u;
        // 0x7993f4: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993F8u;
        goto label_7993f8;
    }
    ctx->pc = 0x7993F0u;
    {
        const bool branch_taken_0x7993f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7993F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F0u;
        // 0x7993f4: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993f0) {
            ctx->pc = 0x7993D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993d0;
        }
    }
    ctx->pc = 0x7993F8u;
label_7993f8:
    // 0x7993f8: 0xc0b0f90  jal         func_2C3E40
label_7993fc:
    if (ctx->pc == 0x7993FCu) {
        ctx->pc = 0x7993FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F8u;
        // 0x7993fc: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799400u;
        goto label_799400;
    }
    ctx->pc = 0x7993F8u;
    SET_GPR_U32(ctx, 31, 0x799400u);
    ctx->pc = 0x7993FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F8u;
    // 0x7993fc: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x7993F8u, 0x799400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799400u;
label_799400:
    // 0x799400: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799404:
    // 0x799404: 0x1443fff2  bne         $v0, $v1, . + 4 + (-0xE << 2)
label_799408:
    if (ctx->pc == 0x799408u) {
        ctx->pc = 0x799408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799404u;
        // 0x799408: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79940Cu;
        goto label_79940c;
    }
    ctx->pc = 0x799404u;
    {
        const bool branch_taken_0x799404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x799408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799404u;
        // 0x799408: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799404) {
            ctx->pc = 0x7993D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993d0;
        }
    }
    ctx->pc = 0x79940Cu;
label_79940c:
    // 0x79940c: 0x8e028658  lw          $v0, -0x79A8($s0)
    ctx->pc = 0x79940cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
label_799410:
    // 0x799410: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x799410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_799414:
    // 0x799414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799418:
    // 0x799418: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79941c:
    // 0x79941c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_799420:
    // 0x799420: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x799420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_799424:
    // 0x799424: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x799424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_799428:
    // 0x799428: 0x26c6a6a0  addiu       $a2, $s6, -0x5960
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944416));
label_79942c:
    // 0x79942c: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x79942cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_799430:
    // 0x799430: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x799430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_799434:
    // 0x799434: 0x68c3000f  ldl         $v1, 0xF($a2)
    ctx->pc = 0x799434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_799438:
    // 0x799438: 0x6cc30008  ldr         $v1, 0x8($a2)
    ctx->pc = 0x799438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_79943c:
    // 0x79943c: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x79943cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_799440:
    // 0x799440: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x799440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_799444:
    // 0x799444: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x799444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_799448:
    // 0x799448: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x799448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_79944c:
    // 0x79944c: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x79944cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_799450:
    // 0x799450: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x799450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_799454:
    // 0x799454: 0xc0b0e6c  jal         func_2C39B0
label_799458:
    if (ctx->pc == 0x799458u) {
        ctx->pc = 0x799458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799454u;
        // 0x799458: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79945Cu;
        goto label_79945c;
    }
    ctx->pc = 0x799454u;
    SET_GPR_U32(ctx, 31, 0x79945Cu);
    ctx->pc = 0x799458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799454u;
    // 0x799458: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799454u, 0x79945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79945Cu;
label_79945c:
    // 0x79945c: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79945cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799460:
    // 0x799460: 0xc0b0fb6  jal         func_2C3ED8
label_799464:
    if (ctx->pc == 0x799464u) {
        ctx->pc = 0x799464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799460u;
        // 0x799464: 0x26e5a6b8  addiu       $a1, $s7, -0x5948 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294944440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799468u;
        goto label_799468;
    }
    ctx->pc = 0x799460u;
    SET_GPR_U32(ctx, 31, 0x799468u);
    ctx->pc = 0x799464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799460u;
    // 0x799464: 0x26e5a6b8  addiu       $a1, $s7, -0x5948 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294944440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799460u, 0x799468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799468u;
label_799468:
    // 0x799468: 0x27c4ee00  addiu       $a0, $fp, -0x1200
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962688));
label_79946c:
    // 0x79946c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79946cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799470:
    // 0x799470: 0x24060033  addiu       $a2, $zero, 0x33
    ctx->pc = 0x799470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_799474:
    // 0x799474: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799478:
    // 0x799478: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79947c:
    // 0x79947c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79947cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799480:
    // 0x799480: 0xc0b2e28  jal         func_2CB8A0
label_799484:
    if (ctx->pc == 0x799484u) {
        ctx->pc = 0x799484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799480u;
        // 0x799484: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799488u;
        goto label_799488;
    }
    ctx->pc = 0x799480u;
    SET_GPR_U32(ctx, 31, 0x799488u);
    ctx->pc = 0x799484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799480u;
    // 0x799484: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799480u, 0x799488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799488u;
label_799488:
    // 0x799488: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x799488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79948c:
    // 0x79948c: 0x0  nop
    ctx->pc = 0x79948cu;
    // NOP
label_799490:
    // 0x799490: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x799490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_799494:
    // 0x799494: 0x26846ab0  addiu       $a0, $s4, 0x6AB0
    ctx->pc = 0x799494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27312));
label_799498:
    // 0x799498: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_79949c:
    // 0x79949c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_7994a0:
    // 0x7994a0: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x7994a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_7994a4:
    // 0x7994a4: 0xc0a54b4  jal         func_2952D0
label_7994a8:
    if (ctx->pc == 0x7994A8u) {
        ctx->pc = 0x7994A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A4u;
        // 0x7994a8: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994ACu;
        goto label_7994ac;
    }
    ctx->pc = 0x7994A4u;
    SET_GPR_U32(ctx, 31, 0x7994ACu);
    ctx->pc = 0x7994A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994A4u;
    // 0x7994a8: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7994A4u, 0x7994ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994ACu;
label_7994ac:
    // 0x7994ac: 0x8ea3a800  lw          $v1, -0x5800($s5)
    ctx->pc = 0x7994acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294944768)));
label_7994b0:
    // 0x7994b0: 0x2e240005  sltiu       $a0, $s1, 0x5
    ctx->pc = 0x7994b0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_7994b4:
    // 0x7994b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7994b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_7994b8:
    // 0x7994b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7994b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_7994bc:
    // 0x7994bc: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
label_7994c0:
    if (ctx->pc == 0x7994C0u) {
        ctx->pc = 0x7994C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994BCu;
        // 0x7994c0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994C4u;
        goto label_7994c4;
    }
    ctx->pc = 0x7994BCu;
    {
        const bool branch_taken_0x7994bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x7994C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994BCu;
        // 0x7994c0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994bc) {
            ctx->pc = 0x799490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799490;
        }
    }
    ctx->pc = 0x7994C4u;
label_7994c4:
    // 0x7994c4: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_7994c8:
    // 0x7994c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_7994cc:
    // 0x7994cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x7994ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994d0:
    // 0x7994d0: 0xc0b56a8  jal         func_2D5AA0
label_7994d4:
    if (ctx->pc == 0x7994D4u) {
        ctx->pc = 0x7994D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D0u;
        // 0x7994d4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994D8u;
        goto label_7994d8;
    }
    ctx->pc = 0x7994D0u;
    SET_GPR_U32(ctx, 31, 0x7994D8u);
    ctx->pc = 0x7994D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D0u;
    // 0x7994d4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994D0u, 0x7994D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994D8u;
label_7994d8:
    // 0x7994d8: 0x8ea2a800  lw          $v0, -0x5800($s5)
    ctx->pc = 0x7994d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294944768)));
label_7994dc:
    // 0x7994dc: 0xc06f6fe  jal         func_1BDBF8
label_7994e0:
    if (ctx->pc == 0x7994E0u) {
        ctx->pc = 0x7994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994DCu;
        // 0x7994e0: 0x8c440180  lw          $a0, 0x180($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994E4u;
        goto label_7994e4;
    }
    ctx->pc = 0x7994DCu;
    SET_GPR_U32(ctx, 31, 0x7994E4u);
    ctx->pc = 0x7994E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994DCu;
    // 0x7994e0: 0x8c440180  lw          $a0, 0x180($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDBF8u, 0x7994DCu, 0x7994E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E4u;
label_7994e4:
    // 0x7994e4: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_7994e8:
    // 0x7994e8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_7994ec:
    // 0x7994ec: 0xc0b56a8  jal         func_2D5AA0
label_7994f0:
    if (ctx->pc == 0x7994F0u) {
        ctx->pc = 0x7994F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994ECu;
        // 0x7994f0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994F4u;
        goto label_7994f4;
    }
    ctx->pc = 0x7994ECu;
    SET_GPR_U32(ctx, 31, 0x7994F4u);
    ctx->pc = 0x7994F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994ECu;
    // 0x7994f0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994ECu, 0x7994F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994F4u;
label_7994f4:
    // 0x7994f4: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x7994f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7994f8:
    // 0x7994f8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x7994f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_7994fc:
    // 0x7994fc: 0x0  nop
    ctx->pc = 0x7994fcu;
    // NOP
label_799500:
    // 0x799500: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_799504:
    // 0x799504: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_799508:
    // 0x799508: 0xc0b6dac  jal         func_2DB6B0
label_79950c:
    if (ctx->pc == 0x79950Cu) {
        ctx->pc = 0x79950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799508u;
        // 0x79950c: 0xa3a20020  sb          $v0, 0x20($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799510u;
        goto label_799510;
    }
    ctx->pc = 0x799508u;
    SET_GPR_U32(ctx, 31, 0x799510u);
    ctx->pc = 0x79950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799508u;
    // 0x79950c: 0xa3a20020  sb          $v0, 0x20($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799508u, 0x799510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799510u;
label_799510:
    // 0x799510: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799514:
    // 0x799514: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x799514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_799518:
    // 0x799518: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x799518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79951c:
    // 0x79951c: 0xa0f809  jalr        $a1
label_799520:
    if (ctx->pc == 0x799520u) {
        ctx->pc = 0x799520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79951Cu;
        // 0x799520: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799524u;
        goto label_799524;
    }
    ctx->pc = 0x79951Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x799524u);
        ctx->pc = 0x799520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79951Cu;
        // 0x799520: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79951Cu, 0x799524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799524u;
label_799524:
    // 0x799524: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_799528:
    // 0x799528: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799528u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_79952c:
    // 0x79952c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79952cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799530:
    // 0x799530: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799534:
    // 0x799534: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_799538:
    // 0x799538: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x799538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79953c:
    // 0x79953c: 0xc0a57e0  jal         func_295F80
label_799540:
    if (ctx->pc == 0x799540u) {
        ctx->pc = 0x799540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79953Cu;
        // 0x799540: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799544u;
        goto label_799544;
    }
    ctx->pc = 0x79953Cu;
    SET_GPR_U32(ctx, 31, 0x799544u);
    ctx->pc = 0x799540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79953Cu;
    // 0x799540: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79953Cu, 0x799544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799544u;
label_799544:
    // 0x799544: 0xc0c73f8  jal         func_31CFE0
label_799548:
    if (ctx->pc == 0x799548u) {
        ctx->pc = 0x79954Cu;
        goto label_79954c;
    }
    ctx->pc = 0x799544u;
    SET_GPR_U32(ctx, 31, 0x79954Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x799544u, 0x79954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79954Cu;
label_79954c:
    // 0x79954c: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799550:
    // 0x799550: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x799550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_799554:
    // 0x799554: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x799554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_799558:
    // 0x799558: 0xc0b56a8  jal         func_2D5AA0
label_79955c:
    if (ctx->pc == 0x79955Cu) {
        ctx->pc = 0x79955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799558u;
        // 0x79955c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799560u;
        goto label_799560;
    }
    ctx->pc = 0x799558u;
    SET_GPR_U32(ctx, 31, 0x799560u);
    ctx->pc = 0x79955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799558u;
    // 0x79955c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799558u, 0x799560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799560u;
label_799560:
    // 0x799560: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x799560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_799564:
    // 0x799564: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
label_799568:
    if (ctx->pc == 0x799568u) {
        ctx->pc = 0x799568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799564u;
        // 0x799568: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79956Cu;
        goto label_79956c;
    }
    ctx->pc = 0x799564u;
    {
        const bool branch_taken_0x799564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799564) {
            ctx->pc = 0x799568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799564u;
            // 0x799568: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799500;
        }
    }
    ctx->pc = 0x79956Cu;
label_79956c:
    // 0x79956c: 0xc0b101e  jal         func_2C4078
label_799570:
    if (ctx->pc == 0x799570u) {
        ctx->pc = 0x799570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79956Cu;
        // 0x799570: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799574u;
        goto label_799574;
    }
    ctx->pc = 0x79956Cu;
    SET_GPR_U32(ctx, 31, 0x799574u);
    ctx->pc = 0x799570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79956Cu;
    // 0x799570: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79956Cu, 0x799574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799574u;
label_799574:
    // 0x799574: 0xc0b0f04  jal         func_2C3C10
label_799578:
    if (ctx->pc == 0x799578u) {
        ctx->pc = 0x799578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799574u;
        // 0x799578: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79957Cu;
        goto label_79957c;
    }
    ctx->pc = 0x799574u;
    SET_GPR_U32(ctx, 31, 0x79957Cu);
    ctx->pc = 0x799578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799574u;
    // 0x799578: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799574u, 0x79957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79957Cu;
label_79957c:
    // 0x79957c: 0x8ea3a800  lw          $v1, -0x5800($s5)
    ctx->pc = 0x79957cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294944768)));
label_799580:
    // 0x799580: 0x8c640180  lw          $a0, 0x180($v1)
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 384)));
label_799584:
    // 0x799584: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x799584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_799588:
    // 0x799588: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x799588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_79958c:
    // 0x79958c: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x79958cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_799590:
    // 0x799590: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x799590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799594:
    // 0x799594: 0xc0b5692  jal         func_2D5A48
label_799598:
    if (ctx->pc == 0x799598u) {
        ctx->pc = 0x799598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799594u;
        // 0x799598: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79959Cu;
        goto label_79959c;
    }
    ctx->pc = 0x799594u;
    SET_GPR_U32(ctx, 31, 0x79959Cu);
    ctx->pc = 0x799598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799594u;
    // 0x799598: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799594u, 0x79959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79959Cu;
label_79959c:
    // 0x79959c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x79959cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_7995a0:
    // 0x7995a0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x7995a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_7995a4:
    // 0x7995a4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x7995a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_7995a8:
    // 0x7995a8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x7995a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_7995ac:
    // 0x7995ac: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x7995acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_7995b0:
    // 0x7995b0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x7995b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_7995b4:
    // 0x7995b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x7995b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_7995b8:
    // 0x7995b8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x7995b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7995bc:
    // 0x7995bc: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x7995bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7995c0:
    // 0x7995c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x7995c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_7995c4:
    // 0x7995c4: 0x3e00008  jr          $ra
label_7995c8:
    if (ctx->pc == 0x7995C8u) {
        ctx->pc = 0x7995C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995C4u;
        // 0x7995c8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995CCu;
        goto label_7995cc;
    }
    ctx->pc = 0x7995C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995C4u;
        // 0x7995c8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995CCu;
label_7995cc:
    // 0x7995cc: 0x0  nop
    ctx->pc = 0x7995ccu;
    // NOP
    ctx->pc = 0x7995d0u;
}
} // namespace gh_r405
