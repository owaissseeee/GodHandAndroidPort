#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: func_00799268
// Address: 0x799268 - 0x7996c8
void func_00799268_0x799268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799268_0x799268");
#endif

    switch (ctx->pc) {
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
        default: break;
    }

    ctx->pc = 0x799268u;

label_799268:
    // 0x799268: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_79926c:
    // 0x79926c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_799270:
    // 0x799270: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x799270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_799274:
    // 0x799274: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x799274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_799278:
    // 0x799278: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
label_79927c:
    // 0x79927c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x79927cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_799280:
    // 0x799280: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x799280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_799284:
    // 0x799284: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x799284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_799288:
    // 0x799288: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x799288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_79928c:
    // 0x79928c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x79928cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_799290:
    // 0x799290: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x799290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_799294:
    // 0x799294: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x799294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_799298:
    // 0x799298: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x799298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_79929c:
    // 0x79929c: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936152)));
label_7992a0:
    // 0x7992a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7992a4:
    // 0x7992a4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x7992a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_7992a8:
    // 0x7992a8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_7992ac:
    if (ctx->pc == 0x7992ACu) {
        ctx->pc = 0x7992ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992A8u;
        // 0x7992ac: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992B0u;
        goto label_7992b0;
    }
    ctx->pc = 0x7992A8u;
    {
        const bool branch_taken_0x7992a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7992ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992A8u;
        // 0x7992ac: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992a8) {
            ctx->pc = 0x799318u;
            goto label_799318;
        }
    }
    ctx->pc = 0x7992B0u;
label_7992b0:
    // 0x7992b0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_7992b4:
    // 0x7992b4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x7992b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_7992b8:
    // 0x7992b8: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x7992b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
label_7992bc:
    // 0x7992bc: 0xc07ee4a  jal         func_1FB928
label_7992c0:
    if (ctx->pc == 0x7992C0u) {
        ctx->pc = 0x7992C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992BCu;
        // 0x7992c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992C4u;
        goto label_7992c4;
    }
    ctx->pc = 0x7992BCu;
    SET_GPR_U32(ctx, 31, 0x7992C4u);
    ctx->pc = 0x7992C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992BCu;
    // 0x7992c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x7992BCu, 0x7992C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992C4u;
label_7992c4:
    // 0x7992c4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_7992c8:
    if (ctx->pc == 0x7992C8u) {
        ctx->pc = 0x7992C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992C4u;
        // 0x7992c8: 0x8ec28658  lw          $v0, -0x79A8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992CCu;
        goto label_7992cc;
    }
    ctx->pc = 0x7992C4u;
    {
        const bool branch_taken_0x7992c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7992C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992C4u;
        // 0x7992c8: 0x8ec28658  lw          $v0, -0x79A8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992c4) {
            ctx->pc = 0x79931Cu;
            goto label_79931c;
        }
    }
    ctx->pc = 0x7992CCu;
label_7992cc:
    // 0x7992cc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_7992d0:
    // 0x7992d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7992d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7992d4:
    // 0x7992d4: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
label_7992d8:
    // 0x7992d8: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_7992dc:
    // 0x7992dc: 0xc051a5e  jal         func_146978
label_7992e0:
    if (ctx->pc == 0x7992E0u) {
        ctx->pc = 0x7992E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992DCu;
        // 0x7992e0: 0x24841cb0  addiu       $a0, $a0, 0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992E4u;
        goto label_7992e4;
    }
    ctx->pc = 0x7992DCu;
    SET_GPR_U32(ctx, 31, 0x7992E4u);
    ctx->pc = 0x7992E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992DCu;
    // 0x7992e0: 0x24841cb0  addiu       $a0, $a0, 0x1CB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146978u, 0x7992DCu, 0x7992E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992E4u;
label_7992e4:
    // 0x7992e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7992e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7992e8:
    // 0x7992e8: 0xc07ee2e  jal         func_1FB8B8
label_7992ec:
    if (ctx->pc == 0x7992ECu) {
        ctx->pc = 0x7992ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992E8u;
        // 0x7992ec: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7992F0u;
        goto label_7992f0;
    }
    ctx->pc = 0x7992E8u;
    SET_GPR_U32(ctx, 31, 0x7992F0u);
    ctx->pc = 0x7992ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992E8u;
    // 0x7992ec: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB8B8u, 0x7992E8u, 0x7992F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992F0u;
label_7992f0:
    // 0x7992f0: 0x8ec38658  lw          $v1, -0x79A8($s6)
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936152)));
label_7992f4:
    // 0x7992f4: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
label_7992f8:
    // 0x7992f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7992f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7992fc:
    // 0x7992fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7992fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799300:
    // 0x799300: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799304:
    // 0x799304: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799308:
    // 0x799308: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x799308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_79930c:
    // 0x79930c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79930cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_799310:
    // 0x799310: 0xc0b016c  jal         func_2C05B0
label_799314:
    if (ctx->pc == 0x799314u) {
        ctx->pc = 0x799314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799310u;
        // 0x799314: 0x8d04264c  lw          $a0, 0x264C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 9804)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799318u;
        goto label_799318;
    }
    ctx->pc = 0x799310u;
    SET_GPR_U32(ctx, 31, 0x799318u);
    ctx->pc = 0x799314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799310u;
    // 0x799314: 0x8d04264c  lw          $a0, 0x264C($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799310u, 0x799318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799318u;
label_799318:
    // 0x799318: 0x8ec28658  lw          $v0, -0x79A8($s6)
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936152)));
label_79931c:
    // 0x79931c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_799320:
    // 0x799320: 0x460001f  bltz        $v1, . + 4 + (0x1F << 2)
label_799324:
    if (ctx->pc == 0x799324u) {
        ctx->pc = 0x799324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799320u;
        // 0x799324: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799328u;
        goto label_799328;
    }
    ctx->pc = 0x799320u;
    {
        const bool branch_taken_0x799320 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x799324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799320u;
        // 0x799324: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799320) {
            ctx->pc = 0x7993A0u;
            goto label_7993a0;
        }
    }
    ctx->pc = 0x799328u;
label_799328:
    // 0x799328: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799328u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
label_79932c:
    // 0x79932c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_799330:
    // 0x799330: 0x24a596d8  addiu       $a1, $a1, -0x6928
    ctx->pc = 0x799330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940376));
label_799334:
    // 0x799334: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799338:
    // 0x799338: 0xc0b0e24  jal         func_2C3890
label_79933c:
    if (ctx->pc == 0x79933Cu) {
        ctx->pc = 0x79933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799338u;
        // 0x79933c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799340u;
        goto label_799340;
    }
    ctx->pc = 0x799338u;
    SET_GPR_U32(ctx, 31, 0x799340u);
    ctx->pc = 0x79933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799338u;
    // 0x79933c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799338u, 0x799340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799340u;
label_799340:
    // 0x799340: 0x3c150074  lui         $s5, 0x74
    ctx->pc = 0x799340u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)116 << 16));
label_799344:
    // 0x799344: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_799348:
    // 0x799348: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79934c:
    // 0x79934c: 0x24a59878  addiu       $a1, $a1, -0x6788
    ctx->pc = 0x79934cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940792));
label_799350:
    // 0x799350: 0xc0b0e24  jal         func_2C3890
label_799354:
    if (ctx->pc == 0x799354u) {
        ctx->pc = 0x799354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799350u;
        // 0x799354: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799358u;
        goto label_799358;
    }
    ctx->pc = 0x799350u;
    SET_GPR_U32(ctx, 31, 0x799358u);
    ctx->pc = 0x799354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799350u;
    // 0x799354: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799350u, 0x799358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799358u;
label_799358:
    // 0x799358: 0x3c1e0075  lui         $fp, 0x75
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)117 << 16));
label_79935c:
    // 0x79935c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_799360:
    // 0x799360: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799364:
    // 0x799364: 0x24a59cc0  addiu       $a1, $a1, -0x6340
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941888));
label_799368:
    // 0x799368: 0xc0b0e24  jal         func_2C3890
label_79936c:
    if (ctx->pc == 0x79936Cu) {
        ctx->pc = 0x79936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799368u;
        // 0x79936c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799370u;
        goto label_799370;
    }
    ctx->pc = 0x799368u;
    SET_GPR_U32(ctx, 31, 0x799370u);
    ctx->pc = 0x79936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799368u;
    // 0x79936c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799368u, 0x799370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799370u;
label_799370:
    // 0x799370: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x799370u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
label_799374:
    // 0x799374: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_799378:
    // 0x799378: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79937c:
    // 0x79937c: 0x24a5a390  addiu       $a1, $a1, -0x5C70
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943632));
label_799380:
    // 0x799380: 0xc0b0e24  jal         func_2C3890
label_799384:
    if (ctx->pc == 0x799384u) {
        ctx->pc = 0x799384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799380u;
        // 0x799384: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799388u;
        goto label_799388;
    }
    ctx->pc = 0x799380u;
    SET_GPR_U32(ctx, 31, 0x799388u);
    ctx->pc = 0x799384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799380u;
    // 0x799384: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799380u, 0x799388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799388u;
label_799388:
    // 0x799388: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
label_79938c:
    // 0x79938c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799390:
    // 0x799390: 0xc1e6a42  jal         func_79A908
label_799394:
    if (ctx->pc == 0x799394u) {
        ctx->pc = 0x799394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799390u;
        // 0x799394: 0x3c12007a  lui         $s2, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799398u;
        goto label_799398;
    }
    ctx->pc = 0x799390u;
    SET_GPR_U32(ctx, 31, 0x799398u);
    ctx->pc = 0x799394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799390u;
    // 0x799394: 0x3c12007a  lui         $s2, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A908u, 0x799390u, 0x799398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799398u;
label_799398:
    // 0x799398: 0x10000035  b           . + 4 + (0x35 << 2)
label_79939c:
    if (ctx->pc == 0x79939Cu) {
        ctx->pc = 0x79939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799398u;
        // 0x79939c: 0x8ea47a8c  lw          $a0, 0x7A8C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993A0u;
        goto label_7993a0;
    }
    ctx->pc = 0x799398u;
    {
        const bool branch_taken_0x799398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799398u;
        // 0x79939c: 0x8ea47a8c  lw          $a0, 0x7A8C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799398) {
            ctx->pc = 0x799470u;
            goto label_799470;
        }
    }
    ctx->pc = 0x7993A0u;
label_7993a0:
    // 0x7993a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7993a4:
    // 0x7993a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7993a8:
    // 0x7993a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_7993ac:
    // 0x7993ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x7993acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_7993b0:
    // 0x7993b0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x7993b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_7993b4:
    // 0x7993b4: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_7993b8:
    // 0x7993b8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x7993b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_7993bc:
    // 0x7993bc: 0xa3a20008  sb          $v0, 0x8($sp)
    ctx->pc = 0x7993bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 2));
label_7993c0:
    // 0x7993c0: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x7993c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
label_7993c4:
    // 0x7993c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x7993c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7993c8:
    // 0x7993c8: 0xa3a40018  sb          $a0, 0x18($sp)
    ctx->pc = 0x7993c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 4));
label_7993cc:
    // 0x7993cc: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x7993ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
label_7993d0:
    // 0x7993d0: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x7993d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_7993d4:
    // 0x7993d4: 0x3c150074  lui         $s5, 0x74
    ctx->pc = 0x7993d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)116 << 16));
label_7993d8:
    // 0x7993d8: 0xa3a60028  sb          $a2, 0x28($sp)
    ctx->pc = 0x7993d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 6));
label_7993dc:
    // 0x7993dc: 0x3c1e0075  lui         $fp, 0x75
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)117 << 16));
label_7993e0:
    // 0x7993e0: 0xa3a70030  sb          $a3, 0x30($sp)
    ctx->pc = 0x7993e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 7));
label_7993e4:
    // 0x7993e4: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
label_7993e8:
    // 0x7993e8: 0xa3a80038  sb          $t0, 0x38($sp)
    ctx->pc = 0x7993e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 8));
label_7993ec:
    // 0x7993ec: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
label_7993f0:
    // 0x7993f0: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x7993f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_7993f4:
    // 0x7993f4: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
label_7993f8:
    // 0x7993f8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x7993f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7993fc:
    // 0x7993fc: 0x0  nop
    ctx->pc = 0x7993fcu;
    // NOP
label_799400:
    // 0x799400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799404:
    // 0x799404: 0xc0a56ce  jal         func_295B38
label_799408:
    if (ctx->pc == 0x799408u) {
        ctx->pc = 0x799408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799404u;
        // 0x799408: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79940Cu;
        goto label_79940c;
    }
    ctx->pc = 0x799404u;
    SET_GPR_U32(ctx, 31, 0x79940Cu);
    ctx->pc = 0x799408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799404u;
    // 0x799408: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B38u, 0x799404u, 0x79940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79940Cu;
label_79940c:
    // 0x79940c: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x79940cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_799410:
    // 0x799410: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_799414:
    if (ctx->pc == 0x799414u) {
        ctx->pc = 0x799414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799410u;
        // 0x799414: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799418u;
        goto label_799418;
    }
    ctx->pc = 0x799410u;
    {
        const bool branch_taken_0x799410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799410u;
        // 0x799414: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799410) {
            ctx->pc = 0x799400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799400;
        }
    }
    ctx->pc = 0x799418u;
label_799418:
    // 0x799418: 0x8ec28658  lw          $v0, -0x79A8($s6)
    ctx->pc = 0x799418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936152)));
label_79941c:
    // 0x79941c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_799420:
    // 0x799420: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_799424:
    // 0x799424: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_799428:
    // 0x799428: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_79942c:
    if (ctx->pc == 0x79942Cu) {
        ctx->pc = 0x79942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799428u;
        // 0x79942c: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799430u;
        goto label_799430;
    }
    ctx->pc = 0x799428u;
    {
        const bool branch_taken_0x799428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799428u;
        // 0x79942c: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799428) {
            ctx->pc = 0x799464u;
            goto label_799464;
        }
    }
    ctx->pc = 0x799430u;
label_799430:
    // 0x799430: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799434:
    // 0x799434: 0x24a59d98  addiu       $a1, $a1, -0x6268
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942104));
label_799438:
    // 0x799438: 0xc0b0e24  jal         func_2C3890
label_79943c:
    if (ctx->pc == 0x79943Cu) {
        ctx->pc = 0x79943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799438u;
        // 0x79943c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799440u;
        goto label_799440;
    }
    ctx->pc = 0x799438u;
    SET_GPR_U32(ctx, 31, 0x799440u);
    ctx->pc = 0x79943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799438u;
    // 0x79943c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799438u, 0x799440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799440u;
label_799440:
    // 0x799440: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_799444:
    // 0x799444: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799448:
    // 0x799448: 0x24a5a390  addiu       $a1, $a1, -0x5C70
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943632));
label_79944c:
    // 0x79944c: 0xc0b0e24  jal         func_2C3890
label_799450:
    if (ctx->pc == 0x799450u) {
        ctx->pc = 0x799450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79944Cu;
        // 0x799450: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799454u;
        goto label_799454;
    }
    ctx->pc = 0x79944Cu;
    SET_GPR_U32(ctx, 31, 0x799454u);
    ctx->pc = 0x799450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79944Cu;
    // 0x799450: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79944Cu, 0x799454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799454u;
label_799454:
    // 0x799454: 0xc1e6a42  jal         func_79A908
label_799458:
    if (ctx->pc == 0x799458u) {
        ctx->pc = 0x799458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799454u;
        // 0x799458: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79945Cu;
        goto label_79945c;
    }
    ctx->pc = 0x799454u;
    SET_GPR_U32(ctx, 31, 0x79945Cu);
    ctx->pc = 0x799458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799454u;
    // 0x799458: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A908u, 0x799454u, 0x79945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79945Cu;
label_79945c:
    // 0x79945c: 0x10000004  b           . + 4 + (0x4 << 2)
label_799460:
    if (ctx->pc == 0x799460u) {
        ctx->pc = 0x799460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79945Cu;
        // 0x799460: 0x8ea47a8c  lw          $a0, 0x7A8C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799464u;
        goto label_799464;
    }
    ctx->pc = 0x79945Cu;
    {
        const bool branch_taken_0x79945c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79945Cu;
        // 0x799460: 0x8ea47a8c  lw          $a0, 0x7A8C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79945c) {
            ctx->pc = 0x799470u;
            goto label_799470;
        }
    }
    ctx->pc = 0x799464u;
label_799464:
    // 0x799464: 0xc1e6a42  jal         func_79A908
label_799468:
    if (ctx->pc == 0x799468u) {
        ctx->pc = 0x799468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799464u;
        // 0x799468: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79946Cu;
        goto label_79946c;
    }
    ctx->pc = 0x799464u;
    SET_GPR_U32(ctx, 31, 0x79946Cu);
    ctx->pc = 0x799468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799464u;
    // 0x799468: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A908u, 0x799464u, 0x79946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79946Cu;
label_79946c:
    // 0x79946c: 0x8ea47a8c  lw          $a0, 0x7A8C($s5)
    ctx->pc = 0x79946cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31372)));
label_799470:
    // 0x799470: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x799470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_799474:
    // 0x799474: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x799474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_799478:
    // 0x799478: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
label_79947c:
    // 0x79947c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x79947cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_799480:
    // 0x799480: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x799480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_799484:
    // 0x799484: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_799488:
    // 0x799488: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x799488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_79948c:
    // 0x79948c: 0x2450ea60  addiu       $s0, $v0, -0x15A0
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
label_799490:
    // 0x799490: 0xaea47a8c  sw          $a0, 0x7A8C($s5)
    ctx->pc = 0x799490u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 31372), GPR_U32(ctx, 4));
label_799494:
    // 0x799494: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799498:
    // 0x799498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79949c:
    // 0x79949c: 0x2447a708  addiu       $a3, $v0, -0x58F8
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944520));
label_7994a0:
    // 0x7994a0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x7994a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_7994a4:
    // 0x7994a4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7994a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7994a8:
    // 0x7994a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7994a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994ac:
    // 0x7994ac: 0xc0b09e4  jal         func_2C2790
label_7994b0:
    if (ctx->pc == 0x7994B0u) {
        ctx->pc = 0x7994B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994ACu;
        // 0x7994b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994B4u;
        goto label_7994b4;
    }
    ctx->pc = 0x7994ACu;
    SET_GPR_U32(ctx, 31, 0x7994B4u);
    ctx->pc = 0x7994B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994ACu;
    // 0x7994b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7994ACu, 0x7994B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B4u;
label_7994b4:
    // 0x7994b4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7994b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_7994b8:
    // 0x7994b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7994b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994bc:
    // 0x7994bc: 0x2447ac50  addiu       $a3, $v0, -0x53B0
    ctx->pc = 0x7994bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945872));
label_7994c0:
    // 0x7994c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7994c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7994c4:
    // 0x7994c4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_7994c8:
    // 0x7994c8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7994cc:
    // 0x7994cc: 0xc0b09e4  jal         func_2C2790
label_7994d0:
    if (ctx->pc == 0x7994D0u) {
        ctx->pc = 0x7994D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994CCu;
        // 0x7994d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994D4u;
        goto label_7994d4;
    }
    ctx->pc = 0x7994CCu;
    SET_GPR_U32(ctx, 31, 0x7994D4u);
    ctx->pc = 0x7994D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994CCu;
    // 0x7994d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7994CCu, 0x7994D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994D4u;
label_7994d4:
    // 0x7994d4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7994d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_7994d8:
    // 0x7994d8: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x7994d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_7994dc:
    // 0x7994dc: 0x2445acd0  addiu       $a1, $v0, -0x5330
    ctx->pc = 0x7994dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946000));
label_7994e0:
    // 0x7994e0: 0xc0b0e24  jal         func_2C3890
label_7994e4:
    if (ctx->pc == 0x7994E4u) {
        ctx->pc = 0x7994E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994E0u;
        // 0x7994e4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994E8u;
        goto label_7994e8;
    }
    ctx->pc = 0x7994E0u;
    SET_GPR_U32(ctx, 31, 0x7994E8u);
    ctx->pc = 0x7994E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E0u;
    // 0x7994e4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7994E0u, 0x7994E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E8u;
label_7994e8:
    // 0x7994e8: 0x8262b7a0  lb          $v0, -0x4860($s3)
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294948768)));
label_7994ec:
    // 0x7994ec: 0x27c84c58  addiu       $t0, $fp, 0x4C58
    ctx->pc = 0x7994ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 19544));
label_7994f0:
    // 0x7994f0: 0x2663b7a0  addiu       $v1, $s3, -0x4860
    ctx->pc = 0x7994f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294948768));
label_7994f4:
    // 0x7994f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7994f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994f8:
    // 0x7994f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_7994fc:
    if (ctx->pc == 0x7994FCu) {
        ctx->pc = 0x7994FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F8u;
        // 0x7994fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799500u;
        goto label_799500;
    }
    ctx->pc = 0x7994F8u;
    {
        const bool branch_taken_0x7994f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F8u;
        // 0x7994fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994f8) {
            ctx->pc = 0x799530u;
            goto label_799530;
        }
    }
    ctx->pc = 0x799500u;
label_799500:
    // 0x799500: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799504:
    // 0x799504: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799508:
    // 0x799508: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79950c:
    // 0x79950c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79950cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799510:
    // 0x799510: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_799514:
    // 0x799514: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799518:
    // 0x799518: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79951c:
    // 0x79951c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799520:
    if (ctx->pc == 0x799520u) {
        ctx->pc = 0x799520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79951Cu;
        // 0x799520: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799524u;
        goto label_799524;
    }
    ctx->pc = 0x79951Cu;
    {
        const bool branch_taken_0x79951c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79951Cu;
        // 0x799520: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79951c) {
            ctx->pc = 0x799530u;
            goto label_799530;
        }
    }
    ctx->pc = 0x799524u;
label_799524:
    // 0x799524: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799528:
    // 0x799528: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79952c:
    if (ctx->pc == 0x79952Cu) {
        ctx->pc = 0x79952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799528u;
        // 0x79952c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799530u;
        goto label_799530;
    }
    ctx->pc = 0x799528u;
    {
        const bool branch_taken_0x799528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799528) {
            ctx->pc = 0x79952Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799528u;
            // 0x79952c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799508;
        }
    }
    ctx->pc = 0x799530u;
label_799530:
    // 0x799530: 0xc053f66  jal         func_14FD98
label_799534:
    if (ctx->pc == 0x799534u) {
        ctx->pc = 0x799534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799530u;
        // 0x799534: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799538u;
        goto label_799538;
    }
    ctx->pc = 0x799530u;
    SET_GPR_U32(ctx, 31, 0x799538u);
    ctx->pc = 0x799534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799530u;
    // 0x799534: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799530u, 0x799538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799538u;
label_799538:
    // 0x799538: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x799538u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79953c:
    // 0x79953c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_799540:
    if (ctx->pc == 0x799540u) {
        ctx->pc = 0x799540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79953Cu;
        // 0x799540: 0x24020a50  addiu       $v0, $zero, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799544u;
        goto label_799544;
    }
    ctx->pc = 0x79953Cu;
    {
        const bool branch_taken_0x79953c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79953Cu;
        // 0x799540: 0x24020a50  addiu       $v0, $zero, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79953c) {
            ctx->pc = 0x799548u;
            goto label_799548;
        }
    }
    ctx->pc = 0x799544u;
label_799544:
    // 0x799544: 0xac620560  sw          $v0, 0x560($v1)
    ctx->pc = 0x799544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1376), GPR_U32(ctx, 2));
label_799548:
    // 0x799548: 0x82e2b7a8  lb          $v0, -0x4858($s7)
    ctx->pc = 0x799548u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294948776)));
label_79954c:
    // 0x79954c: 0x27c84c58  addiu       $t0, $fp, 0x4C58
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 19544));
label_799550:
    // 0x799550: 0x26e3b7a8  addiu       $v1, $s7, -0x4858
    ctx->pc = 0x799550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948776));
label_799554:
    // 0x799554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799558:
    // 0x799558: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_79955c:
    if (ctx->pc == 0x79955Cu) {
        ctx->pc = 0x79955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799558u;
        // 0x79955c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799560u;
        goto label_799560;
    }
    ctx->pc = 0x799558u;
    {
        const bool branch_taken_0x799558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799558u;
        // 0x79955c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799558) {
            ctx->pc = 0x799590u;
            goto label_799590;
        }
    }
    ctx->pc = 0x799560u;
label_799560:
    // 0x799560: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799564:
    // 0x799564: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799568:
    // 0x799568: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79956c:
    // 0x79956c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79956cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799570:
    // 0x799570: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_799574:
    // 0x799574: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799578:
    // 0x799578: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799578u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79957c:
    // 0x79957c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799580:
    if (ctx->pc == 0x799580u) {
        ctx->pc = 0x799580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79957Cu;
        // 0x799580: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799584u;
        goto label_799584;
    }
    ctx->pc = 0x79957Cu;
    {
        const bool branch_taken_0x79957c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79957Cu;
        // 0x799580: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79957c) {
            ctx->pc = 0x799590u;
            goto label_799590;
        }
    }
    ctx->pc = 0x799584u;
label_799584:
    // 0x799584: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799584u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799588:
    // 0x799588: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79958c:
    if (ctx->pc == 0x79958Cu) {
        ctx->pc = 0x79958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799588u;
        // 0x79958c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799590u;
        goto label_799590;
    }
    ctx->pc = 0x799588u;
    {
        const bool branch_taken_0x799588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799588) {
            ctx->pc = 0x79958Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799588u;
            // 0x79958c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799568;
        }
    }
    ctx->pc = 0x799590u;
label_799590:
    // 0x799590: 0xc053f66  jal         func_14FD98
label_799594:
    if (ctx->pc == 0x799594u) {
        ctx->pc = 0x799594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799590u;
        // 0x799594: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799598u;
        goto label_799598;
    }
    ctx->pc = 0x799590u;
    SET_GPR_U32(ctx, 31, 0x799598u);
    ctx->pc = 0x799594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799590u;
    // 0x799594: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799590u, 0x799598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799598u;
label_799598:
    // 0x799598: 0x8e43b900  lw          $v1, -0x4700($s2)
    ctx->pc = 0x799598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949120)));
label_79959c:
    // 0x79959c: 0xac620148  sw          $v0, 0x148($v1)
    ctx->pc = 0x79959cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 328), GPR_U32(ctx, 2));
label_7995a0:
    // 0x7995a0: 0x8e42b900  lw          $v0, -0x4700($s2)
    ctx->pc = 0x7995a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949120)));
label_7995a4:
    // 0x7995a4: 0x8c450148  lw          $a1, 0x148($v0)
    ctx->pc = 0x7995a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
label_7995a8:
    // 0x7995a8: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_7995ac:
    if (ctx->pc == 0x7995ACu) {
        ctx->pc = 0x7995ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995A8u;
        // 0x7995ac: 0x8ec28658  lw          $v0, -0x79A8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995B0u;
        goto label_7995b0;
    }
    ctx->pc = 0x7995A8u;
    {
        const bool branch_taken_0x7995a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995A8u;
        // 0x7995ac: 0x8ec28658  lw          $v0, -0x79A8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995a8) {
            ctx->pc = 0x7995DCu;
            goto label_7995dc;
        }
    }
    ctx->pc = 0x7995B0u;
label_7995b0:
    // 0x7995b0: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x7995b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_7995b4:
    // 0x7995b4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7995b8:
    // 0x7995b8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7995b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_7995bc:
    // 0x7995bc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_7995c0:
    if (ctx->pc == 0x7995C0u) {
        ctx->pc = 0x7995C4u;
        goto label_7995c4;
    }
    ctx->pc = 0x7995BCu;
    {
        const bool branch_taken_0x7995bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x7995bc) {
            ctx->pc = 0x7995D4u;
            goto label_7995d4;
        }
    }
    ctx->pc = 0x7995C4u;
label_7995c4:
    // 0x7995c4: 0xc0c49c2  jal         func_312708
label_7995c8:
    if (ctx->pc == 0x7995C8u) {
        ctx->pc = 0x7995C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995C4u;
        // 0x7995c8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995CCu;
        goto label_7995cc;
    }
    ctx->pc = 0x7995C4u;
    SET_GPR_U32(ctx, 31, 0x7995CCu);
    ctx->pc = 0x7995C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995C4u;
    // 0x7995c8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x7995C4u, 0x7995CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995CCu;
label_7995cc:
    // 0x7995cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_7995d0:
    if (ctx->pc == 0x7995D0u) {
        ctx->pc = 0x7995D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995CCu;
        // 0x7995d0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995D4u;
        goto label_7995d4;
    }
    ctx->pc = 0x7995CCu;
    {
        const bool branch_taken_0x7995cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995CCu;
        // 0x7995d0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995cc) {
            ctx->pc = 0x7995E0u;
            goto label_7995e0;
        }
    }
    ctx->pc = 0x7995D4u;
label_7995d4:
    // 0x7995d4: 0xc06f73a  jal         func_1BDCE8
label_7995d8:
    if (ctx->pc == 0x7995D8u) {
        ctx->pc = 0x7995D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D4u;
        // 0x7995d8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995DCu;
        goto label_7995dc;
    }
    ctx->pc = 0x7995D4u;
    SET_GPR_U32(ctx, 31, 0x7995DCu);
    ctx->pc = 0x7995D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995D4u;
    // 0x7995d8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDCE8u, 0x7995D4u, 0x7995DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995DCu;
label_7995dc:
    // 0x7995dc: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x7995dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_7995e0:
    // 0x7995e0: 0xc0c3ea6  jal         func_30FA98
label_7995e4:
    if (ctx->pc == 0x7995E4u) {
        ctx->pc = 0x7995E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E0u;
        // 0x7995e4: 0x24040353  addiu       $a0, $zero, 0x353 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 851));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995E8u;
        goto label_7995e8;
    }
    ctx->pc = 0x7995E0u;
    SET_GPR_U32(ctx, 31, 0x7995E8u);
    ctx->pc = 0x7995E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995E0u;
    // 0x7995e4: 0x24040353  addiu       $a0, $zero, 0x353 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 851));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x7995E0u, 0x7995E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995E8u;
label_7995e8:
    // 0x7995e8: 0x8e43b900  lw          $v1, -0x4700($s2)
    ctx->pc = 0x7995e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949120)));
label_7995ec:
    // 0x7995ec: 0xac62014c  sw          $v0, 0x14C($v1)
    ctx->pc = 0x7995ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 2));
label_7995f0:
    // 0x7995f0: 0x8e42b900  lw          $v0, -0x4700($s2)
    ctx->pc = 0x7995f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949120)));
label_7995f4:
    // 0x7995f4: 0x8c45014c  lw          $a1, 0x14C($v0)
    ctx->pc = 0x7995f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_7995f8:
    // 0x7995f8: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
label_7995fc:
    if (ctx->pc == 0x7995FCu) {
        ctx->pc = 0x7995FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F8u;
        // 0x7995fc: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799600u;
        goto label_799600;
    }
    ctx->pc = 0x7995F8u;
    {
        const bool branch_taken_0x7995f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F8u;
        // 0x7995fc: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995f8) {
            ctx->pc = 0x799698u;
            goto label_799698;
        }
    }
    ctx->pc = 0x799600u;
label_799600:
    // 0x799600: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x799600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_799604:
    // 0x799604: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_799608:
    // 0x799608: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x799608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_79960c:
    // 0x79960c: 0x40f809  jalr        $v0
label_799610:
    if (ctx->pc == 0x799610u) {
        ctx->pc = 0x799610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79960Cu;
        // 0x799610: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799614u;
        goto label_799614;
    }
    ctx->pc = 0x79960Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799614u);
        ctx->pc = 0x799610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79960Cu;
        // 0x799610: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79960Cu, 0x799614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799614u;
label_799614:
    // 0x799614: 0x8e42b900  lw          $v0, -0x4700($s2)
    ctx->pc = 0x799614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949120)));
label_799618:
    // 0x799618: 0x3c01c262  lui         $at, 0xC262
    ctx->pc = 0x799618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49762 << 16));
label_79961c:
    // 0x79961c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79961cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799620:
    // 0x799620: 0xc06a03e  jal         func_1A80F8
label_799624:
    if (ctx->pc == 0x799624u) {
        ctx->pc = 0x799624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799620u;
        // 0x799624: 0x8c44014c  lw          $a0, 0x14C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799628u;
        goto label_799628;
    }
    ctx->pc = 0x799620u;
    SET_GPR_U32(ctx, 31, 0x799628u);
    ctx->pc = 0x799624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799620u;
    // 0x799624: 0x8c44014c  lw          $a0, 0x14C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80F8u, 0x799620u, 0x799628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799628u;
label_799628:
    // 0x799628: 0x8e42b900  lw          $v0, -0x4700($s2)
    ctx->pc = 0x799628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949120)));
label_79962c:
    // 0x79962c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_799630:
    // 0x799630: 0x3c01428d  lui         $at, 0x428D
    ctx->pc = 0x799630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17037 << 16));
label_799634:
    // 0x799634: 0x34218a3d  ori         $at, $at, 0x8A3D
    ctx->pc = 0x799634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35389);
label_799638:
    // 0x799638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79963c:
    // 0x79963c: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x79963cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_799640:
    // 0x799640: 0x3c0140a8  lui         $at, 0x40A8
    ctx->pc = 0x799640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16552 << 16));
label_799644:
    // 0x799644: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_799648:
    // 0x799648: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x799648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_79964c:
    // 0x79964c: 0x3c01c235  lui         $at, 0xC235
    ctx->pc = 0x79964cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49717 << 16));
label_799650:
    // 0x799650: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x799650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
label_799654:
    // 0x799654: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_799658:
    // 0x799658: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x799658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79965c:
    // 0x79965c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x79965cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_799660:
    // 0x799660: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x799660u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_799664:
    // 0x799664: 0x3c01c01e  lui         $at, 0xC01E
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49182 << 16));
label_799668:
    // 0x799668: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x799668u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_79966c:
    // 0x79966c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79966cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799670:
    // 0x799670: 0x8e43b900  lw          $v1, -0x4700($s2)
    ctx->pc = 0x799670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949120)));
label_799674:
    // 0x799674: 0x8c62014c  lw          $v0, 0x14C($v1)
    ctx->pc = 0x799674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
label_799678:
    // 0x799678: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x799678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
label_79967c:
    // 0x79967c: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x79967cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_799680:
    // 0x799680: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x799680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_799684:
    // 0x799684: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x799684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_799688:
    // 0x799688: 0x8e43b900  lw          $v1, -0x4700($s2)
    ctx->pc = 0x799688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949120)));
label_79968c:
    // 0x79968c: 0xc06a03c  jal         func_1A80F0
label_799690:
    if (ctx->pc == 0x799690u) {
        ctx->pc = 0x799690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79968Cu;
        // 0x799690: 0x8c64014c  lw          $a0, 0x14C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799694u;
        goto label_799694;
    }
    ctx->pc = 0x79968Cu;
    SET_GPR_U32(ctx, 31, 0x799694u);
    ctx->pc = 0x799690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79968Cu;
    // 0x799690: 0x8c64014c  lw          $a0, 0x14C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A80F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A80F0u, 0x79968Cu, 0x799694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799694u;
label_799694:
    // 0x799694: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x799694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_799698:
    // 0x799698: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x799698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_79969c:
    // 0x79969c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x79969cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_7996a0:
    // 0x7996a0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x7996a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_7996a4:
    // 0x7996a4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x7996a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_7996a8:
    // 0x7996a8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x7996a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_7996ac:
    // 0x7996ac: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x7996acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_7996b0:
    // 0x7996b0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x7996b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_7996b4:
    // 0x7996b4: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x7996b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7996b8:
    // 0x7996b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7996b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_7996bc:
    // 0x7996bc: 0x3e00008  jr          $ra
label_7996c0:
    if (ctx->pc == 0x7996C0u) {
        ctx->pc = 0x7996C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996BCu;
        // 0x7996c0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996C4u;
        goto label_7996c4;
    }
    ctx->pc = 0x7996BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7996C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996BCu;
        // 0x7996c0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7996C4u;
label_7996c4:
    // 0x7996c4: 0x0  nop
    ctx->pc = 0x7996c4u;
    // NOP
    ctx->pc = 0x7996c8u;
}
} // namespace gh_r600
