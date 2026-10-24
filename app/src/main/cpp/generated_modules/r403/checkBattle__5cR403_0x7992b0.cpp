#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r403_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r403
{
// Function: checkBattle__5cR403
// Address: 0x7992b0 - 0x799718
void checkBattle__5cR403_0x7992b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkBattle__5cR403_0x7992b0");
#endif

    switch (ctx->pc) {
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
        case 0x7996f0u: goto label_7996f0;
        case 0x7996f4u: goto label_7996f4;
        case 0x7996f8u: goto label_7996f8;
        case 0x7996fcu: goto label_7996fc;
        case 0x799700u: goto label_799700;
        case 0x799704u: goto label_799704;
        case 0x799708u: goto label_799708;
        case 0x79970cu: goto label_79970c;
        case 0x799710u: goto label_799710;
        case 0x799714u: goto label_799714;
        default: break;
    }

    ctx->pc = 0x7992b0u;

label_7992b0:
    // 0x7992b0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_7992b4:
    // 0x7992b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x7992b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_7992b8:
    // 0x7992b8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x7992b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_7992bc:
    // 0x7992bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7992bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7992c0:
    // 0x7992c0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x7992c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_7992c4:
    // 0x7992c4: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x7992c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_7992c8:
    // 0x7992c8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x7992c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_7992cc:
    // 0x7992cc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x7992ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_7992d0:
    // 0x7992d0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x7992d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_7992d4:
    // 0x7992d4: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
label_7992d8:
    // 0x7992d8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x7992d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_7992dc:
    // 0x7992dc: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
label_7992e0:
    // 0x7992e0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x7992e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_7992e4:
    // 0x7992e4: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
label_7992e8:
    // 0x7992e8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x7992e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_7992ec:
    // 0x7992ec: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
label_7992f0:
    // 0x7992f0: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x7992f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_7992f4:
    // 0x7992f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x7992f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_7992f8:
    // 0x7992f8: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x7992f8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_7992fc:
    // 0x7992fc: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x7992fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_799300:
    // 0x799300: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x799300u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_799304:
    // 0x799304: 0xc0b6cac  jal         func_2DB2B0
label_799308:
    if (ctx->pc == 0x799308u) {
        ctx->pc = 0x799308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799304u;
        // 0x799308: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79930Cu;
        goto label_79930c;
    }
    ctx->pc = 0x799304u;
    SET_GPR_U32(ctx, 31, 0x79930Cu);
    ctx->pc = 0x799308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799304u;
    // 0x799308: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799304u, 0x79930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79930Cu;
label_79930c:
    // 0x79930c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79930cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_799310:
    // 0x799310: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_799314:
    // 0x799314: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_799318:
    // 0x799318: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79931c:
    // 0x79931c: 0x4400047  bltz        $v0, . + 4 + (0x47 << 2)
label_799320:
    if (ctx->pc == 0x799320u) {
        ctx->pc = 0x799320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79931Cu;
        // 0x799320: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799324u;
        goto label_799324;
    }
    ctx->pc = 0x79931Cu;
    {
        const bool branch_taken_0x79931c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x799320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79931Cu;
        // 0x799320: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79931c) {
            ctx->pc = 0x79943Cu;
            goto label_79943c;
        }
    }
    ctx->pc = 0x799324u;
label_799324:
    // 0x799324: 0x10000005  b           . + 4 + (0x5 << 2)
label_799328:
    if (ctx->pc == 0x799328u) {
        ctx->pc = 0x799328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799324u;
        // 0x799328: 0x3c17003c  lui         $s7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79932Cu;
        goto label_79932c;
    }
    ctx->pc = 0x799324u;
    {
        const bool branch_taken_0x799324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799324u;
        // 0x799328: 0x3c17003c  lui         $s7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799324) {
            ctx->pc = 0x79933Cu;
            goto label_79933c;
        }
    }
    ctx->pc = 0x79932Cu;
label_79932c:
    // 0x79932c: 0x0  nop
    ctx->pc = 0x79932cu;
    // NOP
label_799330:
    // 0x799330: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799334:
    // 0x799334: 0xc0b56a8  jal         func_2D5AA0
label_799338:
    if (ctx->pc == 0x799338u) {
        ctx->pc = 0x799338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799334u;
        // 0x799338: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79933Cu;
        goto label_79933c;
    }
    ctx->pc = 0x799334u;
    SET_GPR_U32(ctx, 31, 0x79933Cu);
    ctx->pc = 0x799338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799334u;
    // 0x799338: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799334u, 0x79933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79933Cu;
label_79933c:
    // 0x79933c: 0x26c4ea60  addiu       $a0, $s6, -0x15A0
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961760));
label_799340:
    // 0x799340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799344:
    // 0x799344: 0xc0b0aa6  jal         func_2C2A98
label_799348:
    if (ctx->pc == 0x799348u) {
        ctx->pc = 0x799348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799344u;
        // 0x799348: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79934Cu;
        goto label_79934c;
    }
    ctx->pc = 0x799344u;
    SET_GPR_U32(ctx, 31, 0x79934Cu);
    ctx->pc = 0x799348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799344u;
    // 0x799348: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799344u, 0x79934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79934Cu;
label_79934c:
    // 0x79934c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79934cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799350:
    // 0x799350: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
label_799354:
    if (ctx->pc == 0x799354u) {
        ctx->pc = 0x799354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799350u;
        // 0x799354: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799358u;
        goto label_799358;
    }
    ctx->pc = 0x799350u;
    {
        const bool branch_taken_0x799350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x799354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799350u;
        // 0x799354: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799350) {
            ctx->pc = 0x799330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799330;
        }
    }
    ctx->pc = 0x799358u;
label_799358:
    // 0x799358: 0x10000005  b           . + 4 + (0x5 << 2)
label_79935c:
    if (ctx->pc == 0x79935Cu) {
        ctx->pc = 0x79935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799358u;
        // 0x79935c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799360u;
        goto label_799360;
    }
    ctx->pc = 0x799358u;
    {
        const bool branch_taken_0x799358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799358u;
        // 0x79935c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799358) {
            ctx->pc = 0x799370u;
            goto label_799370;
        }
    }
    ctx->pc = 0x799360u;
label_799360:
    // 0x799360: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_799364:
    // 0x799364: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799368:
    // 0x799368: 0xc0b56a8  jal         func_2D5AA0
label_79936c:
    if (ctx->pc == 0x79936Cu) {
        ctx->pc = 0x79936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799368u;
        // 0x79936c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799370u;
        goto label_799370;
    }
    ctx->pc = 0x799368u;
    SET_GPR_U32(ctx, 31, 0x799370u);
    ctx->pc = 0x79936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799368u;
    // 0x79936c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799368u, 0x799370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799370u;
label_799370:
    // 0x799370: 0xc0b0f90  jal         func_2C3E40
label_799374:
    if (ctx->pc == 0x799374u) {
        ctx->pc = 0x799374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799370u;
        // 0x799374: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799378u;
        goto label_799378;
    }
    ctx->pc = 0x799370u;
    SET_GPR_U32(ctx, 31, 0x799378u);
    ctx->pc = 0x799374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799370u;
    // 0x799374: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x799370u, 0x799378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799378u;
label_799378:
    // 0x799378: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_79937c:
    if (ctx->pc == 0x79937Cu) {
        ctx->pc = 0x79937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799378u;
        // 0x79937c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799380u;
        goto label_799380;
    }
    ctx->pc = 0x799378u;
    {
        const bool branch_taken_0x799378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799378u;
        // 0x79937c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799378) {
            ctx->pc = 0x799360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799360;
        }
    }
    ctx->pc = 0x799380u;
label_799380:
    // 0x799380: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_799384:
    // 0x799384: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_799388:
    // 0x799388: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79938c:
    // 0x79938c: 0xc0a58dc  jal         func_296370
label_799390:
    if (ctx->pc == 0x799390u) {
        ctx->pc = 0x799390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79938Cu;
        // 0x799390: 0x24446af0  addiu       $a0, $v0, 0x6AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799394u;
        goto label_799394;
    }
    ctx->pc = 0x79938Cu;
    SET_GPR_U32(ctx, 31, 0x799394u);
    ctx->pc = 0x799390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79938Cu;
    // 0x799390: 0x24446af0  addiu       $a0, $v0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x79938Cu, 0x799394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799394u;
label_799394:
    // 0x799394: 0x3c014046  lui         $at, 0x4046
    ctx->pc = 0x799394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16454 << 16));
label_799398:
    // 0x799398: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x799398u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_79939c:
    // 0x79939c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79939cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_7993a0:
    // 0x7993a0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_7993a4:
    // 0x7993a4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_7993a8:
    // 0x7993a8: 0x8c448658  lw          $a0, -0x79A8($v0)
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_7993ac:
    // 0x7993ac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7993acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_7993b0:
    // 0x7993b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7993b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_7993b4:
    // 0x7993b4: 0xc0b6dac  jal         func_2DB6B0
label_7993b8:
    if (ctx->pc == 0x7993B8u) {
        ctx->pc = 0x7993B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B4u;
        // 0x7993b8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993BCu;
        goto label_7993bc;
    }
    ctx->pc = 0x7993B4u;
    SET_GPR_U32(ctx, 31, 0x7993BCu);
    ctx->pc = 0x7993B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B4u;
    // 0x7993b8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7993B4u, 0x7993BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993BCu;
label_7993bc:
    // 0x7993bc: 0x3c01bf6b  lui         $at, 0xBF6B
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49003 << 16));
label_7993c0:
    // 0x7993c0: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x7993c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
label_7993c4:
    // 0x7993c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7993c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_7993c8:
    // 0x7993c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7993c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7993cc:
    // 0x7993cc: 0x3c013ffe  lui         $at, 0x3FFE
    ctx->pc = 0x7993ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16382 << 16));
label_7993d0:
    // 0x7993d0: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x7993d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_7993d4:
    // 0x7993d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7993d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7993d8:
    // 0x7993d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7993d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7993dc:
    // 0x7993dc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x7993dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_7993e0:
    // 0x7993e0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x7993e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_7993e4:
    // 0x7993e4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x7993e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_7993e8:
    // 0x7993e8: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x7993e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_7993ec:
    // 0x7993ec: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_7993f0:
    // 0x7993f0: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x7993f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_7993f4:
    // 0x7993f4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_7993f8:
    // 0x7993f8: 0x60f809  jalr        $v1
label_7993fc:
    if (ctx->pc == 0x7993FCu) {
        ctx->pc = 0x7993FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F8u;
        // 0x7993fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799400u;
        goto label_799400;
    }
    ctx->pc = 0x7993F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799400u);
        ctx->pc = 0x7993FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F8u;
        // 0x7993fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7993F8u, 0x799400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799400u;
label_799400:
    // 0x799400: 0x8e060214  lw          $a2, 0x214($s0)
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_799404:
    // 0x799404: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x799404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_799408:
    // 0x799408: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x799408u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_79940c:
    // 0x79940c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x79940cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_799410:
    // 0x799410: 0xe6550004  swc1        $f21, 0x4($s2)
    ctx->pc = 0x799410u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_799414:
    // 0x799414: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x799414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_799418:
    // 0x799418: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x799418u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_79941c:
    // 0x79941c: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_799420:
    // 0x799420: 0x40f809  jalr        $v0
label_799424:
    if (ctx->pc == 0x799424u) {
        ctx->pc = 0x799424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799420u;
        // 0x799424: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799428u;
        goto label_799428;
    }
    ctx->pc = 0x799420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799428u);
        ctx->pc = 0x799424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799420u;
        // 0x799424: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799420u, 0x799428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799428u;
label_799428:
    // 0x799428: 0x8ee4264c  lw          $a0, 0x264C($s7)
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 9804)));
label_79942c:
    // 0x79942c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79942cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799430:
    // 0x799430: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799434:
    // 0x799434: 0xc0b016c  jal         func_2C05B0
label_799438:
    if (ctx->pc == 0x799438u) {
        ctx->pc = 0x799438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799434u;
        // 0x799438: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79943Cu;
        goto label_79943c;
    }
    ctx->pc = 0x799434u;
    SET_GPR_U32(ctx, 31, 0x79943Cu);
    ctx->pc = 0x799438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799434u;
    // 0x799438: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799434u, 0x79943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79943Cu;
label_79943c:
    // 0x79943c: 0x26d0ea60  addiu       $s0, $s6, -0x15A0
    ctx->pc = 0x79943cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961760));
label_799440:
    // 0x799440: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799444:
    // 0x799444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799448:
    // 0x799448: 0xc0b0ab8  jal         func_2C2AE0
label_79944c:
    if (ctx->pc == 0x79944Cu) {
        ctx->pc = 0x79944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799448u;
        // 0x79944c: 0x26316ab0  addiu       $s1, $s1, 0x6AB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 27312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799450u;
        goto label_799450;
    }
    ctx->pc = 0x799448u;
    SET_GPR_U32(ctx, 31, 0x799450u);
    ctx->pc = 0x79944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799448u;
    // 0x79944c: 0x26316ab0  addiu       $s1, $s1, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799448u, 0x799450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799450u;
label_799450:
    // 0x799450: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_799454:
    // 0x799454: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799454u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_799458:
    // 0x799458: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79945c:
    // 0x79945c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79945cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799460:
    // 0x799460: 0xc0b0a68  jal         func_2C29A0
label_799464:
    if (ctx->pc == 0x799464u) {
        ctx->pc = 0x799464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799460u;
        // 0x799464: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799468u;
        goto label_799468;
    }
    ctx->pc = 0x799460u;
    SET_GPR_U32(ctx, 31, 0x799468u);
    ctx->pc = 0x799464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799460u;
    // 0x799464: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29A0u, 0x799460u, 0x799468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799468u;
label_799468:
    // 0x799468: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_79946c:
    // 0x79946c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79946cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_799470:
    // 0x799470: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_799474:
    // 0x799474: 0x8ea6d6e8  lw          $a2, -0x2918($s5)
    ctx->pc = 0x799474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956776)));
label_799478:
    // 0x799478: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_79947c:
    // 0x79947c: 0x27c4ee00  addiu       $a0, $fp, -0x1200
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962688));
label_799480:
    // 0x799480: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799484:
    // 0x799484: 0x8cc21f20  lw          $v0, 0x1F20($a2)
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7968)));
label_799488:
    // 0x799488: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_79948c:
    // 0x79948c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x79948cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_799490:
    // 0x799490: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x799490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_799494:
    // 0x799494: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_799498:
    // 0x799498: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79949c:
    // 0x79949c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79949cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_7994a0:
    // 0x7994a0: 0xc0b42ae  jal         func_2D0AB8
label_7994a4:
    if (ctx->pc == 0x7994A4u) {
        ctx->pc = 0x7994A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A0u;
        // 0x7994a4: 0xacc21f20  sw          $v0, 0x1F20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 7968), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994A8u;
        goto label_7994a8;
    }
    ctx->pc = 0x7994A0u;
    SET_GPR_U32(ctx, 31, 0x7994A8u);
    ctx->pc = 0x7994A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994A0u;
    // 0x7994a4: 0xacc21f20  sw          $v0, 0x1F20($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 7968), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x7994A0u, 0x7994A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A8u;
label_7994a8:
    // 0x7994a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7994ac:
    // 0x7994ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7994acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7994b0:
    // 0x7994b0: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x7994b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
label_7994b4:
    // 0x7994b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7994b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7994b8:
    // 0x7994b8: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x7994b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_7994bc:
    // 0x7994bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7994bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994c0:
    // 0x7994c0: 0xc0a54b4  jal         func_2952D0
label_7994c4:
    if (ctx->pc == 0x7994C4u) {
        ctx->pc = 0x7994C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994C0u;
        // 0x7994c4: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994C8u;
        goto label_7994c8;
    }
    ctx->pc = 0x7994C0u;
    SET_GPR_U32(ctx, 31, 0x7994C8u);
    ctx->pc = 0x7994C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994C0u;
    // 0x7994c4: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7994C0u, 0x7994C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994C8u;
label_7994c8:
    // 0x7994c8: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x7994c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_7994cc:
    // 0x7994cc: 0xc0a54b4  jal         func_2952D0
label_7994d0:
    if (ctx->pc == 0x7994D0u) {
        ctx->pc = 0x7994D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994CCu;
        // 0x7994d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994D4u;
        goto label_7994d4;
    }
    ctx->pc = 0x7994CCu;
    SET_GPR_U32(ctx, 31, 0x7994D4u);
    ctx->pc = 0x7994D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994CCu;
    // 0x7994d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7994CCu, 0x7994D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994D4u;
label_7994d4:
    // 0x7994d4: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x7994d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_7994d8:
    // 0x7994d8: 0xc0a54b4  jal         func_2952D0
label_7994dc:
    if (ctx->pc == 0x7994DCu) {
        ctx->pc = 0x7994DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D8u;
        // 0x7994dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994E0u;
        goto label_7994e0;
    }
    ctx->pc = 0x7994D8u;
    SET_GPR_U32(ctx, 31, 0x7994E0u);
    ctx->pc = 0x7994DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D8u;
    // 0x7994dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7994D8u, 0x7994E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E0u;
label_7994e0:
    // 0x7994e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7994e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7994e4:
    // 0x7994e4: 0xc0a578e  jal         func_295E38
label_7994e8:
    if (ctx->pc == 0x7994E8u) {
        ctx->pc = 0x7994E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994E4u;
        // 0x7994e8: 0x240503c4  addiu       $a1, $zero, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994ECu;
        goto label_7994ec;
    }
    ctx->pc = 0x7994E4u;
    SET_GPR_U32(ctx, 31, 0x7994ECu);
    ctx->pc = 0x7994E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E4u;
    // 0x7994e8: 0x240503c4  addiu       $a1, $zero, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x7994E4u, 0x7994ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994ECu;
label_7994ec:
    // 0x7994ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7994ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7994f0:
    // 0x7994f0: 0xc0a578e  jal         func_295E38
label_7994f4:
    if (ctx->pc == 0x7994F4u) {
        ctx->pc = 0x7994F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F0u;
        // 0x7994f4: 0x240503c3  addiu       $a1, $zero, 0x3C3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 963));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994F8u;
        goto label_7994f8;
    }
    ctx->pc = 0x7994F0u;
    SET_GPR_U32(ctx, 31, 0x7994F8u);
    ctx->pc = 0x7994F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994F0u;
    // 0x7994f4: 0x240503c3  addiu       $a1, $zero, 0x3C3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 963));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x7994F0u, 0x7994F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994F8u;
label_7994f8:
    // 0x7994f8: 0x240503c2  addiu       $a1, $zero, 0x3C2
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 962));
label_7994fc:
    // 0x7994fc: 0xc0a578e  jal         func_295E38
label_799500:
    if (ctx->pc == 0x799500u) {
        ctx->pc = 0x799500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994FCu;
        // 0x799500: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799504u;
        goto label_799504;
    }
    ctx->pc = 0x7994FCu;
    SET_GPR_U32(ctx, 31, 0x799504u);
    ctx->pc = 0x799500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994FCu;
    // 0x799500: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x7994FCu, 0x799504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799504u;
label_799504:
    // 0x799504: 0xc0b6dac  jal         func_2DB6B0
label_799508:
    if (ctx->pc == 0x799508u) {
        ctx->pc = 0x79950Cu;
        goto label_79950c;
    }
    ctx->pc = 0x799504u;
    SET_GPR_U32(ctx, 31, 0x79950Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799504u, 0x79950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79950Cu;
label_79950c:
    // 0x79950c: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799510:
    // 0x799510: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x799510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_799514:
    // 0x799514: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x799514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_799518:
    // 0x799518: 0xa0f809  jalr        $a1
label_79951c:
    if (ctx->pc == 0x79951Cu) {
        ctx->pc = 0x79951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799518u;
        // 0x79951c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799520u;
        goto label_799520;
    }
    ctx->pc = 0x799518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x799520u);
        ctx->pc = 0x79951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799518u;
        // 0x79951c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799518u, 0x799520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799520u;
label_799520:
    // 0x799520: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799524:
    // 0x799524: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799528:
    // 0x799528: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x799528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79952c:
    // 0x79952c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79952cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799530:
    // 0x799530: 0xc0a57e0  jal         func_295F80
label_799534:
    if (ctx->pc == 0x799534u) {
        ctx->pc = 0x799534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799530u;
        // 0x799534: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799538u;
        goto label_799538;
    }
    ctx->pc = 0x799530u;
    SET_GPR_U32(ctx, 31, 0x799538u);
    ctx->pc = 0x799534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799530u;
    // 0x799534: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799530u, 0x799538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799538u;
label_799538:
    // 0x799538: 0xc0b6dac  jal         func_2DB6B0
label_79953c:
    if (ctx->pc == 0x79953Cu) {
        ctx->pc = 0x799540u;
        goto label_799540;
    }
    ctx->pc = 0x799538u;
    SET_GPR_U32(ctx, 31, 0x799540u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799538u, 0x799540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799540u;
label_799540:
    // 0x799540: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799544:
    // 0x799544: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_799548:
    // 0x799548: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x799548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79954c:
    // 0x79954c: 0xa0f809  jalr        $a1
label_799550:
    if (ctx->pc == 0x799550u) {
        ctx->pc = 0x799550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79954Cu;
        // 0x799550: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799554u;
        goto label_799554;
    }
    ctx->pc = 0x79954Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x799554u);
        ctx->pc = 0x799550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79954Cu;
        // 0x799550: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79954Cu, 0x799554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799554u;
label_799554:
    // 0x799554: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799558:
    // 0x799558: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79955c:
    // 0x79955c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79955cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_799560:
    // 0x799560: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799564:
    // 0x799564: 0xc0a57e0  jal         func_295F80
label_799568:
    if (ctx->pc == 0x799568u) {
        ctx->pc = 0x799568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799564u;
        // 0x799568: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79956Cu;
        goto label_79956c;
    }
    ctx->pc = 0x799564u;
    SET_GPR_U32(ctx, 31, 0x79956Cu);
    ctx->pc = 0x799568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799564u;
    // 0x799568: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799564u, 0x79956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79956Cu;
label_79956c:
    // 0x79956c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x79956cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799570:
    // 0x799570: 0xc0b6cac  jal         func_2DB2B0
label_799574:
    if (ctx->pc == 0x799574u) {
        ctx->pc = 0x799574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799570u;
        // 0x799574: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799578u;
        goto label_799578;
    }
    ctx->pc = 0x799570u;
    SET_GPR_U32(ctx, 31, 0x799578u);
    ctx->pc = 0x799574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799570u;
    // 0x799574: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799570u, 0x799578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799578u;
label_799578:
    // 0x799578: 0x4617ad40  add.s       $f21, $f21, $f23
    ctx->pc = 0x799578u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_79957c:
    // 0x79957c: 0x0  nop
    ctx->pc = 0x79957cu;
    // NOP
label_799580:
    // 0x799580: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799584:
    // 0x799584: 0xc0b6cc6  jal         func_2DB318
label_799588:
    if (ctx->pc == 0x799588u) {
        ctx->pc = 0x799588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799584u;
        // 0x799588: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79958Cu;
        goto label_79958c;
    }
    ctx->pc = 0x799584u;
    SET_GPR_U32(ctx, 31, 0x79958Cu);
    ctx->pc = 0x799588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799584u;
    // 0x799588: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x799584u, 0x79958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79958Cu;
label_79958c:
    // 0x79958c: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x79958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_799590:
    // 0x799590: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799594:
    // 0x799594: 0xc0b56a8  jal         func_2D5AA0
label_799598:
    if (ctx->pc == 0x799598u) {
        ctx->pc = 0x799598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799594u;
        // 0x799598: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79959Cu;
        goto label_79959c;
    }
    ctx->pc = 0x799594u;
    SET_GPR_U32(ctx, 31, 0x79959Cu);
    ctx->pc = 0x799598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799594u;
    // 0x799598: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799594u, 0x79959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79959Cu;
label_79959c:
    // 0x79959c: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x79959cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_7995a0:
    // 0x7995a0: 0x0  nop
    ctx->pc = 0x7995a0u;
    // NOP
label_7995a4:
    // 0x7995a4: 0x4503fff6  bc1tl       . + 4 + (-0xA << 2)
label_7995a8:
    if (ctx->pc == 0x7995A8u) {
        ctx->pc = 0x7995A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995A4u;
        // 0x7995a8: 0x4617ad40  add.s       $f21, $f21, $f23 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995ACu;
        goto label_7995ac;
    }
    ctx->pc = 0x7995A4u;
    {
        const bool branch_taken_0x7995a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7995a4) {
            ctx->pc = 0x7995A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7995A4u;
            // 0x7995a8: 0x4617ad40  add.s       $f21, $f21, $f23 (Delay Slot)
            ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x799580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799580;
        }
    }
    ctx->pc = 0x7995ACu;
label_7995ac:
    // 0x7995ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7995acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_7995b0:
    // 0x7995b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7995b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_7995b4:
    // 0x7995b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_7995b8:
    // 0x7995b8: 0xc0b6cc6  jal         func_2DB318
label_7995bc:
    if (ctx->pc == 0x7995BCu) {
        ctx->pc = 0x7995BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B8u;
        // 0x7995bc: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995C0u;
        goto label_7995c0;
    }
    ctx->pc = 0x7995B8u;
    SET_GPR_U32(ctx, 31, 0x7995C0u);
    ctx->pc = 0x7995BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995B8u;
    // 0x7995bc: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x7995B8u, 0x7995C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995C0u;
label_7995c0:
    // 0x7995c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_7995c4:
    if (ctx->pc == 0x7995C4u) {
        ctx->pc = 0x7995C8u;
        goto label_7995c8;
    }
    ctx->pc = 0x7995C0u;
    {
        const bool branch_taken_0x7995c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7995c0) {
            ctx->pc = 0x7995D4u;
            goto label_7995d4;
        }
    }
    ctx->pc = 0x7995C8u;
label_7995c8:
    // 0x7995c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7995c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7995cc:
    // 0x7995cc: 0xc0b56a8  jal         func_2D5AA0
label_7995d0:
    if (ctx->pc == 0x7995D0u) {
        ctx->pc = 0x7995D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995CCu;
        // 0x7995d0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995D4u;
        goto label_7995d4;
    }
    ctx->pc = 0x7995CCu;
    SET_GPR_U32(ctx, 31, 0x7995D4u);
    ctx->pc = 0x7995D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995CCu;
    // 0x7995d0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7995CCu, 0x7995D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995D4u;
label_7995d4:
    // 0x7995d4: 0xc0a572a  jal         func_295CA8
label_7995d8:
    if (ctx->pc == 0x7995D8u) {
        ctx->pc = 0x7995D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D4u;
        // 0x7995d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995DCu;
        goto label_7995dc;
    }
    ctx->pc = 0x7995D4u;
    SET_GPR_U32(ctx, 31, 0x7995DCu);
    ctx->pc = 0x7995D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995D4u;
    // 0x7995d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7995D4u, 0x7995DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995DCu;
label_7995dc:
    // 0x7995dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7995dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7995e0:
    // 0x7995e0: 0x1615fff9  bne         $s0, $s5, . + 4 + (-0x7 << 2)
label_7995e4:
    if (ctx->pc == 0x7995E4u) {
        ctx->pc = 0x7995E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E0u;
        // 0x7995e4: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995E8u;
        goto label_7995e8;
    }
    ctx->pc = 0x7995E0u;
    {
        const bool branch_taken_0x7995e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x7995E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E0u;
        // 0x7995e4: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995e0) {
            ctx->pc = 0x7995C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995c8;
        }
    }
    ctx->pc = 0x7995E8u;
label_7995e8:
    // 0x7995e8: 0xc0a572a  jal         func_295CA8
label_7995ec:
    if (ctx->pc == 0x7995ECu) {
        ctx->pc = 0x7995ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E8u;
        // 0x7995ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995F0u;
        goto label_7995f0;
    }
    ctx->pc = 0x7995E8u;
    SET_GPR_U32(ctx, 31, 0x7995F0u);
    ctx->pc = 0x7995ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995E8u;
    // 0x7995ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7995E8u, 0x7995F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995F0u;
label_7995f0:
    // 0x7995f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7995f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7995f4:
    // 0x7995f4: 0x1630fff4  bne         $s1, $s0, . + 4 + (-0xC << 2)
label_7995f8:
    if (ctx->pc == 0x7995F8u) {
        ctx->pc = 0x7995F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F4u;
        // 0x7995f8: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995FCu;
        goto label_7995fc;
    }
    ctx->pc = 0x7995F4u;
    {
        const bool branch_taken_0x7995f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x7995F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F4u;
        // 0x7995f8: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995f4) {
            ctx->pc = 0x7995C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995c8;
        }
    }
    ctx->pc = 0x7995FCu;
label_7995fc:
    // 0x7995fc: 0xc0a572a  jal         func_295CA8
label_799600:
    if (ctx->pc == 0x799600u) {
        ctx->pc = 0x799600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995FCu;
        // 0x799600: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799604u;
        goto label_799604;
    }
    ctx->pc = 0x7995FCu;
    SET_GPR_U32(ctx, 31, 0x799604u);
    ctx->pc = 0x799600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995FCu;
    // 0x799600: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7995FCu, 0x799604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799604u;
label_799604:
    // 0x799604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799608:
    // 0x799608: 0x1611ffef  bne         $s0, $s1, . + 4 + (-0x11 << 2)
label_79960c:
    if (ctx->pc == 0x79960Cu) {
        ctx->pc = 0x79960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799608u;
        // 0x79960c: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799610u;
        goto label_799610;
    }
    ctx->pc = 0x799608u;
    {
        const bool branch_taken_0x799608 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x79960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799608u;
        // 0x79960c: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799608) {
            ctx->pc = 0x7995C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995c8;
        }
    }
    ctx->pc = 0x799610u;
label_799610:
    // 0x799610: 0xc0b0f90  jal         func_2C3E40
label_799614:
    if (ctx->pc == 0x799614u) {
        ctx->pc = 0x799614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799610u;
        // 0x799614: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799618u;
        goto label_799618;
    }
    ctx->pc = 0x799610u;
    SET_GPR_U32(ctx, 31, 0x799618u);
    ctx->pc = 0x799614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799610u;
    // 0x799614: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x799610u, 0x799618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799618u;
label_799618:
    // 0x799618: 0x1450ffeb  bne         $v0, $s0, . + 4 + (-0x15 << 2)
label_79961c:
    if (ctx->pc == 0x79961Cu) {
        ctx->pc = 0x79961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799618u;
        // 0x79961c: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799620u;
        goto label_799620;
    }
    ctx->pc = 0x799618u;
    {
        const bool branch_taken_0x799618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x79961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799618u;
        // 0x79961c: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799618) {
            ctx->pc = 0x7995C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995c8;
        }
    }
    ctx->pc = 0x799620u;
label_799620:
    // 0x799620: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_799624:
    // 0x799624: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x799624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_799628:
    // 0x799628: 0x8c468658  lw          $a2, -0x79A8($v0)
    ctx->pc = 0x799628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_79962c:
    // 0x79962c: 0x27c4ee00  addiu       $a0, $fp, -0x1200
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962688));
label_799630:
    // 0x799630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799634:
    // 0x799634: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_799638:
    // 0x799638: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79963c:
    // 0x79963c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x79963cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_799640:
    // 0x799640: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x799640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_799644:
    // 0x799644: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x799644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_799648:
    // 0x799648: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_79964c:
    // 0x79964c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79964cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_799650:
    // 0x799650: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x799650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_799654:
    // 0x799654: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_799658:
    // 0x799658: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_79965c:
    // 0x79965c: 0xc0b42ae  jal         func_2D0AB8
label_799660:
    if (ctx->pc == 0x799660u) {
        ctx->pc = 0x799660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79965Cu;
        // 0x799660: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799664u;
        goto label_799664;
    }
    ctx->pc = 0x79965Cu;
    SET_GPR_U32(ctx, 31, 0x799664u);
    ctx->pc = 0x799660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79965Cu;
    // 0x799660: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x79965Cu, 0x799664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799664u;
label_799664:
    // 0x799664: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_799668:
    // 0x799668: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_79966c:
    // 0x79966c: 0xc0a58dc  jal         func_296370
label_799670:
    if (ctx->pc == 0x799670u) {
        ctx->pc = 0x799670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79966Cu;
        // 0x799670: 0x24446af0  addiu       $a0, $v0, 0x6AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799674u;
        goto label_799674;
    }
    ctx->pc = 0x79966Cu;
    SET_GPR_U32(ctx, 31, 0x799674u);
    ctx->pc = 0x799670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79966Cu;
    // 0x799670: 0x24446af0  addiu       $a0, $v0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x79966Cu, 0x799674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799674u;
label_799674:
    // 0x799674: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x799674u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
label_799678:
    // 0x799678: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x799678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_79967c:
    // 0x79967c: 0xc0b6cc6  jal         func_2DB318
label_799680:
    if (ctx->pc == 0x799680u) {
        ctx->pc = 0x799680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79967Cu;
        // 0x799680: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799684u;
        goto label_799684;
    }
    ctx->pc = 0x79967Cu;
    SET_GPR_U32(ctx, 31, 0x799684u);
    ctx->pc = 0x799680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79967Cu;
    // 0x799680: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x79967Cu, 0x799684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799684u;
label_799684:
    // 0x799684: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x799684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_799688:
    // 0x799688: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79968c:
    // 0x79968c: 0xc0b56a8  jal         func_2D5AA0
label_799690:
    if (ctx->pc == 0x799690u) {
        ctx->pc = 0x799690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79968Cu;
        // 0x799690: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799694u;
        goto label_799694;
    }
    ctx->pc = 0x79968Cu;
    SET_GPR_U32(ctx, 31, 0x799694u);
    ctx->pc = 0x799690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79968Cu;
    // 0x799690: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79968Cu, 0x799694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799694u;
label_799694:
    // 0x799694: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x799694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_799698:
    // 0x799698: 0x0  nop
    ctx->pc = 0x799698u;
    // NOP
label_79969c:
    // 0x79969c: 0x4503fff6  bc1tl       . + 4 + (-0xA << 2)
label_7996a0:
    if (ctx->pc == 0x7996A0u) {
        ctx->pc = 0x7996A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79969Cu;
        // 0x7996a0: 0x4616a501  sub.s       $f20, $f20, $f22 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996A4u;
        goto label_7996a4;
    }
    ctx->pc = 0x79969Cu;
    {
        const bool branch_taken_0x79969c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79969c) {
            ctx->pc = 0x7996A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79969Cu;
            // 0x7996a0: 0x4616a501  sub.s       $f20, $f20, $f22 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x799678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799678;
        }
    }
    ctx->pc = 0x7996A4u;
label_7996a4:
    // 0x7996a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x7996a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_7996a8:
    // 0x7996a8: 0xc0b6cac  jal         func_2DB2B0
label_7996ac:
    if (ctx->pc == 0x7996ACu) {
        ctx->pc = 0x7996ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A8u;
        // 0x7996ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996B0u;
        goto label_7996b0;
    }
    ctx->pc = 0x7996A8u;
    SET_GPR_U32(ctx, 31, 0x7996B0u);
    ctx->pc = 0x7996ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996A8u;
    // 0x7996ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7996A8u, 0x7996B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996B0u;
label_7996b0:
    // 0x7996b0: 0x26d0ea60  addiu       $s0, $s6, -0x15A0
    ctx->pc = 0x7996b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961760));
label_7996b4:
    // 0x7996b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7996b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7996b8:
    // 0x7996b8: 0xc0b0ab8  jal         func_2C2AE0
label_7996bc:
    if (ctx->pc == 0x7996BCu) {
        ctx->pc = 0x7996BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B8u;
        // 0x7996bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996C0u;
        goto label_7996c0;
    }
    ctx->pc = 0x7996B8u;
    SET_GPR_U32(ctx, 31, 0x7996C0u);
    ctx->pc = 0x7996BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996B8u;
    // 0x7996bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x7996B8u, 0x7996C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996C0u;
label_7996c0:
    // 0x7996c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7996c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7996c4:
    // 0x7996c4: 0xc0b0a3e  jal         func_2C28F8
label_7996c8:
    if (ctx->pc == 0x7996C8u) {
        ctx->pc = 0x7996C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C4u;
        // 0x7996c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996CCu;
        goto label_7996cc;
    }
    ctx->pc = 0x7996C4u;
    SET_GPR_U32(ctx, 31, 0x7996CCu);
    ctx->pc = 0x7996C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996C4u;
    // 0x7996c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28F8u, 0x7996C4u, 0x7996CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996CCu;
label_7996cc:
    // 0x7996cc: 0x8e832f84  lw          $v1, 0x2F84($s4)
    ctx->pc = 0x7996ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_7996d0:
    // 0x7996d0: 0xc0b5692  jal         func_2D5A48
label_7996d4:
    if (ctx->pc == 0x7996D4u) {
        ctx->pc = 0x7996D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996D0u;
        // 0x7996d4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996D8u;
        goto label_7996d8;
    }
    ctx->pc = 0x7996D0u;
    SET_GPR_U32(ctx, 31, 0x7996D8u);
    ctx->pc = 0x7996D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996D0u;
    // 0x7996d4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7996D0u, 0x7996D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996D8u;
label_7996d8:
    // 0x7996d8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x7996d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_7996dc:
    // 0x7996dc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x7996dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_7996e0:
    // 0x7996e0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x7996e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_7996e4:
    // 0x7996e4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x7996e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_7996e8:
    // 0x7996e8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x7996e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_7996ec:
    // 0x7996ec: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x7996ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_7996f0:
    // 0x7996f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x7996f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_7996f4:
    // 0x7996f4: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x7996f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7996f8:
    // 0x7996f8: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x7996f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7996fc:
    // 0x7996fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x7996fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_799700:
    // 0x799700: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x799700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_799704:
    // 0x799704: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x799704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_799708:
    // 0x799708: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x799708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_79970c:
    // 0x79970c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x79970cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_799710:
    // 0x799710: 0x3e00008  jr          $ra
label_799714:
    if (ctx->pc == 0x799714u) {
        ctx->pc = 0x799714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799710u;
        // 0x799714: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799718u;
        goto label_fallthrough_0x799710;
    }
    ctx->pc = 0x799710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799710u;
        // 0x799714: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799710:
    ctx->pc = 0x799718u;
}
} // namespace gh_r403
