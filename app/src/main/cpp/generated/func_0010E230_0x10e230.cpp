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

// Function: func_0010E230
// Address: 0x10e230 - 0x10e5b8
void func_0010E230_0x10e230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010E230_0x10e230");
#endif

    switch (ctx->pc) {
        case 0x10e230u: goto label_10e230;
        case 0x10e234u: goto label_10e234;
        case 0x10e238u: goto label_10e238;
        case 0x10e23cu: goto label_10e23c;
        case 0x10e240u: goto label_10e240;
        case 0x10e244u: goto label_10e244;
        case 0x10e248u: goto label_10e248;
        case 0x10e24cu: goto label_10e24c;
        case 0x10e250u: goto label_10e250;
        case 0x10e254u: goto label_10e254;
        case 0x10e258u: goto label_10e258;
        case 0x10e25cu: goto label_10e25c;
        case 0x10e260u: goto label_10e260;
        case 0x10e264u: goto label_10e264;
        case 0x10e268u: goto label_10e268;
        case 0x10e26cu: goto label_10e26c;
        case 0x10e270u: goto label_10e270;
        case 0x10e274u: goto label_10e274;
        case 0x10e278u: goto label_10e278;
        case 0x10e27cu: goto label_10e27c;
        case 0x10e280u: goto label_10e280;
        case 0x10e284u: goto label_10e284;
        case 0x10e288u: goto label_10e288;
        case 0x10e28cu: goto label_10e28c;
        case 0x10e290u: goto label_10e290;
        case 0x10e294u: goto label_10e294;
        case 0x10e298u: goto label_10e298;
        case 0x10e29cu: goto label_10e29c;
        case 0x10e2a0u: goto label_10e2a0;
        case 0x10e2a4u: goto label_10e2a4;
        case 0x10e2a8u: goto label_10e2a8;
        case 0x10e2acu: goto label_10e2ac;
        case 0x10e2b0u: goto label_10e2b0;
        case 0x10e2b4u: goto label_10e2b4;
        case 0x10e2b8u: goto label_10e2b8;
        case 0x10e2bcu: goto label_10e2bc;
        case 0x10e2c0u: goto label_10e2c0;
        case 0x10e2c4u: goto label_10e2c4;
        case 0x10e2c8u: goto label_10e2c8;
        case 0x10e2ccu: goto label_10e2cc;
        case 0x10e2d0u: goto label_10e2d0;
        case 0x10e2d4u: goto label_10e2d4;
        case 0x10e2d8u: goto label_10e2d8;
        case 0x10e2dcu: goto label_10e2dc;
        case 0x10e2e0u: goto label_10e2e0;
        case 0x10e2e4u: goto label_10e2e4;
        case 0x10e2e8u: goto label_10e2e8;
        case 0x10e2ecu: goto label_10e2ec;
        case 0x10e2f0u: goto label_10e2f0;
        case 0x10e2f4u: goto label_10e2f4;
        case 0x10e2f8u: goto label_10e2f8;
        case 0x10e2fcu: goto label_10e2fc;
        case 0x10e300u: goto label_10e300;
        case 0x10e304u: goto label_10e304;
        case 0x10e308u: goto label_10e308;
        case 0x10e30cu: goto label_10e30c;
        case 0x10e310u: goto label_10e310;
        case 0x10e314u: goto label_10e314;
        case 0x10e318u: goto label_10e318;
        case 0x10e31cu: goto label_10e31c;
        case 0x10e320u: goto label_10e320;
        case 0x10e324u: goto label_10e324;
        case 0x10e328u: goto label_10e328;
        case 0x10e32cu: goto label_10e32c;
        case 0x10e330u: goto label_10e330;
        case 0x10e334u: goto label_10e334;
        case 0x10e338u: goto label_10e338;
        case 0x10e33cu: goto label_10e33c;
        case 0x10e340u: goto label_10e340;
        case 0x10e344u: goto label_10e344;
        case 0x10e348u: goto label_10e348;
        case 0x10e34cu: goto label_10e34c;
        case 0x10e350u: goto label_10e350;
        case 0x10e354u: goto label_10e354;
        case 0x10e358u: goto label_10e358;
        case 0x10e35cu: goto label_10e35c;
        case 0x10e360u: goto label_10e360;
        case 0x10e364u: goto label_10e364;
        case 0x10e368u: goto label_10e368;
        case 0x10e36cu: goto label_10e36c;
        case 0x10e370u: goto label_10e370;
        case 0x10e374u: goto label_10e374;
        case 0x10e378u: goto label_10e378;
        case 0x10e37cu: goto label_10e37c;
        case 0x10e380u: goto label_10e380;
        case 0x10e384u: goto label_10e384;
        case 0x10e388u: goto label_10e388;
        case 0x10e38cu: goto label_10e38c;
        case 0x10e390u: goto label_10e390;
        case 0x10e394u: goto label_10e394;
        case 0x10e398u: goto label_10e398;
        case 0x10e39cu: goto label_10e39c;
        case 0x10e3a0u: goto label_10e3a0;
        case 0x10e3a4u: goto label_10e3a4;
        case 0x10e3a8u: goto label_10e3a8;
        case 0x10e3acu: goto label_10e3ac;
        case 0x10e3b0u: goto label_10e3b0;
        case 0x10e3b4u: goto label_10e3b4;
        case 0x10e3b8u: goto label_10e3b8;
        case 0x10e3bcu: goto label_10e3bc;
        case 0x10e3c0u: goto label_10e3c0;
        case 0x10e3c4u: goto label_10e3c4;
        case 0x10e3c8u: goto label_10e3c8;
        case 0x10e3ccu: goto label_10e3cc;
        case 0x10e3d0u: goto label_10e3d0;
        case 0x10e3d4u: goto label_10e3d4;
        case 0x10e3d8u: goto label_10e3d8;
        case 0x10e3dcu: goto label_10e3dc;
        case 0x10e3e0u: goto label_10e3e0;
        case 0x10e3e4u: goto label_10e3e4;
        case 0x10e3e8u: goto label_10e3e8;
        case 0x10e3ecu: goto label_10e3ec;
        case 0x10e3f0u: goto label_10e3f0;
        case 0x10e3f4u: goto label_10e3f4;
        case 0x10e3f8u: goto label_10e3f8;
        case 0x10e3fcu: goto label_10e3fc;
        case 0x10e400u: goto label_10e400;
        case 0x10e404u: goto label_10e404;
        case 0x10e408u: goto label_10e408;
        case 0x10e40cu: goto label_10e40c;
        case 0x10e410u: goto label_10e410;
        case 0x10e414u: goto label_10e414;
        case 0x10e418u: goto label_10e418;
        case 0x10e41cu: goto label_10e41c;
        case 0x10e420u: goto label_10e420;
        case 0x10e424u: goto label_10e424;
        case 0x10e428u: goto label_10e428;
        case 0x10e42cu: goto label_10e42c;
        case 0x10e430u: goto label_10e430;
        case 0x10e434u: goto label_10e434;
        case 0x10e438u: goto label_10e438;
        case 0x10e43cu: goto label_10e43c;
        case 0x10e440u: goto label_10e440;
        case 0x10e444u: goto label_10e444;
        case 0x10e448u: goto label_10e448;
        case 0x10e44cu: goto label_10e44c;
        case 0x10e450u: goto label_10e450;
        case 0x10e454u: goto label_10e454;
        case 0x10e458u: goto label_10e458;
        case 0x10e45cu: goto label_10e45c;
        case 0x10e460u: goto label_10e460;
        case 0x10e464u: goto label_10e464;
        case 0x10e468u: goto label_10e468;
        case 0x10e46cu: goto label_10e46c;
        case 0x10e470u: goto label_10e470;
        case 0x10e474u: goto label_10e474;
        case 0x10e478u: goto label_10e478;
        case 0x10e47cu: goto label_10e47c;
        case 0x10e480u: goto label_10e480;
        case 0x10e484u: goto label_10e484;
        case 0x10e488u: goto label_10e488;
        case 0x10e48cu: goto label_10e48c;
        case 0x10e490u: goto label_10e490;
        case 0x10e494u: goto label_10e494;
        case 0x10e498u: goto label_10e498;
        case 0x10e49cu: goto label_10e49c;
        case 0x10e4a0u: goto label_10e4a0;
        case 0x10e4a4u: goto label_10e4a4;
        case 0x10e4a8u: goto label_10e4a8;
        case 0x10e4acu: goto label_10e4ac;
        case 0x10e4b0u: goto label_10e4b0;
        case 0x10e4b4u: goto label_10e4b4;
        case 0x10e4b8u: goto label_10e4b8;
        case 0x10e4bcu: goto label_10e4bc;
        case 0x10e4c0u: goto label_10e4c0;
        case 0x10e4c4u: goto label_10e4c4;
        case 0x10e4c8u: goto label_10e4c8;
        case 0x10e4ccu: goto label_10e4cc;
        case 0x10e4d0u: goto label_10e4d0;
        case 0x10e4d4u: goto label_10e4d4;
        case 0x10e4d8u: goto label_10e4d8;
        case 0x10e4dcu: goto label_10e4dc;
        case 0x10e4e0u: goto label_10e4e0;
        case 0x10e4e4u: goto label_10e4e4;
        case 0x10e4e8u: goto label_10e4e8;
        case 0x10e4ecu: goto label_10e4ec;
        case 0x10e4f0u: goto label_10e4f0;
        case 0x10e4f4u: goto label_10e4f4;
        case 0x10e4f8u: goto label_10e4f8;
        case 0x10e4fcu: goto label_10e4fc;
        case 0x10e500u: goto label_10e500;
        case 0x10e504u: goto label_10e504;
        case 0x10e508u: goto label_10e508;
        case 0x10e50cu: goto label_10e50c;
        case 0x10e510u: goto label_10e510;
        case 0x10e514u: goto label_10e514;
        case 0x10e518u: goto label_10e518;
        case 0x10e51cu: goto label_10e51c;
        case 0x10e520u: goto label_10e520;
        case 0x10e524u: goto label_10e524;
        case 0x10e528u: goto label_10e528;
        case 0x10e52cu: goto label_10e52c;
        case 0x10e530u: goto label_10e530;
        case 0x10e534u: goto label_10e534;
        case 0x10e538u: goto label_10e538;
        case 0x10e53cu: goto label_10e53c;
        case 0x10e540u: goto label_10e540;
        case 0x10e544u: goto label_10e544;
        case 0x10e548u: goto label_10e548;
        case 0x10e54cu: goto label_10e54c;
        case 0x10e550u: goto label_10e550;
        case 0x10e554u: goto label_10e554;
        case 0x10e558u: goto label_10e558;
        case 0x10e55cu: goto label_10e55c;
        case 0x10e560u: goto label_10e560;
        case 0x10e564u: goto label_10e564;
        case 0x10e568u: goto label_10e568;
        case 0x10e56cu: goto label_10e56c;
        case 0x10e570u: goto label_10e570;
        case 0x10e574u: goto label_10e574;
        case 0x10e578u: goto label_10e578;
        case 0x10e57cu: goto label_10e57c;
        case 0x10e580u: goto label_10e580;
        case 0x10e584u: goto label_10e584;
        case 0x10e588u: goto label_10e588;
        case 0x10e58cu: goto label_10e58c;
        case 0x10e590u: goto label_10e590;
        case 0x10e594u: goto label_10e594;
        case 0x10e598u: goto label_10e598;
        case 0x10e59cu: goto label_10e59c;
        case 0x10e5a0u: goto label_10e5a0;
        case 0x10e5a4u: goto label_10e5a4;
        case 0x10e5a8u: goto label_10e5a8;
        case 0x10e5acu: goto label_10e5ac;
        case 0x10e5b0u: goto label_10e5b0;
        case 0x10e5b4u: goto label_10e5b4;
        default: break;
    }

    ctx->pc = 0x10e230u;

label_10e230:
    // 0x10e230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10e230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_10e234:
    // 0x10e234: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x10e234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_10e238:
    // 0x10e238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10e238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10e23c:
    // 0x10e23c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10e23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e240:
    // 0x10e240: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10e240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_10e244:
    // 0x10e244: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10e244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10e248:
    // 0x10e248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10e24c:
    // 0x10e24c: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x10e24cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_10e250:
    // 0x10e250: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x10e250u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_10e254:
    // 0x10e254: 0x8e2315f4  lw          $v1, 0x15F4($s1)
    ctx->pc = 0x10e254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_10e258:
    // 0x10e258: 0x8624054a  lh          $a0, 0x54A($s1)
    ctx->pc = 0x10e258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_10e25c:
    // 0x10e25c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x10e25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_10e260:
    // 0x10e260: 0x1c800002  bgtz        $a0, . + 4 + (0x2 << 2)
label_10e264:
    if (ctx->pc == 0x10E264u) {
        ctx->pc = 0x10E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E260u;
        // 0x10e264: 0xae2315f4  sw          $v1, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E268u;
        goto label_10e268;
    }
    ctx->pc = 0x10E260u;
    {
        const bool branch_taken_0x10e260 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x10E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E260u;
        // 0x10e264: 0xae2315f4  sw          $v1, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e260) {
            ctx->pc = 0x10E26Cu;
            goto label_10e26c;
        }
    }
    ctx->pc = 0x10E268u;
label_10e268:
    // 0x10e268: 0xa625054a  sh          $a1, 0x54A($s1)
    ctx->pc = 0x10e268u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 5));
label_10e26c:
    // 0x10e26c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x10e26cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_10e270:
    // 0x10e270: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_10e274:
    if (ctx->pc == 0x10E274u) {
        ctx->pc = 0x10E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E270u;
        // 0x10e274: 0x8e250640  lw          $a1, 0x640($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E278u;
        goto label_10e278;
    }
    ctx->pc = 0x10E270u;
    {
        const bool branch_taken_0x10e270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e270) {
            ctx->pc = 0x10E274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E270u;
            // 0x10e274: 0x8e250640  lw          $a1, 0x640($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E288u;
            goto label_10e288;
        }
    }
    ctx->pc = 0x10E278u;
label_10e278:
    // 0x10e278: 0x50450078  beql        $v0, $a1, . + 4 + (0x78 << 2)
label_10e27c:
    if (ctx->pc == 0x10E27Cu) {
        ctx->pc = 0x10E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E278u;
        // 0x10e27c: 0x86220568  lh          $v0, 0x568($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E280u;
        goto label_10e280;
    }
    ctx->pc = 0x10E278u;
    {
        const bool branch_taken_0x10e278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x10e278) {
            ctx->pc = 0x10E27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E278u;
            // 0x10e27c: 0x86220568  lh          $v0, 0x568($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E45Cu;
            goto label_10e45c;
        }
    }
    ctx->pc = 0x10E280u;
label_10e280:
    // 0x10e280: 0x100000bb  b           . + 4 + (0xBB << 2)
label_10e284:
    if (ctx->pc == 0x10E284u) {
        ctx->pc = 0x10E288u;
        goto label_10e288;
    }
    ctx->pc = 0x10E280u;
    {
        const bool branch_taken_0x10e280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e280) {
            ctx->pc = 0x10E570u;
            goto label_10e570;
        }
    }
    ctx->pc = 0x10E288u;
label_10e288:
    // 0x10e288: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
label_10e28c:
    if (ctx->pc == 0x10E28Cu) {
        ctx->pc = 0x10E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E288u;
        // 0x10e28c: 0xae201588  sw          $zero, 0x1588($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E290u;
        goto label_10e290;
    }
    ctx->pc = 0x10E288u;
    {
        const bool branch_taken_0x10e288 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E288u;
        // 0x10e28c: 0xae201588  sw          $zero, 0x1588($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e288) {
            ctx->pc = 0x10E36Cu;
            goto label_10e36c;
        }
    }
    ctx->pc = 0x10E290u;
label_10e290:
    // 0x10e290: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x10e290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_10e294:
    // 0x10e294: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x10e294u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_10e298:
    // 0x10e298: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x10e298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_10e29c:
    // 0x10e29c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x10e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_10e2a0:
    // 0x10e2a0: 0x40f809  jalr        $v0
label_10e2a4:
    if (ctx->pc == 0x10E2A4u) {
        ctx->pc = 0x10E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2A0u;
        // 0x10e2a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E2A8u;
        goto label_10e2a8;
    }
    ctx->pc = 0x10E2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E2A8u);
        ctx->pc = 0x10E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2A0u;
        // 0x10e2a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E2A0u, 0x10E2A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E2A8u;
label_10e2a8:
    // 0x10e2a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10e2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e2ac:
    // 0x10e2ac: 0xc07dfa0  jal         func_1F7E80
label_10e2b0:
    if (ctx->pc == 0x10E2B0u) {
        ctx->pc = 0x10E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2ACu;
        // 0x10e2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E2B4u;
        goto label_10e2b4;
    }
    ctx->pc = 0x10E2ACu;
    SET_GPR_U32(ctx, 31, 0x10E2B4u);
    ctx->pc = 0x10E2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E2ACu;
    // 0x10e2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E80u, 0x10E2ACu, 0x10E2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E2B4u;
label_10e2b4:
    // 0x10e2b4: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x10e2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_10e2b8:
    // 0x10e2b8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x10e2b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_10e2bc:
    // 0x10e2bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10e2bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10e2c0:
    // 0x10e2c0: 0x962205e0  lhu         $v0, 0x5E0($s1)
    ctx->pc = 0x10e2c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1504)));
label_10e2c4:
    // 0x10e2c4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x10e2c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_10e2c8:
    // 0x10e2c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10e2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_10e2cc:
    // 0x10e2cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10e2d0:
    // 0x10e2d0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_10e2d4:
    if (ctx->pc == 0x10E2D4u) {
        ctx->pc = 0x10E2D8u;
        goto label_10e2d8;
    }
    ctx->pc = 0x10E2D0u;
    {
        const bool branch_taken_0x10e2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e2d0) {
            ctx->pc = 0x10E2ECu;
            goto label_10e2ec;
        }
    }
    ctx->pc = 0x10E2D8u;
label_10e2d8:
    // 0x10e2d8: 0x9222061f  lbu         $v0, 0x61F($s1)
    ctx->pc = 0x10e2d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1567)));
label_10e2dc:
    // 0x10e2dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10e2e0:
    if (ctx->pc == 0x10E2E0u) {
        ctx->pc = 0x10E2E4u;
        goto label_10e2e4;
    }
    ctx->pc = 0x10E2DCu;
    {
        const bool branch_taken_0x10e2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e2dc) {
            ctx->pc = 0x10E2ECu;
            goto label_10e2ec;
        }
    }
    ctx->pc = 0x10E2E4u;
label_10e2e4:
    // 0x10e2e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10e2e8:
    // 0x10e2e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e2e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10e2ec:
    // 0x10e2ec: 0x0  nop
    ctx->pc = 0x10e2ecu;
    // NOP
label_10e2f0:
    // 0x10e2f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10e2f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10e2f4:
    // 0x10e2f4: 0x0  nop
    ctx->pc = 0x10e2f4u;
    // NOP
label_10e2f8:
    // 0x10e2f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_10e2fc:
    if (ctx->pc == 0x10E2FCu) {
        ctx->pc = 0x10E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2F8u;
        // 0x10e2fc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E300u;
        goto label_10e300;
    }
    ctx->pc = 0x10E2F8u;
    {
        const bool branch_taken_0x10e2f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10e2f8) {
            ctx->pc = 0x10E2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E2F8u;
            // 0x10e2fc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E300u;
            goto label_10e300;
        }
    }
    ctx->pc = 0x10E300u;
label_10e300:
    // 0x10e300: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10e300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10e304:
    // 0x10e304: 0x0  nop
    ctx->pc = 0x10e304u;
    // NOP
label_10e308:
    // 0x10e308: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10e308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10e30c:
    // 0x10e30c: 0x0  nop
    ctx->pc = 0x10e30cu;
    // NOP
label_10e310:
    // 0x10e310: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_10e314:
    if (ctx->pc == 0x10E314u) {
        ctx->pc = 0x10E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E310u;
        // 0x10e314: 0x8e220640  lw          $v0, 0x640($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E318u;
        goto label_10e318;
    }
    ctx->pc = 0x10E310u;
    {
        const bool branch_taken_0x10e310 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10e310) {
            ctx->pc = 0x10E314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E310u;
            // 0x10e314: 0x8e220640  lw          $v0, 0x640($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E334u;
            goto label_10e334;
        }
    }
    ctx->pc = 0x10E318u;
label_10e318:
    // 0x10e318: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x10e318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_10e31c:
    // 0x10e31c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10e31cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_10e320:
    // 0x10e320: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10e324:
    // 0x10e324: 0x0  nop
    ctx->pc = 0x10e324u;
    // NOP
label_10e328:
    // 0x10e328: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x10e328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_10e32c:
    // 0x10e32c: 0xe6201588  swc1        $f0, 0x1588($s1)
    ctx->pc = 0x10e32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5512), bits); }
label_10e330:
    // 0x10e330: 0x8e220640  lw          $v0, 0x640($s1)
    ctx->pc = 0x10e330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10e334:
    // 0x10e334: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_10e338:
    if (ctx->pc == 0x10E338u) {
        ctx->pc = 0x10E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E334u;
        // 0x10e338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E33Cu;
        goto label_10e33c;
    }
    ctx->pc = 0x10E334u;
    {
        const bool branch_taken_0x10e334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E334u;
        // 0x10e338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e334) {
            ctx->pc = 0x10E370u;
            goto label_10e370;
        }
    }
    ctx->pc = 0x10E33Cu;
label_10e33c:
    // 0x10e33c: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x10e33cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
label_10e340:
    // 0x10e340: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x10e340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_10e344:
    // 0x10e344: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_10e348:
    if (ctx->pc == 0x10E348u) {
        ctx->pc = 0x10E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E344u;
        // 0x10e348: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E34Cu;
        goto label_10e34c;
    }
    ctx->pc = 0x10E344u;
    {
        const bool branch_taken_0x10e344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E344u;
        // 0x10e348: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e344) {
            ctx->pc = 0x10E354u;
            goto label_10e354;
        }
    }
    ctx->pc = 0x10E34Cu;
label_10e34c:
    // 0x10e34c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x10e34cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_10e350:
    // 0x10e350: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10e350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10e354:
    // 0x10e354: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x10e354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_10e358:
    // 0x10e358: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10e35c:
    if (ctx->pc == 0x10E35Cu) {
        ctx->pc = 0x10E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E358u;
        // 0x10e35c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E360u;
        goto label_10e360;
    }
    ctx->pc = 0x10E358u;
    {
        const bool branch_taken_0x10e358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E358u;
        // 0x10e35c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e358) {
            ctx->pc = 0x10E36Cu;
            goto label_10e36c;
        }
    }
    ctx->pc = 0x10E360u;
label_10e360:
    // 0x10e360: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x10e360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_10e364:
    // 0x10e364: 0xc07e8a0  jal         func_1FA280
label_10e368:
    if (ctx->pc == 0x10E368u) {
        ctx->pc = 0x10E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E364u;
        // 0x10e368: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E36Cu;
        goto label_10e36c;
    }
    ctx->pc = 0x10E364u;
    SET_GPR_U32(ctx, 31, 0x10E36Cu);
    ctx->pc = 0x10E368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E364u;
    // 0x10e368: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x10E364u, 0x10E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E36Cu;
label_10e36c:
    // 0x10e36c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e370:
    // 0x10e370: 0xc049150  jal         func_124540
label_10e374:
    if (ctx->pc == 0x10E374u) {
        ctx->pc = 0x10E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E370u;
        // 0x10e374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E378u;
        goto label_10e378;
    }
    ctx->pc = 0x10E370u;
    SET_GPR_U32(ctx, 31, 0x10E378u);
    ctx->pc = 0x10E374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E370u;
    // 0x10e374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124540u, 0x10E370u, 0x10E378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E378u;
label_10e378:
    // 0x10e378: 0x82230648  lb          $v1, 0x648($s1)
    ctx->pc = 0x10e378u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1608)));
label_10e37c:
    // 0x10e37c: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x10e37cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
label_10e380:
    // 0x10e380: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_10e384:
    if (ctx->pc == 0x10E384u) {
        ctx->pc = 0x10E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E380u;
        // 0x10e384: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E388u;
        goto label_10e388;
    }
    ctx->pc = 0x10E380u;
    {
        const bool branch_taken_0x10e380 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x10E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E380u;
        // 0x10e384: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e380) {
            ctx->pc = 0x10E390u;
            goto label_10e390;
        }
    }
    ctx->pc = 0x10E388u;
label_10e388:
    // 0x10e388: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x10e388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_10e38c:
    // 0x10e38c: 0xa2220648  sb          $v0, 0x648($s1)
    ctx->pc = 0x10e38cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 2));
label_10e390:
    // 0x10e390: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x10e390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10e394:
    // 0x10e394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e398:
    // 0x10e398: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x10e398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_10e39c:
    // 0x10e39c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10e39cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10e3a0:
    // 0x10e3a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x10e3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10e3a4:
    // 0x10e3a4: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x10e3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_10e3a8:
    // 0x10e3a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10e3a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e3ac:
    // 0x10e3ac: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10e3acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_10e3b0:
    // 0x10e3b0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x10e3b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_10e3b4:
    // 0x10e3b4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10e3b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_10e3b8:
    // 0x10e3b8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10e3b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_10e3bc:
    // 0x10e3bc: 0xc042902  jal         func_10A408
label_10e3c0:
    if (ctx->pc == 0x10E3C0u) {
        ctx->pc = 0x10E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3BCu;
        // 0x10e3c0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3C4u;
        goto label_10e3c4;
    }
    ctx->pc = 0x10E3BCu;
    SET_GPR_U32(ctx, 31, 0x10E3C4u);
    ctx->pc = 0x10E3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E3BCu;
    // 0x10e3c0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x10E3BCu, 0x10E3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E3C4u;
label_10e3c4:
    // 0x10e3c4: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x10e3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10e3c8:
    // 0x10e3c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x10e3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10e3cc:
    // 0x10e3cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e3d0:
    // 0x10e3d0: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x10e3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_10e3d4:
    // 0x10e3d4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x10e3d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_10e3d8:
    // 0x10e3d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10e3d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e3dc:
    // 0x10e3dc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10e3dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_10e3e0:
    // 0x10e3e0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x10e3e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_10e3e4:
    // 0x10e3e4: 0xc042908  jal         func_10A420
label_10e3e8:
    if (ctx->pc == 0x10E3E8u) {
        ctx->pc = 0x10E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3E4u;
        // 0x10e3e8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3ECu;
        goto label_10e3ec;
    }
    ctx->pc = 0x10E3E4u;
    SET_GPR_U32(ctx, 31, 0x10E3ECu);
    ctx->pc = 0x10E3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E3E4u;
    // 0x10e3e8: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x10E3E4u, 0x10E3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E3ECu;
label_10e3ec:
    // 0x10e3ec: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x10e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_10e3f0:
    // 0x10e3f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e3f4:
    // 0x10e3f4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x10e3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10e3f8:
    // 0x10e3f8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x10e3f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_10e3fc:
    // 0x10e3fc: 0x8c4501ac  lw          $a1, 0x1AC($v0)
    ctx->pc = 0x10e3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
label_10e400:
    // 0x10e400: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10e400u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e404:
    // 0x10e404: 0x8c4601b4  lw          $a2, 0x1B4($v0)
    ctx->pc = 0x10e404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 436)));
label_10e408:
    // 0x10e408: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10e408u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e40c:
    // 0x10e40c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x10e40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_10e410:
    // 0x10e410: 0xc0aa15e  jal         func_2A8578
label_10e414:
    if (ctx->pc == 0x10E414u) {
        ctx->pc = 0x10E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E410u;
        // 0x10e414: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E418u;
        goto label_10e418;
    }
    ctx->pc = 0x10E410u;
    SET_GPR_U32(ctx, 31, 0x10E418u);
    ctx->pc = 0x10E414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E410u;
    // 0x10e414: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10E410u, 0x10E418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E418u;
label_10e418:
    // 0x10e418: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x10e418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_10e41c:
    // 0x10e41c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10e41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e420:
    // 0x10e420: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10e424:
    // 0x10e424: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10e424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10e428:
    // 0x10e428: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x10e428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_10e42c:
    // 0x10e42c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10e430:
    // 0x10e430: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10e430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10e434:
    // 0x10e434: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x10e434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
label_10e438:
    // 0x10e438: 0xae2515b8  sw          $a1, 0x15B8($s1)
    ctx->pc = 0x10e438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 5));
label_10e43c:
    // 0x10e43c: 0xe6351588  swc1        $f21, 0x1588($s1)
    ctx->pc = 0x10e43cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5512), bits); }
label_10e440:
    // 0x10e440: 0xa6240568  sh          $a0, 0x568($s1)
    ctx->pc = 0x10e440u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 4));
label_10e444:
    // 0x10e444: 0xa2231603  sb          $v1, 0x1603($s1)
    ctx->pc = 0x10e444u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5635), (uint8_t)GPR_U32(ctx, 3));
label_10e448:
    // 0x10e448: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x10e448u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_10e44c:
    // 0x10e44c: 0xe63515c4  swc1        $f21, 0x15C4($s1)
    ctx->pc = 0x10e44cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5572), bits); }
label_10e450:
    // 0x10e450: 0xae2515b0  sw          $a1, 0x15B0($s1)
    ctx->pc = 0x10e450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 5));
label_10e454:
    // 0x10e454: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x10e454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
label_10e458:
    // 0x10e458: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x10e458u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
label_10e45c:
    // 0x10e45c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_10e460:
    if (ctx->pc == 0x10E460u) {
        ctx->pc = 0x10E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E45Cu;
        // 0x10e460: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E464u;
        goto label_10e464;
    }
    ctx->pc = 0x10E45Cu;
    {
        const bool branch_taken_0x10e45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E45Cu;
        // 0x10e460: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e45c) {
            ctx->pc = 0x10E480u;
            goto label_10e480;
        }
    }
    ctx->pc = 0x10E464u;
label_10e464:
    // 0x10e464: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x10e464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10e468:
    // 0x10e468: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x10e468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
label_10e46c:
    // 0x10e46c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x10e46cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_10e470:
    // 0x10e470: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10e470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10e474:
    // 0x10e474: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x10e474u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_10e478:
    // 0x10e478: 0xc04939a  jal         func_124E68
label_10e47c:
    if (ctx->pc == 0x10E47Cu) {
        ctx->pc = 0x10E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E478u;
        // 0x10e47c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E480u;
        goto label_10e480;
    }
    ctx->pc = 0x10E478u;
    SET_GPR_U32(ctx, 31, 0x10E480u);
    ctx->pc = 0x10E47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E478u;
    // 0x10e47c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x10E478u, 0x10E480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E480u;
label_10e480:
    // 0x10e480: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x10e480u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_10e484:
    // 0x10e484: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x10e484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_10e488:
    // 0x10e488: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_10e48c:
    if (ctx->pc == 0x10E48Cu) {
        ctx->pc = 0x10E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E488u;
        // 0x10e48c: 0x8e220640  lw          $v0, 0x640($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E490u;
        goto label_10e490;
    }
    ctx->pc = 0x10E488u;
    {
        const bool branch_taken_0x10e488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e488) {
            ctx->pc = 0x10E48Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E488u;
            // 0x10e48c: 0x8e220640  lw          $v0, 0x640($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E49Cu;
            goto label_10e49c;
        }
    }
    ctx->pc = 0x10E490u;
label_10e490:
    // 0x10e490: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10e490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10e494:
    // 0x10e494: 0xa2221603  sb          $v0, 0x1603($s1)
    ctx->pc = 0x10e494u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5635), (uint8_t)GPR_U32(ctx, 2));
label_10e498:
    // 0x10e498: 0x8e220640  lw          $v0, 0x640($s1)
    ctx->pc = 0x10e498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10e49c:
    // 0x10e49c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_10e4a0:
    if (ctx->pc == 0x10E4A0u) {
        ctx->pc = 0x10E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E49Cu;
        // 0x10e4a0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4A4u;
        goto label_10e4a4;
    }
    ctx->pc = 0x10E49Cu;
    {
        const bool branch_taken_0x10e49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E49Cu;
        // 0x10e4a0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e49c) {
            ctx->pc = 0x10E4A8u;
            goto label_10e4a8;
        }
    }
    ctx->pc = 0x10E4A4u;
label_10e4a4:
    // 0x10e4a4: 0xa2220648  sb          $v0, 0x648($s1)
    ctx->pc = 0x10e4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 2));
label_10e4a8:
    // 0x10e4a8: 0xc055f06  jal         func_157C18
label_10e4ac:
    if (ctx->pc == 0x10E4ACu) {
        ctx->pc = 0x10E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4A8u;
        // 0x10e4ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4B0u;
        goto label_10e4b0;
    }
    ctx->pc = 0x10E4A8u;
    SET_GPR_U32(ctx, 31, 0x10E4B0u);
    ctx->pc = 0x10E4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E4A8u;
    // 0x10e4ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10E4A8u, 0x10E4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E4B0u;
label_10e4b0:
    // 0x10e4b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_10e4b4:
    if (ctx->pc == 0x10E4B4u) {
        ctx->pc = 0x10E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4B0u;
        // 0x10e4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4B8u;
        goto label_10e4b8;
    }
    ctx->pc = 0x10E4B0u;
    {
        const bool branch_taken_0x10e4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4B0u;
        // 0x10e4b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4b0) {
            ctx->pc = 0x10E4D4u;
            goto label_10e4d4;
        }
    }
    ctx->pc = 0x10E4B8u;
label_10e4b8:
    // 0x10e4b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10e4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e4bc:
    // 0x10e4bc: 0xc0493d8  jal         func_124F60
label_10e4c0:
    if (ctx->pc == 0x10E4C0u) {
        ctx->pc = 0x10E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4BCu;
        // 0x10e4c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4C4u;
        goto label_10e4c4;
    }
    ctx->pc = 0x10E4BCu;
    SET_GPR_U32(ctx, 31, 0x10E4C4u);
    ctx->pc = 0x10E4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E4BCu;
    // 0x10e4c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10E4BCu, 0x10E4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E4C4u;
label_10e4c4:
    // 0x10e4c4: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x10e4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_10e4c8:
    // 0x10e4c8: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x10e4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_10e4cc:
    // 0x10e4cc: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x10e4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_10e4d0:
    // 0x10e4d0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x10e4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_10e4d4:
    // 0x10e4d4: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x10e4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_10e4d8:
    // 0x10e4d8: 0x50a00015  beql        $a1, $zero, . + 4 + (0x15 << 2)
label_10e4dc:
    if (ctx->pc == 0x10E4DCu) {
        ctx->pc = 0x10E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4D8u;
        // 0x10e4dc: 0xc6211588  lwc1        $f1, 0x1588($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4E0u;
        goto label_10e4e0;
    }
    ctx->pc = 0x10E4D8u;
    {
        const bool branch_taken_0x10e4d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e4d8) {
            ctx->pc = 0x10E4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E4D8u;
            // 0x10e4dc: 0xc6211588  lwc1        $f1, 0x1588($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E530u;
            goto label_10e530;
        }
    }
    ctx->pc = 0x10E4E0u;
label_10e4e0:
    // 0x10e4e0: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x10e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_10e4e4:
    // 0x10e4e4: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x10e4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_10e4e8:
    // 0x10e4e8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x10e4e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_10e4ec:
    // 0x10e4ec: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x10e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_10e4f0:
    // 0x10e4f0: 0x40f809  jalr        $v0
label_10e4f4:
    if (ctx->pc == 0x10E4F4u) {
        ctx->pc = 0x10E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4F0u;
        // 0x10e4f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4F8u;
        goto label_10e4f8;
    }
    ctx->pc = 0x10E4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E4F8u);
        ctx->pc = 0x10E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4F0u;
        // 0x10e4f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E4F0u, 0x10E4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E4F8u;
label_10e4f8:
    // 0x10e4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10e4fc:
    // 0x10e4fc: 0xc07dfac  jal         func_1F7EB0
label_10e500:
    if (ctx->pc == 0x10E500u) {
        ctx->pc = 0x10E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4FCu;
        // 0x10e500: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E504u;
        goto label_10e504;
    }
    ctx->pc = 0x10E4FCu;
    SET_GPR_U32(ctx, 31, 0x10E504u);
    ctx->pc = 0x10E500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E4FCu;
    // 0x10e500: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x10E4FCu, 0x10E504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E504u;
label_10e504:
    // 0x10e504: 0x3c013f9a  lui         $at, 0x3F9A
    ctx->pc = 0x10e504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16282 << 16));
label_10e508:
    // 0x10e508: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x10e508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_10e50c:
    // 0x10e50c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10e50cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10e510:
    // 0x10e510: 0x0  nop
    ctx->pc = 0x10e510u;
    // NOP
label_10e514:
    // 0x10e514: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10e514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_10e518:
    // 0x10e518: 0x0  nop
    ctx->pc = 0x10e518u;
    // NOP
label_10e51c:
    // 0x10e51c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_10e520:
    if (ctx->pc == 0x10E520u) {
        ctx->pc = 0x10E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E51Cu;
        // 0x10e520: 0xc6211588  lwc1        $f1, 0x1588($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E524u;
        goto label_10e524;
    }
    ctx->pc = 0x10E51Cu;
    {
        const bool branch_taken_0x10e51c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10e51c) {
            ctx->pc = 0x10E520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E51Cu;
            // 0x10e520: 0xc6211588  lwc1        $f1, 0x1588($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E530u;
            goto label_10e530;
        }
    }
    ctx->pc = 0x10E524u;
label_10e524:
    // 0x10e524: 0xae200330  sw          $zero, 0x330($s1)
    ctx->pc = 0x10e524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 0));
label_10e528:
    // 0x10e528: 0xae200338  sw          $zero, 0x338($s1)
    ctx->pc = 0x10e528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 0));
label_10e52c:
    // 0x10e52c: 0xc6211588  lwc1        $f1, 0x1588($s1)
    ctx->pc = 0x10e52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10e530:
    // 0x10e530: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e534:
    // 0x10e534: 0xc6200338  lwc1        $f0, 0x338($s1)
    ctx->pc = 0x10e534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10e538:
    // 0x10e538: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x10e538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_10e53c:
    // 0x10e53c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x10e53cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_10e540:
    // 0x10e540: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10e540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10e544:
    // 0x10e544: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10e544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_10e548:
    // 0x10e548: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10e54c:
    // 0x10e54c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10e54cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10e550:
    // 0x10e550: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x10e550u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_10e554:
    // 0x10e554: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10e554u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10e558:
    // 0x10e558: 0xe6200338  swc1        $f0, 0x338($s1)
    ctx->pc = 0x10e558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
label_10e55c:
    // 0x10e55c: 0xc053e7c  jal         func_14F9F0
label_10e560:
    if (ctx->pc == 0x10E560u) {
        ctx->pc = 0x10E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E55Cu;
        // 0x10e560: 0xe6211588  swc1        $f1, 0x1588($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5512), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E564u;
        goto label_10e564;
    }
    ctx->pc = 0x10E55Cu;
    SET_GPR_U32(ctx, 31, 0x10E564u);
    ctx->pc = 0x10E560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E55Cu;
    // 0x10e560: 0xe6211588  swc1        $f1, 0x1588($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5512), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x10E55Cu, 0x10E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E564u;
label_10e564:
    // 0x10e564: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10e564u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10e568:
    // 0x10e568: 0xc053e4a  jal         func_14F928
label_10e56c:
    if (ctx->pc == 0x10E56Cu) {
        ctx->pc = 0x10E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E568u;
        // 0x10e56c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E570u;
        goto label_10e570;
    }
    ctx->pc = 0x10E568u;
    SET_GPR_U32(ctx, 31, 0x10E570u);
    ctx->pc = 0x10E56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E568u;
    // 0x10e56c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x10E568u, 0x10E570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E570u;
label_10e570:
    // 0x10e570: 0xc04290e  jal         func_10A438
label_10e574:
    if (ctx->pc == 0x10E574u) {
        ctx->pc = 0x10E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E570u;
        // 0x10e574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E578u;
        goto label_10e578;
    }
    ctx->pc = 0x10E570u;
    SET_GPR_U32(ctx, 31, 0x10E578u);
    ctx->pc = 0x10E574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E570u;
    // 0x10e574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x10E570u, 0x10E578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E578u;
label_10e578:
    // 0x10e578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10e57c:
    // 0x10e57c: 0xc048e4e  jal         func_123938
label_10e580:
    if (ctx->pc == 0x10E580u) {
        ctx->pc = 0x10E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E57Cu;
        // 0x10e580: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E584u;
        goto label_10e584;
    }
    ctx->pc = 0x10E57Cu;
    SET_GPR_U32(ctx, 31, 0x10E584u);
    ctx->pc = 0x10E580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E57Cu;
    // 0x10e580: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x10E57Cu, 0x10E584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E584u;
label_10e584:
    // 0x10e584: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10e588:
    if (ctx->pc == 0x10E588u) {
        ctx->pc = 0x10E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E584u;
        // 0x10e588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E58Cu;
        goto label_10e58c;
    }
    ctx->pc = 0x10E584u;
    {
        const bool branch_taken_0x10e584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E584u;
        // 0x10e588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e584) {
            ctx->pc = 0x10E598u;
            goto label_10e598;
        }
    }
    ctx->pc = 0x10E58Cu;
label_10e58c:
    // 0x10e58c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10e58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e590:
    // 0x10e590: 0xc0493d8  jal         func_124F60
label_10e594:
    if (ctx->pc == 0x10E594u) {
        ctx->pc = 0x10E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E590u;
        // 0x10e594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E598u;
        goto label_10e598;
    }
    ctx->pc = 0x10E590u;
    SET_GPR_U32(ctx, 31, 0x10E598u);
    ctx->pc = 0x10E594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E590u;
    // 0x10e594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x10E590u, 0x10E598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E598u;
label_10e598:
    // 0x10e598: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10e598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10e59c:
    // 0x10e59c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10e59cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10e5a0:
    // 0x10e5a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e5a4:
    // 0x10e5a4: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x10e5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_10e5a8:
    // 0x10e5a8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x10e5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10e5ac:
    // 0x10e5ac: 0x3e00008  jr          $ra
label_10e5b0:
    if (ctx->pc == 0x10E5B0u) {
        ctx->pc = 0x10E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5ACu;
        // 0x10e5b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E5B4u;
        goto label_10e5b4;
    }
    ctx->pc = 0x10E5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5ACu;
        // 0x10e5b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E5B4u;
label_10e5b4:
    // 0x10e5b4: 0x0  nop
    ctx->pc = 0x10e5b4u;
    // NOP
    ctx->pc = 0x10e5b8u;
}
