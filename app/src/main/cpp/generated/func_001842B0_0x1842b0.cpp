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

// Function: func_001842B0
// Address: 0x1842b0 - 0x1846d8
void func_001842B0_0x1842b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001842B0_0x1842b0");
#endif

    switch (ctx->pc) {
        case 0x1842b0u: goto label_1842b0;
        case 0x1842b4u: goto label_1842b4;
        case 0x1842b8u: goto label_1842b8;
        case 0x1842bcu: goto label_1842bc;
        case 0x1842c0u: goto label_1842c0;
        case 0x1842c4u: goto label_1842c4;
        case 0x1842c8u: goto label_1842c8;
        case 0x1842ccu: goto label_1842cc;
        case 0x1842d0u: goto label_1842d0;
        case 0x1842d4u: goto label_1842d4;
        case 0x1842d8u: goto label_1842d8;
        case 0x1842dcu: goto label_1842dc;
        case 0x1842e0u: goto label_1842e0;
        case 0x1842e4u: goto label_1842e4;
        case 0x1842e8u: goto label_1842e8;
        case 0x1842ecu: goto label_1842ec;
        case 0x1842f0u: goto label_1842f0;
        case 0x1842f4u: goto label_1842f4;
        case 0x1842f8u: goto label_1842f8;
        case 0x1842fcu: goto label_1842fc;
        case 0x184300u: goto label_184300;
        case 0x184304u: goto label_184304;
        case 0x184308u: goto label_184308;
        case 0x18430cu: goto label_18430c;
        case 0x184310u: goto label_184310;
        case 0x184314u: goto label_184314;
        case 0x184318u: goto label_184318;
        case 0x18431cu: goto label_18431c;
        case 0x184320u: goto label_184320;
        case 0x184324u: goto label_184324;
        case 0x184328u: goto label_184328;
        case 0x18432cu: goto label_18432c;
        case 0x184330u: goto label_184330;
        case 0x184334u: goto label_184334;
        case 0x184338u: goto label_184338;
        case 0x18433cu: goto label_18433c;
        case 0x184340u: goto label_184340;
        case 0x184344u: goto label_184344;
        case 0x184348u: goto label_184348;
        case 0x18434cu: goto label_18434c;
        case 0x184350u: goto label_184350;
        case 0x184354u: goto label_184354;
        case 0x184358u: goto label_184358;
        case 0x18435cu: goto label_18435c;
        case 0x184360u: goto label_184360;
        case 0x184364u: goto label_184364;
        case 0x184368u: goto label_184368;
        case 0x18436cu: goto label_18436c;
        case 0x184370u: goto label_184370;
        case 0x184374u: goto label_184374;
        case 0x184378u: goto label_184378;
        case 0x18437cu: goto label_18437c;
        case 0x184380u: goto label_184380;
        case 0x184384u: goto label_184384;
        case 0x184388u: goto label_184388;
        case 0x18438cu: goto label_18438c;
        case 0x184390u: goto label_184390;
        case 0x184394u: goto label_184394;
        case 0x184398u: goto label_184398;
        case 0x18439cu: goto label_18439c;
        case 0x1843a0u: goto label_1843a0;
        case 0x1843a4u: goto label_1843a4;
        case 0x1843a8u: goto label_1843a8;
        case 0x1843acu: goto label_1843ac;
        case 0x1843b0u: goto label_1843b0;
        case 0x1843b4u: goto label_1843b4;
        case 0x1843b8u: goto label_1843b8;
        case 0x1843bcu: goto label_1843bc;
        case 0x1843c0u: goto label_1843c0;
        case 0x1843c4u: goto label_1843c4;
        case 0x1843c8u: goto label_1843c8;
        case 0x1843ccu: goto label_1843cc;
        case 0x1843d0u: goto label_1843d0;
        case 0x1843d4u: goto label_1843d4;
        case 0x1843d8u: goto label_1843d8;
        case 0x1843dcu: goto label_1843dc;
        case 0x1843e0u: goto label_1843e0;
        case 0x1843e4u: goto label_1843e4;
        case 0x1843e8u: goto label_1843e8;
        case 0x1843ecu: goto label_1843ec;
        case 0x1843f0u: goto label_1843f0;
        case 0x1843f4u: goto label_1843f4;
        case 0x1843f8u: goto label_1843f8;
        case 0x1843fcu: goto label_1843fc;
        case 0x184400u: goto label_184400;
        case 0x184404u: goto label_184404;
        case 0x184408u: goto label_184408;
        case 0x18440cu: goto label_18440c;
        case 0x184410u: goto label_184410;
        case 0x184414u: goto label_184414;
        case 0x184418u: goto label_184418;
        case 0x18441cu: goto label_18441c;
        case 0x184420u: goto label_184420;
        case 0x184424u: goto label_184424;
        case 0x184428u: goto label_184428;
        case 0x18442cu: goto label_18442c;
        case 0x184430u: goto label_184430;
        case 0x184434u: goto label_184434;
        case 0x184438u: goto label_184438;
        case 0x18443cu: goto label_18443c;
        case 0x184440u: goto label_184440;
        case 0x184444u: goto label_184444;
        case 0x184448u: goto label_184448;
        case 0x18444cu: goto label_18444c;
        case 0x184450u: goto label_184450;
        case 0x184454u: goto label_184454;
        case 0x184458u: goto label_184458;
        case 0x18445cu: goto label_18445c;
        case 0x184460u: goto label_184460;
        case 0x184464u: goto label_184464;
        case 0x184468u: goto label_184468;
        case 0x18446cu: goto label_18446c;
        case 0x184470u: goto label_184470;
        case 0x184474u: goto label_184474;
        case 0x184478u: goto label_184478;
        case 0x18447cu: goto label_18447c;
        case 0x184480u: goto label_184480;
        case 0x184484u: goto label_184484;
        case 0x184488u: goto label_184488;
        case 0x18448cu: goto label_18448c;
        case 0x184490u: goto label_184490;
        case 0x184494u: goto label_184494;
        case 0x184498u: goto label_184498;
        case 0x18449cu: goto label_18449c;
        case 0x1844a0u: goto label_1844a0;
        case 0x1844a4u: goto label_1844a4;
        case 0x1844a8u: goto label_1844a8;
        case 0x1844acu: goto label_1844ac;
        case 0x1844b0u: goto label_1844b0;
        case 0x1844b4u: goto label_1844b4;
        case 0x1844b8u: goto label_1844b8;
        case 0x1844bcu: goto label_1844bc;
        case 0x1844c0u: goto label_1844c0;
        case 0x1844c4u: goto label_1844c4;
        case 0x1844c8u: goto label_1844c8;
        case 0x1844ccu: goto label_1844cc;
        case 0x1844d0u: goto label_1844d0;
        case 0x1844d4u: goto label_1844d4;
        case 0x1844d8u: goto label_1844d8;
        case 0x1844dcu: goto label_1844dc;
        case 0x1844e0u: goto label_1844e0;
        case 0x1844e4u: goto label_1844e4;
        case 0x1844e8u: goto label_1844e8;
        case 0x1844ecu: goto label_1844ec;
        case 0x1844f0u: goto label_1844f0;
        case 0x1844f4u: goto label_1844f4;
        case 0x1844f8u: goto label_1844f8;
        case 0x1844fcu: goto label_1844fc;
        case 0x184500u: goto label_184500;
        case 0x184504u: goto label_184504;
        case 0x184508u: goto label_184508;
        case 0x18450cu: goto label_18450c;
        case 0x184510u: goto label_184510;
        case 0x184514u: goto label_184514;
        case 0x184518u: goto label_184518;
        case 0x18451cu: goto label_18451c;
        case 0x184520u: goto label_184520;
        case 0x184524u: goto label_184524;
        case 0x184528u: goto label_184528;
        case 0x18452cu: goto label_18452c;
        case 0x184530u: goto label_184530;
        case 0x184534u: goto label_184534;
        case 0x184538u: goto label_184538;
        case 0x18453cu: goto label_18453c;
        case 0x184540u: goto label_184540;
        case 0x184544u: goto label_184544;
        case 0x184548u: goto label_184548;
        case 0x18454cu: goto label_18454c;
        case 0x184550u: goto label_184550;
        case 0x184554u: goto label_184554;
        case 0x184558u: goto label_184558;
        case 0x18455cu: goto label_18455c;
        case 0x184560u: goto label_184560;
        case 0x184564u: goto label_184564;
        case 0x184568u: goto label_184568;
        case 0x18456cu: goto label_18456c;
        case 0x184570u: goto label_184570;
        case 0x184574u: goto label_184574;
        case 0x184578u: goto label_184578;
        case 0x18457cu: goto label_18457c;
        case 0x184580u: goto label_184580;
        case 0x184584u: goto label_184584;
        case 0x184588u: goto label_184588;
        case 0x18458cu: goto label_18458c;
        case 0x184590u: goto label_184590;
        case 0x184594u: goto label_184594;
        case 0x184598u: goto label_184598;
        case 0x18459cu: goto label_18459c;
        case 0x1845a0u: goto label_1845a0;
        case 0x1845a4u: goto label_1845a4;
        case 0x1845a8u: goto label_1845a8;
        case 0x1845acu: goto label_1845ac;
        case 0x1845b0u: goto label_1845b0;
        case 0x1845b4u: goto label_1845b4;
        case 0x1845b8u: goto label_1845b8;
        case 0x1845bcu: goto label_1845bc;
        case 0x1845c0u: goto label_1845c0;
        case 0x1845c4u: goto label_1845c4;
        case 0x1845c8u: goto label_1845c8;
        case 0x1845ccu: goto label_1845cc;
        case 0x1845d0u: goto label_1845d0;
        case 0x1845d4u: goto label_1845d4;
        case 0x1845d8u: goto label_1845d8;
        case 0x1845dcu: goto label_1845dc;
        case 0x1845e0u: goto label_1845e0;
        case 0x1845e4u: goto label_1845e4;
        case 0x1845e8u: goto label_1845e8;
        case 0x1845ecu: goto label_1845ec;
        case 0x1845f0u: goto label_1845f0;
        case 0x1845f4u: goto label_1845f4;
        case 0x1845f8u: goto label_1845f8;
        case 0x1845fcu: goto label_1845fc;
        case 0x184600u: goto label_184600;
        case 0x184604u: goto label_184604;
        case 0x184608u: goto label_184608;
        case 0x18460cu: goto label_18460c;
        case 0x184610u: goto label_184610;
        case 0x184614u: goto label_184614;
        case 0x184618u: goto label_184618;
        case 0x18461cu: goto label_18461c;
        case 0x184620u: goto label_184620;
        case 0x184624u: goto label_184624;
        case 0x184628u: goto label_184628;
        case 0x18462cu: goto label_18462c;
        case 0x184630u: goto label_184630;
        case 0x184634u: goto label_184634;
        case 0x184638u: goto label_184638;
        case 0x18463cu: goto label_18463c;
        case 0x184640u: goto label_184640;
        case 0x184644u: goto label_184644;
        case 0x184648u: goto label_184648;
        case 0x18464cu: goto label_18464c;
        case 0x184650u: goto label_184650;
        case 0x184654u: goto label_184654;
        case 0x184658u: goto label_184658;
        case 0x18465cu: goto label_18465c;
        case 0x184660u: goto label_184660;
        case 0x184664u: goto label_184664;
        case 0x184668u: goto label_184668;
        case 0x18466cu: goto label_18466c;
        case 0x184670u: goto label_184670;
        case 0x184674u: goto label_184674;
        case 0x184678u: goto label_184678;
        case 0x18467cu: goto label_18467c;
        case 0x184680u: goto label_184680;
        case 0x184684u: goto label_184684;
        case 0x184688u: goto label_184688;
        case 0x18468cu: goto label_18468c;
        case 0x184690u: goto label_184690;
        case 0x184694u: goto label_184694;
        case 0x184698u: goto label_184698;
        case 0x18469cu: goto label_18469c;
        case 0x1846a0u: goto label_1846a0;
        case 0x1846a4u: goto label_1846a4;
        case 0x1846a8u: goto label_1846a8;
        case 0x1846acu: goto label_1846ac;
        case 0x1846b0u: goto label_1846b0;
        case 0x1846b4u: goto label_1846b4;
        case 0x1846b8u: goto label_1846b8;
        case 0x1846bcu: goto label_1846bc;
        case 0x1846c0u: goto label_1846c0;
        case 0x1846c4u: goto label_1846c4;
        case 0x1846c8u: goto label_1846c8;
        case 0x1846ccu: goto label_1846cc;
        case 0x1846d0u: goto label_1846d0;
        case 0x1846d4u: goto label_1846d4;
        default: break;
    }

    ctx->pc = 0x1842b0u;

label_1842b0:
    // 0x1842b0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1842b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1842b4:
    // 0x1842b4: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1842b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_1842b8:
    // 0x1842b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1842b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1842bc:
    // 0x1842bc: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1842bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_1842c0:
    // 0x1842c0: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1842c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_1842c4:
    // 0x1842c4: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1842c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_1842c8:
    // 0x1842c8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1842c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_1842cc:
    // 0x1842cc: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x1842ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_1842d0:
    // 0x1842d0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1842d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1842d4:
    // 0x1842d4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1842d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1842d8:
    // 0x1842d8: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x1842d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_1842dc:
    // 0x1842dc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1842dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1842e0:
    // 0x1842e0: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x1842e0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1842e4:
    // 0x1842e4: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x1842e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1842e8:
    // 0x1842e8: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x1842e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1842ec:
    // 0x1842ec: 0xc06199c  jal         func_186670
label_1842f0:
    if (ctx->pc == 0x1842F0u) {
        ctx->pc = 0x1842F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1842ECu;
        // 0x1842f0: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1842F4u;
        goto label_1842f4;
    }
    ctx->pc = 0x1842ECu;
    SET_GPR_U32(ctx, 31, 0x1842F4u);
    ctx->pc = 0x1842F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1842ECu;
    // 0x1842f0: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186670u, 0x1842ECu, 0x1842F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1842F4u;
label_1842f4:
    // 0x1842f4: 0x54400078  bnel        $v0, $zero, . + 4 + (0x78 << 2)
label_1842f8:
    if (ctx->pc == 0x1842F8u) {
        ctx->pc = 0x1842F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1842F4u;
        // 0x1842f8: 0x9222065c  lbu         $v0, 0x65C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1842FCu;
        goto label_1842fc;
    }
    ctx->pc = 0x1842F4u;
    {
        const bool branch_taken_0x1842f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1842f4) {
            ctx->pc = 0x1842F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1842F4u;
            // 0x1842f8: 0x9222065c  lbu         $v0, 0x65C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1844D8u;
            goto label_1844d8;
        }
    }
    ctx->pc = 0x1842FCu;
label_1842fc:
    // 0x1842fc: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x1842fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_184300:
    // 0x184300: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x184300u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_184304:
    // 0x184304: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x184304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_184308:
    // 0x184308: 0xc0611b6  jal         func_1846D8
label_18430c:
    if (ctx->pc == 0x18430Cu) {
        ctx->pc = 0x18430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184308u;
        // 0x18430c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184310u;
        goto label_184310;
    }
    ctx->pc = 0x184308u;
    SET_GPR_U32(ctx, 31, 0x184310u);
    ctx->pc = 0x18430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184308u;
    // 0x18430c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1846D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1846D8u, 0x184308u, 0x184310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184310u;
label_184310:
    // 0x184310: 0xc0618e6  jal         func_186398
label_184314:
    if (ctx->pc == 0x184314u) {
        ctx->pc = 0x184314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184310u;
        // 0x184314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184318u;
        goto label_184318;
    }
    ctx->pc = 0x184310u;
    SET_GPR_U32(ctx, 31, 0x184318u);
    ctx->pc = 0x184314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184310u;
    // 0x184314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186398u, 0x184310u, 0x184318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184318u;
label_184318:
    // 0x184318: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x184318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_18431c:
    // 0x18431c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x18431cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_184320:
    // 0x184320: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x184320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_184324:
    // 0x184324: 0x40f809  jalr        $v0
label_184328:
    if (ctx->pc == 0x184328u) {
        ctx->pc = 0x184328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184324u;
        // 0x184328: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18432Cu;
        goto label_18432c;
    }
    ctx->pc = 0x184324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18432Cu);
        ctx->pc = 0x184328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184324u;
        // 0x184328: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184324u, 0x18432Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18432Cu;
label_18432c:
    // 0x18432c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x18432cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184330:
    // 0x184330: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x184330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_184334:
    // 0x184334: 0xc07df52  jal         func_1F7D48
label_184338:
    if (ctx->pc == 0x184338u) {
        ctx->pc = 0x184338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184334u;
        // 0x184338: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18433Cu;
        goto label_18433c;
    }
    ctx->pc = 0x184334u;
    SET_GPR_U32(ctx, 31, 0x18433Cu);
    ctx->pc = 0x184338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184334u;
    // 0x184338: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x184334u, 0x18433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18433Cu;
label_18433c:
    // 0x18433c: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x18433cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_184340:
    // 0x184340: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x184340u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_184344:
    // 0x184344: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x184344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_184348:
    // 0x184348: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x184348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_18434c:
    // 0x18434c: 0x40f809  jalr        $v0
label_184350:
    if (ctx->pc == 0x184350u) {
        ctx->pc = 0x184350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18434Cu;
        // 0x184350: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184354u;
        goto label_184354;
    }
    ctx->pc = 0x18434Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184354u);
        ctx->pc = 0x184350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18434Cu;
        // 0x184350: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18434Cu, 0x184354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184354u;
label_184354:
    // 0x184354: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x184354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184358:
    // 0x184358: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x184358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_18435c:
    // 0x18435c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x18435cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_184360:
    // 0x184360: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x184360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_184364:
    // 0x184364: 0xc07df52  jal         func_1F7D48
label_184368:
    if (ctx->pc == 0x184368u) {
        ctx->pc = 0x184368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184364u;
        // 0x184368: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18436Cu;
        goto label_18436c;
    }
    ctx->pc = 0x184364u;
    SET_GPR_U32(ctx, 31, 0x18436Cu);
    ctx->pc = 0x184368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184364u;
    // 0x184368: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x184364u, 0x18436Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18436Cu;
label_18436c:
    // 0x18436c: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x18436cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_184370:
    // 0x184370: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x184370u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_184374:
    // 0x184374: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x184374u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_184378:
    // 0x184378: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x184378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_18437c:
    // 0x18437c: 0x40f809  jalr        $v0
label_184380:
    if (ctx->pc == 0x184380u) {
        ctx->pc = 0x184380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18437Cu;
        // 0x184380: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184384u;
        goto label_184384;
    }
    ctx->pc = 0x18437Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184384u);
        ctx->pc = 0x184380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18437Cu;
        // 0x184380: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18437Cu, 0x184384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184384u;
label_184384:
    // 0x184384: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x184384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184388:
    // 0x184388: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x184388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_18438c:
    // 0x18438c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x18438cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_184390:
    // 0x184390: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x184390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_184394:
    // 0x184394: 0xc07df52  jal         func_1F7D48
label_184398:
    if (ctx->pc == 0x184398u) {
        ctx->pc = 0x184398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184394u;
        // 0x184398: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18439Cu;
        goto label_18439c;
    }
    ctx->pc = 0x184394u;
    SET_GPR_U32(ctx, 31, 0x18439Cu);
    ctx->pc = 0x184398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184394u;
    // 0x184398: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x184394u, 0x18439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18439Cu;
label_18439c:
    // 0x18439c: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x18439cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1843a0:
    // 0x1843a0: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x1843a0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_1843a4:
    // 0x1843a4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1843a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1843a8:
    // 0x1843a8: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1843a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1843ac:
    // 0x1843ac: 0x40f809  jalr        $v0
label_1843b0:
    if (ctx->pc == 0x1843B0u) {
        ctx->pc = 0x1843B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843ACu;
        // 0x1843b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1843B4u;
        goto label_1843b4;
    }
    ctx->pc = 0x1843ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1843B4u);
        ctx->pc = 0x1843B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843ACu;
        // 0x1843b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1843ACu, 0x1843B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1843B4u;
label_1843b4:
    // 0x1843b4: 0xc0b6dac  jal         func_2DB6B0
label_1843b8:
    if (ctx->pc == 0x1843B8u) {
        ctx->pc = 0x1843B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843B4u;
        // 0x1843b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1843BCu;
        goto label_1843bc;
    }
    ctx->pc = 0x1843B4u;
    SET_GPR_U32(ctx, 31, 0x1843BCu);
    ctx->pc = 0x1843B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1843B4u;
    // 0x1843b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1843B4u, 0x1843BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1843BCu;
label_1843bc:
    // 0x1843bc: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x1843bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_1843c0:
    // 0x1843c0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1843c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1843c4:
    // 0x1843c4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x1843c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1843c8:
    // 0x1843c8: 0xa0f809  jalr        $a1
label_1843cc:
    if (ctx->pc == 0x1843CCu) {
        ctx->pc = 0x1843CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843C8u;
        // 0x1843cc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1843D0u;
        goto label_1843d0;
    }
    ctx->pc = 0x1843C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1843D0u);
        ctx->pc = 0x1843CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843C8u;
        // 0x1843cc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1843C8u, 0x1843D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1843D0u;
label_1843d0:
    // 0x1843d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1843d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1843d4:
    // 0x1843d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1843d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1843d8:
    // 0x1843d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1843d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1843dc:
    // 0x1843dc: 0xc0b68b4  jal         func_2DA2D0
label_1843e0:
    if (ctx->pc == 0x1843E0u) {
        ctx->pc = 0x1843E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843DCu;
        // 0x1843e0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1843E4u;
        goto label_1843e4;
    }
    ctx->pc = 0x1843DCu;
    SET_GPR_U32(ctx, 31, 0x1843E4u);
    ctx->pc = 0x1843E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1843DCu;
    // 0x1843e0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2D0u, 0x1843DCu, 0x1843E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1843E4u;
label_1843e4:
    // 0x1843e4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1843e8:
    if (ctx->pc == 0x1843E8u) {
        ctx->pc = 0x1843E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843E4u;
        // 0x1843e8: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1843ECu;
        goto label_1843ec;
    }
    ctx->pc = 0x1843E4u;
    {
        const bool branch_taken_0x1843e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1843e4) {
            ctx->pc = 0x1843E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1843E4u;
            // 0x1843e8: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184400u;
            goto label_184400;
        }
    }
    ctx->pc = 0x1843ECu;
label_1843ec:
    // 0x1843ec: 0x9222065c  lbu         $v0, 0x65C($s1)
    ctx->pc = 0x1843ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
label_1843f0:
    // 0x1843f0: 0x5440003c  bnel        $v0, $zero, . + 4 + (0x3C << 2)
label_1843f4:
    if (ctx->pc == 0x1843F4u) {
        ctx->pc = 0x1843F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843F0u;
        // 0x1843f4: 0x9222065d  lbu         $v0, 0x65D($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1629)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1843F8u;
        goto label_1843f8;
    }
    ctx->pc = 0x1843F0u;
    {
        const bool branch_taken_0x1843f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1843f0) {
            ctx->pc = 0x1843F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1843F0u;
            // 0x1843f4: 0x9222065d  lbu         $v0, 0x65D($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1629)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1844E4u;
            goto label_1844e4;
        }
    }
    ctx->pc = 0x1843F8u;
label_1843f8:
    // 0x1843f8: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1843fc:
    if (ctx->pc == 0x1843FCu) {
        ctx->pc = 0x184400u;
        goto label_184400;
    }
    ctx->pc = 0x1843F8u;
    {
        const bool branch_taken_0x1843f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1843f8) {
            ctx->pc = 0x1844A4u;
            goto label_1844a4;
        }
    }
    ctx->pc = 0x184400u;
label_184400:
    // 0x184400: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x184400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_184404:
    // 0x184404: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x184404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_184408:
    // 0x184408: 0x40f809  jalr        $v0
label_18440c:
    if (ctx->pc == 0x18440Cu) {
        ctx->pc = 0x18440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184408u;
        // 0x18440c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184410u;
        goto label_184410;
    }
    ctx->pc = 0x184408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184410u);
        ctx->pc = 0x18440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184408u;
        // 0x18440c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184408u, 0x184410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184410u;
label_184410:
    // 0x184410: 0xc0b6dac  jal         func_2DB6B0
label_184414:
    if (ctx->pc == 0x184414u) {
        ctx->pc = 0x184414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184410u;
        // 0x184414: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184418u;
        goto label_184418;
    }
    ctx->pc = 0x184410u;
    SET_GPR_U32(ctx, 31, 0x184418u);
    ctx->pc = 0x184414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184410u;
    // 0x184414: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x184410u, 0x184418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184418u;
label_184418:
    // 0x184418: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x184418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_18441c:
    // 0x18441c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x18441cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_184420:
    // 0x184420: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x184420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_184424:
    // 0x184424: 0xa0f809  jalr        $a1
label_184428:
    if (ctx->pc == 0x184428u) {
        ctx->pc = 0x184428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184424u;
        // 0x184428: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18442Cu;
        goto label_18442c;
    }
    ctx->pc = 0x184424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x18442Cu);
        ctx->pc = 0x184428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184424u;
        // 0x184428: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184424u, 0x18442Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18442Cu;
label_18442c:
    // 0x18442c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18442cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184430:
    // 0x184430: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x184430u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_184434:
    // 0x184434: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x184434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184438:
    // 0x184438: 0xc0b68b4  jal         func_2DA2D0
label_18443c:
    if (ctx->pc == 0x18443Cu) {
        ctx->pc = 0x18443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184438u;
        // 0x18443c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x184440u;
        goto label_184440;
    }
    ctx->pc = 0x184438u;
    SET_GPR_U32(ctx, 31, 0x184440u);
    ctx->pc = 0x18443Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184438u;
    // 0x18443c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2D0u, 0x184438u, 0x184440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184440u;
label_184440:
    // 0x184440: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_184444:
    if (ctx->pc == 0x184444u) {
        ctx->pc = 0x184444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184440u;
        // 0x184444: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184448u;
        goto label_184448;
    }
    ctx->pc = 0x184440u;
    {
        const bool branch_taken_0x184440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184440) {
            ctx->pc = 0x184444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184440u;
            // 0x184444: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184450u;
            goto label_184450;
        }
    }
    ctx->pc = 0x184448u;
label_184448:
    // 0x184448: 0x10000014  b           . + 4 + (0x14 << 2)
label_18444c:
    if (ctx->pc == 0x18444Cu) {
        ctx->pc = 0x18444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184448u;
        // 0x18444c: 0x9222065f  lbu         $v0, 0x65F($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1631)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184450u;
        goto label_184450;
    }
    ctx->pc = 0x184448u;
    {
        const bool branch_taken_0x184448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184448u;
        // 0x18444c: 0x9222065f  lbu         $v0, 0x65F($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1631)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184448) {
            ctx->pc = 0x18449Cu;
            goto label_18449c;
        }
    }
    ctx->pc = 0x184450u;
label_184450:
    // 0x184450: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x184450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_184454:
    // 0x184454: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x184454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_184458:
    // 0x184458: 0x40f809  jalr        $v0
label_18445c:
    if (ctx->pc == 0x18445Cu) {
        ctx->pc = 0x18445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184458u;
        // 0x18445c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184460u;
        goto label_184460;
    }
    ctx->pc = 0x184458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184460u);
        ctx->pc = 0x18445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184458u;
        // 0x18445c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184458u, 0x184460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x184460u;
label_184460:
    // 0x184460: 0xc0b6dac  jal         func_2DB6B0
label_184464:
    if (ctx->pc == 0x184464u) {
        ctx->pc = 0x184464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184460u;
        // 0x184464: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184468u;
        goto label_184468;
    }
    ctx->pc = 0x184460u;
    SET_GPR_U32(ctx, 31, 0x184468u);
    ctx->pc = 0x184464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184460u;
    // 0x184464: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x184460u, 0x184468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184468u;
label_184468:
    // 0x184468: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x184468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_18446c:
    // 0x18446c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x18446cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_184470:
    // 0x184470: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x184470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_184474:
    // 0x184474: 0xa0f809  jalr        $a1
label_184478:
    if (ctx->pc == 0x184478u) {
        ctx->pc = 0x184478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184474u;
        // 0x184478: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18447Cu;
        goto label_18447c;
    }
    ctx->pc = 0x184474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x18447Cu);
        ctx->pc = 0x184478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184474u;
        // 0x184478: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184474u, 0x18447Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18447Cu;
label_18447c:
    // 0x18447c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18447cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184480:
    // 0x184480: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x184480u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_184484:
    // 0x184484: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x184484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184488:
    // 0x184488: 0xc0b68b4  jal         func_2DA2D0
label_18448c:
    if (ctx->pc == 0x18448Cu) {
        ctx->pc = 0x18448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184488u;
        // 0x18448c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x184490u;
        goto label_184490;
    }
    ctx->pc = 0x184488u;
    SET_GPR_U32(ctx, 31, 0x184490u);
    ctx->pc = 0x18448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184488u;
    // 0x18448c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2D0u, 0x184488u, 0x184490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184490u;
label_184490:
    // 0x184490: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_184494:
    if (ctx->pc == 0x184494u) {
        ctx->pc = 0x184494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184490u;
        // 0x184494: 0x9222065d  lbu         $v0, 0x65D($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1629)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184498u;
        goto label_184498;
    }
    ctx->pc = 0x184490u;
    {
        const bool branch_taken_0x184490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184490) {
            ctx->pc = 0x184494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184490u;
            // 0x184494: 0x9222065d  lbu         $v0, 0x65D($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1629)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1844BCu;
            goto label_1844bc;
        }
    }
    ctx->pc = 0x184498u;
label_184498:
    // 0x184498: 0x9222065e  lbu         $v0, 0x65E($s1)
    ctx->pc = 0x184498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1630)));
label_18449c:
    // 0x18449c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_1844a0:
    if (ctx->pc == 0x1844A0u) {
        ctx->pc = 0x1844A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18449Cu;
        // 0x1844a0: 0x9222065c  lbu         $v0, 0x65C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1844A4u;
        goto label_1844a4;
    }
    ctx->pc = 0x18449Cu;
    {
        const bool branch_taken_0x18449c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18449c) {
            ctx->pc = 0x1844A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18449Cu;
            // 0x1844a0: 0x9222065c  lbu         $v0, 0x65C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1844D8u;
            goto label_1844d8;
        }
    }
    ctx->pc = 0x1844A4u;
label_1844a4:
    // 0x1844a4: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x1844a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
label_1844a8:
    // 0x1844a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1844a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1844ac:
    // 0x1844ac: 0xc06dfb8  jal         func_1B7EE0
label_1844b0:
    if (ctx->pc == 0x1844B0u) {
        ctx->pc = 0x1844B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844ACu;
        // 0x1844b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1844B4u;
        goto label_1844b4;
    }
    ctx->pc = 0x1844ACu;
    SET_GPR_U32(ctx, 31, 0x1844B4u);
    ctx->pc = 0x1844B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1844ACu;
    // 0x1844b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7EE0u, 0x1844ACu, 0x1844B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1844B4u;
label_1844b4:
    // 0x1844b4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1844b8:
    if (ctx->pc == 0x1844B8u) {
        ctx->pc = 0x1844B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844B4u;
        // 0x1844b8: 0x9222065c  lbu         $v0, 0x65C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1844BCu;
        goto label_1844bc;
    }
    ctx->pc = 0x1844B4u;
    {
        const bool branch_taken_0x1844b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1844B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844B4u;
        // 0x1844b8: 0x9222065c  lbu         $v0, 0x65C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1844b4) {
            ctx->pc = 0x1844D8u;
            goto label_1844d8;
        }
    }
    ctx->pc = 0x1844BCu;
label_1844bc:
    // 0x1844bc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1844c0:
    if (ctx->pc == 0x1844C0u) {
        ctx->pc = 0x1844C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844BCu;
        // 0x1844c0: 0x9222065c  lbu         $v0, 0x65C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1844C4u;
        goto label_1844c4;
    }
    ctx->pc = 0x1844BCu;
    {
        const bool branch_taken_0x1844bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1844bc) {
            ctx->pc = 0x1844C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1844BCu;
            // 0x1844c0: 0x9222065c  lbu         $v0, 0x65C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1844D8u;
            goto label_1844d8;
        }
    }
    ctx->pc = 0x1844C4u;
label_1844c4:
    // 0x1844c4: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x1844c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
label_1844c8:
    // 0x1844c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1844c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1844cc:
    // 0x1844cc: 0xc06dfb8  jal         func_1B7EE0
label_1844d0:
    if (ctx->pc == 0x1844D0u) {
        ctx->pc = 0x1844D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844CCu;
        // 0x1844d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1844D4u;
        goto label_1844d4;
    }
    ctx->pc = 0x1844CCu;
    SET_GPR_U32(ctx, 31, 0x1844D4u);
    ctx->pc = 0x1844D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1844CCu;
    // 0x1844d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7EE0u, 0x1844CCu, 0x1844D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1844D4u;
label_1844d4:
    // 0x1844d4: 0x9222065c  lbu         $v0, 0x65C($s1)
    ctx->pc = 0x1844d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
label_1844d8:
    // 0x1844d8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1844dc:
    if (ctx->pc == 0x1844DCu) {
        ctx->pc = 0x1844E0u;
        goto label_1844e0;
    }
    ctx->pc = 0x1844D8u;
    {
        const bool branch_taken_0x1844d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1844d8) {
            ctx->pc = 0x18451Cu;
            goto label_18451c;
        }
    }
    ctx->pc = 0x1844E0u;
label_1844e0:
    // 0x1844e0: 0x9222065d  lbu         $v0, 0x65D($s1)
    ctx->pc = 0x1844e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1629)));
label_1844e4:
    // 0x1844e4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1844e8:
    if (ctx->pc == 0x1844E8u) {
        ctx->pc = 0x1844ECu;
        goto label_1844ec;
    }
    ctx->pc = 0x1844E4u;
    {
        const bool branch_taken_0x1844e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1844e4) {
            ctx->pc = 0x18451Cu;
            goto label_18451c;
        }
    }
    ctx->pc = 0x1844ECu;
label_1844ec:
    // 0x1844ec: 0x9222065e  lbu         $v0, 0x65E($s1)
    ctx->pc = 0x1844ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1630)));
label_1844f0:
    // 0x1844f0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1844f4:
    if (ctx->pc == 0x1844F4u) {
        ctx->pc = 0x1844F8u;
        goto label_1844f8;
    }
    ctx->pc = 0x1844F0u;
    {
        const bool branch_taken_0x1844f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1844f0) {
            ctx->pc = 0x18451Cu;
            goto label_18451c;
        }
    }
    ctx->pc = 0x1844F8u;
label_1844f8:
    // 0x1844f8: 0x9222065f  lbu         $v0, 0x65F($s1)
    ctx->pc = 0x1844f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1631)));
label_1844fc:
    // 0x1844fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_184500:
    if (ctx->pc == 0x184500u) {
        ctx->pc = 0x184504u;
        goto label_184504;
    }
    ctx->pc = 0x1844FCu;
    {
        const bool branch_taken_0x1844fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1844fc) {
            ctx->pc = 0x18451Cu;
            goto label_18451c;
        }
    }
    ctx->pc = 0x184504u;
label_184504:
    // 0x184504: 0x92220660  lbu         $v0, 0x660($s1)
    ctx->pc = 0x184504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1632)));
label_184508:
    // 0x184508: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18450c:
    if (ctx->pc == 0x18450Cu) {
        ctx->pc = 0x184510u;
        goto label_184510;
    }
    ctx->pc = 0x184508u;
    {
        const bool branch_taken_0x184508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184508) {
            ctx->pc = 0x18451Cu;
            goto label_18451c;
        }
    }
    ctx->pc = 0x184510u;
label_184510:
    // 0x184510: 0x92220661  lbu         $v0, 0x661($s1)
    ctx->pc = 0x184510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1633)));
label_184514:
    // 0x184514: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_184518:
    if (ctx->pc == 0x184518u) {
        ctx->pc = 0x18451Cu;
        goto label_18451c;
    }
    ctx->pc = 0x184514u;
    {
        const bool branch_taken_0x184514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184514) {
            ctx->pc = 0x184554u;
            goto label_184554;
        }
    }
    ctx->pc = 0x18451Cu;
label_18451c:
    // 0x18451c: 0xc061290  jal         func_184A40
label_184520:
    if (ctx->pc == 0x184520u) {
        ctx->pc = 0x184520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18451Cu;
        // 0x184520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184524u;
        goto label_184524;
    }
    ctx->pc = 0x18451Cu;
    SET_GPR_U32(ctx, 31, 0x184524u);
    ctx->pc = 0x184520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18451Cu;
    // 0x184520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A40u, 0x18451Cu, 0x184524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184524u;
label_184524:
    // 0x184524: 0xc0612d8  jal         func_184B60
label_184528:
    if (ctx->pc == 0x184528u) {
        ctx->pc = 0x184528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184524u;
        // 0x184528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18452Cu;
        goto label_18452c;
    }
    ctx->pc = 0x184524u;
    SET_GPR_U32(ctx, 31, 0x18452Cu);
    ctx->pc = 0x184528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184524u;
    // 0x184528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184B60u, 0x184524u, 0x18452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18452Cu;
label_18452c:
    // 0x18452c: 0xc061338  jal         func_184CE0
label_184530:
    if (ctx->pc == 0x184530u) {
        ctx->pc = 0x184530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18452Cu;
        // 0x184530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184534u;
        goto label_184534;
    }
    ctx->pc = 0x18452Cu;
    SET_GPR_U32(ctx, 31, 0x184534u);
    ctx->pc = 0x184530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18452Cu;
    // 0x184530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184CE0u, 0x18452Cu, 0x184534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184534u;
label_184534:
    // 0x184534: 0xc061398  jal         func_184E60
label_184538:
    if (ctx->pc == 0x184538u) {
        ctx->pc = 0x184538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184534u;
        // 0x184538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18453Cu;
        goto label_18453c;
    }
    ctx->pc = 0x184534u;
    SET_GPR_U32(ctx, 31, 0x18453Cu);
    ctx->pc = 0x184538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184534u;
    // 0x184538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184E60u, 0x184534u, 0x18453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18453Cu;
label_18453c:
    // 0x18453c: 0xc0613f8  jal         func_184FE0
label_184540:
    if (ctx->pc == 0x184540u) {
        ctx->pc = 0x184540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18453Cu;
        // 0x184540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184544u;
        goto label_184544;
    }
    ctx->pc = 0x18453Cu;
    SET_GPR_U32(ctx, 31, 0x184544u);
    ctx->pc = 0x184540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18453Cu;
    // 0x184540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184FE0u, 0x18453Cu, 0x184544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184544u;
label_184544:
    // 0x184544: 0xc06142c  jal         func_1850B0
label_184548:
    if (ctx->pc == 0x184548u) {
        ctx->pc = 0x184548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184544u;
        // 0x184548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18454Cu;
        goto label_18454c;
    }
    ctx->pc = 0x184544u;
    SET_GPR_U32(ctx, 31, 0x18454Cu);
    ctx->pc = 0x184548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184544u;
    // 0x184548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1850B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1850B0u, 0x184544u, 0x18454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18454Cu;
label_18454c:
    // 0x18454c: 0x10000004  b           . + 4 + (0x4 << 2)
label_184550:
    if (ctx->pc == 0x184550u) {
        ctx->pc = 0x184550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18454Cu;
        // 0x184550: 0x26320670  addiu       $s2, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184554u;
        goto label_184554;
    }
    ctx->pc = 0x18454Cu;
    {
        const bool branch_taken_0x18454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18454Cu;
        // 0x184550: 0x26320670  addiu       $s2, $s1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18454c) {
            ctx->pc = 0x184560u;
            goto label_184560;
        }
    }
    ctx->pc = 0x184554u;
label_184554:
    // 0x184554: 0xc061460  jal         func_185180
label_184558:
    if (ctx->pc == 0x184558u) {
        ctx->pc = 0x184558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184554u;
        // 0x184558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18455Cu;
        goto label_18455c;
    }
    ctx->pc = 0x184554u;
    SET_GPR_U32(ctx, 31, 0x18455Cu);
    ctx->pc = 0x184558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184554u;
    // 0x184558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185180u, 0x184554u, 0x18455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18455Cu;
label_18455c:
    // 0x18455c: 0x26320670  addiu       $s2, $s1, 0x670
    ctx->pc = 0x18455cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
label_184560:
    // 0x184560: 0x263406b0  addiu       $s4, $s1, 0x6B0
    ctx->pc = 0x184560u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1712));
label_184564:
    // 0x184564: 0x26300680  addiu       $s0, $s1, 0x680
    ctx->pc = 0x184564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1664));
label_184568:
    // 0x184568: 0x263306a0  addiu       $s3, $s1, 0x6A0
    ctx->pc = 0x184568u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1696));
label_18456c:
    // 0x18456c: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x18456cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_184570:
    // 0x184570: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x184570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_184574:
    // 0x184574: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x184574u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184578:
    // 0x184578: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x184578u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18457c:
    // 0x18457c: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x18457cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
label_184580:
    // 0x184580: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x184580u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_184584:
    // 0x184584: 0x26310690  addiu       $s1, $s1, 0x690
    ctx->pc = 0x184584u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1680));
label_184588:
    // 0x184588: 0xc05ce40  jal         func_173900
label_18458c:
    if (ctx->pc == 0x18458Cu) {
        ctx->pc = 0x18458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184588u;
        // 0x18458c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184590u;
        goto label_184590;
    }
    ctx->pc = 0x184588u;
    SET_GPR_U32(ctx, 31, 0x184590u);
    ctx->pc = 0x18458Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184588u;
    // 0x18458c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x184588u, 0x184590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184590u;
label_184590:
    // 0x184590: 0x545e003a  bnel        $v0, $fp, . + 4 + (0x3A << 2)
label_184594:
    if (ctx->pc == 0x184594u) {
        ctx->pc = 0x184594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184590u;
        // 0x184594: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184598u;
        goto label_184598;
    }
    ctx->pc = 0x184590u;
    {
        const bool branch_taken_0x184590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x184590) {
            ctx->pc = 0x184594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184590u;
            // 0x184594: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18467Cu;
            goto label_18467c;
        }
    }
    ctx->pc = 0x184598u;
label_184598:
    // 0x184598: 0xc0a4bd4  jal         func_292F50
label_18459c:
    if (ctx->pc == 0x18459Cu) {
        ctx->pc = 0x18459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184598u;
        // 0x18459c: 0x26e464f0  addiu       $a0, $s7, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1845A0u;
        goto label_1845a0;
    }
    ctx->pc = 0x184598u;
    SET_GPR_U32(ctx, 31, 0x1845A0u);
    ctx->pc = 0x18459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184598u;
    // 0x18459c: 0x26e464f0  addiu       $a0, $s7, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x184598u, 0x1845A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1845A0u;
label_1845a0:
    // 0x1845a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1845a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1845a4:
    // 0x1845a4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1845a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1845a8:
    // 0x1845a8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1845a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1845ac:
    // 0x1845ac: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1845acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1845b0:
    // 0x1845b0: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1845b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1845b4:
    // 0x1845b4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1845b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1845b8:
    // 0x1845b8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1845b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1845bc:
    // 0x1845bc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1845bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1845c0:
    // 0x1845c0: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1845c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1845c4:
    // 0x1845c4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1845c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1845c8:
    // 0x1845c8: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1845c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_1845cc:
    // 0x1845cc: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1845ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1845d0:
    // 0x1845d0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1845d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1845d4:
    // 0x1845d4: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1845d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_1845d8:
    // 0x1845d8: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1845d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1845dc:
    // 0x1845dc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1845dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1845e0:
    // 0x1845e0: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1845e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1845e4:
    // 0x1845e4: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1845e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1845e8:
    // 0x1845e8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1845e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1845ec:
    // 0x1845ec: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1845ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1845f0:
    // 0x1845f0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1845f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1845f4:
    // 0x1845f4: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1845f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1845f8:
    // 0x1845f8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1845f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1845fc:
    // 0x1845fc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1845fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_184600:
    // 0x184600: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x184600u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_184604:
    // 0x184604: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x184604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_184608:
    // 0x184608: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x184608u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_18460c:
    // 0x18460c: 0xc07df68  jal         func_1F7DA0
label_184610:
    if (ctx->pc == 0x184610u) {
        ctx->pc = 0x184610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18460Cu;
        // 0x184610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184614u;
        goto label_184614;
    }
    ctx->pc = 0x18460Cu;
    SET_GPR_U32(ctx, 31, 0x184614u);
    ctx->pc = 0x184610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18460Cu;
    // 0x184610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x18460Cu, 0x184614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184614u;
label_184614:
    // 0x184614: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x184614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_184618:
    // 0x184618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x184618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18461c:
    // 0x18461c: 0xc051dca  jal         func_147728
label_184620:
    if (ctx->pc == 0x184620u) {
        ctx->pc = 0x184620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18461Cu;
        // 0x184620: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184624u;
        goto label_184624;
    }
    ctx->pc = 0x18461Cu;
    SET_GPR_U32(ctx, 31, 0x184624u);
    ctx->pc = 0x184620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18461Cu;
    // 0x184620: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x18461Cu, 0x184624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184624u;
label_184624:
    // 0x184624: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x184624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_184628:
    // 0x184628: 0xc051f10  jal         func_147C40
label_18462c:
    if (ctx->pc == 0x18462Cu) {
        ctx->pc = 0x18462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184628u;
        // 0x18462c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184630u;
        goto label_184630;
    }
    ctx->pc = 0x184628u;
    SET_GPR_U32(ctx, 31, 0x184630u);
    ctx->pc = 0x18462Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184628u;
    // 0x18462c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x184628u, 0x184630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184630u;
label_184630:
    // 0x184630: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x184630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_184634:
    // 0x184634: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x184634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_184638:
    // 0x184638: 0xc051efe  jal         func_147BF8
label_18463c:
    if (ctx->pc == 0x18463Cu) {
        ctx->pc = 0x18463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184638u;
        // 0x18463c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184640u;
        goto label_184640;
    }
    ctx->pc = 0x184638u;
    SET_GPR_U32(ctx, 31, 0x184640u);
    ctx->pc = 0x18463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184638u;
    // 0x18463c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x184638u, 0x184640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184640u;
label_184640:
    // 0x184640: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x184640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_184644:
    // 0x184644: 0xc051d4a  jal         func_147528
label_184648:
    if (ctx->pc == 0x184648u) {
        ctx->pc = 0x184648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184644u;
        // 0x184648: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18464Cu;
        goto label_18464c;
    }
    ctx->pc = 0x184644u;
    SET_GPR_U32(ctx, 31, 0x18464Cu);
    ctx->pc = 0x184648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184644u;
    // 0x184648: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x184644u, 0x18464Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18464Cu;
label_18464c:
    // 0x18464c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x18464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184650:
    // 0x184650: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x184650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_184654:
    // 0x184654: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x184654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_184658:
    // 0x184658: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x184658u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18465c:
    // 0x18465c: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x18465cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_184660:
    // 0x184660: 0x0  nop
    ctx->pc = 0x184660u;
    // NOP
label_184664:
    // 0x184664: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_184668:
    if (ctx->pc == 0x184668u) {
        ctx->pc = 0x184668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184664u;
        // 0x184668: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18466Cu;
        goto label_18466c;
    }
    ctx->pc = 0x184664u;
    {
        const bool branch_taken_0x184664 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x184668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184664u;
        // 0x184668: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184664) {
            ctx->pc = 0x184678u;
            goto label_184678;
        }
    }
    ctx->pc = 0x18466Cu;
label_18466c:
    // 0x18466c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18466cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184670:
    // 0x184670: 0xc05bd90  jal         func_16F640
label_184674:
    if (ctx->pc == 0x184674u) {
        ctx->pc = 0x184674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184670u;
        // 0x184674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184678u;
        goto label_184678;
    }
    ctx->pc = 0x184670u;
    SET_GPR_U32(ctx, 31, 0x184678u);
    ctx->pc = 0x184674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184670u;
    // 0x184674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x184670u, 0x184678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184678u;
label_184678:
    // 0x184678: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x184678u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_18467c:
    // 0x18467c: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x18467cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_184680:
    // 0x184680: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x184680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_184684:
    // 0x184684: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x184684u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_184688:
    // 0x184688: 0x26310060  addiu       $s1, $s1, 0x60
    ctx->pc = 0x184688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_18468c:
    // 0x18468c: 0x2ec20014  sltiu       $v0, $s6, 0x14
    ctx->pc = 0x18468cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_184690:
    // 0x184690: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
label_184694:
    if (ctx->pc == 0x184694u) {
        ctx->pc = 0x184694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184690u;
        // 0x184694: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184698u;
        goto label_184698;
    }
    ctx->pc = 0x184690u;
    {
        const bool branch_taken_0x184690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184690u;
        // 0x184694: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184690) {
            ctx->pc = 0x184588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184588;
        }
    }
    ctx->pc = 0x184698u;
label_184698:
    // 0x184698: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x184698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_18469c:
    // 0x18469c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x18469cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1846a0:
    // 0x1846a0: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1846a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1846a4:
    // 0x1846a4: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1846a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1846a8:
    // 0x1846a8: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1846a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1846ac:
    // 0x1846ac: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x1846acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1846b0:
    // 0x1846b0: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1846b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1846b4:
    // 0x1846b4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1846b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1846b8:
    // 0x1846b8: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x1846b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1846bc:
    // 0x1846bc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1846bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1846c0:
    // 0x1846c0: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x1846c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1846c4:
    // 0x1846c4: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x1846c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1846c8:
    // 0x1846c8: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x1846c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1846cc:
    // 0x1846cc: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1846ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1846d0:
    // 0x1846d0: 0x3e00008  jr          $ra
label_1846d4:
    if (ctx->pc == 0x1846D4u) {
        ctx->pc = 0x1846D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1846D0u;
        // 0x1846d4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1846D8u;
        goto label_fallthrough_0x1846d0;
    }
    ctx->pc = 0x1846D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1846D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1846D0u;
        // 0x1846d4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1846D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1846d0:
    ctx->pc = 0x1846D8u;
}
