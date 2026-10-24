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

// Function: func_0025C1D0
// Address: 0x25c1d0 - 0x25c5d8
void func_0025C1D0_0x25c1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025C1D0_0x25c1d0");
#endif

    switch (ctx->pc) {
        case 0x25c1d0u: goto label_25c1d0;
        case 0x25c1d4u: goto label_25c1d4;
        case 0x25c1d8u: goto label_25c1d8;
        case 0x25c1dcu: goto label_25c1dc;
        case 0x25c1e0u: goto label_25c1e0;
        case 0x25c1e4u: goto label_25c1e4;
        case 0x25c1e8u: goto label_25c1e8;
        case 0x25c1ecu: goto label_25c1ec;
        case 0x25c1f0u: goto label_25c1f0;
        case 0x25c1f4u: goto label_25c1f4;
        case 0x25c1f8u: goto label_25c1f8;
        case 0x25c1fcu: goto label_25c1fc;
        case 0x25c200u: goto label_25c200;
        case 0x25c204u: goto label_25c204;
        case 0x25c208u: goto label_25c208;
        case 0x25c20cu: goto label_25c20c;
        case 0x25c210u: goto label_25c210;
        case 0x25c214u: goto label_25c214;
        case 0x25c218u: goto label_25c218;
        case 0x25c21cu: goto label_25c21c;
        case 0x25c220u: goto label_25c220;
        case 0x25c224u: goto label_25c224;
        case 0x25c228u: goto label_25c228;
        case 0x25c22cu: goto label_25c22c;
        case 0x25c230u: goto label_25c230;
        case 0x25c234u: goto label_25c234;
        case 0x25c238u: goto label_25c238;
        case 0x25c23cu: goto label_25c23c;
        case 0x25c240u: goto label_25c240;
        case 0x25c244u: goto label_25c244;
        case 0x25c248u: goto label_25c248;
        case 0x25c24cu: goto label_25c24c;
        case 0x25c250u: goto label_25c250;
        case 0x25c254u: goto label_25c254;
        case 0x25c258u: goto label_25c258;
        case 0x25c25cu: goto label_25c25c;
        case 0x25c260u: goto label_25c260;
        case 0x25c264u: goto label_25c264;
        case 0x25c268u: goto label_25c268;
        case 0x25c26cu: goto label_25c26c;
        case 0x25c270u: goto label_25c270;
        case 0x25c274u: goto label_25c274;
        case 0x25c278u: goto label_25c278;
        case 0x25c27cu: goto label_25c27c;
        case 0x25c280u: goto label_25c280;
        case 0x25c284u: goto label_25c284;
        case 0x25c288u: goto label_25c288;
        case 0x25c28cu: goto label_25c28c;
        case 0x25c290u: goto label_25c290;
        case 0x25c294u: goto label_25c294;
        case 0x25c298u: goto label_25c298;
        case 0x25c29cu: goto label_25c29c;
        case 0x25c2a0u: goto label_25c2a0;
        case 0x25c2a4u: goto label_25c2a4;
        case 0x25c2a8u: goto label_25c2a8;
        case 0x25c2acu: goto label_25c2ac;
        case 0x25c2b0u: goto label_25c2b0;
        case 0x25c2b4u: goto label_25c2b4;
        case 0x25c2b8u: goto label_25c2b8;
        case 0x25c2bcu: goto label_25c2bc;
        case 0x25c2c0u: goto label_25c2c0;
        case 0x25c2c4u: goto label_25c2c4;
        case 0x25c2c8u: goto label_25c2c8;
        case 0x25c2ccu: goto label_25c2cc;
        case 0x25c2d0u: goto label_25c2d0;
        case 0x25c2d4u: goto label_25c2d4;
        case 0x25c2d8u: goto label_25c2d8;
        case 0x25c2dcu: goto label_25c2dc;
        case 0x25c2e0u: goto label_25c2e0;
        case 0x25c2e4u: goto label_25c2e4;
        case 0x25c2e8u: goto label_25c2e8;
        case 0x25c2ecu: goto label_25c2ec;
        case 0x25c2f0u: goto label_25c2f0;
        case 0x25c2f4u: goto label_25c2f4;
        case 0x25c2f8u: goto label_25c2f8;
        case 0x25c2fcu: goto label_25c2fc;
        case 0x25c300u: goto label_25c300;
        case 0x25c304u: goto label_25c304;
        case 0x25c308u: goto label_25c308;
        case 0x25c30cu: goto label_25c30c;
        case 0x25c310u: goto label_25c310;
        case 0x25c314u: goto label_25c314;
        case 0x25c318u: goto label_25c318;
        case 0x25c31cu: goto label_25c31c;
        case 0x25c320u: goto label_25c320;
        case 0x25c324u: goto label_25c324;
        case 0x25c328u: goto label_25c328;
        case 0x25c32cu: goto label_25c32c;
        case 0x25c330u: goto label_25c330;
        case 0x25c334u: goto label_25c334;
        case 0x25c338u: goto label_25c338;
        case 0x25c33cu: goto label_25c33c;
        case 0x25c340u: goto label_25c340;
        case 0x25c344u: goto label_25c344;
        case 0x25c348u: goto label_25c348;
        case 0x25c34cu: goto label_25c34c;
        case 0x25c350u: goto label_25c350;
        case 0x25c354u: goto label_25c354;
        case 0x25c358u: goto label_25c358;
        case 0x25c35cu: goto label_25c35c;
        case 0x25c360u: goto label_25c360;
        case 0x25c364u: goto label_25c364;
        case 0x25c368u: goto label_25c368;
        case 0x25c36cu: goto label_25c36c;
        case 0x25c370u: goto label_25c370;
        case 0x25c374u: goto label_25c374;
        case 0x25c378u: goto label_25c378;
        case 0x25c37cu: goto label_25c37c;
        case 0x25c380u: goto label_25c380;
        case 0x25c384u: goto label_25c384;
        case 0x25c388u: goto label_25c388;
        case 0x25c38cu: goto label_25c38c;
        case 0x25c390u: goto label_25c390;
        case 0x25c394u: goto label_25c394;
        case 0x25c398u: goto label_25c398;
        case 0x25c39cu: goto label_25c39c;
        case 0x25c3a0u: goto label_25c3a0;
        case 0x25c3a4u: goto label_25c3a4;
        case 0x25c3a8u: goto label_25c3a8;
        case 0x25c3acu: goto label_25c3ac;
        case 0x25c3b0u: goto label_25c3b0;
        case 0x25c3b4u: goto label_25c3b4;
        case 0x25c3b8u: goto label_25c3b8;
        case 0x25c3bcu: goto label_25c3bc;
        case 0x25c3c0u: goto label_25c3c0;
        case 0x25c3c4u: goto label_25c3c4;
        case 0x25c3c8u: goto label_25c3c8;
        case 0x25c3ccu: goto label_25c3cc;
        case 0x25c3d0u: goto label_25c3d0;
        case 0x25c3d4u: goto label_25c3d4;
        case 0x25c3d8u: goto label_25c3d8;
        case 0x25c3dcu: goto label_25c3dc;
        case 0x25c3e0u: goto label_25c3e0;
        case 0x25c3e4u: goto label_25c3e4;
        case 0x25c3e8u: goto label_25c3e8;
        case 0x25c3ecu: goto label_25c3ec;
        case 0x25c3f0u: goto label_25c3f0;
        case 0x25c3f4u: goto label_25c3f4;
        case 0x25c3f8u: goto label_25c3f8;
        case 0x25c3fcu: goto label_25c3fc;
        case 0x25c400u: goto label_25c400;
        case 0x25c404u: goto label_25c404;
        case 0x25c408u: goto label_25c408;
        case 0x25c40cu: goto label_25c40c;
        case 0x25c410u: goto label_25c410;
        case 0x25c414u: goto label_25c414;
        case 0x25c418u: goto label_25c418;
        case 0x25c41cu: goto label_25c41c;
        case 0x25c420u: goto label_25c420;
        case 0x25c424u: goto label_25c424;
        case 0x25c428u: goto label_25c428;
        case 0x25c42cu: goto label_25c42c;
        case 0x25c430u: goto label_25c430;
        case 0x25c434u: goto label_25c434;
        case 0x25c438u: goto label_25c438;
        case 0x25c43cu: goto label_25c43c;
        case 0x25c440u: goto label_25c440;
        case 0x25c444u: goto label_25c444;
        case 0x25c448u: goto label_25c448;
        case 0x25c44cu: goto label_25c44c;
        case 0x25c450u: goto label_25c450;
        case 0x25c454u: goto label_25c454;
        case 0x25c458u: goto label_25c458;
        case 0x25c45cu: goto label_25c45c;
        case 0x25c460u: goto label_25c460;
        case 0x25c464u: goto label_25c464;
        case 0x25c468u: goto label_25c468;
        case 0x25c46cu: goto label_25c46c;
        case 0x25c470u: goto label_25c470;
        case 0x25c474u: goto label_25c474;
        case 0x25c478u: goto label_25c478;
        case 0x25c47cu: goto label_25c47c;
        case 0x25c480u: goto label_25c480;
        case 0x25c484u: goto label_25c484;
        case 0x25c488u: goto label_25c488;
        case 0x25c48cu: goto label_25c48c;
        case 0x25c490u: goto label_25c490;
        case 0x25c494u: goto label_25c494;
        case 0x25c498u: goto label_25c498;
        case 0x25c49cu: goto label_25c49c;
        case 0x25c4a0u: goto label_25c4a0;
        case 0x25c4a4u: goto label_25c4a4;
        case 0x25c4a8u: goto label_25c4a8;
        case 0x25c4acu: goto label_25c4ac;
        case 0x25c4b0u: goto label_25c4b0;
        case 0x25c4b4u: goto label_25c4b4;
        case 0x25c4b8u: goto label_25c4b8;
        case 0x25c4bcu: goto label_25c4bc;
        case 0x25c4c0u: goto label_25c4c0;
        case 0x25c4c4u: goto label_25c4c4;
        case 0x25c4c8u: goto label_25c4c8;
        case 0x25c4ccu: goto label_25c4cc;
        case 0x25c4d0u: goto label_25c4d0;
        case 0x25c4d4u: goto label_25c4d4;
        case 0x25c4d8u: goto label_25c4d8;
        case 0x25c4dcu: goto label_25c4dc;
        case 0x25c4e0u: goto label_25c4e0;
        case 0x25c4e4u: goto label_25c4e4;
        case 0x25c4e8u: goto label_25c4e8;
        case 0x25c4ecu: goto label_25c4ec;
        case 0x25c4f0u: goto label_25c4f0;
        case 0x25c4f4u: goto label_25c4f4;
        case 0x25c4f8u: goto label_25c4f8;
        case 0x25c4fcu: goto label_25c4fc;
        case 0x25c500u: goto label_25c500;
        case 0x25c504u: goto label_25c504;
        case 0x25c508u: goto label_25c508;
        case 0x25c50cu: goto label_25c50c;
        case 0x25c510u: goto label_25c510;
        case 0x25c514u: goto label_25c514;
        case 0x25c518u: goto label_25c518;
        case 0x25c51cu: goto label_25c51c;
        case 0x25c520u: goto label_25c520;
        case 0x25c524u: goto label_25c524;
        case 0x25c528u: goto label_25c528;
        case 0x25c52cu: goto label_25c52c;
        case 0x25c530u: goto label_25c530;
        case 0x25c534u: goto label_25c534;
        case 0x25c538u: goto label_25c538;
        case 0x25c53cu: goto label_25c53c;
        case 0x25c540u: goto label_25c540;
        case 0x25c544u: goto label_25c544;
        case 0x25c548u: goto label_25c548;
        case 0x25c54cu: goto label_25c54c;
        case 0x25c550u: goto label_25c550;
        case 0x25c554u: goto label_25c554;
        case 0x25c558u: goto label_25c558;
        case 0x25c55cu: goto label_25c55c;
        case 0x25c560u: goto label_25c560;
        case 0x25c564u: goto label_25c564;
        case 0x25c568u: goto label_25c568;
        case 0x25c56cu: goto label_25c56c;
        case 0x25c570u: goto label_25c570;
        case 0x25c574u: goto label_25c574;
        case 0x25c578u: goto label_25c578;
        case 0x25c57cu: goto label_25c57c;
        case 0x25c580u: goto label_25c580;
        case 0x25c584u: goto label_25c584;
        case 0x25c588u: goto label_25c588;
        case 0x25c58cu: goto label_25c58c;
        case 0x25c590u: goto label_25c590;
        case 0x25c594u: goto label_25c594;
        case 0x25c598u: goto label_25c598;
        case 0x25c59cu: goto label_25c59c;
        case 0x25c5a0u: goto label_25c5a0;
        case 0x25c5a4u: goto label_25c5a4;
        case 0x25c5a8u: goto label_25c5a8;
        case 0x25c5acu: goto label_25c5ac;
        case 0x25c5b0u: goto label_25c5b0;
        case 0x25c5b4u: goto label_25c5b4;
        case 0x25c5b8u: goto label_25c5b8;
        case 0x25c5bcu: goto label_25c5bc;
        case 0x25c5c0u: goto label_25c5c0;
        case 0x25c5c4u: goto label_25c5c4;
        case 0x25c5c8u: goto label_25c5c8;
        case 0x25c5ccu: goto label_25c5cc;
        case 0x25c5d0u: goto label_25c5d0;
        case 0x25c5d4u: goto label_25c5d4;
        default: break;
    }

    ctx->pc = 0x25c1d0u;

label_25c1d0:
    // 0x25c1d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25c1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_25c1d4:
    // 0x25c1d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25c1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_25c1d8:
    // 0x25c1d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25c1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25c1dc:
    // 0x25c1dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25c1e0:
    // 0x25c1e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25c1e4:
    // 0x25c1e4: 0xc0b6dac  jal         func_2DB6B0
label_25c1e8:
    if (ctx->pc == 0x25C1E8u) {
        ctx->pc = 0x25C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1E4u;
        // 0x25c1e8: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C1ECu;
        goto label_25c1ec;
    }
    ctx->pc = 0x25C1E4u;
    SET_GPR_U32(ctx, 31, 0x25C1ECu);
    ctx->pc = 0x25C1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C1E4u;
    // 0x25c1e8: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x25C1E4u, 0x25C1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C1ECu;
label_25c1ec:
    // 0x25c1ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25c1ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25c1f0:
    // 0x25c1f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c1f4:
    // 0x25c1f4: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x25c1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c1f8:
    // 0x25c1f8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x25c1f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_25c1fc:
    // 0x25c1fc: 0xc0560a2  jal         func_158288
label_25c200:
    if (ctx->pc == 0x25C200u) {
        ctx->pc = 0x25C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1FCu;
        // 0x25c200: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C204u;
        goto label_25c204;
    }
    ctx->pc = 0x25C1FCu;
    SET_GPR_U32(ctx, 31, 0x25C204u);
    ctx->pc = 0x25C200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C1FCu;
    // 0x25c200: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x25C1FCu, 0x25C204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C204u;
label_25c204:
    // 0x25c204: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25c204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_25c208:
    // 0x25c208: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c20c:
    // 0x25c20c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x25c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_25c210:
    // 0x25c210: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x25c210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_25c214:
    // 0x25c214: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25c214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c218:
    // 0x25c218: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x25c218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_25c21c:
    // 0x25c21c: 0xc04d476  jal         func_1351D8
label_25c220:
    if (ctx->pc == 0x25C220u) {
        ctx->pc = 0x25C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C21Cu;
        // 0x25c220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C224u;
        goto label_25c224;
    }
    ctx->pc = 0x25C21Cu;
    SET_GPR_U32(ctx, 31, 0x25C224u);
    ctx->pc = 0x25C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C21Cu;
    // 0x25c220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x25C21Cu, 0x25C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C224u;
label_25c224:
    // 0x25c224: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x25c224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25c228:
    // 0x25c228: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x25c228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_25c22c:
    // 0x25c22c: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
label_25c230:
    if (ctx->pc == 0x25C230u) {
        ctx->pc = 0x25C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C22Cu;
        // 0x25c230: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C234u;
        goto label_25c234;
    }
    ctx->pc = 0x25C22Cu;
    {
        const bool branch_taken_0x25c22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C22Cu;
        // 0x25c230: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c22c) {
            ctx->pc = 0x25C5BCu;
            goto label_25c5bc;
        }
    }
    ctx->pc = 0x25C234u;
label_25c234:
    // 0x25c234: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25c234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25c238:
    // 0x25c238: 0x244239c0  addiu       $v0, $v0, 0x39C0
    ctx->pc = 0x25c238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14784));
label_25c23c:
    // 0x25c23c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25c240:
    // 0x25c240: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25c240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25c244:
    // 0x25c244: 0x800008  jr          $a0
label_25c248:
    if (ctx->pc == 0x25C248u) {
        ctx->pc = 0x25C24Cu;
        goto label_25c24c;
    }
    ctx->pc = 0x25C244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25C24Cu: goto label_25c24c;
            case 0x25C290u: goto label_25c290;
            case 0x25C324u: goto label_25c324;
            case 0x25C364u: goto label_25c364;
            case 0x25C42Cu: goto label_25c42c;
            case 0x25C47Cu: goto label_25c47c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C244u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25C24Cu;
label_25c24c:
    // 0x25c24c: 0xc09ac7a  jal         func_26B1E8
label_25c250:
    if (ctx->pc == 0x25C250u) {
        ctx->pc = 0x25C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C24Cu;
        // 0x25c250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C254u;
        goto label_25c254;
    }
    ctx->pc = 0x25C24Cu;
    SET_GPR_U32(ctx, 31, 0x25C254u);
    ctx->pc = 0x25C250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C24Cu;
    // 0x25c250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x25C24Cu, 0x25C254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C254u;
label_25c254:
    // 0x25c254: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25c254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25c258:
    // 0x25c258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c25c:
    // 0x25c25c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25c25cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25c260:
    // 0x25c260: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25c260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c264:
    // 0x25c264: 0x8c450c98  lw          $a1, 0xC98($v0)
    ctx->pc = 0x25c264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3224)));
label_25c268:
    // 0x25c268: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25c268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c26c:
    // 0x25c26c: 0x8c460c9c  lw          $a2, 0xC9C($v0)
    ctx->pc = 0x25c26cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3228)));
label_25c270:
    // 0x25c270: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25c270u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c274:
    // 0x25c274: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25c274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25c278:
    // 0x25c278: 0xc0aa15e  jal         func_2A8578
label_25c27c:
    if (ctx->pc == 0x25C27Cu) {
        ctx->pc = 0x25C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C278u;
        // 0x25c27c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C280u;
        goto label_25c280;
    }
    ctx->pc = 0x25C278u;
    SET_GPR_U32(ctx, 31, 0x25C280u);
    ctx->pc = 0x25C27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C278u;
    // 0x25c27c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25C278u, 0x25C280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C280u;
label_25c280:
    // 0x25c280: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25c280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25c284:
    // 0x25c284: 0xae0016ec  sw          $zero, 0x16EC($s0)
    ctx->pc = 0x25c284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5868), GPR_U32(ctx, 0));
label_25c288:
    // 0x25c288: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25c288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25c28c:
    // 0x25c28c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25c28cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25c290:
    // 0x25c290: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x25c290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_25c294:
    // 0x25c294: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x25c294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_25c298:
    // 0x25c298: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x25c298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25c29c:
    // 0x25c29c: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x25c29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_25c2a0:
    // 0x25c2a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25c2a4:
    // 0x25c2a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25c2a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25c2a8:
    // 0x25c2a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25c2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_25c2ac:
    // 0x25c2ac: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x25c2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
label_25c2b0:
    // 0x25c2b0: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x25c2b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_25c2b4:
    // 0x25c2b4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25c2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25c2b8:
    // 0x25c2b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25c2b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25c2bc:
    // 0x25c2bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25c2bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_25c2c0:
    // 0x25c2c0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x25c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_25c2c4:
    // 0x25c2c4: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x25c2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25c2c8:
    // 0x25c2c8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x25c2c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_25c2cc:
    // 0x25c2cc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25c2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c2d0:
    // 0x25c2d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25c2d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_25c2d4:
    // 0x25c2d4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x25c2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_25c2d8:
    // 0x25c2d8: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x25c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25c2dc:
    // 0x25c2dc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25c2dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_25c2e0:
    // 0x25c2e0: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x25c2e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_25c2e4:
    // 0x25c2e4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25c2e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25c2e8:
    // 0x25c2e8: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25c2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25c2ec:
    // 0x25c2ec: 0xc055f06  jal         func_157C18
label_25c2f0:
    if (ctx->pc == 0x25C2F0u) {
        ctx->pc = 0x25C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C2ECu;
        // 0x25c2f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C2F4u;
        goto label_25c2f4;
    }
    ctx->pc = 0x25C2ECu;
    SET_GPR_U32(ctx, 31, 0x25C2F4u);
    ctx->pc = 0x25C2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C2ECu;
    // 0x25c2f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25C2ECu, 0x25C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C2F4u;
label_25c2f4:
    // 0x25c2f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25c2f8:
    if (ctx->pc == 0x25C2F8u) {
        ctx->pc = 0x25C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C2F4u;
        // 0x25c2f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C2FCu;
        goto label_25c2fc;
    }
    ctx->pc = 0x25C2F4u;
    {
        const bool branch_taken_0x25c2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C2F4u;
        // 0x25c2f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c2f4) {
            ctx->pc = 0x25C308u;
            goto label_25c308;
        }
    }
    ctx->pc = 0x25C2FCu;
label_25c2fc:
    // 0x25c2fc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25c2fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25c300:
    // 0x25c300: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25c300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25c304:
    // 0x25c304: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25c304u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25c308:
    // 0x25c308: 0xc053e7c  jal         func_14F9F0
label_25c30c:
    if (ctx->pc == 0x25C30Cu) {
        ctx->pc = 0x25C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C308u;
        // 0x25c30c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C310u;
        goto label_25c310;
    }
    ctx->pc = 0x25C308u;
    SET_GPR_U32(ctx, 31, 0x25C310u);
    ctx->pc = 0x25C30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C308u;
    // 0x25c30c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25C308u, 0x25C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C310u;
label_25c310:
    // 0x25c310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c314:
    // 0x25c314: 0xc053e4a  jal         func_14F928
label_25c318:
    if (ctx->pc == 0x25C318u) {
        ctx->pc = 0x25C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C314u;
        // 0x25c318: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C31Cu;
        goto label_25c31c;
    }
    ctx->pc = 0x25C314u;
    SET_GPR_U32(ctx, 31, 0x25C31Cu);
    ctx->pc = 0x25C318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C314u;
    // 0x25c318: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25C314u, 0x25C31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C31Cu;
label_25c31c:
    // 0x25c31c: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_25c320:
    if (ctx->pc == 0x25C320u) {
        ctx->pc = 0x25C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C31Cu;
        // 0x25c320: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C324u;
        goto label_25c324;
    }
    ctx->pc = 0x25C31Cu;
    {
        const bool branch_taken_0x25c31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C31Cu;
        // 0x25c320: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c31c) {
            ctx->pc = 0x25C5C0u;
            goto label_25c5c0;
        }
    }
    ctx->pc = 0x25C324u;
label_25c324:
    // 0x25c324: 0xc09ac7a  jal         func_26B1E8
label_25c328:
    if (ctx->pc == 0x25C328u) {
        ctx->pc = 0x25C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C324u;
        // 0x25c328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C32Cu;
        goto label_25c32c;
    }
    ctx->pc = 0x25C324u;
    SET_GPR_U32(ctx, 31, 0x25C32Cu);
    ctx->pc = 0x25C328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C324u;
    // 0x25c328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x25C324u, 0x25C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C32Cu;
label_25c32c:
    // 0x25c32c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25c330:
    // 0x25c330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c334:
    // 0x25c334: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25c334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25c338:
    // 0x25c338: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25c338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c33c:
    // 0x25c33c: 0x8c450ca0  lw          $a1, 0xCA0($v0)
    ctx->pc = 0x25c33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3232)));
label_25c340:
    // 0x25c340: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25c340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c344:
    // 0x25c344: 0x8c460ca4  lw          $a2, 0xCA4($v0)
    ctx->pc = 0x25c344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3236)));
label_25c348:
    // 0x25c348: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25c348u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c34c:
    // 0x25c34c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25c34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25c350:
    // 0x25c350: 0xc0aa15e  jal         func_2A8578
label_25c354:
    if (ctx->pc == 0x25C354u) {
        ctx->pc = 0x25C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C350u;
        // 0x25c354: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C358u;
        goto label_25c358;
    }
    ctx->pc = 0x25C350u;
    SET_GPR_U32(ctx, 31, 0x25C358u);
    ctx->pc = 0x25C354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C350u;
    // 0x25c354: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25C350u, 0x25C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C358u;
label_25c358:
    // 0x25c358: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25c358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25c35c:
    // 0x25c35c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25c360:
    // 0x25c360: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25c360u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25c364:
    // 0x25c364: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x25c364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_25c368:
    // 0x25c368: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x25c368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_25c36c:
    // 0x25c36c: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x25c36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25c370:
    // 0x25c370: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x25c370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_25c374:
    // 0x25c374: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25c378:
    // 0x25c378: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25c378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25c37c:
    // 0x25c37c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25c37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_25c380:
    // 0x25c380: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x25c380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
label_25c384:
    // 0x25c384: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x25c384u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_25c388:
    // 0x25c388: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25c388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25c38c:
    // 0x25c38c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25c38cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25c390:
    // 0x25c390: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25c390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_25c394:
    // 0x25c394: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x25c394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_25c398:
    // 0x25c398: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x25c398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25c39c:
    // 0x25c39c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x25c39cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_25c3a0:
    // 0x25c3a0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25c3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c3a4:
    // 0x25c3a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25c3a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_25c3a8:
    // 0x25c3a8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x25c3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_25c3ac:
    // 0x25c3ac: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x25c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25c3b0:
    // 0x25c3b0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25c3b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_25c3b4:
    // 0x25c3b4: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x25c3b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_25c3b8:
    // 0x25c3b8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25c3b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25c3bc:
    // 0x25c3bc: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25c3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25c3c0:
    // 0x25c3c0: 0xc055f06  jal         func_157C18
label_25c3c4:
    if (ctx->pc == 0x25C3C4u) {
        ctx->pc = 0x25C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C3C0u;
        // 0x25c3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C3C8u;
        goto label_25c3c8;
    }
    ctx->pc = 0x25C3C0u;
    SET_GPR_U32(ctx, 31, 0x25C3C8u);
    ctx->pc = 0x25C3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C3C0u;
    // 0x25c3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25C3C0u, 0x25C3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C3C8u;
label_25c3c8:
    // 0x25c3c8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_25c3cc:
    if (ctx->pc == 0x25C3CCu) {
        ctx->pc = 0x25C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C3C8u;
        // 0x25c3cc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C3D0u;
        goto label_25c3d0;
    }
    ctx->pc = 0x25C3C8u;
    {
        const bool branch_taken_0x25c3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C3C8u;
        // 0x25c3cc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c3c8) {
            ctx->pc = 0x25C408u;
            goto label_25c408;
        }
    }
    ctx->pc = 0x25C3D0u;
label_25c3d0:
    // 0x25c3d0: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x25c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_25c3d4:
    // 0x25c3d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25c3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25c3d8:
    // 0x25c3d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x25c3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25c3dc:
    // 0x25c3dc: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x25c3dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_25c3e0:
    // 0x25c3e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25c3e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c3e4:
    // 0x25c3e4: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x25c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_25c3e8:
    // 0x25c3e8: 0x40f809  jalr        $v0
label_25c3ec:
    if (ctx->pc == 0x25C3ECu) {
        ctx->pc = 0x25C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C3E8u;
        // 0x25c3ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C3F0u;
        goto label_25c3f0;
    }
    ctx->pc = 0x25C3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25C3F0u);
        ctx->pc = 0x25C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C3E8u;
        // 0x25c3ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C3E8u, 0x25C3F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25C3F0u;
label_25c3f0:
    // 0x25c3f0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x25c3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_25c3f4:
    // 0x25c3f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25c3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_25c3f8:
    // 0x25c3f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25c3f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25c3fc:
    // 0x25c3fc: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x25c3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_25c400:
    // 0x25c400: 0xc0aa65e  jal         func_2A9978
label_25c404:
    if (ctx->pc == 0x25C404u) {
        ctx->pc = 0x25C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C400u;
        // 0x25c404: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C408u;
        goto label_25c408;
    }
    ctx->pc = 0x25C400u;
    SET_GPR_U32(ctx, 31, 0x25C408u);
    ctx->pc = 0x25C404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C400u;
    // 0x25c404: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x25C400u, 0x25C408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C408u;
label_25c408:
    // 0x25c408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c40c:
    // 0x25c40c: 0xc053e7c  jal         func_14F9F0
label_25c410:
    if (ctx->pc == 0x25C410u) {
        ctx->pc = 0x25C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C40Cu;
        // 0x25c410: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C414u;
        goto label_25c414;
    }
    ctx->pc = 0x25C40Cu;
    SET_GPR_U32(ctx, 31, 0x25C414u);
    ctx->pc = 0x25C410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C40Cu;
    // 0x25c410: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25C40Cu, 0x25C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C414u;
label_25c414:
    // 0x25c414: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25c414u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25c418:
    // 0x25c418: 0xc053e4a  jal         func_14F928
label_25c41c:
    if (ctx->pc == 0x25C41Cu) {
        ctx->pc = 0x25C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C418u;
        // 0x25c41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C420u;
        goto label_25c420;
    }
    ctx->pc = 0x25C418u;
    SET_GPR_U32(ctx, 31, 0x25C420u);
    ctx->pc = 0x25C41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C418u;
    // 0x25c41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25C418u, 0x25C420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C420u;
label_25c420:
    // 0x25c420: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25c420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25c424:
    // 0x25c424: 0x10000065  b           . + 4 + (0x65 << 2)
label_25c428:
    if (ctx->pc == 0x25C428u) {
        ctx->pc = 0x25C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C424u;
        // 0x25c428: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C42Cu;
        goto label_25c42c;
    }
    ctx->pc = 0x25C424u;
    {
        const bool branch_taken_0x25c424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C424u;
        // 0x25c428: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c424) {
            ctx->pc = 0x25C5BCu;
            goto label_25c5bc;
        }
    }
    ctx->pc = 0x25C42Cu;
label_25c42c:
    // 0x25c42c: 0xc09ac7a  jal         func_26B1E8
label_25c430:
    if (ctx->pc == 0x25C430u) {
        ctx->pc = 0x25C430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C42Cu;
        // 0x25c430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C434u;
        goto label_25c434;
    }
    ctx->pc = 0x25C42Cu;
    SET_GPR_U32(ctx, 31, 0x25C434u);
    ctx->pc = 0x25C430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C42Cu;
    // 0x25c430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x25C42Cu, 0x25C434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C434u;
label_25c434:
    // 0x25c434: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25c434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25c438:
    // 0x25c438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c43c:
    // 0x25c43c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25c43cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25c440:
    // 0x25c440: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25c440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c444:
    // 0x25c444: 0x8c450ca8  lw          $a1, 0xCA8($v0)
    ctx->pc = 0x25c444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3240)));
label_25c448:
    // 0x25c448: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25c448u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c44c:
    // 0x25c44c: 0x8c460cac  lw          $a2, 0xCAC($v0)
    ctx->pc = 0x25c44cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3244)));
label_25c450:
    // 0x25c450: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25c450u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c454:
    // 0x25c454: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25c454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25c458:
    // 0x25c458: 0xc0aa15e  jal         func_2A8578
label_25c45c:
    if (ctx->pc == 0x25C45Cu) {
        ctx->pc = 0x25C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C458u;
        // 0x25c45c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C460u;
        goto label_25c460;
    }
    ctx->pc = 0x25C458u;
    SET_GPR_U32(ctx, 31, 0x25C460u);
    ctx->pc = 0x25C45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C458u;
    // 0x25c45c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25C458u, 0x25C460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C460u;
label_25c460:
    // 0x25c460: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25c460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25c464:
    // 0x25c464: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25c464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25c468:
    // 0x25c468: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x25c468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_25c46c:
    // 0x25c46c: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x25c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
label_25c470:
    // 0x25c470: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25c470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25c474:
    // 0x25c474: 0xa604056e  sh          $a0, 0x56E($s0)
    ctx->pc = 0x25c474u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 4));
label_25c478:
    // 0x25c478: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25c478u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25c47c:
    // 0x25c47c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25c47cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25c480:
    // 0x25c480: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x25c480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_25c484:
    // 0x25c484: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_25c488:
    if (ctx->pc == 0x25C488u) {
        ctx->pc = 0x25C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C484u;
        // 0x25c488: 0x8602056e  lh          $v0, 0x56E($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C48Cu;
        goto label_25c48c;
    }
    ctx->pc = 0x25C484u;
    {
        const bool branch_taken_0x25c484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c484) {
            ctx->pc = 0x25C488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C484u;
            // 0x25c488: 0x8602056e  lh          $v0, 0x56E($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C4D4u;
            goto label_25c4d4;
        }
    }
    ctx->pc = 0x25C48Cu;
label_25c48c:
    // 0x25c48c: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x25c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_25c490:
    // 0x25c490: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x25c490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_25c494:
    // 0x25c494: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x25c494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25c498:
    // 0x25c498: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25c49c:
    // 0x25c49c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c49cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c4a0:
    // 0x25c4a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25c4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_25c4a4:
    // 0x25c4a4: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x25c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
label_25c4a8:
    // 0x25c4a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25c4a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_25c4ac:
    // 0x25c4ac: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25c4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25c4b0:
    // 0x25c4b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25c4b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25c4b4:
    // 0x25c4b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25c4b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_25c4b8:
    // 0x25c4b8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x25c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_25c4bc:
    // 0x25c4bc: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x25c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25c4c0:
    // 0x25c4c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x25c4c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_25c4c4:
    // 0x25c4c4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25c4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c4c8:
    // 0x25c4c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25c4c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_25c4cc:
    // 0x25c4cc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x25c4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_25c4d0:
    // 0x25c4d0: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x25c4d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_25c4d4:
    // 0x25c4d4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_25c4d8:
    if (ctx->pc == 0x25C4D8u) {
        ctx->pc = 0x25C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C4D4u;
        // 0x25c4d8: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C4DCu;
        goto label_25c4dc;
    }
    ctx->pc = 0x25C4D4u;
    {
        const bool branch_taken_0x25c4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C4D4u;
        // 0x25c4d8: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c4d4) {
            ctx->pc = 0x25C4FCu;
            goto label_25c4fc;
        }
    }
    ctx->pc = 0x25C4DCu;
label_25c4dc:
    // 0x25c4dc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x25c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_25c4e0:
    // 0x25c4e0: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x25c4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25c4e4:
    // 0x25c4e4: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x25c4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
label_25c4e8:
    // 0x25c4e8: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x25c4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_25c4ec:
    // 0x25c4ec: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25c4ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_25c4f0:
    // 0x25c4f0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x25c4f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_25c4f4:
    // 0x25c4f4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25c4f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25c4f8:
    // 0x25c4f8: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25c4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25c4fc:
    // 0x25c4fc: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25c4fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25c500:
    // 0x25c500: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25c500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25c504:
    // 0x25c504: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_25c508:
    if (ctx->pc == 0x25C508u) {
        ctx->pc = 0x25C50Cu;
        goto label_25c50c;
    }
    ctx->pc = 0x25C504u;
    {
        const bool branch_taken_0x25c504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c504) {
            ctx->pc = 0x25C554u;
            goto label_25c554;
        }
    }
    ctx->pc = 0x25C50Cu;
label_25c50c:
    // 0x25c50c: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x25c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_25c510:
    // 0x25c510: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_25c514:
    if (ctx->pc == 0x25C514u) {
        ctx->pc = 0x25C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C510u;
        // 0x25c514: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C518u;
        goto label_25c518;
    }
    ctx->pc = 0x25C510u;
    {
        const bool branch_taken_0x25c510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C510u;
        // 0x25c514: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c510) {
            ctx->pc = 0x25C554u;
            goto label_25c554;
        }
    }
    ctx->pc = 0x25C518u;
label_25c518:
    // 0x25c518: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x25c518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
label_25c51c:
    // 0x25c51c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x25c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_25c520:
    // 0x25c520: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25c520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25c524:
    // 0x25c524: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x25c524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25c528:
    // 0x25c528: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25c528u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c52c:
    // 0x25c52c: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x25c52cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_25c530:
    // 0x25c530: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x25c530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_25c534:
    // 0x25c534: 0x40f809  jalr        $v0
label_25c538:
    if (ctx->pc == 0x25C538u) {
        ctx->pc = 0x25C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C534u;
        // 0x25c538: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C53Cu;
        goto label_25c53c;
    }
    ctx->pc = 0x25C534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25C53Cu);
        ctx->pc = 0x25C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C534u;
        // 0x25c538: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C534u, 0x25C53Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25C53Cu;
label_25c53c:
    // 0x25c53c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x25c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_25c540:
    // 0x25c540: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25c544:
    // 0x25c544: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25c544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25c548:
    // 0x25c548: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x25c548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_25c54c:
    // 0x25c54c: 0xc0aa65e  jal         func_2A9978
label_25c550:
    if (ctx->pc == 0x25C550u) {
        ctx->pc = 0x25C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C54Cu;
        // 0x25c550: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C554u;
        goto label_25c554;
    }
    ctx->pc = 0x25C54Cu;
    SET_GPR_U32(ctx, 31, 0x25C554u);
    ctx->pc = 0x25C550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C54Cu;
    // 0x25c550: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x25C54Cu, 0x25C554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C554u;
label_25c554:
    // 0x25c554: 0xc055f06  jal         func_157C18
label_25c558:
    if (ctx->pc == 0x25C558u) {
        ctx->pc = 0x25C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C554u;
        // 0x25c558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C55Cu;
        goto label_25c55c;
    }
    ctx->pc = 0x25C554u;
    SET_GPR_U32(ctx, 31, 0x25C55Cu);
    ctx->pc = 0x25C558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C554u;
    // 0x25c558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25C554u, 0x25C55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C55Cu;
label_25c55c:
    // 0x25c55c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_25c560:
    if (ctx->pc == 0x25C560u) {
        ctx->pc = 0x25C564u;
        goto label_25c564;
    }
    ctx->pc = 0x25C55Cu;
    {
        const bool branch_taken_0x25c55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c55c) {
            ctx->pc = 0x25C59Cu;
            goto label_25c59c;
        }
    }
    ctx->pc = 0x25C564u;
label_25c564:
    // 0x25c564: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x25c564u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_25c568:
    // 0x25c568: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
label_25c56c:
    if (ctx->pc == 0x25C56Cu) {
        ctx->pc = 0x25C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C568u;
        // 0x25c56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C570u;
        goto label_25c570;
    }
    ctx->pc = 0x25C568u;
    {
        const bool branch_taken_0x25c568 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x25C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C568u;
        // 0x25c56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c568) {
            ctx->pc = 0x25C594u;
            goto label_25c594;
        }
    }
    ctx->pc = 0x25C570u;
label_25c570:
    // 0x25c570: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x25c570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_25c574:
    // 0x25c574: 0xc097f8c  jal         func_25FE30
label_25c578:
    if (ctx->pc == 0x25C578u) {
        ctx->pc = 0x25C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C574u;
        // 0x25c578: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C57Cu;
        goto label_25c57c;
    }
    ctx->pc = 0x25C574u;
    SET_GPR_U32(ctx, 31, 0x25C57Cu);
    ctx->pc = 0x25C578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C574u;
    // 0x25c578: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x25C574u, 0x25C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C57Cu;
label_25c57c:
    // 0x25c57c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25c580:
    // 0x25c580: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x25c580u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_25c584:
    // 0x25c584: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x25c584u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
label_25c588:
    // 0x25c588: 0xa20302f4  sb          $v1, 0x2F4($s0)
    ctx->pc = 0x25c588u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
label_25c58c:
    // 0x25c58c: 0x1000000b  b           . + 4 + (0xB << 2)
label_25c590:
    if (ctx->pc == 0x25C590u) {
        ctx->pc = 0x25C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C58Cu;
        // 0x25c590: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C594u;
        goto label_25c594;
    }
    ctx->pc = 0x25C58Cu;
    {
        const bool branch_taken_0x25c58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C58Cu;
        // 0x25c590: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c58c) {
            ctx->pc = 0x25C5BCu;
            goto label_25c5bc;
        }
    }
    ctx->pc = 0x25C594u;
label_25c594:
    // 0x25c594: 0xc09d3fa  jal         func_274FE8
label_25c598:
    if (ctx->pc == 0x25C598u) {
        ctx->pc = 0x25C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C594u;
        // 0x25c598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C59Cu;
        goto label_25c59c;
    }
    ctx->pc = 0x25C594u;
    SET_GPR_U32(ctx, 31, 0x25C59Cu);
    ctx->pc = 0x25C598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C594u;
    // 0x25c598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE8u, 0x25C594u, 0x25C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C59Cu;
label_25c59c:
    // 0x25c59c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25c5a0:
    // 0x25c5a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25c5a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25c5a4:
    // 0x25c5a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c5a8:
    // 0x25c5a8: 0xc053e7c  jal         func_14F9F0
label_25c5ac:
    if (ctx->pc == 0x25C5ACu) {
        ctx->pc = 0x25C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C5A8u;
        // 0x25c5ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C5B0u;
        goto label_25c5b0;
    }
    ctx->pc = 0x25C5A8u;
    SET_GPR_U32(ctx, 31, 0x25C5B0u);
    ctx->pc = 0x25C5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C5A8u;
    // 0x25c5ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25C5A8u, 0x25C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C5B0u;
label_25c5b0:
    // 0x25c5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c5b4:
    // 0x25c5b4: 0xc053e4a  jal         func_14F928
label_25c5b8:
    if (ctx->pc == 0x25C5B8u) {
        ctx->pc = 0x25C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C5B4u;
        // 0x25c5b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C5BCu;
        goto label_25c5bc;
    }
    ctx->pc = 0x25C5B4u;
    SET_GPR_U32(ctx, 31, 0x25C5BCu);
    ctx->pc = 0x25C5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C5B4u;
    // 0x25c5b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25C5B4u, 0x25C5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C5BCu;
label_25c5bc:
    // 0x25c5bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25c5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25c5c0:
    // 0x25c5c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25c5c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25c5c4:
    // 0x25c5c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25c5c8:
    // 0x25c5c8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x25c5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25c5cc:
    // 0x25c5cc: 0x3e00008  jr          $ra
label_25c5d0:
    if (ctx->pc == 0x25C5D0u) {
        ctx->pc = 0x25C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C5CCu;
        // 0x25c5d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C5D4u;
        goto label_25c5d4;
    }
    ctx->pc = 0x25C5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C5CCu;
        // 0x25c5d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C5D4u;
label_25c5d4:
    // 0x25c5d4: 0x0  nop
    ctx->pc = 0x25c5d4u;
    // NOP
    ctx->pc = 0x25c5d8u;
}
