#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_001994A0
// Address: 0x1994a0 - 0x1997c8
void func_001994A0_0x1994a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001994A0_0x1994a0");
#endif

    switch (ctx->pc) {
        case 0x1994a0u: goto label_1994a0;
        case 0x1994a4u: goto label_1994a4;
        case 0x1994a8u: goto label_1994a8;
        case 0x1994acu: goto label_1994ac;
        case 0x1994b0u: goto label_1994b0;
        case 0x1994b4u: goto label_1994b4;
        case 0x1994b8u: goto label_1994b8;
        case 0x1994bcu: goto label_1994bc;
        case 0x1994c0u: goto label_1994c0;
        case 0x1994c4u: goto label_1994c4;
        case 0x1994c8u: goto label_1994c8;
        case 0x1994ccu: goto label_1994cc;
        case 0x1994d0u: goto label_1994d0;
        case 0x1994d4u: goto label_1994d4;
        case 0x1994d8u: goto label_1994d8;
        case 0x1994dcu: goto label_1994dc;
        case 0x1994e0u: goto label_1994e0;
        case 0x1994e4u: goto label_1994e4;
        case 0x1994e8u: goto label_1994e8;
        case 0x1994ecu: goto label_1994ec;
        case 0x1994f0u: goto label_1994f0;
        case 0x1994f4u: goto label_1994f4;
        case 0x1994f8u: goto label_1994f8;
        case 0x1994fcu: goto label_1994fc;
        case 0x199500u: goto label_199500;
        case 0x199504u: goto label_199504;
        case 0x199508u: goto label_199508;
        case 0x19950cu: goto label_19950c;
        case 0x199510u: goto label_199510;
        case 0x199514u: goto label_199514;
        case 0x199518u: goto label_199518;
        case 0x19951cu: goto label_19951c;
        case 0x199520u: goto label_199520;
        case 0x199524u: goto label_199524;
        case 0x199528u: goto label_199528;
        case 0x19952cu: goto label_19952c;
        case 0x199530u: goto label_199530;
        case 0x199534u: goto label_199534;
        case 0x199538u: goto label_199538;
        case 0x19953cu: goto label_19953c;
        case 0x199540u: goto label_199540;
        case 0x199544u: goto label_199544;
        case 0x199548u: goto label_199548;
        case 0x19954cu: goto label_19954c;
        case 0x199550u: goto label_199550;
        case 0x199554u: goto label_199554;
        case 0x199558u: goto label_199558;
        case 0x19955cu: goto label_19955c;
        case 0x199560u: goto label_199560;
        case 0x199564u: goto label_199564;
        case 0x199568u: goto label_199568;
        case 0x19956cu: goto label_19956c;
        case 0x199570u: goto label_199570;
        case 0x199574u: goto label_199574;
        case 0x199578u: goto label_199578;
        case 0x19957cu: goto label_19957c;
        case 0x199580u: goto label_199580;
        case 0x199584u: goto label_199584;
        case 0x199588u: goto label_199588;
        case 0x19958cu: goto label_19958c;
        case 0x199590u: goto label_199590;
        case 0x199594u: goto label_199594;
        case 0x199598u: goto label_199598;
        case 0x19959cu: goto label_19959c;
        case 0x1995a0u: goto label_1995a0;
        case 0x1995a4u: goto label_1995a4;
        case 0x1995a8u: goto label_1995a8;
        case 0x1995acu: goto label_1995ac;
        case 0x1995b0u: goto label_1995b0;
        case 0x1995b4u: goto label_1995b4;
        case 0x1995b8u: goto label_1995b8;
        case 0x1995bcu: goto label_1995bc;
        case 0x1995c0u: goto label_1995c0;
        case 0x1995c4u: goto label_1995c4;
        case 0x1995c8u: goto label_1995c8;
        case 0x1995ccu: goto label_1995cc;
        case 0x1995d0u: goto label_1995d0;
        case 0x1995d4u: goto label_1995d4;
        case 0x1995d8u: goto label_1995d8;
        case 0x1995dcu: goto label_1995dc;
        case 0x1995e0u: goto label_1995e0;
        case 0x1995e4u: goto label_1995e4;
        case 0x1995e8u: goto label_1995e8;
        case 0x1995ecu: goto label_1995ec;
        case 0x1995f0u: goto label_1995f0;
        case 0x1995f4u: goto label_1995f4;
        case 0x1995f8u: goto label_1995f8;
        case 0x1995fcu: goto label_1995fc;
        case 0x199600u: goto label_199600;
        case 0x199604u: goto label_199604;
        case 0x199608u: goto label_199608;
        case 0x19960cu: goto label_19960c;
        case 0x199610u: goto label_199610;
        case 0x199614u: goto label_199614;
        case 0x199618u: goto label_199618;
        case 0x19961cu: goto label_19961c;
        case 0x199620u: goto label_199620;
        case 0x199624u: goto label_199624;
        case 0x199628u: goto label_199628;
        case 0x19962cu: goto label_19962c;
        case 0x199630u: goto label_199630;
        case 0x199634u: goto label_199634;
        case 0x199638u: goto label_199638;
        case 0x19963cu: goto label_19963c;
        case 0x199640u: goto label_199640;
        case 0x199644u: goto label_199644;
        case 0x199648u: goto label_199648;
        case 0x19964cu: goto label_19964c;
        case 0x199650u: goto label_199650;
        case 0x199654u: goto label_199654;
        case 0x199658u: goto label_199658;
        case 0x19965cu: goto label_19965c;
        case 0x199660u: goto label_199660;
        case 0x199664u: goto label_199664;
        case 0x199668u: goto label_199668;
        case 0x19966cu: goto label_19966c;
        case 0x199670u: goto label_199670;
        case 0x199674u: goto label_199674;
        case 0x199678u: goto label_199678;
        case 0x19967cu: goto label_19967c;
        case 0x199680u: goto label_199680;
        case 0x199684u: goto label_199684;
        case 0x199688u: goto label_199688;
        case 0x19968cu: goto label_19968c;
        case 0x199690u: goto label_199690;
        case 0x199694u: goto label_199694;
        case 0x199698u: goto label_199698;
        case 0x19969cu: goto label_19969c;
        case 0x1996a0u: goto label_1996a0;
        case 0x1996a4u: goto label_1996a4;
        case 0x1996a8u: goto label_1996a8;
        case 0x1996acu: goto label_1996ac;
        case 0x1996b0u: goto label_1996b0;
        case 0x1996b4u: goto label_1996b4;
        case 0x1996b8u: goto label_1996b8;
        case 0x1996bcu: goto label_1996bc;
        case 0x1996c0u: goto label_1996c0;
        case 0x1996c4u: goto label_1996c4;
        case 0x1996c8u: goto label_1996c8;
        case 0x1996ccu: goto label_1996cc;
        case 0x1996d0u: goto label_1996d0;
        case 0x1996d4u: goto label_1996d4;
        case 0x1996d8u: goto label_1996d8;
        case 0x1996dcu: goto label_1996dc;
        case 0x1996e0u: goto label_1996e0;
        case 0x1996e4u: goto label_1996e4;
        case 0x1996e8u: goto label_1996e8;
        case 0x1996ecu: goto label_1996ec;
        case 0x1996f0u: goto label_1996f0;
        case 0x1996f4u: goto label_1996f4;
        case 0x1996f8u: goto label_1996f8;
        case 0x1996fcu: goto label_1996fc;
        case 0x199700u: goto label_199700;
        case 0x199704u: goto label_199704;
        case 0x199708u: goto label_199708;
        case 0x19970cu: goto label_19970c;
        case 0x199710u: goto label_199710;
        case 0x199714u: goto label_199714;
        case 0x199718u: goto label_199718;
        case 0x19971cu: goto label_19971c;
        case 0x199720u: goto label_199720;
        case 0x199724u: goto label_199724;
        case 0x199728u: goto label_199728;
        case 0x19972cu: goto label_19972c;
        case 0x199730u: goto label_199730;
        case 0x199734u: goto label_199734;
        case 0x199738u: goto label_199738;
        case 0x19973cu: goto label_19973c;
        case 0x199740u: goto label_199740;
        case 0x199744u: goto label_199744;
        case 0x199748u: goto label_199748;
        case 0x19974cu: goto label_19974c;
        case 0x199750u: goto label_199750;
        case 0x199754u: goto label_199754;
        case 0x199758u: goto label_199758;
        case 0x19975cu: goto label_19975c;
        case 0x199760u: goto label_199760;
        case 0x199764u: goto label_199764;
        case 0x199768u: goto label_199768;
        case 0x19976cu: goto label_19976c;
        case 0x199770u: goto label_199770;
        case 0x199774u: goto label_199774;
        case 0x199778u: goto label_199778;
        case 0x19977cu: goto label_19977c;
        case 0x199780u: goto label_199780;
        case 0x199784u: goto label_199784;
        case 0x199788u: goto label_199788;
        case 0x19978cu: goto label_19978c;
        case 0x199790u: goto label_199790;
        case 0x199794u: goto label_199794;
        case 0x199798u: goto label_199798;
        case 0x19979cu: goto label_19979c;
        case 0x1997a0u: goto label_1997a0;
        case 0x1997a4u: goto label_1997a4;
        case 0x1997a8u: goto label_1997a8;
        case 0x1997acu: goto label_1997ac;
        case 0x1997b0u: goto label_1997b0;
        case 0x1997b4u: goto label_1997b4;
        case 0x1997b8u: goto label_1997b8;
        case 0x1997bcu: goto label_1997bc;
        case 0x1997c0u: goto label_1997c0;
        case 0x1997c4u: goto label_1997c4;
        default: break;
    }

    ctx->pc = 0x1994a0u;

label_1994a0:
    // 0x1994a0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1994a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1994a4:
    // 0x1994a4: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x1994a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_1994a8:
    // 0x1994a8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x1994a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_1994ac:
    // 0x1994ac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1994acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1994b0:
    // 0x1994b0: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x1994b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_1994b4:
    // 0x1994b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1994b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1994b8:
    // 0x1994b8: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x1994b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_1994bc:
    // 0x1994bc: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x1994bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_1994c0:
    // 0x1994c0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x1994c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_1994c4:
    // 0x1994c4: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x1994c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_1994c8:
    // 0x1994c8: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1994c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1994cc:
    // 0x1994cc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1994ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1994d0:
    // 0x1994d0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1994d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1994d4:
    // 0x1994d4: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x1994d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1994d8:
    // 0x1994d8: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x1994d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1994dc:
    // 0x1994dc: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x1994dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_1994e0:
    // 0x1994e0: 0x10700036  beq         $v1, $s0, . + 4 + (0x36 << 2)
label_1994e4:
    if (ctx->pc == 0x1994E4u) {
        ctx->pc = 0x1994E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994E0u;
        // 0x1994e4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1994E8u;
        goto label_1994e8;
    }
    ctx->pc = 0x1994E0u;
    {
        const bool branch_taken_0x1994e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1994E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994E0u;
        // 0x1994e4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1994e0) {
            ctx->pc = 0x1995BCu;
            goto label_1995bc;
        }
    }
    ctx->pc = 0x1994E8u;
label_1994e8:
    // 0x1994e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1994ec:
    if (ctx->pc == 0x1994ECu) {
        ctx->pc = 0x1994ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994E8u;
        // 0x1994ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1994F0u;
        goto label_1994f0;
    }
    ctx->pc = 0x1994E8u;
    {
        const bool branch_taken_0x1994e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1994ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994E8u;
        // 0x1994ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1994e8) {
            ctx->pc = 0x199500u;
            goto label_199500;
        }
    }
    ctx->pc = 0x1994F0u;
label_1994f0:
    // 0x1994f0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1994f4:
    if (ctx->pc == 0x1994F4u) {
        ctx->pc = 0x1994F8u;
        goto label_1994f8;
    }
    ctx->pc = 0x1994F0u;
    {
        const bool branch_taken_0x1994f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1994f0) {
            ctx->pc = 0x199518u;
            goto label_199518;
        }
    }
    ctx->pc = 0x1994F8u;
label_1994f8:
    // 0x1994f8: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1994fc:
    if (ctx->pc == 0x1994FCu) {
        ctx->pc = 0x1994FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994F8u;
        // 0x1994fc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199500u;
        goto label_199500;
    }
    ctx->pc = 0x1994F8u;
    {
        const bool branch_taken_0x1994f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1994FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994F8u;
        // 0x1994fc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1994f8) {
            ctx->pc = 0x199638u;
            goto label_199638;
        }
    }
    ctx->pc = 0x199500u;
label_199500:
    // 0x199500: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_199504:
    if (ctx->pc == 0x199504u) {
        ctx->pc = 0x199504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199500u;
        // 0x199504: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199508u;
        goto label_199508;
    }
    ctx->pc = 0x199500u;
    {
        const bool branch_taken_0x199500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x199504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199500u;
        // 0x199504: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199500) {
            ctx->pc = 0x1995E4u;
            goto label_1995e4;
        }
    }
    ctx->pc = 0x199508u;
label_199508:
    // 0x199508: 0x50620047  beql        $v1, $v0, . + 4 + (0x47 << 2)
label_19950c:
    if (ctx->pc == 0x19950Cu) {
        ctx->pc = 0x19950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199508u;
        // 0x19950c: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199510u;
        goto label_199510;
    }
    ctx->pc = 0x199508u;
    {
        const bool branch_taken_0x199508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x199508) {
            ctx->pc = 0x19950Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199508u;
            // 0x19950c: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199628u;
            goto label_199628;
        }
    }
    ctx->pc = 0x199510u;
label_199510:
    // 0x199510: 0x10000049  b           . + 4 + (0x49 << 2)
label_199514:
    if (ctx->pc == 0x199514u) {
        ctx->pc = 0x199514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199510u;
        // 0x199514: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199518u;
        goto label_199518;
    }
    ctx->pc = 0x199510u;
    {
        const bool branch_taken_0x199510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199510u;
        // 0x199514: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199510) {
            ctx->pc = 0x199638u;
            goto label_199638;
        }
    }
    ctx->pc = 0x199518u;
label_199518:
    // 0x199518: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x199518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_19951c:
    // 0x19951c: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x19951cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_199520:
    // 0x199520: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x199520u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_199524:
    // 0x199524: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x199524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_199528:
    // 0x199528: 0x40f809  jalr        $v0
label_19952c:
    if (ctx->pc == 0x19952Cu) {
        ctx->pc = 0x19952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199528u;
        // 0x19952c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199530u;
        goto label_199530;
    }
    ctx->pc = 0x199528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x199530u);
        ctx->pc = 0x19952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199528u;
        // 0x19952c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199528u, 0x199530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199530u;
label_199530:
    // 0x199530: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_199534:
    if (ctx->pc == 0x199534u) {
        ctx->pc = 0x199538u;
        goto label_199538;
    }
    ctx->pc = 0x199530u;
    {
        const bool branch_taken_0x199530 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x199530) {
            ctx->pc = 0x199550u;
            goto label_199550;
        }
    }
    ctx->pc = 0x199538u;
label_199538:
    // 0x199538: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x199538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19953c:
    // 0x19953c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19953cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_199540:
    // 0x199540: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x199540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_199544:
    // 0x199544: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x199544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_199548:
    // 0x199548: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x199548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19954c:
    // 0x19954c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19954cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_199550:
    // 0x199550: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x199550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_199554:
    // 0x199554: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x199554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_199558:
    // 0x199558: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x199558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19955c:
    // 0x19955c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19955cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199560:
    // 0x199560: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x199560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_199564:
    // 0x199564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199568:
    // 0x199568: 0xc0c1a0e  jal         func_306838
label_19956c:
    if (ctx->pc == 0x19956Cu) {
        ctx->pc = 0x19956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199568u;
        // 0x19956c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199570u;
        goto label_199570;
    }
    ctx->pc = 0x199568u;
    SET_GPR_U32(ctx, 31, 0x199570u);
    ctx->pc = 0x19956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199568u;
    // 0x19956c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x199568u, 0x199570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199570u;
label_199570:
    // 0x199570: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x199570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_199574:
    // 0x199574: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x199574u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199578:
    // 0x199578: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x199578u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19957c:
    // 0x19957c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19957cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199580:
    // 0x199580: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x199580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_199584:
    // 0x199584: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199588:
    // 0x199588: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x199588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19958c:
    // 0x19958c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19958cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199590:
    // 0x199590: 0xc0b2e92  jal         func_2CBA48
label_199594:
    if (ctx->pc == 0x199594u) {
        ctx->pc = 0x199594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199590u;
        // 0x199594: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199598u;
        goto label_199598;
    }
    ctx->pc = 0x199590u;
    SET_GPR_U32(ctx, 31, 0x199598u);
    ctx->pc = 0x199594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199590u;
    // 0x199594: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x199590u, 0x199598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199598u;
label_199598:
    // 0x199598: 0xc06668e  jal         func_199A38
label_19959c:
    if (ctx->pc == 0x19959Cu) {
        ctx->pc = 0x19959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199598u;
        // 0x19959c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1995A0u;
        goto label_1995a0;
    }
    ctx->pc = 0x199598u;
    SET_GPR_U32(ctx, 31, 0x1995A0u);
    ctx->pc = 0x19959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199598u;
    // 0x19959c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199A38u, 0x199598u, 0x1995A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1995A0u;
label_1995a0:
    // 0x1995a0: 0xc06de42  jal         func_1B7908
label_1995a4:
    if (ctx->pc == 0x1995A4u) {
        ctx->pc = 0x1995A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995A0u;
        // 0x1995a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1995A8u;
        goto label_1995a8;
    }
    ctx->pc = 0x1995A0u;
    SET_GPR_U32(ctx, 31, 0x1995A8u);
    ctx->pc = 0x1995A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1995A0u;
    // 0x1995a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x1995A0u, 0x1995A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1995A8u;
label_1995a8:
    // 0x1995a8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1995a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1995ac:
    // 0x1995ac: 0xa23002f5  sb          $s0, 0x2F5($s1)
    ctx->pc = 0x1995acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 16));
label_1995b0:
    // 0x1995b0: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x1995b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_1995b4:
    // 0x1995b4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1995b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1995b8:
    // 0x1995b8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1995b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1995bc:
    // 0x1995bc: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x1995bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_1995c0:
    // 0x1995c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1995c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1995c4:
    // 0x1995c4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1995c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1995c8:
    // 0x1995c8: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_1995cc:
    if (ctx->pc == 0x1995CCu) {
        ctx->pc = 0x1995CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995C8u;
        // 0x1995cc: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1995D0u;
        goto label_1995d0;
    }
    ctx->pc = 0x1995C8u;
    {
        const bool branch_taken_0x1995c8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1995CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995C8u;
        // 0x1995cc: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1995c8) {
            ctx->pc = 0x199634u;
            goto label_199634;
        }
    }
    ctx->pc = 0x1995D0u;
label_1995d0:
    // 0x1995d0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1995d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1995d4:
    // 0x1995d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1995d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1995d8:
    // 0x1995d8: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x1995d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_1995dc:
    // 0x1995dc: 0x10000013  b           . + 4 + (0x13 << 2)
label_1995e0:
    if (ctx->pc == 0x1995E0u) {
        ctx->pc = 0x1995E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995DCu;
        // 0x1995e0: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1995E4u;
        goto label_1995e4;
    }
    ctx->pc = 0x1995DCu;
    {
        const bool branch_taken_0x1995dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1995E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995DCu;
        // 0x1995e0: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1995dc) {
            ctx->pc = 0x19962Cu;
            goto label_19962c;
        }
    }
    ctx->pc = 0x1995E4u;
label_1995e4:
    // 0x1995e4: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x1995e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_1995e8:
    // 0x1995e8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1995e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_1995ec:
    // 0x1995ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1995ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1995f0:
    // 0x1995f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1995f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1995f4:
    // 0x1995f4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1995f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1995f8:
    // 0x1995f8: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x1995f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_1995fc:
    // 0x1995fc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1995fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_199600:
    // 0x199600: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x199600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199604:
    // 0x199604: 0x0  nop
    ctx->pc = 0x199604u;
    // NOP
label_199608:
    // 0x199608: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x199608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19960c:
    // 0x19960c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x19960cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_199610:
    // 0x199610: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_199614:
    if (ctx->pc == 0x199614u) {
        ctx->pc = 0x199614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199610u;
        // 0x199614: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x199618u;
        goto label_199618;
    }
    ctx->pc = 0x199610u;
    {
        const bool branch_taken_0x199610 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x199614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199610u;
        // 0x199614: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x199610) {
            ctx->pc = 0x199634u;
            goto label_199634;
        }
    }
    ctx->pc = 0x199618u;
label_199618:
    // 0x199618: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x199618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19961c:
    // 0x19961c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x19961cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_199620:
    // 0x199620: 0x10000003  b           . + 4 + (0x3 << 2)
label_199624:
    if (ctx->pc == 0x199624u) {
        ctx->pc = 0x199624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199620u;
        // 0x199624: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199628u;
        goto label_199628;
    }
    ctx->pc = 0x199620u;
    {
        const bool branch_taken_0x199620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199620u;
        // 0x199624: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199620) {
            ctx->pc = 0x199630u;
            goto label_199630;
        }
    }
    ctx->pc = 0x199628u;
label_199628:
    // 0x199628: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x199628u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_19962c:
    // 0x19962c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x19962cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_199630:
    // 0x199630: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x199630u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_199634:
    // 0x199634: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x199634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_199638:
    // 0x199638: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x199638u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19963c:
    // 0x19963c: 0x10560053  beq         $v0, $s6, . + 4 + (0x53 << 2)
label_199640:
    if (ctx->pc == 0x199640u) {
        ctx->pc = 0x199640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19963Cu;
        // 0x199640: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199644u;
        goto label_199644;
    }
    ctx->pc = 0x19963Cu;
    {
        const bool branch_taken_0x19963c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x199640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19963Cu;
        // 0x199640: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19963c) {
            ctx->pc = 0x19978Cu;
            goto label_19978c;
        }
    }
    ctx->pc = 0x199644u;
label_199644:
    // 0x199644: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x199644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_199648:
    // 0x199648: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x199648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_19964c:
    // 0x19964c: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x19964cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_199650:
    // 0x199650: 0x26350700  addiu       $s5, $s1, 0x700
    ctx->pc = 0x199650u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
label_199654:
    // 0x199654: 0x263006d0  addiu       $s0, $s1, 0x6D0
    ctx->pc = 0x199654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
label_199658:
    // 0x199658: 0x263406f0  addiu       $s4, $s1, 0x6F0
    ctx->pc = 0x199658u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_19965c:
    // 0x19965c: 0x263306e0  addiu       $s3, $s1, 0x6E0
    ctx->pc = 0x19965cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1760));
label_199660:
    // 0x199660: 0x263206c0  addiu       $s2, $s1, 0x6C0
    ctx->pc = 0x199660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
label_199664:
    // 0x199664: 0x0  nop
    ctx->pc = 0x199664u;
    // NOP
label_199668:
    // 0x199668: 0xc05ce40  jal         func_173900
label_19966c:
    if (ctx->pc == 0x19966Cu) {
        ctx->pc = 0x19966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199668u;
        // 0x19966c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199670u;
        goto label_199670;
    }
    ctx->pc = 0x199668u;
    SET_GPR_U32(ctx, 31, 0x199670u);
    ctx->pc = 0x19966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199668u;
    // 0x19966c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x199668u, 0x199670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199670u;
label_199670:
    // 0x199670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199674:
    // 0x199674: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_199678:
    if (ctx->pc == 0x199678u) {
        ctx->pc = 0x199678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199674u;
        // 0x199678: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19967Cu;
        goto label_19967c;
    }
    ctx->pc = 0x199674u;
    {
        const bool branch_taken_0x199674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x199674) {
            ctx->pc = 0x199678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199674u;
            // 0x199678: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199764u;
            goto label_199764;
        }
    }
    ctx->pc = 0x19967Cu;
label_19967c:
    // 0x19967c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x19967cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_199680:
    // 0x199680: 0xc0a4bd4  jal         func_292F50
label_199684:
    if (ctx->pc == 0x199684u) {
        ctx->pc = 0x199684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199680u;
        // 0x199684: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199688u;
        goto label_199688;
    }
    ctx->pc = 0x199680u;
    SET_GPR_U32(ctx, 31, 0x199688u);
    ctx->pc = 0x199684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199680u;
    // 0x199684: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x199680u, 0x199688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199688u;
label_199688:
    // 0x199688: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x199688u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_19968c:
    // 0x19968c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x19968cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_199690:
    // 0x199690: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x199690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_199694:
    // 0x199694: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x199694u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_199698:
    // 0x199698: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x199698u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_19969c:
    // 0x19969c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x19969cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1996a0:
    // 0x1996a0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1996a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1996a4:
    // 0x1996a4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1996a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1996a8:
    // 0x1996a8: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1996a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1996ac:
    // 0x1996ac: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1996acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1996b0:
    // 0x1996b0: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1996b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_1996b4:
    // 0x1996b4: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1996b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1996b8:
    // 0x1996b8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1996b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1996bc:
    // 0x1996bc: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1996bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_1996c0:
    // 0x1996c0: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1996c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1996c4:
    // 0x1996c4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1996c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1996c8:
    // 0x1996c8: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1996c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1996cc:
    // 0x1996cc: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1996ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1996d0:
    // 0x1996d0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1996d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1996d4:
    // 0x1996d4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1996d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1996d8:
    // 0x1996d8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1996d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1996dc:
    // 0x1996dc: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1996dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1996e0:
    // 0x1996e0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1996e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1996e4:
    // 0x1996e4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1996e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1996e8:
    // 0x1996e8: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1996e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1996ec:
    // 0x1996ec: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1996ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1996f0:
    // 0x1996f0: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1996f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1996f4:
    // 0x1996f4: 0xc07df68  jal         func_1F7DA0
label_1996f8:
    if (ctx->pc == 0x1996F8u) {
        ctx->pc = 0x1996F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1996F4u;
        // 0x1996f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1996FCu;
        goto label_1996fc;
    }
    ctx->pc = 0x1996F4u;
    SET_GPR_U32(ctx, 31, 0x1996FCu);
    ctx->pc = 0x1996F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1996F4u;
    // 0x1996f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1996F4u, 0x1996FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1996FCu;
label_1996fc:
    // 0x1996fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1996fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_199700:
    // 0x199700: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199704:
    // 0x199704: 0xc051dca  jal         func_147728
label_199708:
    if (ctx->pc == 0x199708u) {
        ctx->pc = 0x199708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199704u;
        // 0x199708: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19970Cu;
        goto label_19970c;
    }
    ctx->pc = 0x199704u;
    SET_GPR_U32(ctx, 31, 0x19970Cu);
    ctx->pc = 0x199708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199704u;
    // 0x199708: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x199704u, 0x19970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19970Cu;
label_19970c:
    // 0x19970c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19970cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_199710:
    // 0x199710: 0xc051f10  jal         func_147C40
label_199714:
    if (ctx->pc == 0x199714u) {
        ctx->pc = 0x199714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199710u;
        // 0x199714: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199718u;
        goto label_199718;
    }
    ctx->pc = 0x199710u;
    SET_GPR_U32(ctx, 31, 0x199718u);
    ctx->pc = 0x199714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199710u;
    // 0x199714: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x199710u, 0x199718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199718u;
label_199718:
    // 0x199718: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x199718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19971c:
    // 0x19971c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x19971cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_199720:
    // 0x199720: 0xc051efe  jal         func_147BF8
label_199724:
    if (ctx->pc == 0x199724u) {
        ctx->pc = 0x199724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199720u;
        // 0x199724: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199728u;
        goto label_199728;
    }
    ctx->pc = 0x199720u;
    SET_GPR_U32(ctx, 31, 0x199728u);
    ctx->pc = 0x199724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199720u;
    // 0x199724: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x199720u, 0x199728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199728u;
label_199728:
    // 0x199728: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x199728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_19972c:
    // 0x19972c: 0xc051d4a  jal         func_147528
label_199730:
    if (ctx->pc == 0x199730u) {
        ctx->pc = 0x199730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19972Cu;
        // 0x199730: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199734u;
        goto label_199734;
    }
    ctx->pc = 0x19972Cu;
    SET_GPR_U32(ctx, 31, 0x199734u);
    ctx->pc = 0x199730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19972Cu;
    // 0x199730: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x19972Cu, 0x199734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199734u;
label_199734:
    // 0x199734: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x199734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_199738:
    // 0x199738: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x199738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19973c:
    // 0x19973c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x19973cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_199740:
    // 0x199740: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x199740u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_199744:
    // 0x199744: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x199744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_199748:
    // 0x199748: 0x0  nop
    ctx->pc = 0x199748u;
    // NOP
label_19974c:
    // 0x19974c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_199750:
    if (ctx->pc == 0x199750u) {
        ctx->pc = 0x199750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19974Cu;
        // 0x199750: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x199754u;
        goto label_199754;
    }
    ctx->pc = 0x19974Cu;
    {
        const bool branch_taken_0x19974c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x199750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19974Cu;
        // 0x199750: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19974c) {
            ctx->pc = 0x199760u;
            goto label_199760;
        }
    }
    ctx->pc = 0x199754u;
label_199754:
    // 0x199754: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x199754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_199758:
    // 0x199758: 0xc05bd90  jal         func_16F640
label_19975c:
    if (ctx->pc == 0x19975Cu) {
        ctx->pc = 0x19975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199758u;
        // 0x19975c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199760u;
        goto label_199760;
    }
    ctx->pc = 0x199758u;
    SET_GPR_U32(ctx, 31, 0x199760u);
    ctx->pc = 0x19975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199758u;
    // 0x19975c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x199758u, 0x199760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199760u;
label_199760:
    // 0x199760: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x199760u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_199764:
    // 0x199764: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x199764u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_199768:
    // 0x199768: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x199768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_19976c:
    // 0x19976c: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x19976cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_199770:
    // 0x199770: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x199770u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_199774:
    // 0x199774: 0x2ac20009  slti        $v0, $s6, 0x9
    ctx->pc = 0x199774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)9) ? 1 : 0);
label_199778:
    // 0x199778: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19977c:
    if (ctx->pc == 0x19977Cu) {
        ctx->pc = 0x19977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199778u;
        // 0x19977c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199780u;
        goto label_199780;
    }
    ctx->pc = 0x199778u;
    {
        const bool branch_taken_0x199778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199778u;
        // 0x19977c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199778) {
            ctx->pc = 0x19978Cu;
            goto label_19978c;
        }
    }
    ctx->pc = 0x199780u;
label_199780:
    // 0x199780: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x199780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_199784:
    // 0x199784: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_199788:
    if (ctx->pc == 0x199788u) {
        ctx->pc = 0x19978Cu;
        goto label_19978c;
    }
    ctx->pc = 0x199784u;
    {
        const bool branch_taken_0x199784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x199784) {
            ctx->pc = 0x199668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199668;
        }
    }
    ctx->pc = 0x19978Cu;
label_19978c:
    // 0x19978c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x19978cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_199790:
    // 0x199790: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x199790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_199794:
    // 0x199794: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x199794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_199798:
    // 0x199798: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x199798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_19979c:
    // 0x19979c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x19979cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1997a0:
    // 0x1997a0: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x1997a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1997a4:
    // 0x1997a4: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x1997a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1997a8:
    // 0x1997a8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1997a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1997ac:
    // 0x1997ac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1997acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1997b0:
    // 0x1997b0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1997b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1997b4:
    // 0x1997b4: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x1997b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1997b8:
    // 0x1997b8: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1997b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1997bc:
    // 0x1997bc: 0x3e00008  jr          $ra
label_1997c0:
    if (ctx->pc == 0x1997C0u) {
        ctx->pc = 0x1997C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997BCu;
        // 0x1997c0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1997C4u;
        goto label_1997c4;
    }
    ctx->pc = 0x1997BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1997C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997BCu;
        // 0x1997c0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1997BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1997C4u;
label_1997c4:
    // 0x1997c4: 0x0  nop
    ctx->pc = 0x1997c4u;
    // NOP
    ctx->pc = 0x1997c8u;
}
