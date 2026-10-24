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

// Function: func_0025E248
// Address: 0x25e248 - 0x25e600
void func_0025E248_0x25e248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025E248_0x25e248");
#endif

    switch (ctx->pc) {
        case 0x25e248u: goto label_25e248;
        case 0x25e24cu: goto label_25e24c;
        case 0x25e250u: goto label_25e250;
        case 0x25e254u: goto label_25e254;
        case 0x25e258u: goto label_25e258;
        case 0x25e25cu: goto label_25e25c;
        case 0x25e260u: goto label_25e260;
        case 0x25e264u: goto label_25e264;
        case 0x25e268u: goto label_25e268;
        case 0x25e26cu: goto label_25e26c;
        case 0x25e270u: goto label_25e270;
        case 0x25e274u: goto label_25e274;
        case 0x25e278u: goto label_25e278;
        case 0x25e27cu: goto label_25e27c;
        case 0x25e280u: goto label_25e280;
        case 0x25e284u: goto label_25e284;
        case 0x25e288u: goto label_25e288;
        case 0x25e28cu: goto label_25e28c;
        case 0x25e290u: goto label_25e290;
        case 0x25e294u: goto label_25e294;
        case 0x25e298u: goto label_25e298;
        case 0x25e29cu: goto label_25e29c;
        case 0x25e2a0u: goto label_25e2a0;
        case 0x25e2a4u: goto label_25e2a4;
        case 0x25e2a8u: goto label_25e2a8;
        case 0x25e2acu: goto label_25e2ac;
        case 0x25e2b0u: goto label_25e2b0;
        case 0x25e2b4u: goto label_25e2b4;
        case 0x25e2b8u: goto label_25e2b8;
        case 0x25e2bcu: goto label_25e2bc;
        case 0x25e2c0u: goto label_25e2c0;
        case 0x25e2c4u: goto label_25e2c4;
        case 0x25e2c8u: goto label_25e2c8;
        case 0x25e2ccu: goto label_25e2cc;
        case 0x25e2d0u: goto label_25e2d0;
        case 0x25e2d4u: goto label_25e2d4;
        case 0x25e2d8u: goto label_25e2d8;
        case 0x25e2dcu: goto label_25e2dc;
        case 0x25e2e0u: goto label_25e2e0;
        case 0x25e2e4u: goto label_25e2e4;
        case 0x25e2e8u: goto label_25e2e8;
        case 0x25e2ecu: goto label_25e2ec;
        case 0x25e2f0u: goto label_25e2f0;
        case 0x25e2f4u: goto label_25e2f4;
        case 0x25e2f8u: goto label_25e2f8;
        case 0x25e2fcu: goto label_25e2fc;
        case 0x25e300u: goto label_25e300;
        case 0x25e304u: goto label_25e304;
        case 0x25e308u: goto label_25e308;
        case 0x25e30cu: goto label_25e30c;
        case 0x25e310u: goto label_25e310;
        case 0x25e314u: goto label_25e314;
        case 0x25e318u: goto label_25e318;
        case 0x25e31cu: goto label_25e31c;
        case 0x25e320u: goto label_25e320;
        case 0x25e324u: goto label_25e324;
        case 0x25e328u: goto label_25e328;
        case 0x25e32cu: goto label_25e32c;
        case 0x25e330u: goto label_25e330;
        case 0x25e334u: goto label_25e334;
        case 0x25e338u: goto label_25e338;
        case 0x25e33cu: goto label_25e33c;
        case 0x25e340u: goto label_25e340;
        case 0x25e344u: goto label_25e344;
        case 0x25e348u: goto label_25e348;
        case 0x25e34cu: goto label_25e34c;
        case 0x25e350u: goto label_25e350;
        case 0x25e354u: goto label_25e354;
        case 0x25e358u: goto label_25e358;
        case 0x25e35cu: goto label_25e35c;
        case 0x25e360u: goto label_25e360;
        case 0x25e364u: goto label_25e364;
        case 0x25e368u: goto label_25e368;
        case 0x25e36cu: goto label_25e36c;
        case 0x25e370u: goto label_25e370;
        case 0x25e374u: goto label_25e374;
        case 0x25e378u: goto label_25e378;
        case 0x25e37cu: goto label_25e37c;
        case 0x25e380u: goto label_25e380;
        case 0x25e384u: goto label_25e384;
        case 0x25e388u: goto label_25e388;
        case 0x25e38cu: goto label_25e38c;
        case 0x25e390u: goto label_25e390;
        case 0x25e394u: goto label_25e394;
        case 0x25e398u: goto label_25e398;
        case 0x25e39cu: goto label_25e39c;
        case 0x25e3a0u: goto label_25e3a0;
        case 0x25e3a4u: goto label_25e3a4;
        case 0x25e3a8u: goto label_25e3a8;
        case 0x25e3acu: goto label_25e3ac;
        case 0x25e3b0u: goto label_25e3b0;
        case 0x25e3b4u: goto label_25e3b4;
        case 0x25e3b8u: goto label_25e3b8;
        case 0x25e3bcu: goto label_25e3bc;
        case 0x25e3c0u: goto label_25e3c0;
        case 0x25e3c4u: goto label_25e3c4;
        case 0x25e3c8u: goto label_25e3c8;
        case 0x25e3ccu: goto label_25e3cc;
        case 0x25e3d0u: goto label_25e3d0;
        case 0x25e3d4u: goto label_25e3d4;
        case 0x25e3d8u: goto label_25e3d8;
        case 0x25e3dcu: goto label_25e3dc;
        case 0x25e3e0u: goto label_25e3e0;
        case 0x25e3e4u: goto label_25e3e4;
        case 0x25e3e8u: goto label_25e3e8;
        case 0x25e3ecu: goto label_25e3ec;
        case 0x25e3f0u: goto label_25e3f0;
        case 0x25e3f4u: goto label_25e3f4;
        case 0x25e3f8u: goto label_25e3f8;
        case 0x25e3fcu: goto label_25e3fc;
        case 0x25e400u: goto label_25e400;
        case 0x25e404u: goto label_25e404;
        case 0x25e408u: goto label_25e408;
        case 0x25e40cu: goto label_25e40c;
        case 0x25e410u: goto label_25e410;
        case 0x25e414u: goto label_25e414;
        case 0x25e418u: goto label_25e418;
        case 0x25e41cu: goto label_25e41c;
        case 0x25e420u: goto label_25e420;
        case 0x25e424u: goto label_25e424;
        case 0x25e428u: goto label_25e428;
        case 0x25e42cu: goto label_25e42c;
        case 0x25e430u: goto label_25e430;
        case 0x25e434u: goto label_25e434;
        case 0x25e438u: goto label_25e438;
        case 0x25e43cu: goto label_25e43c;
        case 0x25e440u: goto label_25e440;
        case 0x25e444u: goto label_25e444;
        case 0x25e448u: goto label_25e448;
        case 0x25e44cu: goto label_25e44c;
        case 0x25e450u: goto label_25e450;
        case 0x25e454u: goto label_25e454;
        case 0x25e458u: goto label_25e458;
        case 0x25e45cu: goto label_25e45c;
        case 0x25e460u: goto label_25e460;
        case 0x25e464u: goto label_25e464;
        case 0x25e468u: goto label_25e468;
        case 0x25e46cu: goto label_25e46c;
        case 0x25e470u: goto label_25e470;
        case 0x25e474u: goto label_25e474;
        case 0x25e478u: goto label_25e478;
        case 0x25e47cu: goto label_25e47c;
        case 0x25e480u: goto label_25e480;
        case 0x25e484u: goto label_25e484;
        case 0x25e488u: goto label_25e488;
        case 0x25e48cu: goto label_25e48c;
        case 0x25e490u: goto label_25e490;
        case 0x25e494u: goto label_25e494;
        case 0x25e498u: goto label_25e498;
        case 0x25e49cu: goto label_25e49c;
        case 0x25e4a0u: goto label_25e4a0;
        case 0x25e4a4u: goto label_25e4a4;
        case 0x25e4a8u: goto label_25e4a8;
        case 0x25e4acu: goto label_25e4ac;
        case 0x25e4b0u: goto label_25e4b0;
        case 0x25e4b4u: goto label_25e4b4;
        case 0x25e4b8u: goto label_25e4b8;
        case 0x25e4bcu: goto label_25e4bc;
        case 0x25e4c0u: goto label_25e4c0;
        case 0x25e4c4u: goto label_25e4c4;
        case 0x25e4c8u: goto label_25e4c8;
        case 0x25e4ccu: goto label_25e4cc;
        case 0x25e4d0u: goto label_25e4d0;
        case 0x25e4d4u: goto label_25e4d4;
        case 0x25e4d8u: goto label_25e4d8;
        case 0x25e4dcu: goto label_25e4dc;
        case 0x25e4e0u: goto label_25e4e0;
        case 0x25e4e4u: goto label_25e4e4;
        case 0x25e4e8u: goto label_25e4e8;
        case 0x25e4ecu: goto label_25e4ec;
        case 0x25e4f0u: goto label_25e4f0;
        case 0x25e4f4u: goto label_25e4f4;
        case 0x25e4f8u: goto label_25e4f8;
        case 0x25e4fcu: goto label_25e4fc;
        case 0x25e500u: goto label_25e500;
        case 0x25e504u: goto label_25e504;
        case 0x25e508u: goto label_25e508;
        case 0x25e50cu: goto label_25e50c;
        case 0x25e510u: goto label_25e510;
        case 0x25e514u: goto label_25e514;
        case 0x25e518u: goto label_25e518;
        case 0x25e51cu: goto label_25e51c;
        case 0x25e520u: goto label_25e520;
        case 0x25e524u: goto label_25e524;
        case 0x25e528u: goto label_25e528;
        case 0x25e52cu: goto label_25e52c;
        case 0x25e530u: goto label_25e530;
        case 0x25e534u: goto label_25e534;
        case 0x25e538u: goto label_25e538;
        case 0x25e53cu: goto label_25e53c;
        case 0x25e540u: goto label_25e540;
        case 0x25e544u: goto label_25e544;
        case 0x25e548u: goto label_25e548;
        case 0x25e54cu: goto label_25e54c;
        case 0x25e550u: goto label_25e550;
        case 0x25e554u: goto label_25e554;
        case 0x25e558u: goto label_25e558;
        case 0x25e55cu: goto label_25e55c;
        case 0x25e560u: goto label_25e560;
        case 0x25e564u: goto label_25e564;
        case 0x25e568u: goto label_25e568;
        case 0x25e56cu: goto label_25e56c;
        case 0x25e570u: goto label_25e570;
        case 0x25e574u: goto label_25e574;
        case 0x25e578u: goto label_25e578;
        case 0x25e57cu: goto label_25e57c;
        case 0x25e580u: goto label_25e580;
        case 0x25e584u: goto label_25e584;
        case 0x25e588u: goto label_25e588;
        case 0x25e58cu: goto label_25e58c;
        case 0x25e590u: goto label_25e590;
        case 0x25e594u: goto label_25e594;
        case 0x25e598u: goto label_25e598;
        case 0x25e59cu: goto label_25e59c;
        case 0x25e5a0u: goto label_25e5a0;
        case 0x25e5a4u: goto label_25e5a4;
        case 0x25e5a8u: goto label_25e5a8;
        case 0x25e5acu: goto label_25e5ac;
        case 0x25e5b0u: goto label_25e5b0;
        case 0x25e5b4u: goto label_25e5b4;
        case 0x25e5b8u: goto label_25e5b8;
        case 0x25e5bcu: goto label_25e5bc;
        case 0x25e5c0u: goto label_25e5c0;
        case 0x25e5c4u: goto label_25e5c4;
        case 0x25e5c8u: goto label_25e5c8;
        case 0x25e5ccu: goto label_25e5cc;
        case 0x25e5d0u: goto label_25e5d0;
        case 0x25e5d4u: goto label_25e5d4;
        case 0x25e5d8u: goto label_25e5d8;
        case 0x25e5dcu: goto label_25e5dc;
        case 0x25e5e0u: goto label_25e5e0;
        case 0x25e5e4u: goto label_25e5e4;
        case 0x25e5e8u: goto label_25e5e8;
        case 0x25e5ecu: goto label_25e5ec;
        case 0x25e5f0u: goto label_25e5f0;
        case 0x25e5f4u: goto label_25e5f4;
        case 0x25e5f8u: goto label_25e5f8;
        case 0x25e5fcu: goto label_25e5fc;
        default: break;
    }

    ctx->pc = 0x25e248u;

label_25e248:
    // 0x25e248: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25e248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_25e24c:
    // 0x25e24c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x25e24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_25e250:
    // 0x25e250: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25e250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25e254:
    // 0x25e254: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25e254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_25e258:
    // 0x25e258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25e258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_25e25c:
    // 0x25e25c: 0xc0b6dac  jal         func_2DB6B0
label_25e260:
    if (ctx->pc == 0x25E260u) {
        ctx->pc = 0x25E260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E25Cu;
        // 0x25e260: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E264u;
        goto label_25e264;
    }
    ctx->pc = 0x25E25Cu;
    SET_GPR_U32(ctx, 31, 0x25E264u);
    ctx->pc = 0x25E260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E25Cu;
    // 0x25e260: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x25E25Cu, 0x25E264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E264u;
label_25e264:
    // 0x25e264: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25e264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e268:
    // 0x25e268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e26c:
    // 0x25e26c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x25e26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25e270:
    // 0x25e270: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x25e270u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_25e274:
    // 0x25e274: 0xc0560a2  jal         func_158288
label_25e278:
    if (ctx->pc == 0x25E278u) {
        ctx->pc = 0x25E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E274u;
        // 0x25e278: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E27Cu;
        goto label_25e27c;
    }
    ctx->pc = 0x25E274u;
    SET_GPR_U32(ctx, 31, 0x25E27Cu);
    ctx->pc = 0x25E278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E274u;
    // 0x25e278: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x25E274u, 0x25E27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E27Cu;
label_25e27c:
    // 0x25e27c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25e27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_25e280:
    // 0x25e280: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25e280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25e284:
    // 0x25e284: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x25e284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_25e288:
    // 0x25e288: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x25e288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_25e28c:
    // 0x25e28c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25e28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e290:
    // 0x25e290: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x25e290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_25e294:
    // 0x25e294: 0xc04d476  jal         func_1351D8
label_25e298:
    if (ctx->pc == 0x25E298u) {
        ctx->pc = 0x25E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E294u;
        // 0x25e298: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E29Cu;
        goto label_25e29c;
    }
    ctx->pc = 0x25E294u;
    SET_GPR_U32(ctx, 31, 0x25E29Cu);
    ctx->pc = 0x25E298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E294u;
    // 0x25e298: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x25E294u, 0x25E29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E29Cu;
label_25e29c:
    // 0x25e29c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x25e29cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25e2a0:
    // 0x25e2a0: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x25e2a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_25e2a4:
    // 0x25e2a4: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
label_25e2a8:
    if (ctx->pc == 0x25E2A8u) {
        ctx->pc = 0x25E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2A4u;
        // 0x25e2a8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E2ACu;
        goto label_25e2ac;
    }
    ctx->pc = 0x25E2A4u;
    {
        const bool branch_taken_0x25e2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2A4u;
        // 0x25e2a8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e2a4) {
            ctx->pc = 0x25E48Cu;
            goto label_25e48c;
        }
    }
    ctx->pc = 0x25E2ACu;
label_25e2ac:
    // 0x25e2ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25e2b0:
    // 0x25e2b0: 0x24423aa0  addiu       $v0, $v0, 0x3AA0
    ctx->pc = 0x25e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15008));
label_25e2b4:
    // 0x25e2b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25e2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25e2b8:
    // 0x25e2b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25e2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25e2bc:
    // 0x25e2bc: 0x800008  jr          $a0
label_25e2c0:
    if (ctx->pc == 0x25E2C0u) {
        ctx->pc = 0x25E2C4u;
        goto label_25e2c4;
    }
    ctx->pc = 0x25E2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25E2C4u: goto label_25e2c4;
            case 0x25E338u: goto label_25e338;
            case 0x25E3ACu: goto label_25e3ac;
            case 0x25E3E0u: goto label_25e3e0;
            case 0x25E454u: goto label_25e454;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E2BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25E2C4u;
label_25e2c4:
    // 0x25e2c4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25e2c8:
    // 0x25e2c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e2cc:
    // 0x25e2cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25e2ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25e2d0:
    // 0x25e2d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25e2d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e2d4:
    // 0x25e2d4: 0x8c453e4c  lw          $a1, 0x3E4C($v0)
    ctx->pc = 0x25e2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15948)));
label_25e2d8:
    // 0x25e2d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25e2d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e2dc:
    // 0x25e2dc: 0x8c463e50  lw          $a2, 0x3E50($v0)
    ctx->pc = 0x25e2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15952)));
label_25e2e0:
    // 0x25e2e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25e2e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e2e4:
    // 0x25e2e4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25e2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25e2e8:
    // 0x25e2e8: 0xc0aa15e  jal         func_2A8578
label_25e2ec:
    if (ctx->pc == 0x25E2ECu) {
        ctx->pc = 0x25E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2E8u;
        // 0x25e2ec: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E2F0u;
        goto label_25e2f0;
    }
    ctx->pc = 0x25E2E8u;
    SET_GPR_U32(ctx, 31, 0x25E2F0u);
    ctx->pc = 0x25E2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E2E8u;
    // 0x25e2ec: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25E2E8u, 0x25E2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E2F0u;
label_25e2f0:
    // 0x25e2f0: 0x8e040748  lw          $a0, 0x748($s0)
    ctx->pc = 0x25e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
label_25e2f4:
    // 0x25e2f4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25e2f8:
    if (ctx->pc == 0x25E2F8u) {
        ctx->pc = 0x25E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2F4u;
        // 0x25e2f8: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E2FCu;
        goto label_25e2fc;
    }
    ctx->pc = 0x25E2F4u;
    {
        const bool branch_taken_0x25e2f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e2f4) {
            ctx->pc = 0x25E2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E2F4u;
            // 0x25e2f8: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E308u;
            goto label_25e308;
        }
    }
    ctx->pc = 0x25E2FCu;
label_25e2fc:
    // 0x25e2fc: 0xc0a0558  jal         func_281560
label_25e300:
    if (ctx->pc == 0x25E300u) {
        ctx->pc = 0x25E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E2FCu;
        // 0x25e300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E304u;
        goto label_25e304;
    }
    ctx->pc = 0x25E2FCu;
    SET_GPR_U32(ctx, 31, 0x25E304u);
    ctx->pc = 0x25E300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E2FCu;
    // 0x25e300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281560u, 0x25E2FCu, 0x25E304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E304u;
label_25e304:
    // 0x25e304: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x25e304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
label_25e308:
    // 0x25e308: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25e30c:
    if (ctx->pc == 0x25E30Cu) {
        ctx->pc = 0x25E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E308u;
        // 0x25e30c: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E310u;
        goto label_25e310;
    }
    ctx->pc = 0x25E308u;
    {
        const bool branch_taken_0x25e308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e308) {
            ctx->pc = 0x25E30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E308u;
            // 0x25e30c: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E31Cu;
            goto label_25e31c;
        }
    }
    ctx->pc = 0x25E310u;
label_25e310:
    // 0x25e310: 0xc0a0d0e  jal         func_283438
label_25e314:
    if (ctx->pc == 0x25E314u) {
        ctx->pc = 0x25E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E310u;
        // 0x25e314: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E318u;
        goto label_25e318;
    }
    ctx->pc = 0x25E310u;
    SET_GPR_U32(ctx, 31, 0x25E318u);
    ctx->pc = 0x25E314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E310u;
    // 0x25e314: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283438u, 0x25E310u, 0x25E318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E318u;
label_25e318:
    // 0x25e318: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x25e318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_25e31c:
    // 0x25e31c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25e320:
    if (ctx->pc == 0x25E320u) {
        ctx->pc = 0x25E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E31Cu;
        // 0x25e320: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E324u;
        goto label_25e324;
    }
    ctx->pc = 0x25E31Cu;
    {
        const bool branch_taken_0x25e31c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e31c) {
            ctx->pc = 0x25E320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E31Cu;
            // 0x25e320: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E330u;
            goto label_25e330;
        }
    }
    ctx->pc = 0x25E324u;
label_25e324:
    // 0x25e324: 0xc0a0d0e  jal         func_283438
label_25e328:
    if (ctx->pc == 0x25E328u) {
        ctx->pc = 0x25E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E324u;
        // 0x25e328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E32Cu;
        goto label_25e32c;
    }
    ctx->pc = 0x25E324u;
    SET_GPR_U32(ctx, 31, 0x25E32Cu);
    ctx->pc = 0x25E328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E324u;
    // 0x25e328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283438u, 0x25E324u, 0x25E32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E32Cu;
label_25e32c:
    // 0x25e32c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25e32cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25e330:
    // 0x25e330: 0x1000001c  b           . + 4 + (0x1C << 2)
label_25e334:
    if (ctx->pc == 0x25E334u) {
        ctx->pc = 0x25E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E330u;
        // 0x25e334: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E338u;
        goto label_25e338;
    }
    ctx->pc = 0x25E330u;
    {
        const bool branch_taken_0x25e330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E330u;
        // 0x25e334: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e330) {
            ctx->pc = 0x25E3A4u;
            goto label_25e3a4;
        }
    }
    ctx->pc = 0x25E338u;
label_25e338:
    // 0x25e338: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25e338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25e33c:
    // 0x25e33c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e340:
    // 0x25e340: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25e340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25e344:
    // 0x25e344: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25e344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e348:
    // 0x25e348: 0x8c453e54  lw          $a1, 0x3E54($v0)
    ctx->pc = 0x25e348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15956)));
label_25e34c:
    // 0x25e34c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25e34cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e350:
    // 0x25e350: 0x8c463e58  lw          $a2, 0x3E58($v0)
    ctx->pc = 0x25e350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15960)));
label_25e354:
    // 0x25e354: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25e354u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e358:
    // 0x25e358: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25e358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25e35c:
    // 0x25e35c: 0xc0aa15e  jal         func_2A8578
label_25e360:
    if (ctx->pc == 0x25E360u) {
        ctx->pc = 0x25E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E35Cu;
        // 0x25e360: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E364u;
        goto label_25e364;
    }
    ctx->pc = 0x25E35Cu;
    SET_GPR_U32(ctx, 31, 0x25E364u);
    ctx->pc = 0x25E360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E35Cu;
    // 0x25e360: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25E35Cu, 0x25E364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E364u;
label_25e364:
    // 0x25e364: 0x8e040748  lw          $a0, 0x748($s0)
    ctx->pc = 0x25e364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
label_25e368:
    // 0x25e368: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25e36c:
    if (ctx->pc == 0x25E36Cu) {
        ctx->pc = 0x25E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E368u;
        // 0x25e36c: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E370u;
        goto label_25e370;
    }
    ctx->pc = 0x25E368u;
    {
        const bool branch_taken_0x25e368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e368) {
            ctx->pc = 0x25E36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E368u;
            // 0x25e36c: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E37Cu;
            goto label_25e37c;
        }
    }
    ctx->pc = 0x25E370u;
label_25e370:
    // 0x25e370: 0xc0a0558  jal         func_281560
label_25e374:
    if (ctx->pc == 0x25E374u) {
        ctx->pc = 0x25E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E370u;
        // 0x25e374: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E378u;
        goto label_25e378;
    }
    ctx->pc = 0x25E370u;
    SET_GPR_U32(ctx, 31, 0x25E378u);
    ctx->pc = 0x25E374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E370u;
    // 0x25e374: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281560u, 0x25E370u, 0x25E378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E378u;
label_25e378:
    // 0x25e378: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x25e378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
label_25e37c:
    // 0x25e37c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25e380:
    if (ctx->pc == 0x25E380u) {
        ctx->pc = 0x25E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E37Cu;
        // 0x25e380: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E384u;
        goto label_25e384;
    }
    ctx->pc = 0x25E37Cu;
    {
        const bool branch_taken_0x25e37c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e37c) {
            ctx->pc = 0x25E380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E37Cu;
            // 0x25e380: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E390u;
            goto label_25e390;
        }
    }
    ctx->pc = 0x25E384u;
label_25e384:
    // 0x25e384: 0xc0a0d0e  jal         func_283438
label_25e388:
    if (ctx->pc == 0x25E388u) {
        ctx->pc = 0x25E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E384u;
        // 0x25e388: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E38Cu;
        goto label_25e38c;
    }
    ctx->pc = 0x25E384u;
    SET_GPR_U32(ctx, 31, 0x25E38Cu);
    ctx->pc = 0x25E388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E384u;
    // 0x25e388: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283438u, 0x25E384u, 0x25E38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E38Cu;
label_25e38c:
    // 0x25e38c: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x25e38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_25e390:
    // 0x25e390: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25e394:
    if (ctx->pc == 0x25E394u) {
        ctx->pc = 0x25E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E390u;
        // 0x25e394: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E398u;
        goto label_25e398;
    }
    ctx->pc = 0x25E390u;
    {
        const bool branch_taken_0x25e390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e390) {
            ctx->pc = 0x25E394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E390u;
            // 0x25e394: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E3A4u;
            goto label_25e3a4;
        }
    }
    ctx->pc = 0x25E398u;
label_25e398:
    // 0x25e398: 0xc0a0d0e  jal         func_283438
label_25e39c:
    if (ctx->pc == 0x25E39Cu) {
        ctx->pc = 0x25E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E398u;
        // 0x25e39c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E3A0u;
        goto label_25e3a0;
    }
    ctx->pc = 0x25E398u;
    SET_GPR_U32(ctx, 31, 0x25E3A0u);
    ctx->pc = 0x25E39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E398u;
    // 0x25e39c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283438u, 0x25E398u, 0x25E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E3A0u;
label_25e3a0:
    // 0x25e3a0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25e3a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25e3a4:
    // 0x25e3a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25e3a8:
    // 0x25e3a8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25e3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25e3ac:
    // 0x25e3ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25e3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25e3b0:
    // 0x25e3b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25e3b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25e3b4:
    // 0x25e3b4: 0xc055f06  jal         func_157C18
label_25e3b8:
    if (ctx->pc == 0x25E3B8u) {
        ctx->pc = 0x25E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3B4u;
        // 0x25e3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E3BCu;
        goto label_25e3bc;
    }
    ctx->pc = 0x25E3B4u;
    SET_GPR_U32(ctx, 31, 0x25E3BCu);
    ctx->pc = 0x25E3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E3B4u;
    // 0x25e3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25E3B4u, 0x25E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E3BCu;
label_25e3bc:
    // 0x25e3bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e3c0:
    // 0x25e3c0: 0xc053e7c  jal         func_14F9F0
label_25e3c4:
    if (ctx->pc == 0x25E3C4u) {
        ctx->pc = 0x25E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3C0u;
        // 0x25e3c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E3C8u;
        goto label_25e3c8;
    }
    ctx->pc = 0x25E3C0u;
    SET_GPR_U32(ctx, 31, 0x25E3C8u);
    ctx->pc = 0x25E3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E3C0u;
    // 0x25e3c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25E3C0u, 0x25E3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E3C8u;
label_25e3c8:
    // 0x25e3c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25e3c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25e3cc:
    // 0x25e3cc: 0xc053e4a  jal         func_14F928
label_25e3d0:
    if (ctx->pc == 0x25E3D0u) {
        ctx->pc = 0x25E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3CCu;
        // 0x25e3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E3D4u;
        goto label_25e3d4;
    }
    ctx->pc = 0x25E3CCu;
    SET_GPR_U32(ctx, 31, 0x25E3D4u);
    ctx->pc = 0x25E3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E3CCu;
    // 0x25e3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25E3CCu, 0x25E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E3D4u;
label_25e3d4:
    // 0x25e3d4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25e3d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25e3d8:
    // 0x25e3d8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_25e3dc:
    if (ctx->pc == 0x25E3DCu) {
        ctx->pc = 0x25E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3D8u;
        // 0x25e3dc: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E3E0u;
        goto label_25e3e0;
    }
    ctx->pc = 0x25E3D8u;
    {
        const bool branch_taken_0x25e3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E3D8u;
        // 0x25e3dc: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e3d8) {
            ctx->pc = 0x25E48Cu;
            goto label_25e48c;
        }
    }
    ctx->pc = 0x25E3E0u;
label_25e3e0:
    // 0x25e3e0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25e3e4:
    // 0x25e3e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e3e8:
    // 0x25e3e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25e3e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25e3ec:
    // 0x25e3ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25e3ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e3f0:
    // 0x25e3f0: 0x8c453e5c  lw          $a1, 0x3E5C($v0)
    ctx->pc = 0x25e3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15964)));
label_25e3f4:
    // 0x25e3f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25e3f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e3f8:
    // 0x25e3f8: 0x8c463e60  lw          $a2, 0x3E60($v0)
    ctx->pc = 0x25e3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15968)));
label_25e3fc:
    // 0x25e3fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25e3fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e400:
    // 0x25e400: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25e400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25e404:
    // 0x25e404: 0xc0aa15e  jal         func_2A8578
label_25e408:
    if (ctx->pc == 0x25E408u) {
        ctx->pc = 0x25E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E404u;
        // 0x25e408: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E40Cu;
        goto label_25e40c;
    }
    ctx->pc = 0x25E404u;
    SET_GPR_U32(ctx, 31, 0x25E40Cu);
    ctx->pc = 0x25E408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E404u;
    // 0x25e408: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25E404u, 0x25E40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E40Cu;
label_25e40c:
    // 0x25e40c: 0x8e040748  lw          $a0, 0x748($s0)
    ctx->pc = 0x25e40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
label_25e410:
    // 0x25e410: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25e414:
    if (ctx->pc == 0x25E414u) {
        ctx->pc = 0x25E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E410u;
        // 0x25e414: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E418u;
        goto label_25e418;
    }
    ctx->pc = 0x25E410u;
    {
        const bool branch_taken_0x25e410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e410) {
            ctx->pc = 0x25E414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E410u;
            // 0x25e414: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E424u;
            goto label_25e424;
        }
    }
    ctx->pc = 0x25E418u;
label_25e418:
    // 0x25e418: 0xc0a0558  jal         func_281560
label_25e41c:
    if (ctx->pc == 0x25E41Cu) {
        ctx->pc = 0x25E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E418u;
        // 0x25e41c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E420u;
        goto label_25e420;
    }
    ctx->pc = 0x25E418u;
    SET_GPR_U32(ctx, 31, 0x25E420u);
    ctx->pc = 0x25E41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E418u;
    // 0x25e41c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281560u, 0x25E418u, 0x25E420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E420u;
label_25e420:
    // 0x25e420: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x25e420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
label_25e424:
    // 0x25e424: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25e428:
    if (ctx->pc == 0x25E428u) {
        ctx->pc = 0x25E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E424u;
        // 0x25e428: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E42Cu;
        goto label_25e42c;
    }
    ctx->pc = 0x25E424u;
    {
        const bool branch_taken_0x25e424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e424) {
            ctx->pc = 0x25E428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E424u;
            // 0x25e428: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E438u;
            goto label_25e438;
        }
    }
    ctx->pc = 0x25E42Cu;
label_25e42c:
    // 0x25e42c: 0xc0a0d0e  jal         func_283438
label_25e430:
    if (ctx->pc == 0x25E430u) {
        ctx->pc = 0x25E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E42Cu;
        // 0x25e430: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E434u;
        goto label_25e434;
    }
    ctx->pc = 0x25E42Cu;
    SET_GPR_U32(ctx, 31, 0x25E434u);
    ctx->pc = 0x25E430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E42Cu;
    // 0x25e430: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283438u, 0x25E42Cu, 0x25E434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E434u;
label_25e434:
    // 0x25e434: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x25e434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_25e438:
    // 0x25e438: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25e43c:
    if (ctx->pc == 0x25E43Cu) {
        ctx->pc = 0x25E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E438u;
        // 0x25e43c: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E440u;
        goto label_25e440;
    }
    ctx->pc = 0x25E438u;
    {
        const bool branch_taken_0x25e438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e438) {
            ctx->pc = 0x25E43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E438u;
            // 0x25e43c: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E44Cu;
            goto label_25e44c;
        }
    }
    ctx->pc = 0x25E440u;
label_25e440:
    // 0x25e440: 0xc0a0d0e  jal         func_283438
label_25e444:
    if (ctx->pc == 0x25E444u) {
        ctx->pc = 0x25E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E440u;
        // 0x25e444: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E448u;
        goto label_25e448;
    }
    ctx->pc = 0x25E440u;
    SET_GPR_U32(ctx, 31, 0x25E448u);
    ctx->pc = 0x25E444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E440u;
    // 0x25e444: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283438u, 0x25E440u, 0x25E448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E448u;
label_25e448:
    // 0x25e448: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25e448u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25e44c:
    // 0x25e44c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25e450:
    // 0x25e450: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25e450u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25e454:
    // 0x25e454: 0xc055f06  jal         func_157C18
label_25e458:
    if (ctx->pc == 0x25E458u) {
        ctx->pc = 0x25E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E454u;
        // 0x25e458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E45Cu;
        goto label_25e45c;
    }
    ctx->pc = 0x25E454u;
    SET_GPR_U32(ctx, 31, 0x25E45Cu);
    ctx->pc = 0x25E458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E454u;
    // 0x25e458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25E454u, 0x25E45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E45Cu;
label_25e45c:
    // 0x25e45c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25e460:
    if (ctx->pc == 0x25E460u) {
        ctx->pc = 0x25E464u;
        goto label_25e464;
    }
    ctx->pc = 0x25E45Cu;
    {
        const bool branch_taken_0x25e45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e45c) {
            ctx->pc = 0x25E46Cu;
            goto label_25e46c;
        }
    }
    ctx->pc = 0x25E464u;
label_25e464:
    // 0x25e464: 0xc09c176  jal         func_2705D8
label_25e468:
    if (ctx->pc == 0x25E468u) {
        ctx->pc = 0x25E468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E464u;
        // 0x25e468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E46Cu;
        goto label_25e46c;
    }
    ctx->pc = 0x25E464u;
    SET_GPR_U32(ctx, 31, 0x25E46Cu);
    ctx->pc = 0x25E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E464u;
    // 0x25e468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x25E464u, 0x25E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E46Cu;
label_25e46c:
    // 0x25e46c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25e46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25e470:
    // 0x25e470: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25e470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25e474:
    // 0x25e474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e478:
    // 0x25e478: 0xc053e7c  jal         func_14F9F0
label_25e47c:
    if (ctx->pc == 0x25E47Cu) {
        ctx->pc = 0x25E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E478u;
        // 0x25e47c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E480u;
        goto label_25e480;
    }
    ctx->pc = 0x25E478u;
    SET_GPR_U32(ctx, 31, 0x25E480u);
    ctx->pc = 0x25E47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E478u;
    // 0x25e47c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25E478u, 0x25E480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E480u;
label_25e480:
    // 0x25e480: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25e480u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25e484:
    // 0x25e484: 0xc053e4a  jal         func_14F928
label_25e488:
    if (ctx->pc == 0x25E488u) {
        ctx->pc = 0x25E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E484u;
        // 0x25e488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E48Cu;
        goto label_25e48c;
    }
    ctx->pc = 0x25E484u;
    SET_GPR_U32(ctx, 31, 0x25E48Cu);
    ctx->pc = 0x25E488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E484u;
    // 0x25e488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25E484u, 0x25E48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E48Cu;
label_25e48c:
    // 0x25e48c: 0x960303ac  lhu         $v1, 0x3AC($s0)
    ctx->pc = 0x25e48cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25e490:
    // 0x25e490: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x25e490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_25e494:
    // 0x25e494: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_25e498:
    if (ctx->pc == 0x25E498u) {
        ctx->pc = 0x25E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E494u;
        // 0x25e498: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E49Cu;
        goto label_25e49c;
    }
    ctx->pc = 0x25E494u;
    {
        const bool branch_taken_0x25e494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E494u;
        // 0x25e498: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e494) {
            ctx->pc = 0x25E5E0u;
            goto label_25e5e0;
        }
    }
    ctx->pc = 0x25E49Cu;
label_25e49c:
    // 0x25e49c: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
label_25e4a0:
    if (ctx->pc == 0x25E4A0u) {
        ctx->pc = 0x25E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E49Cu;
        // 0x25e4a0: 0x8602056a  lh          $v0, 0x56A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E4A4u;
        goto label_25e4a4;
    }
    ctx->pc = 0x25E49Cu;
    {
        const bool branch_taken_0x25e49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e49c) {
            ctx->pc = 0x25E4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E49Cu;
            // 0x25e4a0: 0x8602056a  lh          $v0, 0x56A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E530u;
            goto label_25e530;
        }
    }
    ctx->pc = 0x25E4A4u;
label_25e4a4:
    // 0x25e4a4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x25e4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_25e4a8:
    // 0x25e4a8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25e4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25e4ac:
    // 0x25e4ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25e4acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25e4b0:
    // 0x25e4b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25e4b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25e4b4:
    // 0x25e4b4: 0xc0c7408  jal         func_31D020
label_25e4b8:
    if (ctx->pc == 0x25E4B8u) {
        ctx->pc = 0x25E4BCu;
        goto label_25e4bc;
    }
    ctx->pc = 0x25E4B4u;
    SET_GPR_U32(ctx, 31, 0x25E4BCu);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x25E4B4u, 0x25E4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E4BCu;
label_25e4bc:
    // 0x25e4bc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x25e4bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_25e4c0:
    // 0x25e4c0: 0xc0c7408  jal         func_31D020
label_25e4c4:
    if (ctx->pc == 0x25E4C4u) {
        ctx->pc = 0x25E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4C0u;
        // 0x25e4c4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E4C8u;
        goto label_25e4c8;
    }
    ctx->pc = 0x25E4C0u;
    SET_GPR_U32(ctx, 31, 0x25E4C8u);
    ctx->pc = 0x25E4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E4C0u;
    // 0x25e4c4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x25E4C0u, 0x25E4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E4C8u;
label_25e4c8:
    // 0x25e4c8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x25e4c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_25e4cc:
    // 0x25e4cc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x25e4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_25e4d0:
    // 0x25e4d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25e4d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25e4d4:
    // 0x25e4d4: 0x0  nop
    ctx->pc = 0x25e4d4u;
    // NOP
label_25e4d8:
    // 0x25e4d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25e4d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25e4dc:
    // 0x25e4dc: 0xc0c7400  jal         func_31D000
label_25e4e0:
    if (ctx->pc == 0x25E4E0u) {
        ctx->pc = 0x25E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4DCu;
        // 0x25e4e0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E4E4u;
        goto label_25e4e4;
    }
    ctx->pc = 0x25E4DCu;
    SET_GPR_U32(ctx, 31, 0x25E4E4u);
    ctx->pc = 0x25E4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E4DCu;
    // 0x25e4e0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x25E4DCu, 0x25E4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E4E4u;
label_25e4e4:
    // 0x25e4e4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x25e4e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_25e4e8:
    // 0x25e4e8: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x25e4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_25e4ec:
    // 0x25e4ec: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x25e4ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_25e4f0:
    // 0x25e4f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25e4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25e4f4:
    // 0x25e4f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25e4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25e4f8:
    // 0x25e4f8: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x25e4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_25e4fc:
    // 0x25e4fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x25e4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25e500:
    // 0x25e500: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25e500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25e504:
    // 0x25e504: 0xc0c28ac  jal         func_30A2B0
label_25e508:
    if (ctx->pc == 0x25E508u) {
        ctx->pc = 0x25E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E504u;
        // 0x25e508: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E50Cu;
        goto label_25e50c;
    }
    ctx->pc = 0x25E504u;
    SET_GPR_U32(ctx, 31, 0x25E50Cu);
    ctx->pc = 0x25E508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E504u;
    // 0x25e508: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x25E504u, 0x25E50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E50Cu;
label_25e50c:
    // 0x25e50c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25e50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25e510:
    // 0x25e510: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25e510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25e514:
    // 0x25e514: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25e514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e518:
    // 0x25e518: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x25e518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_25e51c:
    // 0x25e51c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25e51cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e520:
    // 0x25e520: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x25e520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25e524:
    // 0x25e524: 0xc0c1a0e  jal         func_306838
label_25e528:
    if (ctx->pc == 0x25E528u) {
        ctx->pc = 0x25E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E524u;
        // 0x25e528: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E52Cu;
        goto label_25e52c;
    }
    ctx->pc = 0x25E524u;
    SET_GPR_U32(ctx, 31, 0x25E52Cu);
    ctx->pc = 0x25E528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E524u;
    // 0x25e528: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x25E524u, 0x25E52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E52Cu;
label_25e52c:
    // 0x25e52c: 0x8602056a  lh          $v0, 0x56A($s0)
    ctx->pc = 0x25e52cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
label_25e530:
    // 0x25e530: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
label_25e534:
    if (ctx->pc == 0x25E534u) {
        ctx->pc = 0x25E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E530u;
        // 0x25e534: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E538u;
        goto label_25e538;
    }
    ctx->pc = 0x25E530u;
    {
        const bool branch_taken_0x25e530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e530) {
            ctx->pc = 0x25E534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E530u;
            // 0x25e534: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E5E8u;
            goto label_25e5e8;
        }
    }
    ctx->pc = 0x25E538u;
label_25e538:
    // 0x25e538: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25e538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25e53c:
    // 0x25e53c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25e53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25e540:
    // 0x25e540: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_25e544:
    if (ctx->pc == 0x25E544u) {
        ctx->pc = 0x25E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E540u;
        // 0x25e544: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E548u;
        goto label_25e548;
    }
    ctx->pc = 0x25E540u;
    {
        const bool branch_taken_0x25e540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E540u;
        // 0x25e544: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e540) {
            ctx->pc = 0x25E590u;
            goto label_25e590;
        }
    }
    ctx->pc = 0x25E548u;
label_25e548:
    // 0x25e548: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x25e548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_25e54c:
    // 0x25e54c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x25e54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_25e550:
    // 0x25e550: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25e550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e554:
    // 0x25e554: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x25e554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_25e558:
    // 0x25e558: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25e558u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e55c:
    // 0x25e55c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x25e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_25e560:
    // 0x25e560: 0x40f809  jalr        $v0
label_25e564:
    if (ctx->pc == 0x25E564u) {
        ctx->pc = 0x25E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E560u;
        // 0x25e564: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E568u;
        goto label_25e568;
    }
    ctx->pc = 0x25E560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25E568u);
        ctx->pc = 0x25E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E560u;
        // 0x25e564: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E560u, 0x25E568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E568u;
label_25e568:
    // 0x25e568: 0x8603054a  lh          $v1, 0x54A($s0)
    ctx->pc = 0x25e568u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_25e56c:
    // 0x25e56c: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
label_25e570:
    if (ctx->pc == 0x25E570u) {
        ctx->pc = 0x25E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E56Cu;
        // 0x25e570: 0x3c04005d  lui         $a0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E574u;
        goto label_25e574;
    }
    ctx->pc = 0x25E56Cu;
    {
        const bool branch_taken_0x25e56c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x25E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E56Cu;
        // 0x25e570: 0x3c04005d  lui         $a0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e56c) {
            ctx->pc = 0x25E57Cu;
            goto label_25e57c;
        }
    }
    ctx->pc = 0x25E574u;
label_25e574:
    // 0x25e574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e578:
    // 0x25e578: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x25e578u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
label_25e57c:
    // 0x25e57c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25e57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_25e580:
    // 0x25e580: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25e580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25e584:
    // 0x25e584: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x25e584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_25e588:
    // 0x25e588: 0xc0aa65e  jal         func_2A9978
label_25e58c:
    if (ctx->pc == 0x25E58Cu) {
        ctx->pc = 0x25E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E588u;
        // 0x25e58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E590u;
        goto label_25e590;
    }
    ctx->pc = 0x25E588u;
    SET_GPR_U32(ctx, 31, 0x25E590u);
    ctx->pc = 0x25E58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E588u;
    // 0x25e58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x25E588u, 0x25E590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E590u;
label_25e590:
    // 0x25e590: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25e590u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25e594:
    // 0x25e594: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x25e594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_25e598:
    // 0x25e598: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_25e59c:
    if (ctx->pc == 0x25E59Cu) {
        ctx->pc = 0x25E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E598u;
        // 0x25e59c: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E5A0u;
        goto label_25e5a0;
    }
    ctx->pc = 0x25E598u;
    {
        const bool branch_taken_0x25e598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E598u;
        // 0x25e59c: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e598) {
            ctx->pc = 0x25E5D8u;
            goto label_25e5d8;
        }
    }
    ctx->pc = 0x25E5A0u;
label_25e5a0:
    // 0x25e5a0: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x25e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_25e5a4:
    // 0x25e5a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25e5a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e5a8:
    // 0x25e5a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25e5a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e5ac:
    // 0x25e5ac: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x25e5acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_25e5b0:
    // 0x25e5b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25e5b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e5b4:
    // 0x25e5b4: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x25e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_25e5b8:
    // 0x25e5b8: 0x40f809  jalr        $v0
label_25e5bc:
    if (ctx->pc == 0x25E5BCu) {
        ctx->pc = 0x25E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5B8u;
        // 0x25e5bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E5C0u;
        goto label_25e5c0;
    }
    ctx->pc = 0x25E5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25E5C0u);
        ctx->pc = 0x25E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5B8u;
        // 0x25e5bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E5B8u, 0x25E5C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E5C0u;
label_25e5c0:
    // 0x25e5c0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x25e5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_25e5c4:
    // 0x25e5c4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25e5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_25e5c8:
    // 0x25e5c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25e5c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25e5cc:
    // 0x25e5cc: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x25e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_25e5d0:
    // 0x25e5d0: 0xc0aa65e  jal         func_2A9978
label_25e5d4:
    if (ctx->pc == 0x25E5D4u) {
        ctx->pc = 0x25E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5D0u;
        // 0x25e5d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E5D8u;
        goto label_25e5d8;
    }
    ctx->pc = 0x25E5D0u;
    SET_GPR_U32(ctx, 31, 0x25E5D8u);
    ctx->pc = 0x25E5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E5D0u;
    // 0x25e5d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x25E5D0u, 0x25E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E5D8u;
label_25e5d8:
    // 0x25e5d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_25e5dc:
    if (ctx->pc == 0x25E5DCu) {
        ctx->pc = 0x25E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5D8u;
        // 0x25e5dc: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E5E0u;
        goto label_25e5e0;
    }
    ctx->pc = 0x25E5D8u;
    {
        const bool branch_taken_0x25e5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5D8u;
        // 0x25e5dc: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e5d8) {
            ctx->pc = 0x25E5E8u;
            goto label_25e5e8;
        }
    }
    ctx->pc = 0x25E5E0u;
label_25e5e0:
    // 0x25e5e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e5e4:
    // 0x25e5e4: 0xa602056a  sh          $v0, 0x56A($s0)
    ctx->pc = 0x25e5e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
label_25e5e8:
    // 0x25e5e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x25e5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25e5ec:
    // 0x25e5ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25e5ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25e5f0:
    // 0x25e5f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25e5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25e5f4:
    // 0x25e5f4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x25e5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25e5f8:
    // 0x25e5f8: 0x3e00008  jr          $ra
label_25e5fc:
    if (ctx->pc == 0x25E5FCu) {
        ctx->pc = 0x25E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5F8u;
        // 0x25e5fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E600u;
        goto label_fallthrough_0x25e5f8;
    }
    ctx->pc = 0x25E5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5F8u;
        // 0x25e5fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25e5f8:
    ctx->pc = 0x25E600u;
}
