#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r801_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r801
{
// Function: checkBattle__5cR801
// Address: 0x799320 - 0x7995e0
void checkBattle__5cR801_0x799320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkBattle__5cR801_0x799320");
#endif

    switch (ctx->pc) {
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
        case 0x7995d0u: goto label_7995d0;
        case 0x7995d4u: goto label_7995d4;
        case 0x7995d8u: goto label_7995d8;
        case 0x7995dcu: goto label_7995dc;
        default: break;
    }

    ctx->pc = 0x799320u;

label_799320:
    // 0x799320: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_799324:
    // 0x799324: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_799328:
    // 0x799328: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x799328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_79932c:
    // 0x79932c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79932cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799330:
    // 0x799330: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x799330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_799334:
    // 0x799334: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
label_799338:
    // 0x799338: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x799338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_79933c:
    // 0x79933c: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
label_799340:
    // 0x799340: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x799340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_799344:
    // 0x799344: 0x3c130057  lui         $s3, 0x57
    ctx->pc = 0x799344u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
label_799348:
    // 0x799348: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x799348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_79934c:
    // 0x79934c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79934cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799350:
    // 0x799350: 0xc0b6cac  jal         func_2DB2B0
label_799354:
    if (ctx->pc == 0x799354u) {
        ctx->pc = 0x799354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799350u;
        // 0x799354: 0x3c140058  lui         $s4, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799358u;
        goto label_799358;
    }
    ctx->pc = 0x799350u;
    SET_GPR_U32(ctx, 31, 0x799358u);
    ctx->pc = 0x799354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799350u;
    // 0x799354: 0x3c140058  lui         $s4, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799350u, 0x799358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799358u;
label_799358:
    // 0x799358: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_79935c:
    // 0x79935c: 0xc0b6cac  jal         func_2DB2B0
label_799360:
    if (ctx->pc == 0x799360u) {
        ctx->pc = 0x799360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79935Cu;
        // 0x799360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799364u;
        goto label_799364;
    }
    ctx->pc = 0x79935Cu;
    SET_GPR_U32(ctx, 31, 0x799364u);
    ctx->pc = 0x799360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79935Cu;
    // 0x799360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79935Cu, 0x799364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799364u;
label_799364:
    // 0x799364: 0x8e238658  lw          $v1, -0x79A8($s1)
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
label_799368:
    // 0x799368: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79936c:
    // 0x79936c: 0x4400038  bltz        $v0, . + 4 + (0x38 << 2)
label_799370:
    if (ctx->pc == 0x799370u) {
        ctx->pc = 0x799370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79936Cu;
        // 0x799370: 0x26846af0  addiu       $a0, $s4, 0x6AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799374u;
        goto label_799374;
    }
    ctx->pc = 0x79936Cu;
    {
        const bool branch_taken_0x79936c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x799370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79936Cu;
        // 0x799370: 0x26846af0  addiu       $a0, $s4, 0x6AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79936c) {
            ctx->pc = 0x799450u;
            goto label_799450;
        }
    }
    ctx->pc = 0x799374u;
label_799374:
    // 0x799374: 0xc0a58dc  jal         func_296370
label_799378:
    if (ctx->pc == 0x799378u) {
        ctx->pc = 0x799378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799374u;
        // 0x799378: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79937Cu;
        goto label_79937c;
    }
    ctx->pc = 0x799374u;
    SET_GPR_U32(ctx, 31, 0x79937Cu);
    ctx->pc = 0x799378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799374u;
    // 0x799378: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x799374u, 0x79937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79937Cu;
label_79937c:
    // 0x79937c: 0x8e238658  lw          $v1, -0x79A8($s1)
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
label_799380:
    // 0x799380: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
label_799384:
    // 0x799384: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x799384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_799388:
    // 0x799388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79938c:
    // 0x79938c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799390:
    // 0x799390: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x799390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_799394:
    // 0x799394: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x799394u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_799398:
    // 0x799398: 0x8ce4d6e8  lw          $a0, -0x2918($a3)
    ctx->pc = 0x799398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294956776)));
label_79939c:
    // 0x79939c: 0xc051a5e  jal         func_146978
label_7993a0:
    if (ctx->pc == 0x7993A0u) {
        ctx->pc = 0x7993A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79939Cu;
        // 0x7993a0: 0x24841cb0  addiu       $a0, $a0, 0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993A4u;
        goto label_7993a4;
    }
    ctx->pc = 0x79939Cu;
    SET_GPR_U32(ctx, 31, 0x7993A4u);
    ctx->pc = 0x7993A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79939Cu;
    // 0x7993a0: 0x24841cb0  addiu       $a0, $a0, 0x1CB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146978u, 0x79939Cu, 0x7993A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A4u;
label_7993a4:
    // 0x7993a4: 0xc0b6dac  jal         func_2DB6B0
label_7993a8:
    if (ctx->pc == 0x7993A8u) {
        ctx->pc = 0x7993ACu;
        goto label_7993ac;
    }
    ctx->pc = 0x7993A4u;
    SET_GPR_U32(ctx, 31, 0x7993ACu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7993A4u, 0x7993ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993ACu;
label_7993ac:
    // 0x7993ac: 0xc0b6dac  jal         func_2DB6B0
label_7993b0:
    if (ctx->pc == 0x7993B0u) {
        ctx->pc = 0x7993B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993ACu;
        // 0x7993b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993B4u;
        goto label_7993b4;
    }
    ctx->pc = 0x7993ACu;
    SET_GPR_U32(ctx, 31, 0x7993B4u);
    ctx->pc = 0x7993B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993ACu;
    // 0x7993b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7993ACu, 0x7993B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B4u;
label_7993b4:
    // 0x7993b4: 0x84430548  lh          $v1, 0x548($v0)
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
label_7993b8:
    // 0x7993b8: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x7993b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
label_7993bc:
    // 0x7993bc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x7993bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_7993c0:
    // 0x7993c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_7993c4:
    if (ctx->pc == 0x7993C4u) {
        ctx->pc = 0x7993C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C0u;
        // 0x7993c4: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993C8u;
        goto label_7993c8;
    }
    ctx->pc = 0x7993C0u;
    {
        const bool branch_taken_0x7993c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7993C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C0u;
        // 0x7993c4: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993c0) {
            ctx->pc = 0x7993D0u;
            goto label_7993d0;
        }
    }
    ctx->pc = 0x7993C8u;
label_7993c8:
    // 0x7993c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_7993cc:
    if (ctx->pc == 0x7993CCu) {
        ctx->pc = 0x7993CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C8u;
        // 0x7993cc: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993D0u;
        goto label_7993d0;
    }
    ctx->pc = 0x7993C8u;
    {
        const bool branch_taken_0x7993c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C8u;
        // 0x7993cc: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993c8) {
            ctx->pc = 0x7993D4u;
            goto label_7993d4;
        }
    }
    ctx->pc = 0x7993D0u;
label_7993d0:
    // 0x7993d0: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x7993d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
label_7993d4:
    // 0x7993d4: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x7993d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_7993d8:
    // 0x7993d8: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x7993d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
label_7993dc:
    // 0x7993dc: 0xc48cb000  lwc1        $f12, -0x5000($a0)
    ctx->pc = 0x7993dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294946816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_7993e0:
    // 0x7993e0: 0x26309b70  addiu       $s0, $s1, -0x6490
    ctx->pc = 0x7993e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
label_7993e4:
    // 0x7993e4: 0xc0aa716  jal         func_2A9C58
label_7993e8:
    if (ctx->pc == 0x7993E8u) {
        ctx->pc = 0x7993E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993E4u;
        // 0x7993e8: 0x2484b000  addiu       $a0, $a0, -0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993ECu;
        goto label_7993ec;
    }
    ctx->pc = 0x7993E4u;
    SET_GPR_U32(ctx, 31, 0x7993ECu);
    ctx->pc = 0x7993E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993E4u;
    // 0x7993e8: 0x2484b000  addiu       $a0, $a0, -0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9C58u, 0x7993E4u, 0x7993ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993ECu;
label_7993ec:
    // 0x7993ec: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x7993ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7993f0:
    // 0x7993f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7993f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7993f4:
    // 0x7993f4: 0xc07ead4  jal         func_1FAB50
label_7993f8:
    if (ctx->pc == 0x7993F8u) {
        ctx->pc = 0x7993F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F4u;
        // 0x7993f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993FCu;
        goto label_7993fc;
    }
    ctx->pc = 0x7993F4u;
    SET_GPR_U32(ctx, 31, 0x7993FCu);
    ctx->pc = 0x7993F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F4u;
    // 0x7993f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x7993F4u, 0x7993FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993FCu;
label_7993fc:
    // 0x7993fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7993fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799400:
    // 0x799400: 0xc07ead4  jal         func_1FAB50
label_799404:
    if (ctx->pc == 0x799404u) {
        ctx->pc = 0x799404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799400u;
        // 0x799404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799408u;
        goto label_799408;
    }
    ctx->pc = 0x799400u;
    SET_GPR_U32(ctx, 31, 0x799408u);
    ctx->pc = 0x799404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799400u;
    // 0x799404: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x799400u, 0x799408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799408u;
label_799408:
    // 0x799408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79940c:
    // 0x79940c: 0xc07ead4  jal         func_1FAB50
label_799410:
    if (ctx->pc == 0x799410u) {
        ctx->pc = 0x799410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79940Cu;
        // 0x799410: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799414u;
        goto label_799414;
    }
    ctx->pc = 0x79940Cu;
    SET_GPR_U32(ctx, 31, 0x799414u);
    ctx->pc = 0x799410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79940Cu;
    // 0x799410: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x79940Cu, 0x799414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799414u;
label_799414:
    // 0x799414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799418:
    // 0x799418: 0xc07ead4  jal         func_1FAB50
label_79941c:
    if (ctx->pc == 0x79941Cu) {
        ctx->pc = 0x79941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799418u;
        // 0x79941c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799420u;
        goto label_799420;
    }
    ctx->pc = 0x799418u;
    SET_GPR_U32(ctx, 31, 0x799420u);
    ctx->pc = 0x79941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799418u;
    // 0x79941c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x799418u, 0x799420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799420u;
label_799420:
    // 0x799420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799424:
    // 0x799424: 0xc07ead4  jal         func_1FAB50
label_799428:
    if (ctx->pc == 0x799428u) {
        ctx->pc = 0x799428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799424u;
        // 0x799428: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79942Cu;
        goto label_79942c;
    }
    ctx->pc = 0x799424u;
    SET_GPR_U32(ctx, 31, 0x79942Cu);
    ctx->pc = 0x799428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799424u;
    // 0x799428: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x799424u, 0x79942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79942Cu;
label_79942c:
    // 0x79942c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79942cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799430:
    // 0x799430: 0xc07ead4  jal         func_1FAB50
label_799434:
    if (ctx->pc == 0x799434u) {
        ctx->pc = 0x799434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799430u;
        // 0x799434: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799438u;
        goto label_799438;
    }
    ctx->pc = 0x799430u;
    SET_GPR_U32(ctx, 31, 0x799438u);
    ctx->pc = 0x799434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799430u;
    // 0x799434: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x799430u, 0x799438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799438u;
label_799438:
    // 0x799438: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79943c:
    // 0x79943c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79943cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799440:
    // 0x799440: 0x8c64264c  lw          $a0, 0x264C($v1)
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9804)));
label_799444:
    // 0x799444: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799448:
    // 0x799448: 0xc0b016c  jal         func_2C05B0
label_79944c:
    if (ctx->pc == 0x79944Cu) {
        ctx->pc = 0x79944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799448u;
        // 0x79944c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799450u;
        goto label_799450;
    }
    ctx->pc = 0x799448u;
    SET_GPR_U32(ctx, 31, 0x799450u);
    ctx->pc = 0x79944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799448u;
    // 0x79944c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799448u, 0x799450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799450u;
label_799450:
    // 0x799450: 0xc07f1d0  jal         func_1FC740
label_799454:
    if (ctx->pc == 0x799454u) {
        ctx->pc = 0x799454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799450u;
        // 0x799454: 0x26649b70  addiu       $a0, $s3, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799458u;
        goto label_799458;
    }
    ctx->pc = 0x799450u;
    SET_GPR_U32(ctx, 31, 0x799458u);
    ctx->pc = 0x799454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799450u;
    // 0x799454: 0x26649b70  addiu       $a0, $s3, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC740u, 0x799450u, 0x799458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799458u;
label_799458:
    // 0x799458: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_79945c:
    if (ctx->pc == 0x79945Cu) {
        ctx->pc = 0x79945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799458u;
        // 0x79945c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799460u;
        goto label_799460;
    }
    ctx->pc = 0x799458u;
    {
        const bool branch_taken_0x799458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799458u;
        // 0x79945c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799458) {
            ctx->pc = 0x79947Cu;
            goto label_79947c;
        }
    }
    ctx->pc = 0x799460u;
label_799460:
    // 0x799460: 0xc0b6cac  jal         func_2DB2B0
label_799464:
    if (ctx->pc == 0x799464u) {
        ctx->pc = 0x799464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799460u;
        // 0x799464: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799468u;
        goto label_799468;
    }
    ctx->pc = 0x799460u;
    SET_GPR_U32(ctx, 31, 0x799468u);
    ctx->pc = 0x799464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799460u;
    // 0x799464: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799460u, 0x799468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799468u;
label_799468:
    // 0x799468: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_79946c:
    // 0x79946c: 0xc0b6cac  jal         func_2DB2B0
label_799470:
    if (ctx->pc == 0x799470u) {
        ctx->pc = 0x799470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79946Cu;
        // 0x799470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799474u;
        goto label_799474;
    }
    ctx->pc = 0x79946Cu;
    SET_GPR_U32(ctx, 31, 0x799474u);
    ctx->pc = 0x799470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79946Cu;
    // 0x799470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79946Cu, 0x799474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799474u;
label_799474:
    // 0x799474: 0x10000007  b           . + 4 + (0x7 << 2)
label_799478:
    if (ctx->pc == 0x799478u) {
        ctx->pc = 0x799478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799474u;
        // 0x799478: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79947Cu;
        goto label_79947c;
    }
    ctx->pc = 0x799474u;
    {
        const bool branch_taken_0x799474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799474u;
        // 0x799478: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799474) {
            ctx->pc = 0x799494u;
            goto label_799494;
        }
    }
    ctx->pc = 0x79947Cu;
label_79947c:
    // 0x79947c: 0xc0b6cac  jal         func_2DB2B0
label_799480:
    if (ctx->pc == 0x799480u) {
        ctx->pc = 0x799480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79947Cu;
        // 0x799480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799484u;
        goto label_799484;
    }
    ctx->pc = 0x79947Cu;
    SET_GPR_U32(ctx, 31, 0x799484u);
    ctx->pc = 0x799480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79947Cu;
    // 0x799480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79947Cu, 0x799484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799484u;
label_799484:
    // 0x799484: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_799488:
    // 0x799488: 0xc0b6cac  jal         func_2DB2B0
label_79948c:
    if (ctx->pc == 0x79948Cu) {
        ctx->pc = 0x79948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799488u;
        // 0x79948c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799490u;
        goto label_799490;
    }
    ctx->pc = 0x799488u;
    SET_GPR_U32(ctx, 31, 0x799490u);
    ctx->pc = 0x79948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799488u;
    // 0x79948c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799488u, 0x799490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799490u;
label_799490:
    // 0x799490: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799494:
    // 0x799494: 0xc0b6cac  jal         func_2DB2B0
label_799498:
    if (ctx->pc == 0x799498u) {
        ctx->pc = 0x799498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799494u;
        // 0x799498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79949Cu;
        goto label_79949c;
    }
    ctx->pc = 0x799494u;
    SET_GPR_U32(ctx, 31, 0x79949Cu);
    ctx->pc = 0x799498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799494u;
    // 0x799498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799494u, 0x79949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79949Cu;
label_79949c:
    // 0x79949c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_7994a0:
    // 0x7994a0: 0xc0b6cac  jal         func_2DB2B0
label_7994a4:
    if (ctx->pc == 0x7994A4u) {
        ctx->pc = 0x7994A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A0u;
        // 0x7994a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994A8u;
        goto label_7994a8;
    }
    ctx->pc = 0x7994A0u;
    SET_GPR_U32(ctx, 31, 0x7994A8u);
    ctx->pc = 0x7994A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994A0u;
    // 0x7994a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7994A0u, 0x7994A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A8u;
label_7994a8:
    // 0x7994a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7994ac:
    // 0x7994ac: 0xc0b6cac  jal         func_2DB2B0
label_7994b0:
    if (ctx->pc == 0x7994B0u) {
        ctx->pc = 0x7994B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994ACu;
        // 0x7994b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994B4u;
        goto label_7994b4;
    }
    ctx->pc = 0x7994ACu;
    SET_GPR_U32(ctx, 31, 0x7994B4u);
    ctx->pc = 0x7994B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994ACu;
    // 0x7994b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7994ACu, 0x7994B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B4u;
label_7994b4:
    // 0x7994b4: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x7994b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_7994b8:
    // 0x7994b8: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x7994b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
label_7994bc:
    // 0x7994bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_7994c0:
    if (ctx->pc == 0x7994C0u) {
        ctx->pc = 0x7994C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994BCu;
        // 0x7994c0: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994C4u;
        goto label_7994c4;
    }
    ctx->pc = 0x7994BCu;
    {
        const bool branch_taken_0x7994bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994BCu;
        // 0x7994c0: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994bc) {
            ctx->pc = 0x7994D4u;
            goto label_7994d4;
        }
    }
    ctx->pc = 0x7994C4u;
label_7994c4:
    // 0x7994c4: 0x0  nop
    ctx->pc = 0x7994c4u;
    // NOP
label_7994c8:
    // 0x7994c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7994cc:
    // 0x7994cc: 0xc0b56a8  jal         func_2D5AA0
label_7994d0:
    if (ctx->pc == 0x7994D0u) {
        ctx->pc = 0x7994D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994CCu;
        // 0x7994d0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994D4u;
        goto label_7994d4;
    }
    ctx->pc = 0x7994CCu;
    SET_GPR_U32(ctx, 31, 0x7994D4u);
    ctx->pc = 0x7994D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994CCu;
    // 0x7994d0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994CCu, 0x7994D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994D4u;
label_7994d4:
    // 0x7994d4: 0xc0a5772  jal         func_295DC8
label_7994d8:
    if (ctx->pc == 0x7994D8u) {
        ctx->pc = 0x7994D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D4u;
        // 0x7994d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994DCu;
        goto label_7994dc;
    }
    ctx->pc = 0x7994D4u;
    SET_GPR_U32(ctx, 31, 0x7994DCu);
    ctx->pc = 0x7994D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D4u;
    // 0x7994d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DC8u, 0x7994D4u, 0x7994DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994DCu;
label_7994dc:
    // 0x7994dc: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
label_7994e0:
    if (ctx->pc == 0x7994E0u) {
        ctx->pc = 0x7994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994DCu;
        // 0x7994e0: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994E4u;
        goto label_7994e4;
    }
    ctx->pc = 0x7994DCu;
    {
        const bool branch_taken_0x7994dc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x7994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994DCu;
        // 0x7994e0: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994dc) {
            ctx->pc = 0x7994C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994c8;
        }
    }
    ctx->pc = 0x7994E4u;
label_7994e4:
    // 0x7994e4: 0x26709b70  addiu       $s0, $s3, -0x6490
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
label_7994e8:
    // 0x7994e8: 0xc07ef90  jal         func_1FBE40
label_7994ec:
    if (ctx->pc == 0x7994ECu) {
        ctx->pc = 0x7994ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994E8u;
        // 0x7994ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994F0u;
        goto label_7994f0;
    }
    ctx->pc = 0x7994E8u;
    SET_GPR_U32(ctx, 31, 0x7994F0u);
    ctx->pc = 0x7994ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E8u;
    // 0x7994ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE40u, 0x7994E8u, 0x7994F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994F0u;
label_7994f0:
    // 0x7994f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7994f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7994f4:
    // 0x7994f4: 0xc0b6cac  jal         func_2DB2B0
label_7994f8:
    if (ctx->pc == 0x7994F8u) {
        ctx->pc = 0x7994F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F4u;
        // 0x7994f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994FCu;
        goto label_7994fc;
    }
    ctx->pc = 0x7994F4u;
    SET_GPR_U32(ctx, 31, 0x7994FCu);
    ctx->pc = 0x7994F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994F4u;
    // 0x7994f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7994F4u, 0x7994FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994FCu;
label_7994fc:
    // 0x7994fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x7994fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799500:
    // 0x799500: 0xc0b6cac  jal         func_2DB2B0
label_799504:
    if (ctx->pc == 0x799504u) {
        ctx->pc = 0x799504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799500u;
        // 0x799504: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799508u;
        goto label_799508;
    }
    ctx->pc = 0x799500u;
    SET_GPR_U32(ctx, 31, 0x799508u);
    ctx->pc = 0x799504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799500u;
    // 0x799504: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799500u, 0x799508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799508u;
label_799508:
    // 0x799508: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x799508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79950c:
    // 0x79950c: 0xc0b6cac  jal         func_2DB2B0
label_799510:
    if (ctx->pc == 0x799510u) {
        ctx->pc = 0x799510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79950Cu;
        // 0x799510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799514u;
        goto label_799514;
    }
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
    // 0x799514: 0x26846af0  addiu       $a0, $s4, 0x6AF0
    ctx->pc = 0x799514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27376));
label_799518:
    // 0x799518: 0xc0a58dc  jal         func_296370
label_79951c:
    if (ctx->pc == 0x79951Cu) {
        ctx->pc = 0x79951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799518u;
        // 0x79951c: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799520u;
        goto label_799520;
    }
    ctx->pc = 0x799518u;
    SET_GPR_U32(ctx, 31, 0x799520u);
    ctx->pc = 0x79951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799518u;
    // 0x79951c: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x799518u, 0x799520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799520u;
label_799520:
    // 0x799520: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x799520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_799524:
    // 0x799524: 0xc0b6cac  jal         func_2DB2B0
label_799528:
    if (ctx->pc == 0x799528u) {
        ctx->pc = 0x799528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799524u;
        // 0x799528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79952Cu;
        goto label_79952c;
    }
    ctx->pc = 0x799524u;
    SET_GPR_U32(ctx, 31, 0x79952Cu);
    ctx->pc = 0x799528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799524u;
    // 0x799528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799524u, 0x79952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79952Cu;
label_79952c:
    // 0x79952c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x79952cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_799530:
    // 0x799530: 0xc0b6cac  jal         func_2DB2B0
label_799534:
    if (ctx->pc == 0x799534u) {
        ctx->pc = 0x799534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799530u;
        // 0x799534: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799538u;
        goto label_799538;
    }
    ctx->pc = 0x799530u;
    SET_GPR_U32(ctx, 31, 0x799538u);
    ctx->pc = 0x799534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799530u;
    // 0x799534: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799530u, 0x799538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799538u;
label_799538:
    // 0x799538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79953c:
    // 0x79953c: 0xc07f036  jal         func_1FC0D8
label_799540:
    if (ctx->pc == 0x799540u) {
        ctx->pc = 0x799540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79953Cu;
        // 0x799540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799544u;
        goto label_799544;
    }
    ctx->pc = 0x79953Cu;
    SET_GPR_U32(ctx, 31, 0x799544u);
    ctx->pc = 0x799540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79953Cu;
    // 0x799540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0D8u, 0x79953Cu, 0x799544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799544u;
label_799544:
    // 0x799544: 0x26437a2c  addiu       $v1, $s2, 0x7A2C
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 31276));
label_799548:
    // 0x799548: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x799548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_79954c:
    // 0x79954c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799550:
    // 0x799550: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x799550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_799554:
    // 0x799554: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_799558:
    if (ctx->pc == 0x799558u) {
        ctx->pc = 0x799558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799554u;
        // 0x799558: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79955Cu;
        goto label_79955c;
    }
    ctx->pc = 0x799554u;
    {
        const bool branch_taken_0x799554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799554u;
        // 0x799558: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799554) {
            ctx->pc = 0x7995B8u;
            goto label_7995b8;
        }
    }
    ctx->pc = 0x79955Cu;
label_79955c:
    // 0x79955c: 0xc0b6dac  jal         func_2DB6B0
label_799560:
    if (ctx->pc == 0x799560u) {
        ctx->pc = 0x799564u;
        goto label_799564;
    }
    ctx->pc = 0x79955Cu;
    SET_GPR_U32(ctx, 31, 0x799564u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79955Cu, 0x799564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799564u;
label_799564:
    // 0x799564: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799568:
    // 0x799568: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79956c:
    // 0x79956c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79956cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_799570:
    // 0x799570: 0xa0f809  jalr        $a1
label_799574:
    if (ctx->pc == 0x799574u) {
        ctx->pc = 0x799574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799570u;
        // 0x799574: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799578u;
        goto label_799578;
    }
    ctx->pc = 0x799570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x799578u);
        ctx->pc = 0x799574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799570u;
        // 0x799574: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799570u, 0x799578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799578u;
label_799578:
    // 0x799578: 0xc0b6dac  jal         func_2DB6B0
label_79957c:
    if (ctx->pc == 0x79957Cu) {
        ctx->pc = 0x79957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799578u;
        // 0x79957c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799580u;
        goto label_799580;
    }
    ctx->pc = 0x799578u;
    SET_GPR_U32(ctx, 31, 0x799580u);
    ctx->pc = 0x79957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799578u;
    // 0x79957c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799578u, 0x799580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799580u;
label_799580:
    // 0x799580: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799584:
    // 0x799584: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x799584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_799588:
    // 0x799588: 0x8c65008c  lw          $a1, 0x8C($v1)
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_79958c:
    // 0x79958c: 0xa0f809  jalr        $a1
label_799590:
    if (ctx->pc == 0x799590u) {
        ctx->pc = 0x799590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79958Cu;
        // 0x799590: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799594u;
        goto label_799594;
    }
    ctx->pc = 0x79958Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x799594u);
        ctx->pc = 0x799590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79958Cu;
        // 0x799590: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79958Cu, 0x799594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799594u;
label_799594:
    // 0x799594: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x799594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_799598:
    // 0x799598: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x799598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79959c:
    // 0x79959c: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79959cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_7995a0:
    // 0x7995a0: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x7995a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_7995a4:
    // 0x7995a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7995a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7995a8:
    // 0x7995a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7995a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7995ac:
    // 0x7995ac: 0xc0b1152  jal         func_2C4548
label_7995b0:
    if (ctx->pc == 0x7995B0u) {
        ctx->pc = 0x7995B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995ACu;
        // 0x7995b0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995B4u;
        goto label_7995b4;
    }
    ctx->pc = 0x7995ACu;
    SET_GPR_U32(ctx, 31, 0x7995B4u);
    ctx->pc = 0x7995B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995ACu;
    // 0x7995b0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x7995ACu, 0x7995B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995B4u;
label_7995b4:
    // 0x7995b4: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_7995b8:
    // 0x7995b8: 0xc0b5692  jal         func_2D5A48
label_7995bc:
    if (ctx->pc == 0x7995BCu) {
        ctx->pc = 0x7995BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B8u;
        // 0x7995bc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995C0u;
        goto label_7995c0;
    }
    ctx->pc = 0x7995B8u;
    SET_GPR_U32(ctx, 31, 0x7995C0u);
    ctx->pc = 0x7995BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995B8u;
    // 0x7995bc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7995B8u, 0x7995C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995C0u;
label_7995c0:
    // 0x7995c0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7995c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_7995c4:
    // 0x7995c4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7995c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7995c8:
    // 0x7995c8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7995c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7995cc:
    // 0x7995cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7995ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7995d0:
    // 0x7995d0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7995d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7995d4:
    // 0x7995d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7995d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7995d8:
    // 0x7995d8: 0x3e00008  jr          $ra
label_7995dc:
    if (ctx->pc == 0x7995DCu) {
        ctx->pc = 0x7995DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D8u;
        // 0x7995dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995E0u;
        goto label_fallthrough_0x7995d8;
    }
    ctx->pc = 0x7995D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D8u;
        // 0x7995dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7995d8:
    ctx->pc = 0x7995E0u;
}
} // namespace gh_r801
