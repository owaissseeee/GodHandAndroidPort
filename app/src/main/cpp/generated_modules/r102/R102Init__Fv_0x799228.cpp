#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: R102Init__Fv
// Address: 0x799228 - 0x7996f0
void R102Init__Fv_0x799228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R102Init__Fv_0x799228");
#endif

    switch (ctx->pc) {
        case 0x799228u: goto label_799228;
        case 0x79922cu: goto label_79922c;
        case 0x799230u: goto label_799230;
        case 0x799234u: goto label_799234;
        case 0x799238u: goto label_799238;
        case 0x79923cu: goto label_79923c;
        case 0x799240u: goto label_799240;
        case 0x799244u: goto label_799244;
        case 0x799248u: goto label_799248;
        case 0x79924cu: goto label_79924c;
        case 0x799250u: goto label_799250;
        case 0x799254u: goto label_799254;
        case 0x799258u: goto label_799258;
        case 0x79925cu: goto label_79925c;
        case 0x799260u: goto label_799260;
        case 0x799264u: goto label_799264;
        case 0x799268u: goto label_799268;
        case 0x79926cu: goto label_79926c;
        case 0x799270u: goto label_799270;
        case 0x799274u: goto label_799274;
        case 0x799278u: goto label_799278;
        case 0x79927cu: goto label_79927c;
        case 0x799280u: goto label_799280;
        case 0x799284u: goto label_799284;
        case 0x799288u: goto label_799288;
        case 0x79928cu: goto label_79928c;
        case 0x799290u: goto label_799290;
        case 0x799294u: goto label_799294;
        case 0x799298u: goto label_799298;
        case 0x79929cu: goto label_79929c;
        case 0x7992a0u: goto label_7992a0;
        case 0x7992a4u: goto label_7992a4;
        case 0x7992a8u: goto label_7992a8;
        case 0x7992acu: goto label_7992ac;
        case 0x7992b0u: goto label_7992b0;
        case 0x7992b4u: goto label_7992b4;
        case 0x7992b8u: goto label_7992b8;
        case 0x7992bcu: goto label_7992bc;
        case 0x7992c0u: goto label_7992c0;
        case 0x7992c4u: goto label_7992c4;
        case 0x7992c8u: goto label_7992c8;
        case 0x7992ccu: goto label_7992cc;
        case 0x7992d0u: goto label_7992d0;
        case 0x7992d4u: goto label_7992d4;
        case 0x7992d8u: goto label_7992d8;
        case 0x7992dcu: goto label_7992dc;
        case 0x7992e0u: goto label_7992e0;
        case 0x7992e4u: goto label_7992e4;
        case 0x7992e8u: goto label_7992e8;
        case 0x7992ecu: goto label_7992ec;
        case 0x7992f0u: goto label_7992f0;
        case 0x7992f4u: goto label_7992f4;
        case 0x7992f8u: goto label_7992f8;
        case 0x7992fcu: goto label_7992fc;
        case 0x799300u: goto label_799300;
        case 0x799304u: goto label_799304;
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
        case 0x7995e0u: goto label_7995e0;
        case 0x7995e4u: goto label_7995e4;
        case 0x7995e8u: goto label_7995e8;
        case 0x7995ecu: goto label_7995ec;
        case 0x7995f0u: goto label_7995f0;
        case 0x7995f4u: goto label_7995f4;
        case 0x7995f8u: goto label_7995f8;
        case 0x7995fcu: goto label_7995fc;
        case 0x799600u: goto label_799600;
        case 0x799604u: goto label_799604;
        case 0x799608u: goto label_799608;
        case 0x79960cu: goto label_79960c;
        case 0x799610u: goto label_799610;
        case 0x799614u: goto label_799614;
        case 0x799618u: goto label_799618;
        case 0x79961cu: goto label_79961c;
        case 0x799620u: goto label_799620;
        case 0x799624u: goto label_799624;
        case 0x799628u: goto label_799628;
        case 0x79962cu: goto label_79962c;
        case 0x799630u: goto label_799630;
        case 0x799634u: goto label_799634;
        case 0x799638u: goto label_799638;
        case 0x79963cu: goto label_79963c;
        case 0x799640u: goto label_799640;
        case 0x799644u: goto label_799644;
        case 0x799648u: goto label_799648;
        case 0x79964cu: goto label_79964c;
        case 0x799650u: goto label_799650;
        case 0x799654u: goto label_799654;
        case 0x799658u: goto label_799658;
        case 0x79965cu: goto label_79965c;
        case 0x799660u: goto label_799660;
        case 0x799664u: goto label_799664;
        case 0x799668u: goto label_799668;
        case 0x79966cu: goto label_79966c;
        case 0x799670u: goto label_799670;
        case 0x799674u: goto label_799674;
        case 0x799678u: goto label_799678;
        case 0x79967cu: goto label_79967c;
        case 0x799680u: goto label_799680;
        case 0x799684u: goto label_799684;
        case 0x799688u: goto label_799688;
        case 0x79968cu: goto label_79968c;
        case 0x799690u: goto label_799690;
        case 0x799694u: goto label_799694;
        case 0x799698u: goto label_799698;
        case 0x79969cu: goto label_79969c;
        case 0x7996a0u: goto label_7996a0;
        case 0x7996a4u: goto label_7996a4;
        case 0x7996a8u: goto label_7996a8;
        case 0x7996acu: goto label_7996ac;
        case 0x7996b0u: goto label_7996b0;
        case 0x7996b4u: goto label_7996b4;
        case 0x7996b8u: goto label_7996b8;
        case 0x7996bcu: goto label_7996bc;
        case 0x7996c0u: goto label_7996c0;
        case 0x7996c4u: goto label_7996c4;
        case 0x7996c8u: goto label_7996c8;
        case 0x7996ccu: goto label_7996cc;
        case 0x7996d0u: goto label_7996d0;
        case 0x7996d4u: goto label_7996d4;
        case 0x7996d8u: goto label_7996d8;
        case 0x7996dcu: goto label_7996dc;
        case 0x7996e0u: goto label_7996e0;
        case 0x7996e4u: goto label_7996e4;
        case 0x7996e8u: goto label_7996e8;
        case 0x7996ecu: goto label_7996ec;
        default: break;
    }

    ctx->pc = 0x799228u;

label_799228:
    // 0x799228: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x799228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_79922c:
    // 0x79922c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x79922cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_799230:
    // 0x799230: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x799230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_799234:
    // 0x799234: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x799234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_799238:
    // 0x799238: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799238u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
label_79923c:
    // 0x79923c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x79923cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_799240:
    // 0x799240: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x799240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_799244:
    // 0x799244: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x799244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_799248:
    // 0x799248: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x799248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_79924c:
    // 0x79924c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x79924cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_799250:
    // 0x799250: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_799254:
    // 0x799254: 0xc1e6460  jal         func_799180
label_799258:
    if (ctx->pc == 0x799258u) {
        ctx->pc = 0x799258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799254u;
        // 0x799258: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79925Cu;
        goto label_79925c;
    }
    ctx->pc = 0x799254u;
    SET_GPR_U32(ctx, 31, 0x79925Cu);
    ctx->pc = 0x799258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799254u;
    // 0x799258: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799254u, 0x79925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79925Cu;
label_79925c:
    // 0x79925c: 0xae02c000  sw          $v0, -0x4000($s0)
    ctx->pc = 0x79925cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950912), GPR_U32(ctx, 2));
label_799260:
    // 0x799260: 0x24040363  addiu       $a0, $zero, 0x363
    ctx->pc = 0x799260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 867));
label_799264:
    // 0x799264: 0xc0c3ea6  jal         func_30FA98
label_799268:
    if (ctx->pc == 0x799268u) {
        ctx->pc = 0x799268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799264u;
        // 0x799268: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79926Cu;
        goto label_79926c;
    }
    ctx->pc = 0x799264u;
    SET_GPR_U32(ctx, 31, 0x79926Cu);
    ctx->pc = 0x799268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799264u;
    // 0x799268: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x799264u, 0x79926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79926Cu;
label_79926c:
    // 0x79926c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79926cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799270:
    // 0x799270: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_799274:
    if (ctx->pc == 0x799274u) {
        ctx->pc = 0x799274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799270u;
        // 0x799274: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799278u;
        goto label_799278;
    }
    ctx->pc = 0x799270u;
    {
        const bool branch_taken_0x799270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799270u;
        // 0x799274: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799270) {
            ctx->pc = 0x7992D4u;
            goto label_7992d4;
        }
    }
    ctx->pc = 0x799278u;
label_799278:
    // 0x799278: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79927c:
    // 0x79927c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x79927cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_799280:
    // 0x799280: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_799284:
    // 0x799284: 0x40f809  jalr        $v0
label_799288:
    if (ctx->pc == 0x799288u) {
        ctx->pc = 0x799288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799284u;
        // 0x799288: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79928Cu;
        goto label_79928c;
    }
    ctx->pc = 0x799284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79928Cu);
        ctx->pc = 0x799288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799284u;
        // 0x799288: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799284u, 0x79928Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79928Cu;
label_79928c:
    // 0x79928c: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_799290:
    // 0x799290: 0x26020100  addiu       $v0, $s0, 0x100
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_799294:
    // 0x799294: 0x3c0141c6  lui         $at, 0x41C6
    ctx->pc = 0x799294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16838 << 16));
label_799298:
    // 0x799298: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x799298u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
label_79929c:
    // 0x79929c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79929cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7992a0:
    // 0x7992a0: 0x3c01bfc1  lui         $at, 0xBFC1
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49089 << 16));
label_7992a4:
    // 0x7992a4: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x7992a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_7992a8:
    // 0x7992a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7992a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_7992ac:
    // 0x7992ac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x7992acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_7992b0:
    // 0x7992b0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x7992b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_7992b4:
    // 0x7992b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x7992b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_7992b8:
    // 0x7992b8: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x7992b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
label_7992bc:
    // 0x7992bc: 0x3421be0b  ori         $at, $at, 0xBE0B
    ctx->pc = 0x7992bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48651);
label_7992c0:
    // 0x7992c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7992c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7992c4:
    // 0x7992c4: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x7992c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
label_7992c8:
    // 0x7992c8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x7992c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_7992cc:
    // 0x7992cc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x7992ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_7992d0:
    // 0x7992d0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_7992d4:
    // 0x7992d4: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
label_7992d8:
    // 0x7992d8: 0x8044bf20  lb          $a0, -0x40E0($v0)
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950688)));
label_7992dc:
    // 0x7992dc: 0x2446bf20  addiu       $a2, $v0, -0x40E0
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950688));
label_7992e0:
    // 0x7992e0: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x7992e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7992e4:
    // 0x7992e4: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
label_7992e8:
    // 0x7992e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7992e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7992ec:
    // 0x7992ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7992ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7992f0:
    // 0x7992f0: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
label_7992f4:
    // 0x7992f4: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
label_7992f8:
    // 0x7992f8: 0x3c13005f  lui         $s3, 0x5F
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)95 << 16));
label_7992fc:
    // 0x7992fc: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
label_799300:
    // 0x799300: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_799304:
    if (ctx->pc == 0x799304u) {
        ctx->pc = 0x799304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799300u;
        // 0x799304: 0x27b60010  addiu       $s6, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799308u;
        goto label_799308;
    }
    ctx->pc = 0x799300u;
    {
        const bool branch_taken_0x799300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799300u;
        // 0x799304: 0x27b60010  addiu       $s6, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799300) {
            ctx->pc = 0x799338u;
            goto label_799338;
        }
    }
    ctx->pc = 0x799308u;
label_799308:
    // 0x799308: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79930c:
    // 0x79930c: 0x0  nop
    ctx->pc = 0x79930cu;
    // NOP
label_799310:
    // 0x799310: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_799314:
    // 0x799314: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799318:
    // 0x799318: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79931c:
    // 0x79931c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79931cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799320:
    // 0x799320: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799320u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_799324:
    // 0x799324: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799328:
    if (ctx->pc == 0x799328u) {
        ctx->pc = 0x799328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799324u;
        // 0x799328: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79932Cu;
        goto label_79932c;
    }
    ctx->pc = 0x799324u;
    {
        const bool branch_taken_0x799324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799324u;
        // 0x799328: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799324) {
            ctx->pc = 0x799338u;
            goto label_799338;
        }
    }
    ctx->pc = 0x79932Cu;
label_79932c:
    // 0x79932c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799330:
    // 0x799330: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_799334:
    if (ctx->pc == 0x799334u) {
        ctx->pc = 0x799334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799330u;
        // 0x799334: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799338u;
        goto label_799338;
    }
    ctx->pc = 0x799330u;
    {
        const bool branch_taken_0x799330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799330) {
            ctx->pc = 0x799334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799330u;
            // 0x799334: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799310;
        }
    }
    ctx->pc = 0x799338u;
label_799338:
    // 0x799338: 0xc053f66  jal         func_14FD98
label_79933c:
    if (ctx->pc == 0x79933Cu) {
        ctx->pc = 0x79933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799338u;
        // 0x79933c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799340u;
        goto label_799340;
    }
    ctx->pc = 0x799338u;
    SET_GPR_U32(ctx, 31, 0x799340u);
    ctx->pc = 0x79933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799338u;
    // 0x79933c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799338u, 0x799340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799340u;
label_799340:
    // 0x799340: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x799340u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799344:
    // 0x799344: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_799348:
    if (ctx->pc == 0x799348u) {
        ctx->pc = 0x799348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799344u;
        // 0x799348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79934Cu;
        goto label_79934c;
    }
    ctx->pc = 0x799344u;
    {
        const bool branch_taken_0x799344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799344u;
        // 0x799348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799344) {
            ctx->pc = 0x799380u;
            goto label_799380;
        }
    }
    ctx->pc = 0x79934Cu;
label_79934c:
    // 0x79934c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x79934cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_799350:
    // 0x799350: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799354:
    // 0x799354: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x799354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
label_799358:
    // 0x799358: 0x24a5bf28  addiu       $a1, $a1, -0x40D8
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950696));
label_79935c:
    // 0x79935c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79935cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799360:
    // 0x799360: 0xac6205ec  sw          $v0, 0x5EC($v1)
    ctx->pc = 0x799360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1516), GPR_U32(ctx, 2));
label_799364:
    // 0x799364: 0xc04ccb4  jal         func_1332D0
label_799368:
    if (ctx->pc == 0x799368u) {
        ctx->pc = 0x799368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799364u;
        // 0x799368: 0xac6205f0  sw          $v0, 0x5F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79936Cu;
        goto label_79936c;
    }
    ctx->pc = 0x799364u;
    SET_GPR_U32(ctx, 31, 0x79936Cu);
    ctx->pc = 0x799368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799364u;
    // 0x799368: 0xac6205f0  sw          $v0, 0x5F0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799364u, 0x79936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79936Cu;
label_79936c:
    // 0x79936c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79936cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799370:
    // 0x799370: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_799374:
    // 0x799374: 0x24a59918  addiu       $a1, $a1, -0x66E8
    ctx->pc = 0x799374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940952));
label_799378:
    // 0x799378: 0xc0b0e24  jal         func_2C3890
label_79937c:
    if (ctx->pc == 0x79937Cu) {
        ctx->pc = 0x79937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799378u;
        // 0x79937c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799380u;
        goto label_799380;
    }
    ctx->pc = 0x799378u;
    SET_GPR_U32(ctx, 31, 0x799380u);
    ctx->pc = 0x79937Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799378u;
    // 0x79937c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799378u, 0x799380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799380u;
label_799380:
    // 0x799380: 0x8202bf30  lb          $v0, -0x40D0($s0)
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294950704)));
label_799384:
    // 0x799384: 0x26a84c58  addiu       $t0, $s5, 0x4C58
    ctx->pc = 0x799384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19544));
label_799388:
    // 0x799388: 0x2603bf30  addiu       $v1, $s0, -0x40D0
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950704));
label_79938c:
    // 0x79938c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79938cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799390:
    // 0x799390: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_799394:
    if (ctx->pc == 0x799394u) {
        ctx->pc = 0x799394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799390u;
        // 0x799394: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
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
        // 0x799394: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799390) {
            ctx->pc = 0x7993C8u;
            goto label_7993c8;
        }
    }
    ctx->pc = 0x799398u;
label_799398:
    // 0x799398: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79939c:
    // 0x79939c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79939cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7993a0:
    // 0x7993a0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_7993a4:
    // 0x7993a4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_7993a8:
    // 0x7993a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_7993ac:
    // 0x7993ac: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7993acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_7993b0:
    // 0x7993b0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7993b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_7993b4:
    // 0x7993b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_7993b8:
    if (ctx->pc == 0x7993B8u) {
        ctx->pc = 0x7993B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B4u;
        // 0x7993b8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993BCu;
        goto label_7993bc;
    }
    ctx->pc = 0x7993B4u;
    {
        const bool branch_taken_0x7993b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B4u;
        // 0x7993b8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993b4) {
            ctx->pc = 0x7993C8u;
            goto label_7993c8;
        }
    }
    ctx->pc = 0x7993BCu;
label_7993bc:
    // 0x7993bc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7993c0:
    // 0x7993c0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_7993c4:
    if (ctx->pc == 0x7993C4u) {
        ctx->pc = 0x7993C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C0u;
        // 0x7993c4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993C8u;
        goto label_7993c8;
    }
    ctx->pc = 0x7993C0u;
    {
        const bool branch_taken_0x7993c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7993c0) {
            ctx->pc = 0x7993C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7993C0u;
            // 0x7993c4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7993A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993a0;
        }
    }
    ctx->pc = 0x7993C8u;
label_7993c8:
    // 0x7993c8: 0xc053f66  jal         func_14FD98
label_7993cc:
    if (ctx->pc == 0x7993CCu) {
        ctx->pc = 0x7993CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C8u;
        // 0x7993cc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993D0u;
        goto label_7993d0;
    }
    ctx->pc = 0x7993C8u;
    SET_GPR_U32(ctx, 31, 0x7993D0u);
    ctx->pc = 0x7993CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993C8u;
    // 0x7993cc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7993C8u, 0x7993D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D0u;
label_7993d0:
    // 0x7993d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_7993d4:
    if (ctx->pc == 0x7993D4u) {
        ctx->pc = 0x7993D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993D0u;
        // 0x7993d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993D8u;
        goto label_7993d8;
    }
    ctx->pc = 0x7993D0u;
    {
        const bool branch_taken_0x7993d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993D0u;
        // 0x7993d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993d0) {
            ctx->pc = 0x7993E4u;
            goto label_7993e4;
        }
    }
    ctx->pc = 0x7993D8u;
label_7993d8:
    // 0x7993d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7993d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7993dc:
    // 0x7993dc: 0xc06dca0  jal         func_1B7280
label_7993e0:
    if (ctx->pc == 0x7993E0u) {
        ctx->pc = 0x7993E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993DCu;
        // 0x7993e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993E4u;
        goto label_7993e4;
    }
    ctx->pc = 0x7993DCu;
    SET_GPR_U32(ctx, 31, 0x7993E4u);
    ctx->pc = 0x7993E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993DCu;
    // 0x7993e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x7993DCu, 0x7993E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993E4u;
label_7993e4:
    // 0x7993e4: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_7993e8:
    // 0x7993e8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_7993ec:
    // 0x7993ec: 0x24a5b588  addiu       $a1, $a1, -0x4A78
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948232));
label_7993f0:
    // 0x7993f0: 0xc0b0e24  jal         func_2C3890
label_7993f4:
    if (ctx->pc == 0x7993F4u) {
        ctx->pc = 0x7993F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F0u;
        // 0x7993f4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993F8u;
        goto label_7993f8;
    }
    ctx->pc = 0x7993F0u;
    SET_GPR_U32(ctx, 31, 0x7993F8u);
    ctx->pc = 0x7993F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F0u;
    // 0x7993f4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7993F0u, 0x7993F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993F8u;
label_7993f8:
    // 0x7993f8: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_7993fc:
    // 0x7993fc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799400:
    // 0x799400: 0x24a5b7a0  addiu       $a1, $a1, -0x4860
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948768));
label_799404:
    // 0x799404: 0xc0b0e24  jal         func_2C3890
label_799408:
    if (ctx->pc == 0x799408u) {
        ctx->pc = 0x799408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799404u;
        // 0x799408: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79940Cu;
        goto label_79940c;
    }
    ctx->pc = 0x799404u;
    SET_GPR_U32(ctx, 31, 0x79940Cu);
    ctx->pc = 0x799408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799404u;
    // 0x799408: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799404u, 0x79940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79940Cu;
label_79940c:
    // 0x79940c: 0x8e638658  lw          $v1, -0x79A8($s3)
    ctx->pc = 0x79940cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
label_799410:
    // 0x799410: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x799410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
label_799414:
    // 0x799414: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799418:
    // 0x799418: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x799418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_79941c:
    // 0x79941c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_799420:
    if (ctx->pc == 0x799420u) {
        ctx->pc = 0x799420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79941Cu;
        // 0x799420: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799424u;
        goto label_799424;
    }
    ctx->pc = 0x79941Cu;
    {
        const bool branch_taken_0x79941c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79941Cu;
        // 0x799420: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79941c) {
            ctx->pc = 0x799438u;
            goto label_799438;
        }
    }
    ctx->pc = 0x799424u;
label_799424:
    // 0x799424: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799428:
    // 0x799428: 0x24a5b8e8  addiu       $a1, $a1, -0x4718
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949096));
label_79942c:
    // 0x79942c: 0xc0b0e24  jal         func_2C3890
label_799430:
    if (ctx->pc == 0x799430u) {
        ctx->pc = 0x799430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79942Cu;
        // 0x799430: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799434u;
        goto label_799434;
    }
    ctx->pc = 0x79942Cu;
    SET_GPR_U32(ctx, 31, 0x799434u);
    ctx->pc = 0x799430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79942Cu;
    // 0x799430: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79942Cu, 0x799434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799434u;
label_799434:
    // 0x799434: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_799438:
    // 0x799438: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79943c:
    // 0x79943c: 0x24a5bb80  addiu       $a1, $a1, -0x4480
    ctx->pc = 0x79943cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949760));
label_799440:
    // 0x799440: 0xc0b0e24  jal         func_2C3890
label_799444:
    if (ctx->pc == 0x799444u) {
        ctx->pc = 0x799444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799440u;
        // 0x799444: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799448u;
        goto label_799448;
    }
    ctx->pc = 0x799440u;
    SET_GPR_U32(ctx, 31, 0x799448u);
    ctx->pc = 0x799444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799440u;
    // 0x799444: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799440u, 0x799448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799448u;
label_799448:
    // 0x799448: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79944c:
    // 0x79944c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79944cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799450:
    // 0x799450: 0x24a59818  addiu       $a1, $a1, -0x67E8
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940696));
label_799454:
    // 0x799454: 0xc0b0e24  jal         func_2C3890
label_799458:
    if (ctx->pc == 0x799458u) {
        ctx->pc = 0x799458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799454u;
        // 0x799458: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79945Cu;
        goto label_79945c;
    }
    ctx->pc = 0x799454u;
    SET_GPR_U32(ctx, 31, 0x79945Cu);
    ctx->pc = 0x799458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799454u;
    // 0x799458: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799454u, 0x79945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79945Cu;
label_79945c:
    // 0x79945c: 0x8282bf38  lb          $v0, -0x40C8($s4)
    ctx->pc = 0x79945cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294950712)));
label_799460:
    // 0x799460: 0x26a84c58  addiu       $t0, $s5, 0x4C58
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19544));
label_799464:
    // 0x799464: 0x2683bf38  addiu       $v1, $s4, -0x40C8
    ctx->pc = 0x799464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950712));
label_799468:
    // 0x799468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79946c:
    // 0x79946c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799470:
    if (ctx->pc == 0x799470u) {
        ctx->pc = 0x799470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79946Cu;
        // 0x799470: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799474u;
        goto label_799474;
    }
    ctx->pc = 0x79946Cu;
    {
        const bool branch_taken_0x79946c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79946Cu;
        // 0x799470: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79946c) {
            ctx->pc = 0x7994A8u;
            goto label_7994a8;
        }
    }
    ctx->pc = 0x799474u;
label_799474:
    // 0x799474: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799478:
    // 0x799478: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79947c:
    // 0x79947c: 0x0  nop
    ctx->pc = 0x79947cu;
    // NOP
label_799480:
    // 0x799480: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799480u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_799484:
    // 0x799484: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799488:
    // 0x799488: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79948c:
    // 0x79948c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79948cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799490:
    // 0x799490: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799490u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_799494:
    // 0x799494: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799498:
    if (ctx->pc == 0x799498u) {
        ctx->pc = 0x799498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799494u;
        // 0x799498: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79949Cu;
        goto label_79949c;
    }
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
label_79949c:
    // 0x79949c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7994a0:
    // 0x7994a0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_7994a4:
    if (ctx->pc == 0x7994A4u) {
        ctx->pc = 0x7994A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A0u;
        // 0x7994a4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994A8u;
        goto label_7994a8;
    }
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
    // 0x7994a8: 0xc053f66  jal         func_14FD98
label_7994ac:
    if (ctx->pc == 0x7994ACu) {
        ctx->pc = 0x7994ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A8u;
        // 0x7994ac: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994B0u;
        goto label_7994b0;
    }
    ctx->pc = 0x7994A8u;
    SET_GPR_U32(ctx, 31, 0x7994B0u);
    ctx->pc = 0x7994ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994A8u;
    // 0x7994ac: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7994A8u, 0x7994B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B0u;
label_7994b0:
    // 0x7994b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7994b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7994b4:
    // 0x7994b4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x7994b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_7994b8:
    // 0x7994b8: 0x8e628658  lw          $v0, -0x79A8($s3)
    ctx->pc = 0x7994b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
label_7994bc:
    // 0x7994bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7994bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7994c0:
    // 0x7994c0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7994c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_7994c4:
    // 0x7994c4: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_7994c8:
    if (ctx->pc == 0x7994C8u) {
        ctx->pc = 0x7994C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994C4u;
        // 0x7994c8: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994CCu;
        goto label_7994cc;
    }
    ctx->pc = 0x7994C4u;
    {
        const bool branch_taken_0x7994c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7994C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994C4u;
        // 0x7994c8: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994c4) {
            ctx->pc = 0x7994F4u;
            goto label_7994f4;
        }
    }
    ctx->pc = 0x7994CCu;
label_7994cc:
    // 0x7994cc: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_7994d0:
    // 0x7994d0: 0x24a59c78  addiu       $a1, $a1, -0x6388
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941816));
label_7994d4:
    // 0x7994d4: 0xc0b0e24  jal         func_2C3890
label_7994d8:
    if (ctx->pc == 0x7994D8u) {
        ctx->pc = 0x7994D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D4u;
        // 0x7994d8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994DCu;
        goto label_7994dc;
    }
    ctx->pc = 0x7994D4u;
    SET_GPR_U32(ctx, 31, 0x7994DCu);
    ctx->pc = 0x7994D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D4u;
    // 0x7994d8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7994D4u, 0x7994DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994DCu;
label_7994dc:
    // 0x7994dc: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_7994e0:
    if (ctx->pc == 0x7994E0u) {
        ctx->pc = 0x7994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994DCu;
        // 0x7994e0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994E4u;
        goto label_7994e4;
    }
    ctx->pc = 0x7994DCu;
    {
        const bool branch_taken_0x7994dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994DCu;
        // 0x7994e0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994dc) {
            ctx->pc = 0x799508u;
            goto label_799508;
        }
    }
    ctx->pc = 0x7994E4u;
label_7994e4:
    // 0x7994e4: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
label_7994e8:
    // 0x7994e8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x7994e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_7994ec:
    // 0x7994ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_7994f0:
    if (ctx->pc == 0x7994F0u) {
        ctx->pc = 0x7994F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994ECu;
        // 0x7994f0: 0xae0205b8  sw          $v0, 0x5B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994F4u;
        goto label_7994f4;
    }
    ctx->pc = 0x7994ECu;
    {
        const bool branch_taken_0x7994ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994ECu;
        // 0x7994f0: 0xae0205b8  sw          $v0, 0x5B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994ec) {
            ctx->pc = 0x799508u;
            goto label_799508;
        }
    }
    ctx->pc = 0x7994F4u;
label_7994f4:
    // 0x7994f4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_7994f8:
    if (ctx->pc == 0x7994F8u) {
        ctx->pc = 0x7994F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F4u;
        // 0x7994f8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994FCu;
        goto label_7994fc;
    }
    ctx->pc = 0x7994F4u;
    {
        const bool branch_taken_0x7994f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F4u;
        // 0x7994f8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994f4) {
            ctx->pc = 0x799508u;
            goto label_799508;
        }
    }
    ctx->pc = 0x7994FCu;
label_7994fc:
    // 0x7994fc: 0xc0c49c2  jal         func_312708
label_799500:
    if (ctx->pc == 0x799500u) {
        ctx->pc = 0x799500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994FCu;
        // 0x799500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799504u;
        goto label_799504;
    }
    ctx->pc = 0x7994FCu;
    SET_GPR_U32(ctx, 31, 0x799504u);
    ctx->pc = 0x799500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994FCu;
    // 0x799500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x7994FCu, 0x799504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799504u;
label_799504:
    // 0x799504: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x799504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_799508:
    // 0x799508: 0xc0c3ea6  jal         func_30FA98
label_79950c:
    if (ctx->pc == 0x79950Cu) {
        ctx->pc = 0x79950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799508u;
        // 0x79950c: 0x24040353  addiu       $a0, $zero, 0x353 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 851));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799510u;
        goto label_799510;
    }
    ctx->pc = 0x799508u;
    SET_GPR_U32(ctx, 31, 0x799510u);
    ctx->pc = 0x79950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799508u;
    // 0x79950c: 0x24040353  addiu       $a0, $zero, 0x353 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 851));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x799508u, 0x799510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799510u;
label_799510:
    // 0x799510: 0x8e43c000  lw          $v1, -0x4000($s2)
    ctx->pc = 0x799510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950912)));
label_799514:
    // 0x799514: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x799514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_799518:
    // 0x799518: 0x8e42c000  lw          $v0, -0x4000($s2)
    ctx->pc = 0x799518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950912)));
label_79951c:
    // 0x79951c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x79951cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_799520:
    // 0x799520: 0x50a0001b  beql        $a1, $zero, . + 4 + (0x1B << 2)
label_799524:
    if (ctx->pc == 0x799524u) {
        ctx->pc = 0x799524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799520u;
        // 0x799524: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799528u;
        goto label_799528;
    }
    ctx->pc = 0x799520u;
    {
        const bool branch_taken_0x799520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x799520) {
            ctx->pc = 0x799524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799520u;
            // 0x799524: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799590u;
            goto label_799590;
        }
    }
    ctx->pc = 0x799528u;
label_799528:
    // 0x799528: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x799528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_79952c:
    // 0x79952c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x79952cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_799530:
    // 0x799530: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x799530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_799534:
    // 0x799534: 0x40f809  jalr        $v0
label_799538:
    if (ctx->pc == 0x799538u) {
        ctx->pc = 0x799538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799534u;
        // 0x799538: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79953Cu;
        goto label_79953c;
    }
    ctx->pc = 0x799534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79953Cu);
        ctx->pc = 0x799538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799534u;
        // 0x799538: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799534u, 0x79953Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79953Cu;
label_79953c:
    // 0x79953c: 0x8e43c000  lw          $v1, -0x4000($s2)
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950912)));
label_799540:
    // 0x799540: 0x3c014087  lui         $at, 0x4087
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16519 << 16));
label_799544:
    // 0x799544: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x799544u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_799548:
    // 0x799548: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79954c:
    // 0x79954c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799550:
    // 0x799550: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x799550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_799554:
    // 0x799554: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_799558:
    // 0x799558: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x799558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_79955c:
    // 0x79955c: 0x3c01c299  lui         $at, 0xC299
    ctx->pc = 0x79955cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49817 << 16));
label_799560:
    // 0x799560: 0x3421570a  ori         $at, $at, 0x570A
    ctx->pc = 0x799560u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22282);
label_799564:
    // 0x799564: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799568:
    // 0x799568: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x799568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_79956c:
    // 0x79956c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79956cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_799570:
    // 0x799570: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x799570u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_799574:
    // 0x799574: 0x8e43c000  lw          $v1, -0x4000($s2)
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950912)));
label_799578:
    // 0x799578: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79957c:
    // 0x79957c: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x79957cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
label_799580:
    // 0x799580: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_799584:
    // 0x799584: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x799584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_799588:
    // 0x799588: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x799588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_79958c:
    // 0x79958c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79958cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_799590:
    // 0x799590: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x799590u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
label_799594:
    // 0x799594: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x799594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
label_799598:
    // 0x799598: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x799598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
label_79959c:
    // 0x79959c: 0x240503bc  addiu       $a1, $zero, 0x3BC
    ctx->pc = 0x79959cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 956));
label_7995a0:
    // 0x7995a0: 0xc07fa28  jal         func_1FE8A0
label_7995a4:
    if (ctx->pc == 0x7995A4u) {
        ctx->pc = 0x7995A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995A0u;
        // 0x7995a4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995A8u;
        goto label_7995a8;
    }
    ctx->pc = 0x7995A0u;
    SET_GPR_U32(ctx, 31, 0x7995A8u);
    ctx->pc = 0x7995A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995A0u;
    // 0x7995a4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x7995A0u, 0x7995A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995A8u;
label_7995a8:
    // 0x7995a8: 0x8e638658  lw          $v1, -0x79A8($s3)
    ctx->pc = 0x7995a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
label_7995ac:
    // 0x7995ac: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x7995acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7995b0:
    // 0x7995b0: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
label_7995b4:
    if (ctx->pc == 0x7995B4u) {
        ctx->pc = 0x7995B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B0u;
        // 0x7995b4: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995B8u;
        goto label_7995b8;
    }
    ctx->pc = 0x7995B0u;
    {
        const bool branch_taken_0x7995b0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x7995B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B0u;
        // 0x7995b4: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995b0) {
            ctx->pc = 0x7995D0u;
            goto label_7995d0;
        }
    }
    ctx->pc = 0x7995B8u;
label_7995b8:
    // 0x7995b8: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_7995bc:
    // 0x7995bc: 0x24a5aec0  addiu       $a1, $a1, -0x5140
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946496));
label_7995c0:
    // 0x7995c0: 0xc0b0e24  jal         func_2C3890
label_7995c4:
    if (ctx->pc == 0x7995C4u) {
        ctx->pc = 0x7995C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995C0u;
        // 0x7995c4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995C8u;
        goto label_7995c8;
    }
    ctx->pc = 0x7995C0u;
    SET_GPR_U32(ctx, 31, 0x7995C8u);
    ctx->pc = 0x7995C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995C0u;
    // 0x7995c4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7995C0u, 0x7995C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995C8u;
label_7995c8:
    // 0x7995c8: 0x1000000f  b           . + 4 + (0xF << 2)
label_7995cc:
    if (ctx->pc == 0x7995CCu) {
        ctx->pc = 0x7995CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995C8u;
        // 0x7995cc: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995D0u;
        goto label_7995d0;
    }
    ctx->pc = 0x7995C8u;
    {
        const bool branch_taken_0x7995c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995C8u;
        // 0x7995cc: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995c8) {
            ctx->pc = 0x799608u;
            goto label_799608;
        }
    }
    ctx->pc = 0x7995D0u;
label_7995d0:
    // 0x7995d0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x7995d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_7995d4:
    // 0x7995d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7995d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_7995d8:
    // 0x7995d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_7995dc:
    if (ctx->pc == 0x7995DCu) {
        ctx->pc = 0x7995DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D8u;
        // 0x7995dc: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995E0u;
        goto label_7995e0;
    }
    ctx->pc = 0x7995D8u;
    {
        const bool branch_taken_0x7995d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7995DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D8u;
        // 0x7995dc: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995d8) {
            ctx->pc = 0x799608u;
            goto label_799608;
        }
    }
    ctx->pc = 0x7995E0u;
label_7995e0:
    // 0x7995e0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7995e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_7995e4:
    // 0x7995e4: 0x24a5a710  addiu       $a1, $a1, -0x58F0
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944528));
label_7995e8:
    // 0x7995e8: 0xc0b0e24  jal         func_2C3890
label_7995ec:
    if (ctx->pc == 0x7995ECu) {
        ctx->pc = 0x7995ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E8u;
        // 0x7995ec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995F0u;
        goto label_7995f0;
    }
    ctx->pc = 0x7995E8u;
    SET_GPR_U32(ctx, 31, 0x7995F0u);
    ctx->pc = 0x7995ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995E8u;
    // 0x7995ec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7995E8u, 0x7995F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995F0u;
label_7995f0:
    // 0x7995f0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7995f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_7995f4:
    // 0x7995f4: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7995f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_7995f8:
    // 0x7995f8: 0x24a5a078  addiu       $a1, $a1, -0x5F88
    ctx->pc = 0x7995f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942840));
label_7995fc:
    // 0x7995fc: 0xc0b0e24  jal         func_2C3890
label_799600:
    if (ctx->pc == 0x799600u) {
        ctx->pc = 0x799600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995FCu;
        // 0x799600: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799604u;
        goto label_799604;
    }
    ctx->pc = 0x7995FCu;
    SET_GPR_U32(ctx, 31, 0x799604u);
    ctx->pc = 0x799600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995FCu;
    // 0x799600: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7995FCu, 0x799604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799604u;
label_799604:
    // 0x799604: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_799608:
    // 0x799608: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79960c:
    // 0x79960c: 0x24a59780  addiu       $a1, $a1, -0x6880
    ctx->pc = 0x79960cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940544));
label_799610:
    // 0x799610: 0xc0b1370  jal         func_2C4DC0
label_799614:
    if (ctx->pc == 0x799614u) {
        ctx->pc = 0x799614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799610u;
        // 0x799614: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799618u;
        goto label_799618;
    }
    ctx->pc = 0x799610u;
    SET_GPR_U32(ctx, 31, 0x799618u);
    ctx->pc = 0x799614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799610u;
    // 0x799614: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4DC0u, 0x799610u, 0x799618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799618u;
label_799618:
    // 0x799618: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79961c:
    // 0x79961c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79961cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799620:
    // 0x799620: 0x24a5adc8  addiu       $a1, $a1, -0x5238
    ctx->pc = 0x799620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946248));
label_799624:
    // 0x799624: 0xc0b0e24  jal         func_2C3890
label_799628:
    if (ctx->pc == 0x799628u) {
        ctx->pc = 0x799628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799624u;
        // 0x799628: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79962Cu;
        goto label_79962c;
    }
    ctx->pc = 0x799624u;
    SET_GPR_U32(ctx, 31, 0x79962Cu);
    ctx->pc = 0x799628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799624u;
    // 0x799628: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799624u, 0x79962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79962Cu;
label_79962c:
    // 0x79962c: 0x8e638658  lw          $v1, -0x79A8($s3)
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
label_799630:
    // 0x799630: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x799630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_799634:
    // 0x799634: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799638:
    // 0x799638: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x799638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_79963c:
    // 0x79963c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_799640:
    if (ctx->pc == 0x799640u) {
        ctx->pc = 0x799640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79963Cu;
        // 0x799640: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799644u;
        goto label_799644;
    }
    ctx->pc = 0x79963Cu;
    {
        const bool branch_taken_0x79963c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79963Cu;
        // 0x799640: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79963c) {
            ctx->pc = 0x79966Cu;
            goto label_79966c;
        }
    }
    ctx->pc = 0x799644u;
label_799644:
    // 0x799644: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_799648:
    // 0x799648: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799648u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79964c:
    // 0x79964c: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79964cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
label_799650:
    // 0x799650: 0x24e79f38  addiu       $a3, $a3, -0x60C8
    ctx->pc = 0x799650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942520));
label_799654:
    // 0x799654: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x799654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_799658:
    // 0x799658: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79965c:
    // 0x79965c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79965cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799660:
    // 0x799660: 0xc0b09e4  jal         func_2C2790
label_799664:
    if (ctx->pc == 0x799664u) {
        ctx->pc = 0x799664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799660u;
        // 0x799664: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799668u;
        goto label_799668;
    }
    ctx->pc = 0x799660u;
    SET_GPR_U32(ctx, 31, 0x799668u);
    ctx->pc = 0x799664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799660u;
    // 0x799664: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799660u, 0x799668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799668u;
label_799668:
    // 0x799668: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79966c:
    // 0x79966c: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x79966cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
label_799670:
    // 0x799670: 0xc04f906  jal         func_13E418
label_799674:
    if (ctx->pc == 0x799674u) {
        ctx->pc = 0x799674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799670u;
        // 0x799674: 0x24841910  addiu       $a0, $a0, 0x1910 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799678u;
        goto label_799678;
    }
    ctx->pc = 0x799670u;
    SET_GPR_U32(ctx, 31, 0x799678u);
    ctx->pc = 0x799674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799670u;
    // 0x799674: 0x24841910  addiu       $a0, $a0, 0x1910 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E418u, 0x799670u, 0x799678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799678u;
label_799678:
    // 0x799678: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x799678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_79967c:
    // 0x79967c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79967cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799680:
    // 0x799680: 0xc0a56ae  jal         func_295AB8
label_799684:
    if (ctx->pc == 0x799684u) {
        ctx->pc = 0x799684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799680u;
        // 0x799684: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799688u;
        goto label_799688;
    }
    ctx->pc = 0x799680u;
    SET_GPR_U32(ctx, 31, 0x799688u);
    ctx->pc = 0x799684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799680u;
    // 0x799684: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799680u, 0x799688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799688u;
label_799688:
    // 0x799688: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79968c:
    // 0x79968c: 0xc0a5874  jal         func_2961D0
label_799690:
    if (ctx->pc == 0x799690u) {
        ctx->pc = 0x799690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79968Cu;
        // 0x799690: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799694u;
        goto label_799694;
    }
    ctx->pc = 0x79968Cu;
    SET_GPR_U32(ctx, 31, 0x799694u);
    ctx->pc = 0x799690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79968Cu;
    // 0x799690: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2961D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2961D0u, 0x79968Cu, 0x799694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799694u;
label_799694:
    // 0x799694: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x799694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_799698:
    // 0x799698: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x799698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_79969c:
    // 0x79969c: 0xc0a572a  jal         func_295CA8
label_7996a0:
    if (ctx->pc == 0x7996A0u) {
        ctx->pc = 0x7996A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79969Cu;
        // 0x7996a0: 0xa3a20010  sb          $v0, 0x10($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996A4u;
        goto label_7996a4;
    }
    ctx->pc = 0x79969Cu;
    SET_GPR_U32(ctx, 31, 0x7996A4u);
    ctx->pc = 0x7996A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79969Cu;
    // 0x7996a0: 0xa3a20010  sb          $v0, 0x10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79969Cu, 0x7996A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996A4u;
label_7996a4:
    // 0x7996a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_7996a8:
    if (ctx->pc == 0x7996A8u) {
        ctx->pc = 0x7996A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A4u;
        // 0x7996a8: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996ACu;
        goto label_7996ac;
    }
    ctx->pc = 0x7996A4u;
    {
        const bool branch_taken_0x7996a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7996A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A4u;
        // 0x7996a8: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996a4) {
            ctx->pc = 0x7996BCu;
            goto label_7996bc;
        }
    }
    ctx->pc = 0x7996ACu;
label_7996ac:
    // 0x7996ac: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7996acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_7996b0:
    // 0x7996b0: 0x24a5ba20  addiu       $a1, $a1, -0x45E0
    ctx->pc = 0x7996b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949408));
label_7996b4:
    // 0x7996b4: 0xc0b0e24  jal         func_2C3890
label_7996b8:
    if (ctx->pc == 0x7996B8u) {
        ctx->pc = 0x7996B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B4u;
        // 0x7996b8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996BCu;
        goto label_7996bc;
    }
    ctx->pc = 0x7996B4u;
    SET_GPR_U32(ctx, 31, 0x7996BCu);
    ctx->pc = 0x7996B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996B4u;
    // 0x7996b8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7996B4u, 0x7996BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996BCu;
label_7996bc:
    // 0x7996bc: 0xc1e6634  jal         func_7998D0
label_7996c0:
    if (ctx->pc == 0x7996C0u) {
        ctx->pc = 0x7996C4u;
        goto label_7996c4;
    }
    ctx->pc = 0x7996BCu;
    SET_GPR_U32(ctx, 31, 0x7996C4u);
    ctx->pc = 0x7998D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7998D0u, 0x7996BCu, 0x7996C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996C4u;
label_7996c4:
    // 0x7996c4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x7996c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_7996c8:
    // 0x7996c8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x7996c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_7996cc:
    // 0x7996cc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x7996ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_7996d0:
    // 0x7996d0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x7996d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_7996d4:
    // 0x7996d4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x7996d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7996d8:
    // 0x7996d8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x7996d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7996dc:
    // 0x7996dc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x7996dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7996e0:
    // 0x7996e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7996e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_7996e4:
    // 0x7996e4: 0x3e00008  jr          $ra
label_7996e8:
    if (ctx->pc == 0x7996E8u) {
        ctx->pc = 0x7996E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E4u;
        // 0x7996e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996ECu;
        goto label_7996ec;
    }
    ctx->pc = 0x7996E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7996E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E4u;
        // 0x7996e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7996ECu;
label_7996ec:
    // 0x7996ec: 0x0  nop
    ctx->pc = 0x7996ecu;
    // NOP
    ctx->pc = 0x7996f0u;
}
} // namespace gh_r102
