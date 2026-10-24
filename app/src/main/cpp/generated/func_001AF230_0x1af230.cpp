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

// Function: func_001AF230
// Address: 0x1af230 - 0x1af630
void func_001AF230_0x1af230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AF230_0x1af230");
#endif

    switch (ctx->pc) {
        case 0x1af230u: goto label_1af230;
        case 0x1af234u: goto label_1af234;
        case 0x1af238u: goto label_1af238;
        case 0x1af23cu: goto label_1af23c;
        case 0x1af240u: goto label_1af240;
        case 0x1af244u: goto label_1af244;
        case 0x1af248u: goto label_1af248;
        case 0x1af24cu: goto label_1af24c;
        case 0x1af250u: goto label_1af250;
        case 0x1af254u: goto label_1af254;
        case 0x1af258u: goto label_1af258;
        case 0x1af25cu: goto label_1af25c;
        case 0x1af260u: goto label_1af260;
        case 0x1af264u: goto label_1af264;
        case 0x1af268u: goto label_1af268;
        case 0x1af26cu: goto label_1af26c;
        case 0x1af270u: goto label_1af270;
        case 0x1af274u: goto label_1af274;
        case 0x1af278u: goto label_1af278;
        case 0x1af27cu: goto label_1af27c;
        case 0x1af280u: goto label_1af280;
        case 0x1af284u: goto label_1af284;
        case 0x1af288u: goto label_1af288;
        case 0x1af28cu: goto label_1af28c;
        case 0x1af290u: goto label_1af290;
        case 0x1af294u: goto label_1af294;
        case 0x1af298u: goto label_1af298;
        case 0x1af29cu: goto label_1af29c;
        case 0x1af2a0u: goto label_1af2a0;
        case 0x1af2a4u: goto label_1af2a4;
        case 0x1af2a8u: goto label_1af2a8;
        case 0x1af2acu: goto label_1af2ac;
        case 0x1af2b0u: goto label_1af2b0;
        case 0x1af2b4u: goto label_1af2b4;
        case 0x1af2b8u: goto label_1af2b8;
        case 0x1af2bcu: goto label_1af2bc;
        case 0x1af2c0u: goto label_1af2c0;
        case 0x1af2c4u: goto label_1af2c4;
        case 0x1af2c8u: goto label_1af2c8;
        case 0x1af2ccu: goto label_1af2cc;
        case 0x1af2d0u: goto label_1af2d0;
        case 0x1af2d4u: goto label_1af2d4;
        case 0x1af2d8u: goto label_1af2d8;
        case 0x1af2dcu: goto label_1af2dc;
        case 0x1af2e0u: goto label_1af2e0;
        case 0x1af2e4u: goto label_1af2e4;
        case 0x1af2e8u: goto label_1af2e8;
        case 0x1af2ecu: goto label_1af2ec;
        case 0x1af2f0u: goto label_1af2f0;
        case 0x1af2f4u: goto label_1af2f4;
        case 0x1af2f8u: goto label_1af2f8;
        case 0x1af2fcu: goto label_1af2fc;
        case 0x1af300u: goto label_1af300;
        case 0x1af304u: goto label_1af304;
        case 0x1af308u: goto label_1af308;
        case 0x1af30cu: goto label_1af30c;
        case 0x1af310u: goto label_1af310;
        case 0x1af314u: goto label_1af314;
        case 0x1af318u: goto label_1af318;
        case 0x1af31cu: goto label_1af31c;
        case 0x1af320u: goto label_1af320;
        case 0x1af324u: goto label_1af324;
        case 0x1af328u: goto label_1af328;
        case 0x1af32cu: goto label_1af32c;
        case 0x1af330u: goto label_1af330;
        case 0x1af334u: goto label_1af334;
        case 0x1af338u: goto label_1af338;
        case 0x1af33cu: goto label_1af33c;
        case 0x1af340u: goto label_1af340;
        case 0x1af344u: goto label_1af344;
        case 0x1af348u: goto label_1af348;
        case 0x1af34cu: goto label_1af34c;
        case 0x1af350u: goto label_1af350;
        case 0x1af354u: goto label_1af354;
        case 0x1af358u: goto label_1af358;
        case 0x1af35cu: goto label_1af35c;
        case 0x1af360u: goto label_1af360;
        case 0x1af364u: goto label_1af364;
        case 0x1af368u: goto label_1af368;
        case 0x1af36cu: goto label_1af36c;
        case 0x1af370u: goto label_1af370;
        case 0x1af374u: goto label_1af374;
        case 0x1af378u: goto label_1af378;
        case 0x1af37cu: goto label_1af37c;
        case 0x1af380u: goto label_1af380;
        case 0x1af384u: goto label_1af384;
        case 0x1af388u: goto label_1af388;
        case 0x1af38cu: goto label_1af38c;
        case 0x1af390u: goto label_1af390;
        case 0x1af394u: goto label_1af394;
        case 0x1af398u: goto label_1af398;
        case 0x1af39cu: goto label_1af39c;
        case 0x1af3a0u: goto label_1af3a0;
        case 0x1af3a4u: goto label_1af3a4;
        case 0x1af3a8u: goto label_1af3a8;
        case 0x1af3acu: goto label_1af3ac;
        case 0x1af3b0u: goto label_1af3b0;
        case 0x1af3b4u: goto label_1af3b4;
        case 0x1af3b8u: goto label_1af3b8;
        case 0x1af3bcu: goto label_1af3bc;
        case 0x1af3c0u: goto label_1af3c0;
        case 0x1af3c4u: goto label_1af3c4;
        case 0x1af3c8u: goto label_1af3c8;
        case 0x1af3ccu: goto label_1af3cc;
        case 0x1af3d0u: goto label_1af3d0;
        case 0x1af3d4u: goto label_1af3d4;
        case 0x1af3d8u: goto label_1af3d8;
        case 0x1af3dcu: goto label_1af3dc;
        case 0x1af3e0u: goto label_1af3e0;
        case 0x1af3e4u: goto label_1af3e4;
        case 0x1af3e8u: goto label_1af3e8;
        case 0x1af3ecu: goto label_1af3ec;
        case 0x1af3f0u: goto label_1af3f0;
        case 0x1af3f4u: goto label_1af3f4;
        case 0x1af3f8u: goto label_1af3f8;
        case 0x1af3fcu: goto label_1af3fc;
        case 0x1af400u: goto label_1af400;
        case 0x1af404u: goto label_1af404;
        case 0x1af408u: goto label_1af408;
        case 0x1af40cu: goto label_1af40c;
        case 0x1af410u: goto label_1af410;
        case 0x1af414u: goto label_1af414;
        case 0x1af418u: goto label_1af418;
        case 0x1af41cu: goto label_1af41c;
        case 0x1af420u: goto label_1af420;
        case 0x1af424u: goto label_1af424;
        case 0x1af428u: goto label_1af428;
        case 0x1af42cu: goto label_1af42c;
        case 0x1af430u: goto label_1af430;
        case 0x1af434u: goto label_1af434;
        case 0x1af438u: goto label_1af438;
        case 0x1af43cu: goto label_1af43c;
        case 0x1af440u: goto label_1af440;
        case 0x1af444u: goto label_1af444;
        case 0x1af448u: goto label_1af448;
        case 0x1af44cu: goto label_1af44c;
        case 0x1af450u: goto label_1af450;
        case 0x1af454u: goto label_1af454;
        case 0x1af458u: goto label_1af458;
        case 0x1af45cu: goto label_1af45c;
        case 0x1af460u: goto label_1af460;
        case 0x1af464u: goto label_1af464;
        case 0x1af468u: goto label_1af468;
        case 0x1af46cu: goto label_1af46c;
        case 0x1af470u: goto label_1af470;
        case 0x1af474u: goto label_1af474;
        case 0x1af478u: goto label_1af478;
        case 0x1af47cu: goto label_1af47c;
        case 0x1af480u: goto label_1af480;
        case 0x1af484u: goto label_1af484;
        case 0x1af488u: goto label_1af488;
        case 0x1af48cu: goto label_1af48c;
        case 0x1af490u: goto label_1af490;
        case 0x1af494u: goto label_1af494;
        case 0x1af498u: goto label_1af498;
        case 0x1af49cu: goto label_1af49c;
        case 0x1af4a0u: goto label_1af4a0;
        case 0x1af4a4u: goto label_1af4a4;
        case 0x1af4a8u: goto label_1af4a8;
        case 0x1af4acu: goto label_1af4ac;
        case 0x1af4b0u: goto label_1af4b0;
        case 0x1af4b4u: goto label_1af4b4;
        case 0x1af4b8u: goto label_1af4b8;
        case 0x1af4bcu: goto label_1af4bc;
        case 0x1af4c0u: goto label_1af4c0;
        case 0x1af4c4u: goto label_1af4c4;
        case 0x1af4c8u: goto label_1af4c8;
        case 0x1af4ccu: goto label_1af4cc;
        case 0x1af4d0u: goto label_1af4d0;
        case 0x1af4d4u: goto label_1af4d4;
        case 0x1af4d8u: goto label_1af4d8;
        case 0x1af4dcu: goto label_1af4dc;
        case 0x1af4e0u: goto label_1af4e0;
        case 0x1af4e4u: goto label_1af4e4;
        case 0x1af4e8u: goto label_1af4e8;
        case 0x1af4ecu: goto label_1af4ec;
        case 0x1af4f0u: goto label_1af4f0;
        case 0x1af4f4u: goto label_1af4f4;
        case 0x1af4f8u: goto label_1af4f8;
        case 0x1af4fcu: goto label_1af4fc;
        case 0x1af500u: goto label_1af500;
        case 0x1af504u: goto label_1af504;
        case 0x1af508u: goto label_1af508;
        case 0x1af50cu: goto label_1af50c;
        case 0x1af510u: goto label_1af510;
        case 0x1af514u: goto label_1af514;
        case 0x1af518u: goto label_1af518;
        case 0x1af51cu: goto label_1af51c;
        case 0x1af520u: goto label_1af520;
        case 0x1af524u: goto label_1af524;
        case 0x1af528u: goto label_1af528;
        case 0x1af52cu: goto label_1af52c;
        case 0x1af530u: goto label_1af530;
        case 0x1af534u: goto label_1af534;
        case 0x1af538u: goto label_1af538;
        case 0x1af53cu: goto label_1af53c;
        case 0x1af540u: goto label_1af540;
        case 0x1af544u: goto label_1af544;
        case 0x1af548u: goto label_1af548;
        case 0x1af54cu: goto label_1af54c;
        case 0x1af550u: goto label_1af550;
        case 0x1af554u: goto label_1af554;
        case 0x1af558u: goto label_1af558;
        case 0x1af55cu: goto label_1af55c;
        case 0x1af560u: goto label_1af560;
        case 0x1af564u: goto label_1af564;
        case 0x1af568u: goto label_1af568;
        case 0x1af56cu: goto label_1af56c;
        case 0x1af570u: goto label_1af570;
        case 0x1af574u: goto label_1af574;
        case 0x1af578u: goto label_1af578;
        case 0x1af57cu: goto label_1af57c;
        case 0x1af580u: goto label_1af580;
        case 0x1af584u: goto label_1af584;
        case 0x1af588u: goto label_1af588;
        case 0x1af58cu: goto label_1af58c;
        case 0x1af590u: goto label_1af590;
        case 0x1af594u: goto label_1af594;
        case 0x1af598u: goto label_1af598;
        case 0x1af59cu: goto label_1af59c;
        case 0x1af5a0u: goto label_1af5a0;
        case 0x1af5a4u: goto label_1af5a4;
        case 0x1af5a8u: goto label_1af5a8;
        case 0x1af5acu: goto label_1af5ac;
        case 0x1af5b0u: goto label_1af5b0;
        case 0x1af5b4u: goto label_1af5b4;
        case 0x1af5b8u: goto label_1af5b8;
        case 0x1af5bcu: goto label_1af5bc;
        case 0x1af5c0u: goto label_1af5c0;
        case 0x1af5c4u: goto label_1af5c4;
        case 0x1af5c8u: goto label_1af5c8;
        case 0x1af5ccu: goto label_1af5cc;
        case 0x1af5d0u: goto label_1af5d0;
        case 0x1af5d4u: goto label_1af5d4;
        case 0x1af5d8u: goto label_1af5d8;
        case 0x1af5dcu: goto label_1af5dc;
        case 0x1af5e0u: goto label_1af5e0;
        case 0x1af5e4u: goto label_1af5e4;
        case 0x1af5e8u: goto label_1af5e8;
        case 0x1af5ecu: goto label_1af5ec;
        case 0x1af5f0u: goto label_1af5f0;
        case 0x1af5f4u: goto label_1af5f4;
        case 0x1af5f8u: goto label_1af5f8;
        case 0x1af5fcu: goto label_1af5fc;
        case 0x1af600u: goto label_1af600;
        case 0x1af604u: goto label_1af604;
        case 0x1af608u: goto label_1af608;
        case 0x1af60cu: goto label_1af60c;
        case 0x1af610u: goto label_1af610;
        case 0x1af614u: goto label_1af614;
        case 0x1af618u: goto label_1af618;
        case 0x1af61cu: goto label_1af61c;
        case 0x1af620u: goto label_1af620;
        case 0x1af624u: goto label_1af624;
        case 0x1af628u: goto label_1af628;
        case 0x1af62cu: goto label_1af62c;
        default: break;
    }

    ctx->pc = 0x1af230u;

label_1af230:
    // 0x1af230: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1af230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1af234:
    // 0x1af234: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1af234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1af238:
    // 0x1af238: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1af238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1af23c:
    // 0x1af23c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1af23cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1af240:
    // 0x1af240: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1af240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1af244:
    // 0x1af244: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1af244u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1af248:
    // 0x1af248: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1af248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1af24c:
    // 0x1af24c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1af24cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1af250:
    // 0x1af250: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1af250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1af254:
    // 0x1af254: 0x40f809  jalr        $v0
label_1af258:
    if (ctx->pc == 0x1AF258u) {
        ctx->pc = 0x1AF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF254u;
        // 0x1af258: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF25Cu;
        goto label_1af25c;
    }
    ctx->pc = 0x1AF254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AF25Cu);
        ctx->pc = 0x1AF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF254u;
        // 0x1af258: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF254u, 0x1AF25Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF25Cu;
label_1af25c:
    // 0x1af25c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1af25cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1af260:
    // 0x1af260: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1af260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1af264:
    // 0x1af264: 0xc0b6dac  jal         func_2DB6B0
label_1af268:
    if (ctx->pc == 0x1AF268u) {
        ctx->pc = 0x1AF26Cu;
        goto label_1af26c;
    }
    ctx->pc = 0x1AF264u;
    SET_GPR_U32(ctx, 31, 0x1AF26Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1AF264u, 0x1AF26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF26Cu;
label_1af26c:
    // 0x1af26c: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x1af26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_1af270:
    // 0x1af270: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1af270u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1af274:
    // 0x1af274: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x1af274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1af278:
    // 0x1af278: 0xa0f809  jalr        $a1
label_1af27c:
    if (ctx->pc == 0x1AF27Cu) {
        ctx->pc = 0x1AF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF278u;
        // 0x1af27c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF280u;
        goto label_1af280;
    }
    ctx->pc = 0x1AF278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1AF280u);
        ctx->pc = 0x1AF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF278u;
        // 0x1af27c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF278u, 0x1AF280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF280u;
label_1af280:
    // 0x1af280: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1af280u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1af284:
    // 0x1af284: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1af284u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1af288:
    // 0x1af288: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1af288u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1af28c:
    // 0x1af28c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1af28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1af290:
    // 0x1af290: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1af290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_1af294:
    // 0x1af294: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1af294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_1af298:
    // 0x1af298: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
label_1af29c:
    if (ctx->pc == 0x1AF29Cu) {
        ctx->pc = 0x1AF29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF298u;
        // 0x1af29c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF2A0u;
        goto label_1af2a0;
    }
    ctx->pc = 0x1AF298u;
    {
        const bool branch_taken_0x1af298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF298u;
        // 0x1af29c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af298) {
            ctx->pc = 0x1AF618u;
            goto label_1af618;
        }
    }
    ctx->pc = 0x1AF2A0u;
label_1af2a0:
    // 0x1af2a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1af2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1af2a4:
    // 0x1af2a4: 0x24428050  addiu       $v0, $v0, -0x7FB0
    ctx->pc = 0x1af2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934608));
label_1af2a8:
    // 0x1af2a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1af2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1af2ac:
    // 0x1af2ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1af2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1af2b0:
    // 0x1af2b0: 0x800008  jr          $a0
label_1af2b4:
    if (ctx->pc == 0x1AF2B4u) {
        ctx->pc = 0x1AF2B8u;
        goto label_1af2b8;
    }
    ctx->pc = 0x1AF2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF2B8u: goto label_1af2b8;
            case 0x1AF2C4u: goto label_1af2c4;
            case 0x1AF3B8u: goto label_1af3b8;
            case 0x1AF574u: goto label_1af574;
            case 0x1AF600u: goto label_1af600;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF2B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1AF2B8u;
label_1af2b8:
    // 0x1af2b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af2bc:
    // 0x1af2bc: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1af2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1af2c0:
    // 0x1af2c0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1af2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1af2c4:
    // 0x1af2c4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1af2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1af2c8:
    // 0x1af2c8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1af2c8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1af2cc:
    // 0x1af2cc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1af2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_1af2d0:
    // 0x1af2d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1af2d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1af2d4:
    // 0x1af2d4: 0x0  nop
    ctx->pc = 0x1af2d4u;
    // NOP
label_1af2d8:
    // 0x1af2d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1af2d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1af2dc:
    // 0x1af2dc: 0x0  nop
    ctx->pc = 0x1af2dcu;
    // NOP
label_1af2e0:
    // 0x1af2e0: 0x450000cd  bc1f        . + 4 + (0xCD << 2)
label_1af2e4:
    if (ctx->pc == 0x1AF2E4u) {
        ctx->pc = 0x1AF2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2E0u;
        // 0x1af2e4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF2E8u;
        goto label_1af2e8;
    }
    ctx->pc = 0x1AF2E0u;
    {
        const bool branch_taken_0x1af2e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AF2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2E0u;
        // 0x1af2e4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af2e0) {
            ctx->pc = 0x1AF618u;
            goto label_1af618;
        }
    }
    ctx->pc = 0x1AF2E8u;
label_1af2e8:
    // 0x1af2e8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1af2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af2ec:
    // 0x1af2ec: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1af2ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1af2f0:
    // 0x1af2f0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1af2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_1af2f4:
    // 0x1af2f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1af2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1af2f8:
    // 0x1af2f8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1af2f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1af2fc:
    // 0x1af2fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1af2fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1af300:
    // 0x1af300: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1af300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1af304:
    // 0x1af304: 0x0  nop
    ctx->pc = 0x1af304u;
    // NOP
label_1af308:
    // 0x1af308: 0x450000c4  bc1f        . + 4 + (0xC4 << 2)
label_1af30c:
    if (ctx->pc == 0x1AF30Cu) {
        ctx->pc = 0x1AF30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF308u;
        // 0x1af30c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF310u;
        goto label_1af310;
    }
    ctx->pc = 0x1AF308u;
    {
        const bool branch_taken_0x1af308 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AF30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF308u;
        // 0x1af30c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af308) {
            ctx->pc = 0x1AF61Cu;
            goto label_1af61c;
        }
    }
    ctx->pc = 0x1AF310u;
label_1af310:
    // 0x1af310: 0x8e220980  lw          $v0, 0x980($s1)
    ctx->pc = 0x1af310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2432)));
label_1af314:
    // 0x1af314: 0x144000b7  bnez        $v0, . + 4 + (0xB7 << 2)
label_1af318:
    if (ctx->pc == 0x1AF318u) {
        ctx->pc = 0x1AF318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF314u;
        // 0x1af318: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF31Cu;
        goto label_1af31c;
    }
    ctx->pc = 0x1AF314u;
    {
        const bool branch_taken_0x1af314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF314u;
        // 0x1af318: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af314) {
            ctx->pc = 0x1AF5F4u;
            goto label_1af5f4;
        }
    }
    ctx->pc = 0x1AF31Cu;
label_1af31c:
    // 0x1af31c: 0xc0c7400  jal         func_31D000
label_1af320:
    if (ctx->pc == 0x1AF320u) {
        ctx->pc = 0x1AF324u;
        goto label_1af324;
    }
    ctx->pc = 0x1AF31Cu;
    SET_GPR_U32(ctx, 31, 0x1AF324u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1AF31Cu, 0x1AF324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF324u;
label_1af324:
    // 0x1af324: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1af324u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1af328:
    // 0x1af328: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x1af328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
label_1af32c:
    // 0x1af32c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1af32cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1af330:
    // 0x1af330: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af334:
    // 0x1af334: 0x0  nop
    ctx->pc = 0x1af334u;
    // NOP
label_1af338:
    // 0x1af338: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1af338u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1af33c:
    // 0x1af33c: 0x0  nop
    ctx->pc = 0x1af33cu;
    // NOP
label_1af340:
    // 0x1af340: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_1af344:
    if (ctx->pc == 0x1AF344u) {
        ctx->pc = 0x1AF344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF340u;
        // 0x1af344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF348u;
        goto label_1af348;
    }
    ctx->pc = 0x1AF340u;
    {
        const bool branch_taken_0x1af340 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AF344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF340u;
        // 0x1af344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af340) {
            ctx->pc = 0x1AF36Cu;
            goto label_1af36c;
        }
    }
    ctx->pc = 0x1AF348u;
label_1af348:
    // 0x1af348: 0x3c013f28  lui         $at, 0x3F28
    ctx->pc = 0x1af348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16168 << 16));
label_1af34c:
    // 0x1af34c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1af34cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_1af350:
    // 0x1af350: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af354:
    // 0x1af354: 0x0  nop
    ctx->pc = 0x1af354u;
    // NOP
label_1af358:
    // 0x1af358: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1af358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1af35c:
    // 0x1af35c: 0x0  nop
    ctx->pc = 0x1af35cu;
    // NOP
label_1af360:
    // 0x1af360: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1af364:
    if (ctx->pc == 0x1AF364u) {
        ctx->pc = 0x1AF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF360u;
        // 0x1af364: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF368u;
        goto label_1af368;
    }
    ctx->pc = 0x1AF360u;
    {
        const bool branch_taken_0x1af360 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF360u;
        // 0x1af364: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af360) {
            ctx->pc = 0x1AF36Cu;
            goto label_1af36c;
        }
    }
    ctx->pc = 0x1AF368u;
label_1af368:
    // 0x1af368: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1af368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1af36c:
    // 0x1af36c: 0xae220980  sw          $v0, 0x980($s1)
    ctx->pc = 0x1af36cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2432), GPR_U32(ctx, 2));
label_1af370:
    // 0x1af370: 0x8e230980  lw          $v1, 0x980($s1)
    ctx->pc = 0x1af370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2432)));
label_1af374:
    // 0x1af374: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1af374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1af378:
    // 0x1af378: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1af37c:
    if (ctx->pc == 0x1AF37Cu) {
        ctx->pc = 0x1AF37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF378u;
        // 0x1af37c: 0x24020096  addiu       $v0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF380u;
        goto label_1af380;
    }
    ctx->pc = 0x1AF378u;
    {
        const bool branch_taken_0x1af378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF378u;
        // 0x1af37c: 0x24020096  addiu       $v0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af378) {
            ctx->pc = 0x1AF3ACu;
            goto label_1af3ac;
        }
    }
    ctx->pc = 0x1AF380u;
label_1af380:
    // 0x1af380: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1af380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1af384:
    // 0x1af384: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1af388:
    if (ctx->pc == 0x1AF388u) {
        ctx->pc = 0x1AF388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF384u;
        // 0x1af388: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF38Cu;
        goto label_1af38c;
    }
    ctx->pc = 0x1AF384u;
    {
        const bool branch_taken_0x1af384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF384u;
        // 0x1af388: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af384) {
            ctx->pc = 0x1AF39Cu;
            goto label_1af39c;
        }
    }
    ctx->pc = 0x1AF38Cu;
label_1af38c:
    // 0x1af38c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1af390:
    if (ctx->pc == 0x1AF390u) {
        ctx->pc = 0x1AF390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF38Cu;
        // 0x1af390: 0x2402012c  addiu       $v0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF394u;
        goto label_1af394;
    }
    ctx->pc = 0x1AF38Cu;
    {
        const bool branch_taken_0x1af38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF38Cu;
        // 0x1af390: 0x2402012c  addiu       $v0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af38c) {
            ctx->pc = 0x1AF3ACu;
            goto label_1af3ac;
        }
    }
    ctx->pc = 0x1AF394u;
label_1af394:
    // 0x1af394: 0x10000097  b           . + 4 + (0x97 << 2)
label_1af398:
    if (ctx->pc == 0x1AF398u) {
        ctx->pc = 0x1AF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF394u;
        // 0x1af398: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF39Cu;
        goto label_1af39c;
    }
    ctx->pc = 0x1AF394u;
    {
        const bool branch_taken_0x1af394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF394u;
        // 0x1af398: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af394) {
            ctx->pc = 0x1AF5F4u;
            goto label_1af5f4;
        }
    }
    ctx->pc = 0x1AF39Cu;
label_1af39c:
    // 0x1af39c: 0x4630004  bgezl       $v1, . + 4 + (0x4 << 2)
label_1af3a0:
    if (ctx->pc == 0x1AF3A0u) {
        ctx->pc = 0x1AF3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF39Cu;
        // 0x1af3a0: 0xa6200984  sh          $zero, 0x984($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2436), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF3A4u;
        goto label_1af3a4;
    }
    ctx->pc = 0x1AF39Cu;
    {
        const bool branch_taken_0x1af39c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x1af39c) {
            ctx->pc = 0x1AF3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF39Cu;
            // 0x1af3a0: 0xa6200984  sh          $zero, 0x984($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 2436), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF3B0u;
            goto label_1af3b0;
        }
    }
    ctx->pc = 0x1AF3A4u;
label_1af3a4:
    // 0x1af3a4: 0x10000093  b           . + 4 + (0x93 << 2)
label_1af3a8:
    if (ctx->pc == 0x1AF3A8u) {
        ctx->pc = 0x1AF3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3A4u;
        // 0x1af3a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF3ACu;
        goto label_1af3ac;
    }
    ctx->pc = 0x1AF3A4u;
    {
        const bool branch_taken_0x1af3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3A4u;
        // 0x1af3a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af3a4) {
            ctx->pc = 0x1AF5F4u;
            goto label_1af5f4;
        }
    }
    ctx->pc = 0x1AF3ACu;
label_1af3ac:
    // 0x1af3ac: 0xa6220984  sh          $v0, 0x984($s1)
    ctx->pc = 0x1af3acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2436), (uint16_t)GPR_U32(ctx, 2));
label_1af3b0:
    // 0x1af3b0: 0x10000090  b           . + 4 + (0x90 << 2)
label_1af3b4:
    if (ctx->pc == 0x1AF3B4u) {
        ctx->pc = 0x1AF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3B0u;
        // 0x1af3b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF3B8u;
        goto label_1af3b8;
    }
    ctx->pc = 0x1AF3B0u;
    {
        const bool branch_taken_0x1af3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3B0u;
        // 0x1af3b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af3b0) {
            ctx->pc = 0x1AF5F4u;
            goto label_1af5f4;
        }
    }
    ctx->pc = 0x1AF3B8u;
label_1af3b8:
    // 0x1af3b8: 0x86220984  lh          $v0, 0x984($s1)
    ctx->pc = 0x1af3b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2436)));
label_1af3bc:
    // 0x1af3bc: 0x1c40005e  bgtz        $v0, . + 4 + (0x5E << 2)
label_1af3c0:
    if (ctx->pc == 0x1AF3C0u) {
        ctx->pc = 0x1AF3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3BCu;
        // 0x1af3c0: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF3C4u;
        goto label_1af3c4;
    }
    ctx->pc = 0x1AF3BCu;
    {
        const bool branch_taken_0x1af3bc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1AF3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3BCu;
        // 0x1af3c0: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af3bc) {
            ctx->pc = 0x1AF538u;
            goto label_1af538;
        }
    }
    ctx->pc = 0x1AF3C4u;
label_1af3c4:
    // 0x1af3c4: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x1af3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
label_1af3c8:
    // 0x1af3c8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1af3c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1af3cc:
    // 0x1af3cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af3ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af3d0:
    // 0x1af3d0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1af3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1af3d4:
    // 0x1af3d4: 0x26300990  addiu       $s0, $s1, 0x990
    ctx->pc = 0x1af3d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2448));
label_1af3d8:
    // 0x1af3d8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1af3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1af3dc:
    // 0x1af3dc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1af3dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1af3e0:
    // 0x1af3e0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1af3e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1af3e4:
    // 0x1af3e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af3e8:
    // 0x1af3e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1af3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1af3ec:
    // 0x1af3ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1af3ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af3f0:
    // 0x1af3f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1af3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1af3f4:
    // 0x1af3f4: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1af3f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1af3f8:
    // 0x1af3f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1af3f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af3fc:
    // 0x1af3fc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1af3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1af400:
    // 0x1af400: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1af400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1af404:
    // 0x1af404: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1af404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1af408:
    // 0x1af408: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x1af408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1af40c:
    // 0x1af40c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1af40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1af410:
    // 0x1af410: 0xc071a26  jal         func_1C6898
label_1af414:
    if (ctx->pc == 0x1AF414u) {
        ctx->pc = 0x1AF414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF410u;
        // 0x1af414: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF418u;
        goto label_1af418;
    }
    ctx->pc = 0x1AF410u;
    SET_GPR_U32(ctx, 31, 0x1AF418u);
    ctx->pc = 0x1AF414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF410u;
    // 0x1af414: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x1AF410u, 0x1AF418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF418u;
label_1af418:
    // 0x1af418: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1af418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1af41c:
    // 0x1af41c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1af41cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1af420:
    // 0x1af420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af424:
    // 0x1af424: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1af424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1af428:
    // 0x1af428: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1af428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1af42c:
    // 0x1af42c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1af42cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1af430:
    // 0x1af430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af434:
    // 0x1af434: 0xc071f54  jal         func_1C7D50
label_1af438:
    if (ctx->pc == 0x1AF438u) {
        ctx->pc = 0x1AF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF434u;
        // 0x1af438: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF43Cu;
        goto label_1af43c;
    }
    ctx->pc = 0x1AF434u;
    SET_GPR_U32(ctx, 31, 0x1AF43Cu);
    ctx->pc = 0x1AF438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF434u;
    // 0x1af438: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x1AF434u, 0x1AF43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF43Cu;
label_1af43c:
    // 0x1af43c: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1af43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
label_1af440:
    // 0x1af440: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1af444:
    if (ctx->pc == 0x1AF444u) {
        ctx->pc = 0x1AF448u;
        goto label_1af448;
    }
    ctx->pc = 0x1AF440u;
    {
        const bool branch_taken_0x1af440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af440) {
            ctx->pc = 0x1AF450u;
            goto label_1af450;
        }
    }
    ctx->pc = 0x1AF448u;
label_1af448:
    // 0x1af448: 0xc07f59a  jal         func_1FD668
label_1af44c:
    if (ctx->pc == 0x1AF44Cu) {
        ctx->pc = 0x1AF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF448u;
        // 0x1af44c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF450u;
        goto label_1af450;
    }
    ctx->pc = 0x1AF448u;
    SET_GPR_U32(ctx, 31, 0x1AF450u);
    ctx->pc = 0x1AF44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF448u;
    // 0x1af44c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1AF448u, 0x1AF450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF450u;
label_1af450:
    // 0x1af450: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1af450u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1af454:
    // 0x1af454: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1af454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1af458:
    // 0x1af458: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1af458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af45c:
    // 0x1af45c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1af45cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1af460:
    // 0x1af460: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1af460u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_1af464:
    // 0x1af464: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1af464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af468:
    // 0x1af468: 0xc0c194a  jal         func_306528
label_1af46c:
    if (ctx->pc == 0x1AF46Cu) {
        ctx->pc = 0x1AF46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF468u;
        // 0x1af46c: 0x2405004a  addiu       $a1, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF470u;
        goto label_1af470;
    }
    ctx->pc = 0x1AF468u;
    SET_GPR_U32(ctx, 31, 0x1AF470u);
    ctx->pc = 0x1AF46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF468u;
    // 0x1af46c: 0x2405004a  addiu       $a1, $zero, 0x4A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1AF468u, 0x1AF470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF470u;
label_1af470:
    // 0x1af470: 0x8e250250  lw          $a1, 0x250($s1)
    ctx->pc = 0x1af470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_1af474:
    // 0x1af474: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1af474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1af478:
    // 0x1af478: 0x8e2405b8  lw          $a0, 0x5B8($s1)
    ctx->pc = 0x1af478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
label_1af47c:
    // 0x1af47c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1af47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_1af480:
    // 0x1af480: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x1af480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_1af484:
    // 0x1af484: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1af484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1af488:
    // 0x1af488: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1af488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1af48c:
    // 0x1af48c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af490:
    // 0x1af490: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1af490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1af494:
    // 0x1af494: 0xae250250  sw          $a1, 0x250($s1)
    ctx->pc = 0x1af494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 5));
label_1af498:
    // 0x1af498: 0xa6230608  sh          $v1, 0x608($s1)
    ctx->pc = 0x1af498u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1544), (uint16_t)GPR_U32(ctx, 3));
label_1af49c:
    // 0x1af49c: 0xae2405b8  sw          $a0, 0x5B8($s1)
    ctx->pc = 0x1af49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 4));
label_1af4a0:
    // 0x1af4a0: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x1af4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1af4a4:
    // 0x1af4a4: 0xc0b6dac  jal         func_2DB6B0
label_1af4a8:
    if (ctx->pc == 0x1AF4A8u) {
        ctx->pc = 0x1AF4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4A4u;
        // 0x1af4a8: 0xa2220af0  sb          $v0, 0xAF0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2800), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF4ACu;
        goto label_1af4ac;
    }
    ctx->pc = 0x1AF4A4u;
    SET_GPR_U32(ctx, 31, 0x1AF4ACu);
    ctx->pc = 0x1AF4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4A4u;
    // 0x1af4a8: 0xa2220af0  sb          $v0, 0xAF0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2800), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1AF4A4u, 0x1AF4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF4ACu;
label_1af4ac:
    // 0x1af4ac: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1af4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1af4b0:
    // 0x1af4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af4b4:
    // 0x1af4b4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1af4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1af4b8:
    // 0x1af4b8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1af4b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1af4bc:
    // 0x1af4bc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1af4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1af4c0:
    // 0x1af4c0: 0xc0b680e  jal         func_2DA038
label_1af4c4:
    if (ctx->pc == 0x1AF4C4u) {
        ctx->pc = 0x1AF4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4C0u;
        // 0x1af4c4: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF4C8u;
        goto label_1af4c8;
    }
    ctx->pc = 0x1AF4C0u;
    SET_GPR_U32(ctx, 31, 0x1AF4C8u);
    ctx->pc = 0x1AF4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4C0u;
    // 0x1af4c4: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x1AF4C0u, 0x1AF4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF4C8u;
label_1af4c8:
    // 0x1af4c8: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x1af4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af4cc:
    // 0x1af4cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1af4ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1af4d0:
    // 0x1af4d0: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1af4d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_1af4d4:
    // 0x1af4d4: 0xc07df52  jal         func_1F7D48
label_1af4d8:
    if (ctx->pc == 0x1AF4D8u) {
        ctx->pc = 0x1AF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4D4u;
        // 0x1af4d8: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF4DCu;
        goto label_1af4dc;
    }
    ctx->pc = 0x1AF4D4u;
    SET_GPR_U32(ctx, 31, 0x1AF4DCu);
    ctx->pc = 0x1AF4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4D4u;
    // 0x1af4d8: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1AF4D4u, 0x1AF4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF4DCu;
label_1af4dc:
    // 0x1af4dc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1af4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1af4e0:
    // 0x1af4e0: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x1af4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_1af4e4:
    // 0x1af4e4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1af4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1af4e8:
    // 0x1af4e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1af4e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af4ec:
    // 0x1af4ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1af4ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af4f0:
    // 0x1af4f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af4f4:
    // 0x1af4f4: 0x24060106  addiu       $a2, $zero, 0x106
    ctx->pc = 0x1af4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
label_1af4f8:
    // 0x1af4f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1af4f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1af4fc:
    // 0x1af4fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1af4fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af500:
    // 0x1af500: 0xc0b2e92  jal         func_2CBA48
label_1af504:
    if (ctx->pc == 0x1AF504u) {
        ctx->pc = 0x1AF504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF500u;
        // 0x1af504: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF508u;
        goto label_1af508;
    }
    ctx->pc = 0x1AF500u;
    SET_GPR_U32(ctx, 31, 0x1AF508u);
    ctx->pc = 0x1AF504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF500u;
    // 0x1af504: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1AF500u, 0x1AF508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF508u;
label_1af508:
    // 0x1af508: 0xae220af4  sw          $v0, 0xAF4($s1)
    ctx->pc = 0x1af508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2804), GPR_U32(ctx, 2));
label_1af50c:
    // 0x1af50c: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1af50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1af510:
    // 0x1af510: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1af510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1af514:
    // 0x1af514: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1af514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1af518:
    // 0x1af518: 0x40f809  jalr        $v0
label_1af51c:
    if (ctx->pc == 0x1AF51Cu) {
        ctx->pc = 0x1AF51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF518u;
        // 0x1af51c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF520u;
        goto label_1af520;
    }
    ctx->pc = 0x1AF518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AF520u);
        ctx->pc = 0x1AF51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF518u;
        // 0x1af51c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF518u, 0x1AF520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF520u;
label_1af520:
    // 0x1af520: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1af520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1af524:
    // 0x1af524: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1af524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1af528:
    // 0x1af528: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1af528u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1af52c:
    // 0x1af52c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1af52cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1af530:
    // 0x1af530: 0x1000000c  b           . + 4 + (0xC << 2)
label_1af534:
    if (ctx->pc == 0x1AF534u) {
        ctx->pc = 0x1AF534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF530u;
        // 0x1af534: 0xe6200988  swc1        $f0, 0x988($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2440), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF538u;
        goto label_1af538;
    }
    ctx->pc = 0x1AF530u;
    {
        const bool branch_taken_0x1af530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF530u;
        // 0x1af534: 0xe6200988  swc1        $f0, 0x988($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2440), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af530) {
            ctx->pc = 0x1AF564u;
            goto label_1af564;
        }
    }
    ctx->pc = 0x1AF538u;
label_1af538:
    // 0x1af538: 0xc07df8a  jal         func_1F7E28
label_1af53c:
    if (ctx->pc == 0x1AF53Cu) {
        ctx->pc = 0x1AF53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF538u;
        // 0x1af53c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF540u;
        goto label_1af540;
    }
    ctx->pc = 0x1AF538u;
    SET_GPR_U32(ctx, 31, 0x1AF540u);
    ctx->pc = 0x1AF53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF538u;
    // 0x1af53c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1AF538u, 0x1AF540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF540u;
label_1af540:
    // 0x1af540: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1af540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_1af544:
    // 0x1af544: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1af544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1af548:
    // 0x1af548: 0x0  nop
    ctx->pc = 0x1af548u;
    // NOP
label_1af54c:
    // 0x1af54c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1af54cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1af550:
    // 0x1af550: 0x0  nop
    ctx->pc = 0x1af550u;
    // NOP
label_1af554:
    // 0x1af554: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1af558:
    if (ctx->pc == 0x1AF558u) {
        ctx->pc = 0x1AF558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF554u;
        // 0x1af558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF55Cu;
        goto label_1af55c;
    }
    ctx->pc = 0x1AF554u;
    {
        const bool branch_taken_0x1af554 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AF558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF554u;
        // 0x1af558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af554) {
            ctx->pc = 0x1AF564u;
            goto label_1af564;
        }
    }
    ctx->pc = 0x1AF55Cu;
label_1af55c:
    // 0x1af55c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1af55cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1af560:
    // 0x1af560: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1af560u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1af564:
    // 0x1af564: 0x96220984  lhu         $v0, 0x984($s1)
    ctx->pc = 0x1af564u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2436)));
label_1af568:
    // 0x1af568: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1af568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1af56c:
    // 0x1af56c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1af570:
    if (ctx->pc == 0x1AF570u) {
        ctx->pc = 0x1AF570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF56Cu;
        // 0x1af570: 0xa6220984  sh          $v0, 0x984($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2436), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF574u;
        goto label_1af574;
    }
    ctx->pc = 0x1AF56Cu;
    {
        const bool branch_taken_0x1af56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF56Cu;
        // 0x1af570: 0xa6220984  sh          $v0, 0x984($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2436), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af56c) {
            ctx->pc = 0x1AF618u;
            goto label_1af618;
        }
    }
    ctx->pc = 0x1AF574u;
label_1af574:
    // 0x1af574: 0x86220608  lh          $v0, 0x608($s1)
    ctx->pc = 0x1af574u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1544)));
label_1af578:
    // 0x1af578: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_1af57c:
    if (ctx->pc == 0x1AF57Cu) {
        ctx->pc = 0x1AF57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF578u;
        // 0x1af57c: 0x96230608  lhu         $v1, 0x608($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF580u;
        goto label_1af580;
    }
    ctx->pc = 0x1AF578u;
    {
        const bool branch_taken_0x1af578 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1AF57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF578u;
        // 0x1af57c: 0x96230608  lhu         $v1, 0x608($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af578) {
            ctx->pc = 0x1AF5C0u;
            goto label_1af5c0;
        }
    }
    ctx->pc = 0x1AF580u;
label_1af580:
    // 0x1af580: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1af580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1af584:
    // 0x1af584: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1af584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1af588:
    // 0x1af588: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_1af58c:
    if (ctx->pc == 0x1AF58Cu) {
        ctx->pc = 0x1AF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF588u;
        // 0x1af58c: 0xa6220608  sh          $v0, 0x608($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1544), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF590u;
        goto label_1af590;
    }
    ctx->pc = 0x1AF588u;
    {
        const bool branch_taken_0x1af588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF588u;
        // 0x1af58c: 0xa6220608  sh          $v0, 0x608($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1544), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af588) {
            ctx->pc = 0x1AF5C8u;
            goto label_1af5c8;
        }
    }
    ctx->pc = 0x1AF590u;
label_1af590:
    // 0x1af590: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x1af590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_1af594:
    // 0x1af594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1af594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1af598:
    // 0x1af598: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1af598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1af59c:
    // 0x1af59c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1af59cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af5a0:
    // 0x1af5a0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1af5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1af5a4:
    // 0x1af5a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1af5a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af5a8:
    // 0x1af5a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1af5a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af5ac:
    // 0x1af5ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1af5acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af5b0:
    // 0x1af5b0: 0xc0aa15e  jal         func_2A8578
label_1af5b4:
    if (ctx->pc == 0x1AF5B4u) {
        ctx->pc = 0x1AF5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5B0u;
        // 0x1af5b4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF5B8u;
        goto label_1af5b8;
    }
    ctx->pc = 0x1AF5B0u;
    SET_GPR_U32(ctx, 31, 0x1AF5B8u);
    ctx->pc = 0x1AF5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF5B0u;
    // 0x1af5b4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1AF5B0u, 0x1AF5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF5B8u;
label_1af5b8:
    // 0x1af5b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1af5bc:
    if (ctx->pc == 0x1AF5BCu) {
        ctx->pc = 0x1AF5C0u;
        goto label_1af5c0;
    }
    ctx->pc = 0x1AF5B8u;
    {
        const bool branch_taken_0x1af5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af5b8) {
            ctx->pc = 0x1AF5C8u;
            goto label_1af5c8;
        }
    }
    ctx->pc = 0x1AF5C0u;
label_1af5c0:
    // 0x1af5c0: 0xc055f06  jal         func_157C18
label_1af5c4:
    if (ctx->pc == 0x1AF5C4u) {
        ctx->pc = 0x1AF5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5C0u;
        // 0x1af5c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF5C8u;
        goto label_1af5c8;
    }
    ctx->pc = 0x1AF5C0u;
    SET_GPR_U32(ctx, 31, 0x1AF5C8u);
    ctx->pc = 0x1AF5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF5C0u;
    // 0x1af5c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1AF5C0u, 0x1AF5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF5C8u;
label_1af5c8:
    // 0x1af5c8: 0xc070fce  jal         func_1C3F38
label_1af5cc:
    if (ctx->pc == 0x1AF5CCu) {
        ctx->pc = 0x1AF5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5C8u;
        // 0x1af5cc: 0x26240990  addiu       $a0, $s1, 0x990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF5D0u;
        goto label_1af5d0;
    }
    ctx->pc = 0x1AF5C8u;
    SET_GPR_U32(ctx, 31, 0x1AF5D0u);
    ctx->pc = 0x1AF5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF5C8u;
    // 0x1af5cc: 0x26240990  addiu       $a0, $s1, 0x990 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x1AF5C8u, 0x1AF5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF5D0u;
label_1af5d0:
    // 0x1af5d0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_1af5d4:
    if (ctx->pc == 0x1AF5D4u) {
        ctx->pc = 0x1AF5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5D0u;
        // 0x1af5d4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF5D8u;
        goto label_1af5d8;
    }
    ctx->pc = 0x1AF5D0u;
    {
        const bool branch_taken_0x1af5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5D0u;
        // 0x1af5d4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5d0) {
            ctx->pc = 0x1AF61Cu;
            goto label_1af61c;
        }
    }
    ctx->pc = 0x1AF5D8u;
label_1af5d8:
    // 0x1af5d8: 0x8e250af4  lw          $a1, 0xAF4($s1)
    ctx->pc = 0x1af5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2804)));
label_1af5dc:
    // 0x1af5dc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_1af5e0:
    if (ctx->pc == 0x1AF5E0u) {
        ctx->pc = 0x1AF5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5DCu;
        // 0x1af5e0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF5E4u;
        goto label_1af5e4;
    }
    ctx->pc = 0x1AF5DCu;
    {
        const bool branch_taken_0x1af5dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5DCu;
        // 0x1af5e0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5dc) {
            ctx->pc = 0x1AF5F0u;
            goto label_1af5f0;
        }
    }
    ctx->pc = 0x1AF5E4u;
label_1af5e4:
    // 0x1af5e4: 0xc0b2ee8  jal         func_2CBBA0
label_1af5e8:
    if (ctx->pc == 0x1AF5E8u) {
        ctx->pc = 0x1AF5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5E4u;
        // 0x1af5e8: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF5ECu;
        goto label_1af5ec;
    }
    ctx->pc = 0x1AF5E4u;
    SET_GPR_U32(ctx, 31, 0x1AF5ECu);
    ctx->pc = 0x1AF5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF5E4u;
    // 0x1af5e8: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1AF5E4u, 0x1AF5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF5ECu;
label_1af5ec:
    // 0x1af5ec: 0xae200af4  sw          $zero, 0xAF4($s1)
    ctx->pc = 0x1af5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2804), GPR_U32(ctx, 0));
label_1af5f0:
    // 0x1af5f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1af5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1af5f4:
    // 0x1af5f4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1af5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1af5f8:
    // 0x1af5f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1af5fc:
    if (ctx->pc == 0x1AF5FCu) {
        ctx->pc = 0x1AF5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5F8u;
        // 0x1af5fc: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF600u;
        goto label_1af600;
    }
    ctx->pc = 0x1AF5F8u;
    {
        const bool branch_taken_0x1af5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5F8u;
        // 0x1af5fc: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5f8) {
            ctx->pc = 0x1AF618u;
            goto label_1af618;
        }
    }
    ctx->pc = 0x1AF600u;
label_1af600:
    // 0x1af600: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x1af600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_1af604:
    // 0x1af604: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1af604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af608:
    // 0x1af608: 0xa6220984  sh          $v0, 0x984($s1)
    ctx->pc = 0x1af608u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2436), (uint16_t)GPR_U32(ctx, 2));
label_1af60c:
    // 0x1af60c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x1af60cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_1af610:
    // 0x1af610: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1af610u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1af614:
    // 0x1af614: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1af614u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1af618:
    // 0x1af618: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1af618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1af61c:
    // 0x1af61c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1af61cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1af620:
    // 0x1af620: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1af620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1af624:
    // 0x1af624: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1af624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1af628:
    // 0x1af628: 0x3e00008  jr          $ra
label_1af62c:
    if (ctx->pc == 0x1AF62Cu) {
        ctx->pc = 0x1AF62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF628u;
        // 0x1af62c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF630u;
        goto label_fallthrough_0x1af628;
    }
    ctx->pc = 0x1AF628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF628u;
        // 0x1af62c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1af628:
    ctx->pc = 0x1AF630u;
}
