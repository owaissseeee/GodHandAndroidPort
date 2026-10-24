#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r803_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r803
{
// Function: checkBattle__5cR803
// Address: 0x799280 - 0x7996d8
void checkBattle__5cR803_0x799280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkBattle__5cR803_0x799280");
#endif

    switch (ctx->pc) {
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
        default: break;
    }

    ctx->pc = 0x799280u;

label_799280:
    // 0x799280: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_799284:
    // 0x799284: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_799288:
    // 0x799288: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x799288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_79928c:
    // 0x79928c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799290:
    // 0x799290: 0x2452ee00  addiu       $s2, $v0, -0x1200
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
label_799294:
    // 0x799294: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x799294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_799298:
    // 0x799298: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x799298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_79929c:
    // 0x79929c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79929cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7992a0:
    // 0x7992a0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x7992a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_7992a4:
    // 0x7992a4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x7992a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_7992a8:
    // 0x7992a8: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x7992a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_7992ac:
    // 0x7992ac: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x7992acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_7992b0:
    // 0x7992b0: 0x3c17003c  lui         $s7, 0x3C
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
label_7992b4:
    // 0x7992b4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x7992b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_7992b8:
    // 0x7992b8: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x7992b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_7992bc:
    // 0x7992bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7992bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_7992c0:
    // 0x7992c0: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x7992c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_7992c4:
    // 0x7992c4: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x7992c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_7992c8:
    // 0x7992c8: 0xc0b42ae  jal         func_2D0AB8
label_7992cc:
    if (ctx->pc == 0x7992CCu) {
        ctx->pc = 0x7992CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992C8u;
        // 0x7992cc: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992D0u;
        goto label_7992d0;
    }
    ctx->pc = 0x7992C8u;
    SET_GPR_U32(ctx, 31, 0x7992D0u);
    ctx->pc = 0x7992CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992C8u;
    // 0x7992cc: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x7992C8u, 0x7992D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992D0u;
label_7992d0:
    // 0x7992d0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_7992d4:
    // 0x7992d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7992d8:
    // 0x7992d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7992dc:
    // 0x7992dc: 0x8c468658  lw          $a2, -0x79A8($v0)
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_7992e0:
    // 0x7992e0: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x7992e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
label_7992e4:
    // 0x7992e4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_7992e8:
    // 0x7992e8: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x7992e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
label_7992ec:
    // 0x7992ec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x7992ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7992f0:
    // 0x7992f0: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x7992f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_7992f4:
    // 0x7992f4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_7992f8:
    // 0x7992f8: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_7992fc:
    // 0x7992fc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_799300:
    // 0x799300: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x799300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_799304:
    // 0x799304: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
label_799308:
    if (ctx->pc == 0x799308u) {
        ctx->pc = 0x799308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799304u;
        // 0x799308: 0x27b30030  addiu       $s3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79930Cu;
        goto label_79930c;
    }
    ctx->pc = 0x799304u;
    {
        const bool branch_taken_0x799304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799304u;
        // 0x799308: 0x27b30030  addiu       $s3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799304) {
            ctx->pc = 0x79948Cu;
            goto label_79948c;
        }
    }
    ctx->pc = 0x79930Cu;
label_79930c:
    // 0x79930c: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x79930cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_799310:
    // 0x799310: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x799310u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_799314:
    // 0x799314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799318:
    // 0x799318: 0xc0b0e6c  jal         func_2C39B0
label_79931c:
    if (ctx->pc == 0x79931Cu) {
        ctx->pc = 0x79931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799318u;
        // 0x79931c: 0x8ee42f84  lw          $a0, 0x2F84($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799320u;
        goto label_799320;
    }
    ctx->pc = 0x799318u;
    SET_GPR_U32(ctx, 31, 0x799320u);
    ctx->pc = 0x79931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799318u;
    // 0x79931c: 0x8ee42f84  lw          $a0, 0x2F84($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799318u, 0x799320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799320u;
label_799320:
    // 0x799320: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_799324:
    // 0x799324: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x799324u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_799328:
    // 0x799328: 0x24506ab0  addiu       $s0, $v0, 0x6AB0
    ctx->pc = 0x799328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
label_79932c:
    // 0x79932c: 0xc0a54b4  jal         func_2952D0
label_799330:
    if (ctx->pc == 0x799330u) {
        ctx->pc = 0x799330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79932Cu;
        // 0x799330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799334u;
        goto label_799334;
    }
    ctx->pc = 0x79932Cu;
    SET_GPR_U32(ctx, 31, 0x799334u);
    ctx->pc = 0x799330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79932Cu;
    // 0x799330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79932Cu, 0x799334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799334u;
label_799334:
    // 0x799334: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799338:
    // 0x799338: 0xc0a56f0  jal         func_295BC0
label_79933c:
    if (ctx->pc == 0x79933Cu) {
        ctx->pc = 0x79933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799338u;
        // 0x79933c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799340u;
        goto label_799340;
    }
    ctx->pc = 0x799338u;
    SET_GPR_U32(ctx, 31, 0x799340u);
    ctx->pc = 0x79933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799338u;
    // 0x79933c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799338u, 0x799340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799340u;
label_799340:
    // 0x799340: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x799340u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_799344:
    // 0x799344: 0xc0a54b4  jal         func_2952D0
label_799348:
    if (ctx->pc == 0x799348u) {
        ctx->pc = 0x799348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799344u;
        // 0x799348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79934Cu;
        goto label_79934c;
    }
    ctx->pc = 0x799344u;
    SET_GPR_U32(ctx, 31, 0x79934Cu);
    ctx->pc = 0x799348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799344u;
    // 0x799348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799344u, 0x79934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79934Cu;
label_79934c:
    // 0x79934c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79934cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799350:
    // 0x799350: 0xc0a56f0  jal         func_295BC0
label_799354:
    if (ctx->pc == 0x799354u) {
        ctx->pc = 0x799354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799350u;
        // 0x799354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799358u;
        goto label_799358;
    }
    ctx->pc = 0x799350u;
    SET_GPR_U32(ctx, 31, 0x799358u);
    ctx->pc = 0x799354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799350u;
    // 0x799354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799350u, 0x799358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799358u;
label_799358:
    // 0x799358: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x799358u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_79935c:
    // 0x79935c: 0xc0a54b4  jal         func_2952D0
label_799360:
    if (ctx->pc == 0x799360u) {
        ctx->pc = 0x799360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79935Cu;
        // 0x799360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799364u;
        goto label_799364;
    }
    ctx->pc = 0x79935Cu;
    SET_GPR_U32(ctx, 31, 0x799364u);
    ctx->pc = 0x799360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79935Cu;
    // 0x799360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79935Cu, 0x799364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799364u;
label_799364:
    // 0x799364: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x799364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_799368:
    // 0x799368: 0xc0a56f0  jal         func_295BC0
label_79936c:
    if (ctx->pc == 0x79936Cu) {
        ctx->pc = 0x79936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799368u;
        // 0x79936c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799370u;
        goto label_799370;
    }
    ctx->pc = 0x799368u;
    SET_GPR_U32(ctx, 31, 0x799370u);
    ctx->pc = 0x79936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799368u;
    // 0x79936c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799368u, 0x799370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799370u;
label_799370:
    // 0x799370: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799370u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799374:
    // 0x799374: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799374u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799378:
    // 0x799378: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79937c:
    // 0x79937c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799380:
    // 0x799380: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_799384:
    // 0x799384: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799388:
    // 0x799388: 0xc0b2e28  jal         func_2CB8A0
label_79938c:
    if (ctx->pc == 0x79938Cu) {
        ctx->pc = 0x79938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799388u;
        // 0x79938c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799390u;
        goto label_799390;
    }
    ctx->pc = 0x799388u;
    SET_GPR_U32(ctx, 31, 0x799390u);
    ctx->pc = 0x79938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799388u;
    // 0x79938c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799388u, 0x799390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799390u;
label_799390:
    // 0x799390: 0x8ee42f84  lw          $a0, 0x2F84($s7)
    ctx->pc = 0x799390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
label_799394:
    // 0x799394: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799398:
    // 0x799398: 0xc0b0fb6  jal         func_2C3ED8
label_79939c:
    if (ctx->pc == 0x79939Cu) {
        ctx->pc = 0x79939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799398u;
        // 0x79939c: 0x24a599a0  addiu       $a1, $a1, -0x6660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993A0u;
        goto label_7993a0;
    }
    ctx->pc = 0x799398u;
    SET_GPR_U32(ctx, 31, 0x7993A0u);
    ctx->pc = 0x79939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799398u;
    // 0x79939c: 0x24a599a0  addiu       $a1, $a1, -0x6660 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799398u, 0x7993A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A0u;
label_7993a0:
    // 0x7993a0: 0xc0b101e  jal         func_2C4078
label_7993a4:
    if (ctx->pc == 0x7993A4u) {
        ctx->pc = 0x7993A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A0u;
        // 0x7993a4: 0x8ee42f84  lw          $a0, 0x2F84($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993A8u;
        goto label_7993a8;
    }
    ctx->pc = 0x7993A0u;
    SET_GPR_U32(ctx, 31, 0x7993A8u);
    ctx->pc = 0x7993A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A0u;
    // 0x7993a4: 0x8ee42f84  lw          $a0, 0x2F84($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x7993A0u, 0x7993A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A8u;
label_7993a8:
    // 0x7993a8: 0xc0b0f04  jal         func_2C3C10
label_7993ac:
    if (ctx->pc == 0x7993ACu) {
        ctx->pc = 0x7993ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A8u;
        // 0x7993ac: 0x8ee42f84  lw          $a0, 0x2F84($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993B0u;
        goto label_7993b0;
    }
    ctx->pc = 0x7993A8u;
    SET_GPR_U32(ctx, 31, 0x7993B0u);
    ctx->pc = 0x7993ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A8u;
    // 0x7993ac: 0x8ee42f84  lw          $a0, 0x2F84($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x7993A8u, 0x7993B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B0u;
label_7993b0:
    // 0x7993b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7993b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7993b4:
    // 0x7993b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7993b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7993b8:
    // 0x7993b8: 0xc0a5516  jal         func_295458
label_7993bc:
    if (ctx->pc == 0x7993BCu) {
        ctx->pc = 0x7993BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B8u;
        // 0x7993bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993C0u;
        goto label_7993c0;
    }
    ctx->pc = 0x7993B8u;
    SET_GPR_U32(ctx, 31, 0x7993C0u);
    ctx->pc = 0x7993BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B8u;
    // 0x7993bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295458u, 0x7993B8u, 0x7993C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993C0u;
label_7993c0:
    // 0x7993c0: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x7993c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_7993c4:
    // 0x7993c4: 0xc0a56ae  jal         func_295AB8
label_7993c8:
    if (ctx->pc == 0x7993C8u) {
        ctx->pc = 0x7993C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C4u;
        // 0x7993c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993CCu;
        goto label_7993cc;
    }
    ctx->pc = 0x7993C4u;
    SET_GPR_U32(ctx, 31, 0x7993CCu);
    ctx->pc = 0x7993C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993C4u;
    // 0x7993c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x7993C4u, 0x7993CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993CCu;
label_7993cc:
    // 0x7993cc: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
label_7993d0:
    if (ctx->pc == 0x7993D0u) {
        ctx->pc = 0x7993D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993CCu;
        // 0x7993d0: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993D4u;
        goto label_7993d4;
    }
    ctx->pc = 0x7993CCu;
    {
        const bool branch_taken_0x7993cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x7993D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993CCu;
        // 0x7993d0: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993cc) {
            ctx->pc = 0x7993F0u;
            goto label_7993f0;
        }
    }
    ctx->pc = 0x7993D4u;
label_7993d4:
    // 0x7993d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x7993d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_7993d8:
    // 0x7993d8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x7993d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_7993dc:
    // 0x7993dc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x7993dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_7993e0:
    // 0x7993e0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x7993e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_7993e4:
    // 0x7993e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x7993e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_7993e8:
    // 0x7993e8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x7993e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_7993ec:
    // 0x7993ec: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x7993ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_7993f0:
    // 0x7993f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7993f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7993f4:
    // 0x7993f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_7993f8:
    // 0x7993f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7993f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_7993fc:
    // 0x7993fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799400:
    // 0x799400: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x799400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_799404:
    // 0x799404: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x799404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_799408:
    // 0x799408: 0xc0a54e0  jal         func_295380
label_79940c:
    if (ctx->pc == 0x79940Cu) {
        ctx->pc = 0x79940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799408u;
        // 0x79940c: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x799410u;
        goto label_799410;
    }
    ctx->pc = 0x799408u;
    SET_GPR_U32(ctx, 31, 0x799410u);
    ctx->pc = 0x79940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799408u;
    // 0x79940c: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295380u, 0x799408u, 0x799410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799410u;
label_799410:
    // 0x799410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799414:
    // 0x799414: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799418:
    // 0x799418: 0xc0a5516  jal         func_295458
label_79941c:
    if (ctx->pc == 0x79941Cu) {
        ctx->pc = 0x79941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799418u;
        // 0x79941c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799420u;
        goto label_799420;
    }
    ctx->pc = 0x799418u;
    SET_GPR_U32(ctx, 31, 0x799420u);
    ctx->pc = 0x79941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799418u;
    // 0x79941c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295458u, 0x799418u, 0x799420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799420u;
label_799420:
    // 0x799420: 0xc0a56ae  jal         func_295AB8
label_799424:
    if (ctx->pc == 0x799424u) {
        ctx->pc = 0x799424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799420u;
        // 0x799424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799428u;
        goto label_799428;
    }
    ctx->pc = 0x799420u;
    SET_GPR_U32(ctx, 31, 0x799428u);
    ctx->pc = 0x799424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799420u;
    // 0x799424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799420u, 0x799428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799428u;
label_799428:
    // 0x799428: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
label_79942c:
    if (ctx->pc == 0x79942Cu) {
        ctx->pc = 0x79942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799428u;
        // 0x79942c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x799430u;
        goto label_799430;
    }
    ctx->pc = 0x799428u;
    {
        const bool branch_taken_0x799428 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x79942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799428u;
        // 0x79942c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799428) {
            ctx->pc = 0x79944Cu;
            goto label_79944c;
        }
    }
    ctx->pc = 0x799430u;
label_799430:
    // 0x799430: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x799430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799434:
    // 0x799434: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x799434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_799438:
    // 0x799438: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x799438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79943c:
    // 0x79943c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x79943cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_799440:
    // 0x799440: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x799440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799444:
    // 0x799444: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x799444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_799448:
    // 0x799448: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x799448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79944c:
    // 0x79944c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79944cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799450:
    // 0x799450: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799454:
    // 0x799454: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x799454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_799458:
    // 0x799458: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x799458u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_79945c:
    // 0x79945c: 0xc0a54e0  jal         func_295380
label_799460:
    if (ctx->pc == 0x799460u) {
        ctx->pc = 0x799460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79945Cu;
        // 0x799460: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x799464u;
        goto label_799464;
    }
    ctx->pc = 0x79945Cu;
    SET_GPR_U32(ctx, 31, 0x799464u);
    ctx->pc = 0x799460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79945Cu;
    // 0x799460: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295380u, 0x79945Cu, 0x799464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799464u;
label_799464:
    // 0x799464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799468:
    // 0x799468: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79946c:
    // 0x79946c: 0xc0a5516  jal         func_295458
label_799470:
    if (ctx->pc == 0x799470u) {
        ctx->pc = 0x799470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79946Cu;
        // 0x799470: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799474u;
        goto label_799474;
    }
    ctx->pc = 0x79946Cu;
    SET_GPR_U32(ctx, 31, 0x799474u);
    ctx->pc = 0x799470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79946Cu;
    // 0x799470: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295458u, 0x79946Cu, 0x799474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799474u;
label_799474:
    // 0x799474: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_799478:
    // 0x799478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79947c:
    // 0x79947c: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
label_799480:
    // 0x799480: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799484:
    // 0x799484: 0xc0b016c  jal         func_2C05B0
label_799488:
    if (ctx->pc == 0x799488u) {
        ctx->pc = 0x799488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799484u;
        // 0x799488: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79948Cu;
        goto label_79948c;
    }
    ctx->pc = 0x799484u;
    SET_GPR_U32(ctx, 31, 0x79948Cu);
    ctx->pc = 0x799488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799484u;
    // 0x799488: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799484u, 0x79948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79948Cu;
label_79948c:
    // 0x79948c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79948cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799490:
    // 0x799490: 0xc0a573a  jal         func_295CE8
label_799494:
    if (ctx->pc == 0x799494u) {
        ctx->pc = 0x799494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799490u;
        // 0x799494: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799498u;
        goto label_799498;
    }
    ctx->pc = 0x799490u;
    SET_GPR_U32(ctx, 31, 0x799498u);
    ctx->pc = 0x799494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799490u;
    // 0x799494: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799490u, 0x799498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799498u;
label_799498:
    // 0x799498: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x799498u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79949c:
    // 0x79949c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79949cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_7994a0:
    // 0x7994a0: 0xc0a573a  jal         func_295CE8
label_7994a4:
    if (ctx->pc == 0x7994A4u) {
        ctx->pc = 0x7994A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A0u;
        // 0x7994a4: 0x2610ea60  addiu       $s0, $s0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994A8u;
        goto label_7994a8;
    }
    ctx->pc = 0x7994A0u;
    SET_GPR_U32(ctx, 31, 0x7994A8u);
    ctx->pc = 0x7994A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994A0u;
    // 0x7994a4: 0x2610ea60  addiu       $s0, $s0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x7994A0u, 0x7994A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A8u;
label_7994a8:
    // 0x7994a8: 0x8e838658  lw          $v1, -0x79A8($s4)
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
label_7994ac:
    // 0x7994ac: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x7994acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_7994b0:
    // 0x7994b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7994b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7994b4:
    // 0x7994b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7994b8:
    // 0x7994b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7994b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7994bc:
    // 0x7994bc: 0x3c120074  lui         $s2, 0x74
    ctx->pc = 0x7994bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
label_7994c0:
    // 0x7994c0: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
label_7994c4:
    // 0x7994c4: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
label_7994c8:
    // 0x7994c8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x7994c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_7994cc:
    // 0x7994cc: 0xc0b0ab8  jal         func_2C2AE0
label_7994d0:
    if (ctx->pc == 0x7994D0u) {
        ctx->pc = 0x7994D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994CCu;
        // 0x7994d0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994D4u;
        goto label_7994d4;
    }
    ctx->pc = 0x7994CCu;
    SET_GPR_U32(ctx, 31, 0x7994D4u);
    ctx->pc = 0x7994D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994CCu;
    // 0x7994d0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x7994CCu, 0x7994D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994D4u;
label_7994d4:
    // 0x7994d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7994d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7994d8:
    // 0x7994d8: 0xc0b0a68  jal         func_2C29A0
label_7994dc:
    if (ctx->pc == 0x7994DCu) {
        ctx->pc = 0x7994DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D8u;
        // 0x7994dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994E0u;
        goto label_7994e0;
    }
    ctx->pc = 0x7994D8u;
    SET_GPR_U32(ctx, 31, 0x7994E0u);
    ctx->pc = 0x7994DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D8u;
    // 0x7994dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29A0u, 0x7994D8u, 0x7994E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E0u;
label_7994e0:
    // 0x7994e0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x7994e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_7994e4:
    // 0x7994e4: 0x8c64d6e8  lw          $a0, -0x2918($v1)
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956776)));
label_7994e8:
    // 0x7994e8: 0xc04fccc  jal         func_13F330
label_7994ec:
    if (ctx->pc == 0x7994ECu) {
        ctx->pc = 0x7994ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994E8u;
        // 0x7994ec: 0x24841e90  addiu       $a0, $a0, 0x1E90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994F0u;
        goto label_7994f0;
    }
    ctx->pc = 0x7994E8u;
    SET_GPR_U32(ctx, 31, 0x7994F0u);
    ctx->pc = 0x7994ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E8u;
    // 0x7994ec: 0x24841e90  addiu       $a0, $a0, 0x1E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F330u, 0x7994E8u, 0x7994F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994F0u;
label_7994f0:
    // 0x7994f0: 0x8e427a8c  lw          $v0, 0x7A8C($s2)
    ctx->pc = 0x7994f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
label_7994f4:
    // 0x7994f4: 0x0  nop
    ctx->pc = 0x7994f4u;
    // NOP
label_7994f8:
    // 0x7994f8: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x7994f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_7994fc:
    // 0x7994fc: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_799500:
    if (ctx->pc == 0x799500u) {
        ctx->pc = 0x799500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994FCu;
        // 0x799500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799504u;
        goto label_799504;
    }
    ctx->pc = 0x7994FCu;
    {
        const bool branch_taken_0x7994fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994FCu;
        // 0x799500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994fc) {
            ctx->pc = 0x799564u;
            goto label_799564;
        }
    }
    ctx->pc = 0x799504u;
label_799504:
    // 0x799504: 0xc0a572a  jal         func_295CA8
label_799508:
    if (ctx->pc == 0x799508u) {
        ctx->pc = 0x799508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799504u;
        // 0x799508: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79950Cu;
        goto label_79950c;
    }
    ctx->pc = 0x799504u;
    SET_GPR_U32(ctx, 31, 0x79950Cu);
    ctx->pc = 0x799508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799504u;
    // 0x799508: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799504u, 0x79950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79950Cu;
label_79950c:
    // 0x79950c: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_799510:
    if (ctx->pc == 0x799510u) {
        ctx->pc = 0x799510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79950Cu;
        // 0x799510: 0x8e427a8c  lw          $v0, 0x7A8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799514u;
        goto label_799514;
    }
    ctx->pc = 0x79950Cu;
    {
        const bool branch_taken_0x79950c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x799510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79950Cu;
        // 0x799510: 0x8e427a8c  lw          $v0, 0x7A8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79950c) {
            ctx->pc = 0x799524u;
            goto label_799524;
        }
    }
    ctx->pc = 0x799514u;
label_799514:
    // 0x799514: 0xc0a572a  jal         func_295CA8
label_799518:
    if (ctx->pc == 0x799518u) {
        ctx->pc = 0x799518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799514u;
        // 0x799518: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79951Cu;
        goto label_79951c;
    }
    ctx->pc = 0x799514u;
    SET_GPR_U32(ctx, 31, 0x79951Cu);
    ctx->pc = 0x799518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799514u;
    // 0x799518: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799514u, 0x79951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79951Cu;
label_79951c:
    // 0x79951c: 0x14500011  bne         $v0, $s0, . + 4 + (0x11 << 2)
label_799520:
    if (ctx->pc == 0x799520u) {
        ctx->pc = 0x799520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79951Cu;
        // 0x799520: 0x8e427a8c  lw          $v0, 0x7A8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799524u;
        goto label_799524;
    }
    ctx->pc = 0x79951Cu;
    {
        const bool branch_taken_0x79951c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x799520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79951Cu;
        // 0x799520: 0x8e427a8c  lw          $v0, 0x7A8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79951c) {
            ctx->pc = 0x799564u;
            goto label_799564;
        }
    }
    ctx->pc = 0x799524u;
label_799524:
    // 0x799524: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x799524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_799528:
    // 0x799528: 0xc0b6dac  jal         func_2DB6B0
label_79952c:
    if (ctx->pc == 0x79952Cu) {
        ctx->pc = 0x79952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799528u;
        // 0x79952c: 0xae427a8c  sw          $v0, 0x7A8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 31372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799530u;
        goto label_799530;
    }
    ctx->pc = 0x799528u;
    SET_GPR_U32(ctx, 31, 0x799530u);
    ctx->pc = 0x79952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799528u;
    // 0x79952c: 0xae427a8c  sw          $v0, 0x7A8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 31372), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799528u, 0x799530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799530u;
label_799530:
    // 0x799530: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799534:
    // 0x799534: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x799534u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_799538:
    // 0x799538: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x799538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79953c:
    // 0x79953c: 0xa0f809  jalr        $a1
label_799540:
    if (ctx->pc == 0x799540u) {
        ctx->pc = 0x799540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79953Cu;
        // 0x799540: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799544u;
        goto label_799544;
    }
    ctx->pc = 0x79953Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x799544u);
        ctx->pc = 0x799540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79953Cu;
        // 0x799540: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79953Cu, 0x799544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799544u;
label_799544:
    // 0x799544: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_799548:
    // 0x799548: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_79954c:
    // 0x79954c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79954cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799550:
    // 0x799550: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799554:
    // 0x799554: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799558:
    // 0x799558: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x799558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79955c:
    // 0x79955c: 0xc0a57e0  jal         func_295F80
label_799560:
    if (ctx->pc == 0x799560u) {
        ctx->pc = 0x799560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79955Cu;
        // 0x799560: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799564u;
        goto label_799564;
    }
    ctx->pc = 0x79955Cu;
    SET_GPR_U32(ctx, 31, 0x799564u);
    ctx->pc = 0x799560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79955Cu;
    // 0x799560: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79955Cu, 0x799564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799564u;
label_799564:
    // 0x799564: 0xc1e65b6  jal         func_7996D8
label_799568:
    if (ctx->pc == 0x799568u) {
        ctx->pc = 0x799568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799564u;
        // 0x799568: 0x8ea49a80  lw          $a0, -0x6580($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79956Cu;
        goto label_79956c;
    }
    ctx->pc = 0x799564u;
    SET_GPR_U32(ctx, 31, 0x79956Cu);
    ctx->pc = 0x799568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799564u;
    // 0x799568: 0x8ea49a80  lw          $a0, -0x6580($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996D8u, 0x799564u, 0x79956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79956Cu;
label_79956c:
    // 0x79956c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_799570:
    if (ctx->pc == 0x799570u) {
        ctx->pc = 0x799570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79956Cu;
        // 0x799570: 0x8ee22f84  lw          $v0, 0x2F84($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799574u;
        goto label_799574;
    }
    ctx->pc = 0x79956Cu;
    {
        const bool branch_taken_0x79956c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79956Cu;
        // 0x799570: 0x8ee22f84  lw          $v0, 0x2F84($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79956c) {
            ctx->pc = 0x799588u;
            goto label_799588;
        }
    }
    ctx->pc = 0x799574u;
label_799574:
    // 0x799574: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799578:
    // 0x799578: 0xc0b56a8  jal         func_2D5AA0
label_79957c:
    if (ctx->pc == 0x79957Cu) {
        ctx->pc = 0x79957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799578u;
        // 0x79957c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799580u;
        goto label_799580;
    }
    ctx->pc = 0x799578u;
    SET_GPR_U32(ctx, 31, 0x799580u);
    ctx->pc = 0x79957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799578u;
    // 0x79957c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799578u, 0x799580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799580u;
label_799580:
    // 0x799580: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
label_799584:
    if (ctx->pc == 0x799584u) {
        ctx->pc = 0x799584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799580u;
        // 0x799584: 0x8e427a8c  lw          $v0, 0x7A8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799588u;
        goto label_799588;
    }
    ctx->pc = 0x799580u;
    {
        const bool branch_taken_0x799580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799580u;
        // 0x799584: 0x8e427a8c  lw          $v0, 0x7A8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799580) {
            ctx->pc = 0x7994F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994f8;
        }
    }
    ctx->pc = 0x799588u;
label_799588:
    // 0x799588: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_79958c:
    // 0x79958c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79958cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799590:
    // 0x799590: 0xc0b42ae  jal         func_2D0AB8
label_799594:
    if (ctx->pc == 0x799594u) {
        ctx->pc = 0x799594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799590u;
        // 0x799594: 0x2444ee00  addiu       $a0, $v0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799598u;
        goto label_799598;
    }
    ctx->pc = 0x799590u;
    SET_GPR_U32(ctx, 31, 0x799598u);
    ctx->pc = 0x799594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799590u;
    // 0x799594: 0x2444ee00  addiu       $a0, $v0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x799590u, 0x799598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799598u;
label_799598:
    // 0x799598: 0xc0a56ae  jal         func_295AB8
label_79959c:
    if (ctx->pc == 0x79959Cu) {
        ctx->pc = 0x79959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799598u;
        // 0x79959c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995A0u;
        goto label_7995a0;
    }
    ctx->pc = 0x799598u;
    SET_GPR_U32(ctx, 31, 0x7995A0u);
    ctx->pc = 0x79959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799598u;
    // 0x79959c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799598u, 0x7995A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995A0u;
label_7995a0:
    // 0x7995a0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7995a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_7995a4:
    // 0x7995a4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x7995a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_7995a8:
    // 0x7995a8: 0x8ea49a80  lw          $a0, -0x6580($s5)
    ctx->pc = 0x7995a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941312)));
label_7995ac:
    // 0x7995ac: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x7995acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_7995b0:
    // 0x7995b0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x7995b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7995b4:
    // 0x7995b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_7995b8:
    // 0x7995b8: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_7995bc:
    // 0x7995bc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x7995bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_7995c0:
    // 0x7995c0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x7995c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_7995c4:
    // 0x7995c4: 0xc0b0346  jal         func_2C0D18
label_7995c8:
    if (ctx->pc == 0x7995C8u) {
        ctx->pc = 0x7995C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995C4u;
        // 0x7995c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995CCu;
        goto label_7995cc;
    }
    ctx->pc = 0x7995C4u;
    SET_GPR_U32(ctx, 31, 0x7995CCu);
    ctx->pc = 0x7995C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995C4u;
    // 0x7995c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D18u, 0x7995C4u, 0x7995CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995CCu;
label_7995cc:
    // 0x7995cc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_7995d0:
    // 0x7995d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x7995d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_7995d4:
    // 0x7995d4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x7995d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_7995d8:
    // 0x7995d8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x7995d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_7995dc:
    // 0x7995dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7995dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_7995e0:
    // 0x7995e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x7995e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_7995e4:
    // 0x7995e4: 0x8ea49a80  lw          $a0, -0x6580($s5)
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941312)));
label_7995e8:
    // 0x7995e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7995e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7995ec:
    // 0x7995ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7995ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_7995f0:
    // 0x7995f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7995f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_7995f4:
    // 0x7995f4: 0xc0b036a  jal         func_2C0DA8
label_7995f8:
    if (ctx->pc == 0x7995F8u) {
        ctx->pc = 0x7995F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F4u;
        // 0x7995f8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995FCu;
        goto label_7995fc;
    }
    ctx->pc = 0x7995F4u;
    SET_GPR_U32(ctx, 31, 0x7995FCu);
    ctx->pc = 0x7995F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995F4u;
    // 0x7995f8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DA8u, 0x7995F4u, 0x7995FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995FCu;
label_7995fc:
    // 0x7995fc: 0x8ea39a80  lw          $v1, -0x6580($s5)
    ctx->pc = 0x7995fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941312)));
label_799600:
    // 0x799600: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x799600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_799604:
    // 0x799604: 0x27c4ea60  addiu       $a0, $fp, -0x15A0
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961760));
label_799608:
    // 0x799608: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79960c:
    // 0x79960c: 0xa462005e  sh          $v0, 0x5E($v1)
    ctx->pc = 0x79960cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 2));
label_799610:
    // 0x799610: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799614:
    // 0x799614: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799614u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799618:
    // 0x799618: 0xc0b0be4  jal         func_2C2F90
label_79961c:
    if (ctx->pc == 0x79961Cu) {
        ctx->pc = 0x79961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799618u;
        // 0x79961c: 0x8ea59a80  lw          $a1, -0x6580($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799620u;
        goto label_799620;
    }
    ctx->pc = 0x799618u;
    SET_GPR_U32(ctx, 31, 0x799620u);
    ctx->pc = 0x79961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799618u;
    // 0x79961c: 0x8ea59a80  lw          $a1, -0x6580($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F90u, 0x799618u, 0x799620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799620u;
label_799620:
    // 0x799620: 0x8ee22f84  lw          $v0, 0x2F84($s7)
    ctx->pc = 0x799620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
label_799624:
    // 0x799624: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x799624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_799628:
    // 0x799628: 0xc0b56a8  jal         func_2D5AA0
label_79962c:
    if (ctx->pc == 0x79962Cu) {
        ctx->pc = 0x79962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799628u;
        // 0x79962c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799630u;
        goto label_799630;
    }
    ctx->pc = 0x799628u;
    SET_GPR_U32(ctx, 31, 0x799630u);
    ctx->pc = 0x79962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799628u;
    // 0x79962c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799628u, 0x799630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799630u;
label_799630:
    // 0x799630: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x799630u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
label_799634:
    // 0x799634: 0x0  nop
    ctx->pc = 0x799634u;
    // NOP
label_799638:
    // 0x799638: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x799638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79963c:
    // 0x79963c: 0xc0b6cc6  jal         func_2DB318
label_799640:
    if (ctx->pc == 0x799640u) {
        ctx->pc = 0x799640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79963Cu;
        // 0x799640: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799644u;
        goto label_799644;
    }
    ctx->pc = 0x79963Cu;
    SET_GPR_U32(ctx, 31, 0x799644u);
    ctx->pc = 0x799640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79963Cu;
    // 0x799640: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x79963Cu, 0x799644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799644u;
label_799644:
    // 0x799644: 0x8ee22f84  lw          $v0, 0x2F84($s7)
    ctx->pc = 0x799644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
label_799648:
    // 0x799648: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79964c:
    // 0x79964c: 0xc0b56a8  jal         func_2D5AA0
label_799650:
    if (ctx->pc == 0x799650u) {
        ctx->pc = 0x799650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79964Cu;
        // 0x799650: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799654u;
        goto label_799654;
    }
    ctx->pc = 0x79964Cu;
    SET_GPR_U32(ctx, 31, 0x799654u);
    ctx->pc = 0x799650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79964Cu;
    // 0x799650: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79964Cu, 0x799654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799654u;
label_799654:
    // 0x799654: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x799654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_799658:
    // 0x799658: 0x0  nop
    ctx->pc = 0x799658u;
    // NOP
label_79965c:
    // 0x79965c: 0x4503fff6  bc1tl       . + 4 + (-0xA << 2)
label_799660:
    if (ctx->pc == 0x799660u) {
        ctx->pc = 0x799660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79965Cu;
        // 0x799660: 0x4616a501  sub.s       $f20, $f20, $f22 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799664u;
        goto label_799664;
    }
    ctx->pc = 0x79965Cu;
    {
        const bool branch_taken_0x79965c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79965c) {
            ctx->pc = 0x799660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79965Cu;
            // 0x799660: 0x4616a501  sub.s       $f20, $f20, $f22 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x799638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799638;
        }
    }
    ctx->pc = 0x799664u;
label_799664:
    // 0x799664: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799668:
    // 0x799668: 0xc0b6cac  jal         func_2DB2B0
label_79966c:
    if (ctx->pc == 0x79966Cu) {
        ctx->pc = 0x79966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799668u;
        // 0x79966c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799670u;
        goto label_799670;
    }
    ctx->pc = 0x799668u;
    SET_GPR_U32(ctx, 31, 0x799670u);
    ctx->pc = 0x79966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799668u;
    // 0x79966c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799668u, 0x799670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799670u;
label_799670:
    // 0x799670: 0x27d0ea60  addiu       $s0, $fp, -0x15A0
    ctx->pc = 0x799670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961760));
label_799674:
    // 0x799674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799678:
    // 0x799678: 0xc0b0ab8  jal         func_2C2AE0
label_79967c:
    if (ctx->pc == 0x79967Cu) {
        ctx->pc = 0x79967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799678u;
        // 0x79967c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799680u;
        goto label_799680;
    }
    ctx->pc = 0x799678u;
    SET_GPR_U32(ctx, 31, 0x799680u);
    ctx->pc = 0x79967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799678u;
    // 0x79967c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799678u, 0x799680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799680u;
label_799680:
    // 0x799680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799684:
    // 0x799684: 0xc0b0a3e  jal         func_2C28F8
label_799688:
    if (ctx->pc == 0x799688u) {
        ctx->pc = 0x799688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799684u;
        // 0x799688: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79968Cu;
        goto label_79968c;
    }
    ctx->pc = 0x799684u;
    SET_GPR_U32(ctx, 31, 0x79968Cu);
    ctx->pc = 0x799688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799684u;
    // 0x799688: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28F8u, 0x799684u, 0x79968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79968Cu;
label_79968c:
    // 0x79968c: 0x8ee32f84  lw          $v1, 0x2F84($s7)
    ctx->pc = 0x79968cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12164)));
label_799690:
    // 0x799690: 0xc0b5692  jal         func_2D5A48
label_799694:
    if (ctx->pc == 0x799694u) {
        ctx->pc = 0x799694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799690u;
        // 0x799694: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799698u;
        goto label_799698;
    }
    ctx->pc = 0x799690u;
    SET_GPR_U32(ctx, 31, 0x799698u);
    ctx->pc = 0x799694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799690u;
    // 0x799694: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799690u, 0x799698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799698u;
label_799698:
    // 0x799698: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x799698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_79969c:
    // 0x79969c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x79969cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_7996a0:
    // 0x7996a0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x7996a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_7996a4:
    // 0x7996a4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x7996a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_7996a8:
    // 0x7996a8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x7996a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_7996ac:
    // 0x7996ac: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x7996acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_7996b0:
    // 0x7996b0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x7996b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_7996b4:
    // 0x7996b4: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x7996b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_7996b8:
    // 0x7996b8: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x7996b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7996bc:
    // 0x7996bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7996bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_7996c0:
    // 0x7996c0: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x7996c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_7996c4:
    // 0x7996c4: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x7996c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_7996c8:
    // 0x7996c8: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x7996c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_7996cc:
    // 0x7996cc: 0x3e00008  jr          $ra
label_7996d0:
    if (ctx->pc == 0x7996D0u) {
        ctx->pc = 0x7996D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996CCu;
        // 0x7996d0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996D4u;
        goto label_7996d4;
    }
    ctx->pc = 0x7996CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7996D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996CCu;
        // 0x7996d0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7996D4u;
label_7996d4:
    // 0x7996d4: 0x0  nop
    ctx->pc = 0x7996d4u;
    // NOP
    ctx->pc = 0x7996d8u;
}
} // namespace gh_r803
