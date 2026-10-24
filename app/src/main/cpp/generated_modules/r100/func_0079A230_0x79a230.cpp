#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: func_0079A230
// Address: 0x79a230 - 0x79a630
void func_0079A230_0x79a230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A230_0x79a230");
#endif

    switch (ctx->pc) {
        case 0x79a230u: goto label_79a230;
        case 0x79a234u: goto label_79a234;
        case 0x79a238u: goto label_79a238;
        case 0x79a23cu: goto label_79a23c;
        case 0x79a240u: goto label_79a240;
        case 0x79a244u: goto label_79a244;
        case 0x79a248u: goto label_79a248;
        case 0x79a24cu: goto label_79a24c;
        case 0x79a250u: goto label_79a250;
        case 0x79a254u: goto label_79a254;
        case 0x79a258u: goto label_79a258;
        case 0x79a25cu: goto label_79a25c;
        case 0x79a260u: goto label_79a260;
        case 0x79a264u: goto label_79a264;
        case 0x79a268u: goto label_79a268;
        case 0x79a26cu: goto label_79a26c;
        case 0x79a270u: goto label_79a270;
        case 0x79a274u: goto label_79a274;
        case 0x79a278u: goto label_79a278;
        case 0x79a27cu: goto label_79a27c;
        case 0x79a280u: goto label_79a280;
        case 0x79a284u: goto label_79a284;
        case 0x79a288u: goto label_79a288;
        case 0x79a28cu: goto label_79a28c;
        case 0x79a290u: goto label_79a290;
        case 0x79a294u: goto label_79a294;
        case 0x79a298u: goto label_79a298;
        case 0x79a29cu: goto label_79a29c;
        case 0x79a2a0u: goto label_79a2a0;
        case 0x79a2a4u: goto label_79a2a4;
        case 0x79a2a8u: goto label_79a2a8;
        case 0x79a2acu: goto label_79a2ac;
        case 0x79a2b0u: goto label_79a2b0;
        case 0x79a2b4u: goto label_79a2b4;
        case 0x79a2b8u: goto label_79a2b8;
        case 0x79a2bcu: goto label_79a2bc;
        case 0x79a2c0u: goto label_79a2c0;
        case 0x79a2c4u: goto label_79a2c4;
        case 0x79a2c8u: goto label_79a2c8;
        case 0x79a2ccu: goto label_79a2cc;
        case 0x79a2d0u: goto label_79a2d0;
        case 0x79a2d4u: goto label_79a2d4;
        case 0x79a2d8u: goto label_79a2d8;
        case 0x79a2dcu: goto label_79a2dc;
        case 0x79a2e0u: goto label_79a2e0;
        case 0x79a2e4u: goto label_79a2e4;
        case 0x79a2e8u: goto label_79a2e8;
        case 0x79a2ecu: goto label_79a2ec;
        case 0x79a2f0u: goto label_79a2f0;
        case 0x79a2f4u: goto label_79a2f4;
        case 0x79a2f8u: goto label_79a2f8;
        case 0x79a2fcu: goto label_79a2fc;
        case 0x79a300u: goto label_79a300;
        case 0x79a304u: goto label_79a304;
        case 0x79a308u: goto label_79a308;
        case 0x79a30cu: goto label_79a30c;
        case 0x79a310u: goto label_79a310;
        case 0x79a314u: goto label_79a314;
        case 0x79a318u: goto label_79a318;
        case 0x79a31cu: goto label_79a31c;
        case 0x79a320u: goto label_79a320;
        case 0x79a324u: goto label_79a324;
        case 0x79a328u: goto label_79a328;
        case 0x79a32cu: goto label_79a32c;
        case 0x79a330u: goto label_79a330;
        case 0x79a334u: goto label_79a334;
        case 0x79a338u: goto label_79a338;
        case 0x79a33cu: goto label_79a33c;
        case 0x79a340u: goto label_79a340;
        case 0x79a344u: goto label_79a344;
        case 0x79a348u: goto label_79a348;
        case 0x79a34cu: goto label_79a34c;
        case 0x79a350u: goto label_79a350;
        case 0x79a354u: goto label_79a354;
        case 0x79a358u: goto label_79a358;
        case 0x79a35cu: goto label_79a35c;
        case 0x79a360u: goto label_79a360;
        case 0x79a364u: goto label_79a364;
        case 0x79a368u: goto label_79a368;
        case 0x79a36cu: goto label_79a36c;
        case 0x79a370u: goto label_79a370;
        case 0x79a374u: goto label_79a374;
        case 0x79a378u: goto label_79a378;
        case 0x79a37cu: goto label_79a37c;
        case 0x79a380u: goto label_79a380;
        case 0x79a384u: goto label_79a384;
        case 0x79a388u: goto label_79a388;
        case 0x79a38cu: goto label_79a38c;
        case 0x79a390u: goto label_79a390;
        case 0x79a394u: goto label_79a394;
        case 0x79a398u: goto label_79a398;
        case 0x79a39cu: goto label_79a39c;
        case 0x79a3a0u: goto label_79a3a0;
        case 0x79a3a4u: goto label_79a3a4;
        case 0x79a3a8u: goto label_79a3a8;
        case 0x79a3acu: goto label_79a3ac;
        case 0x79a3b0u: goto label_79a3b0;
        case 0x79a3b4u: goto label_79a3b4;
        case 0x79a3b8u: goto label_79a3b8;
        case 0x79a3bcu: goto label_79a3bc;
        case 0x79a3c0u: goto label_79a3c0;
        case 0x79a3c4u: goto label_79a3c4;
        case 0x79a3c8u: goto label_79a3c8;
        case 0x79a3ccu: goto label_79a3cc;
        case 0x79a3d0u: goto label_79a3d0;
        case 0x79a3d4u: goto label_79a3d4;
        case 0x79a3d8u: goto label_79a3d8;
        case 0x79a3dcu: goto label_79a3dc;
        case 0x79a3e0u: goto label_79a3e0;
        case 0x79a3e4u: goto label_79a3e4;
        case 0x79a3e8u: goto label_79a3e8;
        case 0x79a3ecu: goto label_79a3ec;
        case 0x79a3f0u: goto label_79a3f0;
        case 0x79a3f4u: goto label_79a3f4;
        case 0x79a3f8u: goto label_79a3f8;
        case 0x79a3fcu: goto label_79a3fc;
        case 0x79a400u: goto label_79a400;
        case 0x79a404u: goto label_79a404;
        case 0x79a408u: goto label_79a408;
        case 0x79a40cu: goto label_79a40c;
        case 0x79a410u: goto label_79a410;
        case 0x79a414u: goto label_79a414;
        case 0x79a418u: goto label_79a418;
        case 0x79a41cu: goto label_79a41c;
        case 0x79a420u: goto label_79a420;
        case 0x79a424u: goto label_79a424;
        case 0x79a428u: goto label_79a428;
        case 0x79a42cu: goto label_79a42c;
        case 0x79a430u: goto label_79a430;
        case 0x79a434u: goto label_79a434;
        case 0x79a438u: goto label_79a438;
        case 0x79a43cu: goto label_79a43c;
        case 0x79a440u: goto label_79a440;
        case 0x79a444u: goto label_79a444;
        case 0x79a448u: goto label_79a448;
        case 0x79a44cu: goto label_79a44c;
        case 0x79a450u: goto label_79a450;
        case 0x79a454u: goto label_79a454;
        case 0x79a458u: goto label_79a458;
        case 0x79a45cu: goto label_79a45c;
        case 0x79a460u: goto label_79a460;
        case 0x79a464u: goto label_79a464;
        case 0x79a468u: goto label_79a468;
        case 0x79a46cu: goto label_79a46c;
        case 0x79a470u: goto label_79a470;
        case 0x79a474u: goto label_79a474;
        case 0x79a478u: goto label_79a478;
        case 0x79a47cu: goto label_79a47c;
        case 0x79a480u: goto label_79a480;
        case 0x79a484u: goto label_79a484;
        case 0x79a488u: goto label_79a488;
        case 0x79a48cu: goto label_79a48c;
        case 0x79a490u: goto label_79a490;
        case 0x79a494u: goto label_79a494;
        case 0x79a498u: goto label_79a498;
        case 0x79a49cu: goto label_79a49c;
        case 0x79a4a0u: goto label_79a4a0;
        case 0x79a4a4u: goto label_79a4a4;
        case 0x79a4a8u: goto label_79a4a8;
        case 0x79a4acu: goto label_79a4ac;
        case 0x79a4b0u: goto label_79a4b0;
        case 0x79a4b4u: goto label_79a4b4;
        case 0x79a4b8u: goto label_79a4b8;
        case 0x79a4bcu: goto label_79a4bc;
        case 0x79a4c0u: goto label_79a4c0;
        case 0x79a4c4u: goto label_79a4c4;
        case 0x79a4c8u: goto label_79a4c8;
        case 0x79a4ccu: goto label_79a4cc;
        case 0x79a4d0u: goto label_79a4d0;
        case 0x79a4d4u: goto label_79a4d4;
        case 0x79a4d8u: goto label_79a4d8;
        case 0x79a4dcu: goto label_79a4dc;
        case 0x79a4e0u: goto label_79a4e0;
        case 0x79a4e4u: goto label_79a4e4;
        case 0x79a4e8u: goto label_79a4e8;
        case 0x79a4ecu: goto label_79a4ec;
        case 0x79a4f0u: goto label_79a4f0;
        case 0x79a4f4u: goto label_79a4f4;
        case 0x79a4f8u: goto label_79a4f8;
        case 0x79a4fcu: goto label_79a4fc;
        case 0x79a500u: goto label_79a500;
        case 0x79a504u: goto label_79a504;
        case 0x79a508u: goto label_79a508;
        case 0x79a50cu: goto label_79a50c;
        case 0x79a510u: goto label_79a510;
        case 0x79a514u: goto label_79a514;
        case 0x79a518u: goto label_79a518;
        case 0x79a51cu: goto label_79a51c;
        case 0x79a520u: goto label_79a520;
        case 0x79a524u: goto label_79a524;
        case 0x79a528u: goto label_79a528;
        case 0x79a52cu: goto label_79a52c;
        case 0x79a530u: goto label_79a530;
        case 0x79a534u: goto label_79a534;
        case 0x79a538u: goto label_79a538;
        case 0x79a53cu: goto label_79a53c;
        case 0x79a540u: goto label_79a540;
        case 0x79a544u: goto label_79a544;
        case 0x79a548u: goto label_79a548;
        case 0x79a54cu: goto label_79a54c;
        case 0x79a550u: goto label_79a550;
        case 0x79a554u: goto label_79a554;
        case 0x79a558u: goto label_79a558;
        case 0x79a55cu: goto label_79a55c;
        case 0x79a560u: goto label_79a560;
        case 0x79a564u: goto label_79a564;
        case 0x79a568u: goto label_79a568;
        case 0x79a56cu: goto label_79a56c;
        case 0x79a570u: goto label_79a570;
        case 0x79a574u: goto label_79a574;
        case 0x79a578u: goto label_79a578;
        case 0x79a57cu: goto label_79a57c;
        case 0x79a580u: goto label_79a580;
        case 0x79a584u: goto label_79a584;
        case 0x79a588u: goto label_79a588;
        case 0x79a58cu: goto label_79a58c;
        case 0x79a590u: goto label_79a590;
        case 0x79a594u: goto label_79a594;
        case 0x79a598u: goto label_79a598;
        case 0x79a59cu: goto label_79a59c;
        case 0x79a5a0u: goto label_79a5a0;
        case 0x79a5a4u: goto label_79a5a4;
        case 0x79a5a8u: goto label_79a5a8;
        case 0x79a5acu: goto label_79a5ac;
        case 0x79a5b0u: goto label_79a5b0;
        case 0x79a5b4u: goto label_79a5b4;
        case 0x79a5b8u: goto label_79a5b8;
        case 0x79a5bcu: goto label_79a5bc;
        case 0x79a5c0u: goto label_79a5c0;
        case 0x79a5c4u: goto label_79a5c4;
        case 0x79a5c8u: goto label_79a5c8;
        case 0x79a5ccu: goto label_79a5cc;
        case 0x79a5d0u: goto label_79a5d0;
        case 0x79a5d4u: goto label_79a5d4;
        case 0x79a5d8u: goto label_79a5d8;
        case 0x79a5dcu: goto label_79a5dc;
        case 0x79a5e0u: goto label_79a5e0;
        case 0x79a5e4u: goto label_79a5e4;
        case 0x79a5e8u: goto label_79a5e8;
        case 0x79a5ecu: goto label_79a5ec;
        case 0x79a5f0u: goto label_79a5f0;
        case 0x79a5f4u: goto label_79a5f4;
        case 0x79a5f8u: goto label_79a5f8;
        case 0x79a5fcu: goto label_79a5fc;
        case 0x79a600u: goto label_79a600;
        case 0x79a604u: goto label_79a604;
        case 0x79a608u: goto label_79a608;
        case 0x79a60cu: goto label_79a60c;
        case 0x79a610u: goto label_79a610;
        case 0x79a614u: goto label_79a614;
        case 0x79a618u: goto label_79a618;
        case 0x79a61cu: goto label_79a61c;
        case 0x79a620u: goto label_79a620;
        case 0x79a624u: goto label_79a624;
        case 0x79a628u: goto label_79a628;
        case 0x79a62cu: goto label_79a62c;
        default: break;
    }

    ctx->pc = 0x79a230u;

label_79a230:
    // 0x79a230: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x79a230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_79a234:
    // 0x79a234: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79a238:
    // 0x79a238: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79a238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_79a23c:
    // 0x79a23c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a240:
    // 0x79a240: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x79a240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_79a244:
    // 0x79a244: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x79a244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_79a248:
    // 0x79a248: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79a248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a24c:
    // 0x79a24c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x79a24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_79a250:
    // 0x79a250: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x79a250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_79a254:
    // 0x79a254: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x79a254u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
label_79a258:
    // 0x79a258: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x79a258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_79a25c:
    // 0x79a25c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x79a25cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a260:
    // 0x79a260: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x79a260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_79a264:
    // 0x79a264: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x79a264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_79a268:
    // 0x79a268: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x79a268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_79a26c:
    // 0x79a26c: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x79a26cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
label_79a270:
    // 0x79a270: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x79a270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_79a274:
    // 0x79a274: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x79a274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_79a278:
    // 0x79a278: 0xc0b56a8  jal         func_2D5AA0
label_79a27c:
    if (ctx->pc == 0x79A27Cu) {
        ctx->pc = 0x79A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A278u;
        // 0x79a27c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A280u;
        goto label_79a280;
    }
    ctx->pc = 0x79A278u;
    SET_GPR_U32(ctx, 31, 0x79A280u);
    ctx->pc = 0x79A27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A278u;
    // 0x79a27c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A278u, 0x79A280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A280u;
label_79a280:
    // 0x79a280: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x79a280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79a284:
    // 0x79a284: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x79a284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_79a288:
    // 0x79a288: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a288u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_79a28c:
    // 0x79a28c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x79a28cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79a290:
    // 0x79a290: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79a290u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
label_79a294:
    // 0x79a294: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x79a294u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_79a298:
    // 0x79a298: 0x27b70030  addiu       $s7, $sp, 0x30
    ctx->pc = 0x79a298u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_79a29c:
    // 0x79a29c: 0x27c4ea60  addiu       $a0, $fp, -0x15A0
    ctx->pc = 0x79a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961760));
label_79a2a0:
    // 0x79a2a0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x79a2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_79a2a4:
    // 0x79a2a4: 0xc0b0aa6  jal         func_2C2A98
label_79a2a8:
    if (ctx->pc == 0x79A2A8u) {
        ctx->pc = 0x79A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2A4u;
        // 0x79a2a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2ACu;
        goto label_79a2ac;
    }
    ctx->pc = 0x79A2A4u;
    SET_GPR_U32(ctx, 31, 0x79A2ACu);
    ctx->pc = 0x79A2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2A4u;
    // 0x79a2a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79A2A4u, 0x79A2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2ACu;
label_79a2ac:
    // 0x79a2ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a2b0:
    // 0x79a2b0: 0x16150013  bne         $s0, $s5, . + 4 + (0x13 << 2)
label_79a2b4:
    if (ctx->pc == 0x79A2B4u) {
        ctx->pc = 0x79A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2B0u;
        // 0x79a2b4: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2B8u;
        goto label_79a2b8;
    }
    ctx->pc = 0x79A2B0u;
    {
        const bool branch_taken_0x79a2b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x79A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2B0u;
        // 0x79a2b4: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2b0) {
            ctx->pc = 0x79A300u;
            goto label_79a300;
        }
    }
    ctx->pc = 0x79A2B8u;
label_79a2b8:
    // 0x79a2b8: 0x8e82c500  lw          $v0, -0x3B00($s4)
    ctx->pc = 0x79a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952192)));
label_79a2bc:
    // 0x79a2bc: 0x90430005  lbu         $v1, 0x5($v0)
    ctx->pc = 0x79a2bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_79a2c0:
    // 0x79a2c0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_79a2c4:
    if (ctx->pc == 0x79A2C4u) {
        ctx->pc = 0x79A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2C0u;
        // 0x79a2c4: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2C8u;
        goto label_79a2c8;
    }
    ctx->pc = 0x79A2C0u;
    {
        const bool branch_taken_0x79a2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2C0u;
        // 0x79a2c4: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2c0) {
            ctx->pc = 0x79A300u;
            goto label_79a300;
        }
    }
    ctx->pc = 0x79A2C8u;
label_79a2c8:
    // 0x79a2c8: 0xc0a572a  jal         func_295CA8
label_79a2cc:
    if (ctx->pc == 0x79A2CCu) {
        ctx->pc = 0x79A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2C8u;
        // 0x79a2cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2D0u;
        goto label_79a2d0;
    }
    ctx->pc = 0x79A2C8u;
    SET_GPR_U32(ctx, 31, 0x79A2D0u);
    ctx->pc = 0x79A2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2C8u;
    // 0x79a2cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A2C8u, 0x79A2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2D0u;
label_79a2d0:
    // 0x79a2d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79a2d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a2d4:
    // 0x79a2d4: 0x1630000a  bne         $s1, $s0, . + 4 + (0xA << 2)
label_79a2d8:
    if (ctx->pc == 0x79A2D8u) {
        ctx->pc = 0x79A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2D4u;
        // 0x79a2d8: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2DCu;
        goto label_79a2dc;
    }
    ctx->pc = 0x79A2D4u;
    {
        const bool branch_taken_0x79a2d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x79A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2D4u;
        // 0x79a2d8: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2d4) {
            ctx->pc = 0x79A300u;
            goto label_79a300;
        }
    }
    ctx->pc = 0x79A2DCu;
label_79a2dc:
    // 0x79a2dc: 0xc0a572a  jal         func_295CA8
label_79a2e0:
    if (ctx->pc == 0x79A2E0u) {
        ctx->pc = 0x79A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2DCu;
        // 0x79a2e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2E4u;
        goto label_79a2e4;
    }
    ctx->pc = 0x79A2DCu;
    SET_GPR_U32(ctx, 31, 0x79A2E4u);
    ctx->pc = 0x79A2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2DCu;
    // 0x79a2e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79A2DCu, 0x79A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2E4u;
label_79a2e4:
    // 0x79a2e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a2e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a2e8:
    // 0x79a2e8: 0x16110005  bne         $s0, $s1, . + 4 + (0x5 << 2)
label_79a2ec:
    if (ctx->pc == 0x79A2ECu) {
        ctx->pc = 0x79A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2E8u;
        // 0x79a2ec: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2F0u;
        goto label_79a2f0;
    }
    ctx->pc = 0x79A2E8u;
    {
        const bool branch_taken_0x79a2e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x79A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2E8u;
        // 0x79a2ec: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2e8) {
            ctx->pc = 0x79A300u;
            goto label_79a300;
        }
    }
    ctx->pc = 0x79A2F0u;
label_79a2f0:
    // 0x79a2f0: 0xc0b0f90  jal         func_2C3E40
label_79a2f4:
    if (ctx->pc == 0x79A2F4u) {
        ctx->pc = 0x79A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2F0u;
        // 0x79a2f4: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A2F8u;
        goto label_79a2f8;
    }
    ctx->pc = 0x79A2F0u;
    SET_GPR_U32(ctx, 31, 0x79A2F8u);
    ctx->pc = 0x79A2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2F0u;
    // 0x79a2f4: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x79A2F0u, 0x79A2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2F8u;
label_79a2f8:
    // 0x79a2f8: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
label_79a2fc:
    if (ctx->pc == 0x79A2FCu) {
        ctx->pc = 0x79A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2F8u;
        // 0x79a2fc: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A300u;
        goto label_79a300;
    }
    ctx->pc = 0x79A2F8u;
    {
        const bool branch_taken_0x79a2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x79A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2F8u;
        // 0x79a2fc: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2f8) {
            ctx->pc = 0x79A314u;
            goto label_79a314;
        }
    }
    ctx->pc = 0x79A300u;
label_79a300:
    // 0x79a300: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a304:
    // 0x79a304: 0xc0b56a8  jal         func_2D5AA0
label_79a308:
    if (ctx->pc == 0x79A308u) {
        ctx->pc = 0x79A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A304u;
        // 0x79a308: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A30Cu;
        goto label_79a30c;
    }
    ctx->pc = 0x79A304u;
    SET_GPR_U32(ctx, 31, 0x79A30Cu);
    ctx->pc = 0x79A308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A304u;
    // 0x79a308: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A304u, 0x79A30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A30Cu;
label_79a30c:
    // 0x79a30c: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
label_79a310:
    if (ctx->pc == 0x79A310u) {
        ctx->pc = 0x79A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A30Cu;
        // 0x79a310: 0x27c4ea60  addiu       $a0, $fp, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A314u;
        goto label_79a314;
    }
    ctx->pc = 0x79A30Cu;
    {
        const bool branch_taken_0x79a30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A30Cu;
        // 0x79a310: 0x27c4ea60  addiu       $a0, $fp, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a30c) {
            ctx->pc = 0x79A2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a2a0;
        }
    }
    ctx->pc = 0x79A314u;
label_79a314:
    // 0x79a314: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79a314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_79a318:
    // 0x79a318: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x79a318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
label_79a31c:
    // 0x79a31c: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_79a320:
    // 0x79a320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a324:
    // 0x79a324: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_79a328:
    // 0x79a328: 0x24506ab0  addiu       $s0, $v0, 0x6AB0
    ctx->pc = 0x79a328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
label_79a32c:
    // 0x79a32c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79a330:
    // 0x79a330: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x79a330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_79a334:
    // 0x79a334: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79a334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_79a338:
    // 0x79a338: 0xc0b0e6c  jal         func_2C39B0
label_79a33c:
    if (ctx->pc == 0x79A33Cu) {
        ctx->pc = 0x79A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A338u;
        // 0x79a33c: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A340u;
        goto label_79a340;
    }
    ctx->pc = 0x79A338u;
    SET_GPR_U32(ctx, 31, 0x79A340u);
    ctx->pc = 0x79A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A338u;
    // 0x79a33c: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A338u, 0x79A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A340u;
label_79a340:
    // 0x79a340: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79a344:
    // 0x79a344: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79a348:
    // 0x79a348: 0xc0b0fb6  jal         func_2C3ED8
label_79a34c:
    if (ctx->pc == 0x79A34Cu) {
        ctx->pc = 0x79A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A348u;
        // 0x79a34c: 0x24a5c410  addiu       $a1, $a1, -0x3BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A350u;
        goto label_79a350;
    }
    ctx->pc = 0x79A348u;
    SET_GPR_U32(ctx, 31, 0x79A350u);
    ctx->pc = 0x79A34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A348u;
    // 0x79a34c: 0x24a5c410  addiu       $a1, $a1, -0x3BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A348u, 0x79A350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A350u;
label_79a350:
    // 0x79a350: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x79a350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_79a354:
    // 0x79a354: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x79a354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_79a358:
    // 0x79a358: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x79a358u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
label_79a35c:
    // 0x79a35c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a360:
    // 0x79a360: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x79a360u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
label_79a364:
    // 0x79a364: 0xc0a54b4  jal         func_2952D0
label_79a368:
    if (ctx->pc == 0x79A368u) {
        ctx->pc = 0x79A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A364u;
        // 0x79a368: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A36Cu;
        goto label_79a36c;
    }
    ctx->pc = 0x79A364u;
    SET_GPR_U32(ctx, 31, 0x79A36Cu);
    ctx->pc = 0x79A368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A364u;
    // 0x79a368: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A364u, 0x79A36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A36Cu;
label_79a36c:
    // 0x79a36c: 0x8e83c500  lw          $v1, -0x3B00($s4)
    ctx->pc = 0x79a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952192)));
label_79a370:
    // 0x79a370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a374:
    // 0x79a374: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a378:
    // 0x79a378: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79a37c:
    // 0x79a37c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79a37cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_79a380:
    // 0x79a380: 0xc0a54b4  jal         func_2952D0
label_79a384:
    if (ctx->pc == 0x79A384u) {
        ctx->pc = 0x79A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A380u;
        // 0x79a384: 0x93a50030  lbu         $a1, 0x30($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A388u;
        goto label_79a388;
    }
    ctx->pc = 0x79A380u;
    SET_GPR_U32(ctx, 31, 0x79A388u);
    ctx->pc = 0x79A384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A380u;
    // 0x79a384: 0x93a50030  lbu         $a1, 0x30($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A380u, 0x79A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A388u;
label_79a388:
    // 0x79a388: 0x8e83c500  lw          $v1, -0x3B00($s4)
    ctx->pc = 0x79a388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294952192)));
label_79a38c:
    // 0x79a38c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79a38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_79a390:
    // 0x79a390: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79a390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79a394:
    // 0x79a394: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79a398:
    // 0x79a398: 0xc0a573a  jal         func_295CE8
label_79a39c:
    if (ctx->pc == 0x79A39Cu) {
        ctx->pc = 0x79A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A398u;
        // 0x79a39c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3A0u;
        goto label_79a3a0;
    }
    ctx->pc = 0x79A398u;
    SET_GPR_U32(ctx, 31, 0x79A3A0u);
    ctx->pc = 0x79A39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A398u;
    // 0x79a39c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A398u, 0x79A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3A0u;
label_79a3a0:
    // 0x79a3a0: 0xc0a573a  jal         func_295CE8
label_79a3a4:
    if (ctx->pc == 0x79A3A4u) {
        ctx->pc = 0x79A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3A0u;
        // 0x79a3a4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3A8u;
        goto label_79a3a8;
    }
    ctx->pc = 0x79A3A0u;
    SET_GPR_U32(ctx, 31, 0x79A3A8u);
    ctx->pc = 0x79A3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3A0u;
    // 0x79a3a4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A3A0u, 0x79A3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3A8u;
label_79a3a8:
    // 0x79a3a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79a3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_79a3ac:
    // 0x79a3ac: 0xc0a56f0  jal         func_295BC0
label_79a3b0:
    if (ctx->pc == 0x79A3B0u) {
        ctx->pc = 0x79A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3ACu;
        // 0x79a3b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3B4u;
        goto label_79a3b4;
    }
    ctx->pc = 0x79A3ACu;
    SET_GPR_U32(ctx, 31, 0x79A3B4u);
    ctx->pc = 0x79A3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3ACu;
    // 0x79a3b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A3ACu, 0x79A3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3B4u;
label_79a3b4:
    // 0x79a3b4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x79a3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_79a3b8:
    // 0x79a3b8: 0xc0a56f0  jal         func_295BC0
label_79a3bc:
    if (ctx->pc == 0x79A3BCu) {
        ctx->pc = 0x79A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3B8u;
        // 0x79a3bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3C0u;
        goto label_79a3c0;
    }
    ctx->pc = 0x79A3B8u;
    SET_GPR_U32(ctx, 31, 0x79A3C0u);
    ctx->pc = 0x79A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3B8u;
    // 0x79a3bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A3B8u, 0x79A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3C0u;
label_79a3c0:
    // 0x79a3c0: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79a3c4:
    // 0x79a3c4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x79a3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_79a3c8:
    // 0x79a3c8: 0xc0b56a8  jal         func_2D5AA0
label_79a3cc:
    if (ctx->pc == 0x79A3CCu) {
        ctx->pc = 0x79A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3C8u;
        // 0x79a3cc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3D0u;
        goto label_79a3d0;
    }
    ctx->pc = 0x79A3C8u;
    SET_GPR_U32(ctx, 31, 0x79A3D0u);
    ctx->pc = 0x79A3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3C8u;
    // 0x79a3cc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A3C8u, 0x79A3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3D0u;
label_79a3d0:
    // 0x79a3d0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79a3d4:
    // 0x79a3d4: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x79a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
label_79a3d8:
    // 0x79a3d8: 0x2443c3a0  addiu       $v1, $v0, -0x3C60
    ctx->pc = 0x79a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951840));
label_79a3dc:
    // 0x79a3dc: 0x24884c58  addiu       $t0, $a0, 0x4C58
    ctx->pc = 0x79a3dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 19544));
label_79a3e0:
    // 0x79a3e0: 0x8042c3a0  lb          $v0, -0x3C60($v0)
    ctx->pc = 0x79a3e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294951840)));
label_79a3e4:
    // 0x79a3e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a3e8:
    // 0x79a3e8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_79a3ec:
    if (ctx->pc == 0x79A3ECu) {
        ctx->pc = 0x79A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3E8u;
        // 0x79a3ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A3F0u;
        goto label_79a3f0;
    }
    ctx->pc = 0x79A3E8u;
    {
        const bool branch_taken_0x79a3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3E8u;
        // 0x79a3ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3e8) {
            ctx->pc = 0x79A420u;
            goto label_79a420;
        }
    }
    ctx->pc = 0x79A3F0u;
label_79a3f0:
    // 0x79a3f0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a3f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a3f4:
    // 0x79a3f4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a3f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a3f8:
    // 0x79a3f8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79a3fc:
    // 0x79a3fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_79a400:
    // 0x79a400: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79a404:
    // 0x79a404: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_79a408:
    // 0x79a408: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a408u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79a40c:
    // 0x79a40c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_79a410:
    if (ctx->pc == 0x79A410u) {
        ctx->pc = 0x79A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A40Cu;
        // 0x79a410: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A414u;
        goto label_79a414;
    }
    ctx->pc = 0x79A40Cu;
    {
        const bool branch_taken_0x79a40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A40Cu;
        // 0x79a410: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a40c) {
            ctx->pc = 0x79A420u;
            goto label_79a420;
        }
    }
    ctx->pc = 0x79A414u;
label_79a414:
    // 0x79a414: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a414u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a418:
    // 0x79a418: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79a41c:
    if (ctx->pc == 0x79A41Cu) {
        ctx->pc = 0x79A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A418u;
        // 0x79a41c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A420u;
        goto label_79a420;
    }
    ctx->pc = 0x79A418u;
    {
        const bool branch_taken_0x79a418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a418) {
            ctx->pc = 0x79A41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A418u;
            // 0x79a41c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a3f8;
        }
    }
    ctx->pc = 0x79A420u;
label_79a420:
    // 0x79a420: 0xc053f66  jal         func_14FD98
label_79a424:
    if (ctx->pc == 0x79A424u) {
        ctx->pc = 0x79A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A420u;
        // 0x79a424: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A428u;
        goto label_79a428;
    }
    ctx->pc = 0x79A420u;
    SET_GPR_U32(ctx, 31, 0x79A428u);
    ctx->pc = 0x79A424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A420u;
    // 0x79a424: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A420u, 0x79A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A428u;
label_79a428:
    // 0x79a428: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79a428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a42c:
    // 0x79a42c: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x79a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
label_79a430:
    // 0x79a430: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79a434:
    // 0x79a434: 0x24884c58  addiu       $t0, $a0, 0x4C58
    ctx->pc = 0x79a434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 19544));
label_79a438:
    // 0x79a438: 0x2443c3a8  addiu       $v1, $v0, -0x3C58
    ctx->pc = 0x79a438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951848));
label_79a43c:
    // 0x79a43c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a440:
    // 0x79a440: 0x8042c3a8  lb          $v0, -0x3C58($v0)
    ctx->pc = 0x79a440u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294951848)));
label_79a444:
    // 0x79a444: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79a448:
    if (ctx->pc == 0x79A448u) {
        ctx->pc = 0x79A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A444u;
        // 0x79a448: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A44Cu;
        goto label_79a44c;
    }
    ctx->pc = 0x79A444u;
    {
        const bool branch_taken_0x79a444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A444u;
        // 0x79a448: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a444) {
            ctx->pc = 0x79A480u;
            goto label_79a480;
        }
    }
    ctx->pc = 0x79A44Cu;
label_79a44c:
    // 0x79a44c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79a450:
    // 0x79a450: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a450u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a454:
    // 0x79a454: 0x0  nop
    ctx->pc = 0x79a454u;
    // NOP
label_79a458:
    // 0x79a458: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_79a45c:
    // 0x79a45c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_79a460:
    // 0x79a460: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79a464:
    // 0x79a464: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_79a468:
    // 0x79a468: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a468u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_79a46c:
    // 0x79a46c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_79a470:
    if (ctx->pc == 0x79A470u) {
        ctx->pc = 0x79A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A46Cu;
        // 0x79a470: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A474u;
        goto label_79a474;
    }
    ctx->pc = 0x79A46Cu;
    {
        const bool branch_taken_0x79a46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A46Cu;
        // 0x79a470: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a46c) {
            ctx->pc = 0x79A480u;
            goto label_79a480;
        }
    }
    ctx->pc = 0x79A474u;
label_79a474:
    // 0x79a474: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a474u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a478:
    // 0x79a478: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79a47c:
    if (ctx->pc == 0x79A47Cu) {
        ctx->pc = 0x79A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A478u;
        // 0x79a47c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A480u;
        goto label_79a480;
    }
    ctx->pc = 0x79A478u;
    {
        const bool branch_taken_0x79a478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a478) {
            ctx->pc = 0x79A47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A478u;
            // 0x79a47c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a458;
        }
    }
    ctx->pc = 0x79A480u;
label_79a480:
    // 0x79a480: 0xc053f66  jal         func_14FD98
label_79a484:
    if (ctx->pc == 0x79A484u) {
        ctx->pc = 0x79A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A480u;
        // 0x79a484: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A488u;
        goto label_79a488;
    }
    ctx->pc = 0x79A480u;
    SET_GPR_U32(ctx, 31, 0x79A488u);
    ctx->pc = 0x79A484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A480u;
    // 0x79a484: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A480u, 0x79A488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A488u;
label_79a488:
    // 0x79a488: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79a48c:
    // 0x79a48c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a490:
    // 0x79a490: 0xc0b1444  jal         func_2C5110
label_79a494:
    if (ctx->pc == 0x79A494u) {
        ctx->pc = 0x79A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A490u;
        // 0x79a494: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A498u;
        goto label_79a498;
    }
    ctx->pc = 0x79A490u;
    SET_GPR_U32(ctx, 31, 0x79A498u);
    ctx->pc = 0x79A494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A490u;
    // 0x79a494: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5110u, 0x79A490u, 0x79A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A498u;
label_79a498:
    // 0x79a498: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_79a49c:
    if (ctx->pc == 0x79A49Cu) {
        ctx->pc = 0x79A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A498u;
        // 0x79a49c: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4A0u;
        goto label_79a4a0;
    }
    ctx->pc = 0x79A498u;
    {
        const bool branch_taken_0x79a498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a498) {
            ctx->pc = 0x79A49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A498u;
            // 0x79a49c: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A4D8u;
            goto label_79a4d8;
        }
    }
    ctx->pc = 0x79A4A0u;
label_79a4a0:
    // 0x79a4a0: 0x8e220214  lw          $v0, 0x214($s1)
    ctx->pc = 0x79a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_79a4a4:
    // 0x79a4a4: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x79a4a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_79a4a8:
    // 0x79a4a8: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x79a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_79a4ac:
    // 0x79a4ac: 0x60f809  jalr        $v1
label_79a4b0:
    if (ctx->pc == 0x79A4B0u) {
        ctx->pc = 0x79A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4ACu;
        // 0x79a4b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4B4u;
        goto label_79a4b4;
    }
    ctx->pc = 0x79A4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79A4B4u);
        ctx->pc = 0x79A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4ACu;
        // 0x79a4b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A4ACu, 0x79A4B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A4B4u;
label_79a4b4:
    // 0x79a4b4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x79a4b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_79a4b8:
    // 0x79a4b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a4bc:
    // 0x79a4bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x79a4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_79a4c0:
    // 0x79a4c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a4c4:
    // 0x79a4c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a4c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a4c8:
    // 0x79a4c8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a4c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a4cc:
    // 0x79a4cc: 0xc0c194a  jal         func_306528
label_79a4d0:
    if (ctx->pc == 0x79A4D0u) {
        ctx->pc = 0x79A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4CCu;
        // 0x79a4d0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4D4u;
        goto label_79a4d4;
    }
    ctx->pc = 0x79A4CCu;
    SET_GPR_U32(ctx, 31, 0x79A4D4u);
    ctx->pc = 0x79A4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4CCu;
    // 0x79a4d0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x79A4CCu, 0x79A4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4D4u;
label_79a4d4:
    // 0x79a4d4: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79a4d8:
    // 0x79a4d8: 0xc0b1444  jal         func_2C5110
label_79a4dc:
    if (ctx->pc == 0x79A4DCu) {
        ctx->pc = 0x79A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4D8u;
        // 0x79a4dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4E0u;
        goto label_79a4e0;
    }
    ctx->pc = 0x79A4D8u;
    SET_GPR_U32(ctx, 31, 0x79A4E0u);
    ctx->pc = 0x79A4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4D8u;
    // 0x79a4dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5110u, 0x79A4D8u, 0x79A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4E0u;
label_79a4e0:
    // 0x79a4e0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_79a4e4:
    if (ctx->pc == 0x79A4E4u) {
        ctx->pc = 0x79A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4E0u;
        // 0x79a4e4: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4E8u;
        goto label_79a4e8;
    }
    ctx->pc = 0x79A4E0u;
    {
        const bool branch_taken_0x79a4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a4e0) {
            ctx->pc = 0x79A4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A4E0u;
            // 0x79a4e4: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A520u;
            goto label_79a520;
        }
    }
    ctx->pc = 0x79A4E8u;
label_79a4e8:
    // 0x79a4e8: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x79a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79a4ec:
    // 0x79a4ec: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x79a4ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_79a4f0:
    // 0x79a4f0: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x79a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_79a4f4:
    // 0x79a4f4: 0x60f809  jalr        $v1
label_79a4f8:
    if (ctx->pc == 0x79A4F8u) {
        ctx->pc = 0x79A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4F4u;
        // 0x79a4f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A4FCu;
        goto label_79a4fc;
    }
    ctx->pc = 0x79A4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79A4FCu);
        ctx->pc = 0x79A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4F4u;
        // 0x79a4f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A4F4u, 0x79A4FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A4FCu;
label_79a4fc:
    // 0x79a4fc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x79a4fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_79a500:
    // 0x79a500: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a504:
    // 0x79a504: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x79a504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_79a508:
    // 0x79a508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a50c:
    // 0x79a50c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a50cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a510:
    // 0x79a510: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a514:
    // 0x79a514: 0xc0c194a  jal         func_306528
label_79a518:
    if (ctx->pc == 0x79A518u) {
        ctx->pc = 0x79A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A514u;
        // 0x79a518: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A51Cu;
        goto label_79a51c;
    }
    ctx->pc = 0x79A514u;
    SET_GPR_U32(ctx, 31, 0x79A51Cu);
    ctx->pc = 0x79A518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A514u;
    // 0x79a518: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x79A514u, 0x79A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A51Cu;
label_79a51c:
    // 0x79a51c: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79a520:
    // 0x79a520: 0xc0b1444  jal         func_2C5110
label_79a524:
    if (ctx->pc == 0x79A524u) {
        ctx->pc = 0x79A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A520u;
        // 0x79a524: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A528u;
        goto label_79a528;
    }
    ctx->pc = 0x79A520u;
    SET_GPR_U32(ctx, 31, 0x79A528u);
    ctx->pc = 0x79A524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A520u;
    // 0x79a524: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5110u, 0x79A520u, 0x79A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A528u;
label_79a528:
    // 0x79a528: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79a52c:
    if (ctx->pc == 0x79A52Cu) {
        ctx->pc = 0x79A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A528u;
        // 0x79a52c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A530u;
        goto label_79a530;
    }
    ctx->pc = 0x79A528u;
    {
        const bool branch_taken_0x79a528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A528u;
        // 0x79a52c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a528) {
            ctx->pc = 0x79A548u;
            goto label_79a548;
        }
    }
    ctx->pc = 0x79A530u;
label_79a530:
    // 0x79a530: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79a534:
    // 0x79a534: 0xc0b1444  jal         func_2C5110
label_79a538:
    if (ctx->pc == 0x79A538u) {
        ctx->pc = 0x79A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A534u;
        // 0x79a538: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A53Cu;
        goto label_79a53c;
    }
    ctx->pc = 0x79A534u;
    SET_GPR_U32(ctx, 31, 0x79A53Cu);
    ctx->pc = 0x79A538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A534u;
    // 0x79a538: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5110u, 0x79A534u, 0x79A53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A53Cu;
label_79a53c:
    // 0x79a53c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_79a540:
    if (ctx->pc == 0x79A540u) {
        ctx->pc = 0x79A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A53Cu;
        // 0x79a540: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A544u;
        goto label_79a544;
    }
    ctx->pc = 0x79A53Cu;
    {
        const bool branch_taken_0x79a53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a53c) {
            ctx->pc = 0x79A540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A53Cu;
            // 0x79a540: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A56Cu;
            goto label_79a56c;
        }
    }
    ctx->pc = 0x79A544u;
label_79a544:
    // 0x79a544: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79a548:
    // 0x79a548: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a54c:
    // 0x79a54c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_79a550:
    // 0x79a550: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x79a550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_79a554:
    // 0x79a554: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a558:
    // 0x79a558: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a55c:
    // 0x79a55c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a55cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a560:
    // 0x79a560: 0xc0b2e28  jal         func_2CB8A0
label_79a564:
    if (ctx->pc == 0x79A564u) {
        ctx->pc = 0x79A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A560u;
        // 0x79a564: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A568u;
        goto label_79a568;
    }
    ctx->pc = 0x79A560u;
    SET_GPR_U32(ctx, 31, 0x79A568u);
    ctx->pc = 0x79A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A560u;
    // 0x79a564: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A560u, 0x79A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A568u;
label_79a568:
    // 0x79a568: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79a56c:
    // 0x79a56c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_79a570:
    // 0x79a570: 0xc0b101e  jal         func_2C4078
label_79a574:
    if (ctx->pc == 0x79A574u) {
        ctx->pc = 0x79A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A570u;
        // 0x79a574: 0x24506ab0  addiu       $s0, $v0, 0x6AB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A578u;
        goto label_79a578;
    }
    ctx->pc = 0x79A570u;
    SET_GPR_U32(ctx, 31, 0x79A578u);
    ctx->pc = 0x79A574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A570u;
    // 0x79a574: 0x24506ab0  addiu       $s0, $v0, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79A570u, 0x79A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A578u;
label_79a578:
    // 0x79a578: 0xc0a56ae  jal         func_295AB8
label_79a57c:
    if (ctx->pc == 0x79A57Cu) {
        ctx->pc = 0x79A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A578u;
        // 0x79a57c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A580u;
        goto label_79a580;
    }
    ctx->pc = 0x79A578u;
    SET_GPR_U32(ctx, 31, 0x79A580u);
    ctx->pc = 0x79A57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A578u;
    // 0x79a57c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79A578u, 0x79A580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A580u;
label_79a580:
    // 0x79a580: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a584:
    // 0x79a584: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x79a584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_79a588:
    // 0x79a588: 0xc0a54e0  jal         func_295380
label_79a58c:
    if (ctx->pc == 0x79A58Cu) {
        ctx->pc = 0x79A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A588u;
        // 0x79a58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A590u;
        goto label_79a590;
    }
    ctx->pc = 0x79A588u;
    SET_GPR_U32(ctx, 31, 0x79A590u);
    ctx->pc = 0x79A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A588u;
    // 0x79a58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295380u, 0x79A588u, 0x79A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A590u;
label_79a590:
    // 0x79a590: 0xc0a56ae  jal         func_295AB8
label_79a594:
    if (ctx->pc == 0x79A594u) {
        ctx->pc = 0x79A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A590u;
        // 0x79a594: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A598u;
        goto label_79a598;
    }
    ctx->pc = 0x79A590u;
    SET_GPR_U32(ctx, 31, 0x79A598u);
    ctx->pc = 0x79A594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A590u;
    // 0x79a594: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79A590u, 0x79A598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A598u;
label_79a598:
    // 0x79a598: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79a598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a59c:
    // 0x79a59c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a5a0:
    // 0x79a5a0: 0xc0a54e0  jal         func_295380
label_79a5a4:
    if (ctx->pc == 0x79A5A4u) {
        ctx->pc = 0x79A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5A0u;
        // 0x79a5a4: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5A8u;
        goto label_79a5a8;
    }
    ctx->pc = 0x79A5A0u;
    SET_GPR_U32(ctx, 31, 0x79A5A8u);
    ctx->pc = 0x79A5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5A0u;
    // 0x79a5a4: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295380u, 0x79A5A0u, 0x79A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5A8u;
label_79a5a8:
    // 0x79a5a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a5ac:
    // 0x79a5ac: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x79a5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_79a5b0:
    // 0x79a5b0: 0xc0a5516  jal         func_295458
label_79a5b4:
    if (ctx->pc == 0x79A5B4u) {
        ctx->pc = 0x79A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5B0u;
        // 0x79a5b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5B8u;
        goto label_79a5b8;
    }
    ctx->pc = 0x79A5B0u;
    SET_GPR_U32(ctx, 31, 0x79A5B8u);
    ctx->pc = 0x79A5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5B0u;
    // 0x79a5b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295458u, 0x79A5B0u, 0x79A5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5B8u;
label_79a5b8:
    // 0x79a5b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a5bc:
    // 0x79a5bc: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x79a5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_79a5c0:
    // 0x79a5c0: 0xc0a5516  jal         func_295458
label_79a5c4:
    if (ctx->pc == 0x79A5C4u) {
        ctx->pc = 0x79A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5C0u;
        // 0x79a5c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5C8u;
        goto label_79a5c8;
    }
    ctx->pc = 0x79A5C0u;
    SET_GPR_U32(ctx, 31, 0x79A5C8u);
    ctx->pc = 0x79A5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5C0u;
    // 0x79a5c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295458u, 0x79A5C0u, 0x79A5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5C8u;
label_79a5c8:
    // 0x79a5c8: 0xc0b0f04  jal         func_2C3C10
label_79a5cc:
    if (ctx->pc == 0x79A5CCu) {
        ctx->pc = 0x79A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5C8u;
        // 0x79a5cc: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5D0u;
        goto label_79a5d0;
    }
    ctx->pc = 0x79A5C8u;
    SET_GPR_U32(ctx, 31, 0x79A5D0u);
    ctx->pc = 0x79A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5C8u;
    // 0x79a5cc: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A5C8u, 0x79A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5D0u;
label_79a5d0:
    // 0x79a5d0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x79a5d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_79a5d4:
    // 0x79a5d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a5d8:
    // 0x79a5d8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x79a5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_79a5dc:
    // 0x79a5dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a5dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a5e0:
    // 0x79a5e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a5e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a5e4:
    // 0x79a5e4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a5e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79a5e8:
    // 0x79a5e8: 0xc0c194a  jal         func_306528
label_79a5ec:
    if (ctx->pc == 0x79A5ECu) {
        ctx->pc = 0x79A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5E8u;
        // 0x79a5ec: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5F0u;
        goto label_79a5f0;
    }
    ctx->pc = 0x79A5E8u;
    SET_GPR_U32(ctx, 31, 0x79A5F0u);
    ctx->pc = 0x79A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5E8u;
    // 0x79a5ec: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x79A5E8u, 0x79A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5F0u;
label_79a5f0:
    // 0x79a5f0: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x79a5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79a5f4:
    // 0x79a5f4: 0xc0b5692  jal         func_2D5A48
label_79a5f8:
    if (ctx->pc == 0x79A5F8u) {
        ctx->pc = 0x79A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5F4u;
        // 0x79a5f8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A5FCu;
        goto label_79a5fc;
    }
    ctx->pc = 0x79A5F4u;
    SET_GPR_U32(ctx, 31, 0x79A5FCu);
    ctx->pc = 0x79A5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5F4u;
    // 0x79a5f8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A5F4u, 0x79A5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5FCu;
label_79a5fc:
    // 0x79a5fc: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x79a5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_79a600:
    // 0x79a600: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x79a600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_79a604:
    // 0x79a604: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x79a604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_79a608:
    // 0x79a608: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x79a608u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_79a60c:
    // 0x79a60c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x79a60cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_79a610:
    // 0x79a610: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x79a610u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_79a614:
    // 0x79a614: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x79a614u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79a618:
    // 0x79a618: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x79a618u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79a61c:
    // 0x79a61c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x79a61cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79a620:
    // 0x79a620: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x79a620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_79a624:
    // 0x79a624: 0x3e00008  jr          $ra
label_79a628:
    if (ctx->pc == 0x79A628u) {
        ctx->pc = 0x79A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A624u;
        // 0x79a628: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A62Cu;
        goto label_79a62c;
    }
    ctx->pc = 0x79A624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A624u;
        // 0x79a628: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A62Cu;
label_79a62c:
    // 0x79a62c: 0x0  nop
    ctx->pc = 0x79a62cu;
    // NOP
    ctx->pc = 0x79a630u;
}
} // namespace gh_r100
