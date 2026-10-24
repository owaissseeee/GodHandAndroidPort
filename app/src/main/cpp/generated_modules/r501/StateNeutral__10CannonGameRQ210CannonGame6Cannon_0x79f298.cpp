#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: StateNeutral__10CannonGameRQ210CannonGame6Cannon
// Address: 0x79f298 - 0x79f648
void StateNeutral__10CannonGameRQ210CannonGame6Cannon_0x79f298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StateNeutral__10CannonGameRQ210CannonGame6Cannon_0x79f298");
#endif

    switch (ctx->pc) {
        case 0x79f298u: goto label_79f298;
        case 0x79f29cu: goto label_79f29c;
        case 0x79f2a0u: goto label_79f2a0;
        case 0x79f2a4u: goto label_79f2a4;
        case 0x79f2a8u: goto label_79f2a8;
        case 0x79f2acu: goto label_79f2ac;
        case 0x79f2b0u: goto label_79f2b0;
        case 0x79f2b4u: goto label_79f2b4;
        case 0x79f2b8u: goto label_79f2b8;
        case 0x79f2bcu: goto label_79f2bc;
        case 0x79f2c0u: goto label_79f2c0;
        case 0x79f2c4u: goto label_79f2c4;
        case 0x79f2c8u: goto label_79f2c8;
        case 0x79f2ccu: goto label_79f2cc;
        case 0x79f2d0u: goto label_79f2d0;
        case 0x79f2d4u: goto label_79f2d4;
        case 0x79f2d8u: goto label_79f2d8;
        case 0x79f2dcu: goto label_79f2dc;
        case 0x79f2e0u: goto label_79f2e0;
        case 0x79f2e4u: goto label_79f2e4;
        case 0x79f2e8u: goto label_79f2e8;
        case 0x79f2ecu: goto label_79f2ec;
        case 0x79f2f0u: goto label_79f2f0;
        case 0x79f2f4u: goto label_79f2f4;
        case 0x79f2f8u: goto label_79f2f8;
        case 0x79f2fcu: goto label_79f2fc;
        case 0x79f300u: goto label_79f300;
        case 0x79f304u: goto label_79f304;
        case 0x79f308u: goto label_79f308;
        case 0x79f30cu: goto label_79f30c;
        case 0x79f310u: goto label_79f310;
        case 0x79f314u: goto label_79f314;
        case 0x79f318u: goto label_79f318;
        case 0x79f31cu: goto label_79f31c;
        case 0x79f320u: goto label_79f320;
        case 0x79f324u: goto label_79f324;
        case 0x79f328u: goto label_79f328;
        case 0x79f32cu: goto label_79f32c;
        case 0x79f330u: goto label_79f330;
        case 0x79f334u: goto label_79f334;
        case 0x79f338u: goto label_79f338;
        case 0x79f33cu: goto label_79f33c;
        case 0x79f340u: goto label_79f340;
        case 0x79f344u: goto label_79f344;
        case 0x79f348u: goto label_79f348;
        case 0x79f34cu: goto label_79f34c;
        case 0x79f350u: goto label_79f350;
        case 0x79f354u: goto label_79f354;
        case 0x79f358u: goto label_79f358;
        case 0x79f35cu: goto label_79f35c;
        case 0x79f360u: goto label_79f360;
        case 0x79f364u: goto label_79f364;
        case 0x79f368u: goto label_79f368;
        case 0x79f36cu: goto label_79f36c;
        case 0x79f370u: goto label_79f370;
        case 0x79f374u: goto label_79f374;
        case 0x79f378u: goto label_79f378;
        case 0x79f37cu: goto label_79f37c;
        case 0x79f380u: goto label_79f380;
        case 0x79f384u: goto label_79f384;
        case 0x79f388u: goto label_79f388;
        case 0x79f38cu: goto label_79f38c;
        case 0x79f390u: goto label_79f390;
        case 0x79f394u: goto label_79f394;
        case 0x79f398u: goto label_79f398;
        case 0x79f39cu: goto label_79f39c;
        case 0x79f3a0u: goto label_79f3a0;
        case 0x79f3a4u: goto label_79f3a4;
        case 0x79f3a8u: goto label_79f3a8;
        case 0x79f3acu: goto label_79f3ac;
        case 0x79f3b0u: goto label_79f3b0;
        case 0x79f3b4u: goto label_79f3b4;
        case 0x79f3b8u: goto label_79f3b8;
        case 0x79f3bcu: goto label_79f3bc;
        case 0x79f3c0u: goto label_79f3c0;
        case 0x79f3c4u: goto label_79f3c4;
        case 0x79f3c8u: goto label_79f3c8;
        case 0x79f3ccu: goto label_79f3cc;
        case 0x79f3d0u: goto label_79f3d0;
        case 0x79f3d4u: goto label_79f3d4;
        case 0x79f3d8u: goto label_79f3d8;
        case 0x79f3dcu: goto label_79f3dc;
        case 0x79f3e0u: goto label_79f3e0;
        case 0x79f3e4u: goto label_79f3e4;
        case 0x79f3e8u: goto label_79f3e8;
        case 0x79f3ecu: goto label_79f3ec;
        case 0x79f3f0u: goto label_79f3f0;
        case 0x79f3f4u: goto label_79f3f4;
        case 0x79f3f8u: goto label_79f3f8;
        case 0x79f3fcu: goto label_79f3fc;
        case 0x79f400u: goto label_79f400;
        case 0x79f404u: goto label_79f404;
        case 0x79f408u: goto label_79f408;
        case 0x79f40cu: goto label_79f40c;
        case 0x79f410u: goto label_79f410;
        case 0x79f414u: goto label_79f414;
        case 0x79f418u: goto label_79f418;
        case 0x79f41cu: goto label_79f41c;
        case 0x79f420u: goto label_79f420;
        case 0x79f424u: goto label_79f424;
        case 0x79f428u: goto label_79f428;
        case 0x79f42cu: goto label_79f42c;
        case 0x79f430u: goto label_79f430;
        case 0x79f434u: goto label_79f434;
        case 0x79f438u: goto label_79f438;
        case 0x79f43cu: goto label_79f43c;
        case 0x79f440u: goto label_79f440;
        case 0x79f444u: goto label_79f444;
        case 0x79f448u: goto label_79f448;
        case 0x79f44cu: goto label_79f44c;
        case 0x79f450u: goto label_79f450;
        case 0x79f454u: goto label_79f454;
        case 0x79f458u: goto label_79f458;
        case 0x79f45cu: goto label_79f45c;
        case 0x79f460u: goto label_79f460;
        case 0x79f464u: goto label_79f464;
        case 0x79f468u: goto label_79f468;
        case 0x79f46cu: goto label_79f46c;
        case 0x79f470u: goto label_79f470;
        case 0x79f474u: goto label_79f474;
        case 0x79f478u: goto label_79f478;
        case 0x79f47cu: goto label_79f47c;
        case 0x79f480u: goto label_79f480;
        case 0x79f484u: goto label_79f484;
        case 0x79f488u: goto label_79f488;
        case 0x79f48cu: goto label_79f48c;
        case 0x79f490u: goto label_79f490;
        case 0x79f494u: goto label_79f494;
        case 0x79f498u: goto label_79f498;
        case 0x79f49cu: goto label_79f49c;
        case 0x79f4a0u: goto label_79f4a0;
        case 0x79f4a4u: goto label_79f4a4;
        case 0x79f4a8u: goto label_79f4a8;
        case 0x79f4acu: goto label_79f4ac;
        case 0x79f4b0u: goto label_79f4b0;
        case 0x79f4b4u: goto label_79f4b4;
        case 0x79f4b8u: goto label_79f4b8;
        case 0x79f4bcu: goto label_79f4bc;
        case 0x79f4c0u: goto label_79f4c0;
        case 0x79f4c4u: goto label_79f4c4;
        case 0x79f4c8u: goto label_79f4c8;
        case 0x79f4ccu: goto label_79f4cc;
        case 0x79f4d0u: goto label_79f4d0;
        case 0x79f4d4u: goto label_79f4d4;
        case 0x79f4d8u: goto label_79f4d8;
        case 0x79f4dcu: goto label_79f4dc;
        case 0x79f4e0u: goto label_79f4e0;
        case 0x79f4e4u: goto label_79f4e4;
        case 0x79f4e8u: goto label_79f4e8;
        case 0x79f4ecu: goto label_79f4ec;
        case 0x79f4f0u: goto label_79f4f0;
        case 0x79f4f4u: goto label_79f4f4;
        case 0x79f4f8u: goto label_79f4f8;
        case 0x79f4fcu: goto label_79f4fc;
        case 0x79f500u: goto label_79f500;
        case 0x79f504u: goto label_79f504;
        case 0x79f508u: goto label_79f508;
        case 0x79f50cu: goto label_79f50c;
        case 0x79f510u: goto label_79f510;
        case 0x79f514u: goto label_79f514;
        case 0x79f518u: goto label_79f518;
        case 0x79f51cu: goto label_79f51c;
        case 0x79f520u: goto label_79f520;
        case 0x79f524u: goto label_79f524;
        case 0x79f528u: goto label_79f528;
        case 0x79f52cu: goto label_79f52c;
        case 0x79f530u: goto label_79f530;
        case 0x79f534u: goto label_79f534;
        case 0x79f538u: goto label_79f538;
        case 0x79f53cu: goto label_79f53c;
        case 0x79f540u: goto label_79f540;
        case 0x79f544u: goto label_79f544;
        case 0x79f548u: goto label_79f548;
        case 0x79f54cu: goto label_79f54c;
        case 0x79f550u: goto label_79f550;
        case 0x79f554u: goto label_79f554;
        case 0x79f558u: goto label_79f558;
        case 0x79f55cu: goto label_79f55c;
        case 0x79f560u: goto label_79f560;
        case 0x79f564u: goto label_79f564;
        case 0x79f568u: goto label_79f568;
        case 0x79f56cu: goto label_79f56c;
        case 0x79f570u: goto label_79f570;
        case 0x79f574u: goto label_79f574;
        case 0x79f578u: goto label_79f578;
        case 0x79f57cu: goto label_79f57c;
        case 0x79f580u: goto label_79f580;
        case 0x79f584u: goto label_79f584;
        case 0x79f588u: goto label_79f588;
        case 0x79f58cu: goto label_79f58c;
        case 0x79f590u: goto label_79f590;
        case 0x79f594u: goto label_79f594;
        case 0x79f598u: goto label_79f598;
        case 0x79f59cu: goto label_79f59c;
        case 0x79f5a0u: goto label_79f5a0;
        case 0x79f5a4u: goto label_79f5a4;
        case 0x79f5a8u: goto label_79f5a8;
        case 0x79f5acu: goto label_79f5ac;
        case 0x79f5b0u: goto label_79f5b0;
        case 0x79f5b4u: goto label_79f5b4;
        case 0x79f5b8u: goto label_79f5b8;
        case 0x79f5bcu: goto label_79f5bc;
        case 0x79f5c0u: goto label_79f5c0;
        case 0x79f5c4u: goto label_79f5c4;
        case 0x79f5c8u: goto label_79f5c8;
        case 0x79f5ccu: goto label_79f5cc;
        case 0x79f5d0u: goto label_79f5d0;
        case 0x79f5d4u: goto label_79f5d4;
        case 0x79f5d8u: goto label_79f5d8;
        case 0x79f5dcu: goto label_79f5dc;
        case 0x79f5e0u: goto label_79f5e0;
        case 0x79f5e4u: goto label_79f5e4;
        case 0x79f5e8u: goto label_79f5e8;
        case 0x79f5ecu: goto label_79f5ec;
        case 0x79f5f0u: goto label_79f5f0;
        case 0x79f5f4u: goto label_79f5f4;
        case 0x79f5f8u: goto label_79f5f8;
        case 0x79f5fcu: goto label_79f5fc;
        case 0x79f600u: goto label_79f600;
        case 0x79f604u: goto label_79f604;
        case 0x79f608u: goto label_79f608;
        case 0x79f60cu: goto label_79f60c;
        case 0x79f610u: goto label_79f610;
        case 0x79f614u: goto label_79f614;
        case 0x79f618u: goto label_79f618;
        case 0x79f61cu: goto label_79f61c;
        case 0x79f620u: goto label_79f620;
        case 0x79f624u: goto label_79f624;
        case 0x79f628u: goto label_79f628;
        case 0x79f62cu: goto label_79f62c;
        case 0x79f630u: goto label_79f630;
        case 0x79f634u: goto label_79f634;
        case 0x79f638u: goto label_79f638;
        case 0x79f63cu: goto label_79f63c;
        case 0x79f640u: goto label_79f640;
        case 0x79f644u: goto label_79f644;
        default: break;
    }

    ctx->pc = 0x79f298u;

label_79f298:
    // 0x79f298: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x79f298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_79f29c:
    // 0x79f29c: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x79f29cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
label_79f2a0:
    // 0x79f2a0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x79f2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_79f2a4:
    // 0x79f2a4: 0x24c374a0  addiu       $v1, $a2, 0x74A0
    ctx->pc = 0x79f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
label_79f2a8:
    // 0x79f2a8: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x79f2a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_79f2ac:
    // 0x79f2ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79f2acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_79f2b0:
    // 0x79f2b0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x79f2b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_79f2b4:
    // 0x79f2b4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x79f2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_79f2b8:
    // 0x79f2b8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x79f2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_79f2bc:
    // 0x79f2bc: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x79f2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_79f2c0:
    // 0x79f2c0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x79f2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_79f2c4:
    // 0x79f2c4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x79f2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_79f2c8:
    // 0x79f2c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79f2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_79f2cc:
    // 0x79f2cc: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x79f2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
label_79f2d0:
    // 0x79f2d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79f2d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79f2d4:
    // 0x79f2d4: 0x90650063  lbu         $a1, 0x63($v1)
    ctx->pc = 0x79f2d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 99)));
label_79f2d8:
    // 0x79f2d8: 0x90620062  lbu         $v0, 0x62($v1)
    ctx->pc = 0x79f2d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 98)));
label_79f2dc:
    // 0x79f2dc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x79f2dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79f2e0:
    // 0x79f2e0: 0x0  nop
    ctx->pc = 0x79f2e0u;
    // NOP
label_79f2e4:
    // 0x79f2e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79f2e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_79f2e8:
    // 0x79f2e8: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x79f2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
label_79f2ec:
    // 0x79f2ec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79f2ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_79f2f0:
    // 0x79f2f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x79f2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79f2f4:
    // 0x79f2f4: 0x0  nop
    ctx->pc = 0x79f2f4u;
    // NOP
label_79f2f8:
    // 0x79f2f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x79f2f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_79f2fc:
    // 0x79f2fc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x79f2fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_79f300:
    // 0x79f300: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x79f300u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_79f304:
    // 0x79f304: 0x46030502  mul.s       $f20, $f0, $f3
    ctx->pc = 0x79f304u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_79f308:
    // 0x79f308: 0x46030d42  mul.s       $f21, $f1, $f3
    ctx->pc = 0x79f308u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_79f30c:
    // 0x79f30c: 0x4600a005  abs.s       $f0, $f20
    ctx->pc = 0x79f30cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[20]);
label_79f310:
    // 0x79f310: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x79f310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_79f314:
    // 0x79f314: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79f314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79f318:
    // 0x79f318: 0x0  nop
    ctx->pc = 0x79f318u;
    // NOP
label_79f31c:
    // 0x79f31c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x79f31cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79f320:
    // 0x79f320: 0x0  nop
    ctx->pc = 0x79f320u;
    // NOP
label_79f324:
    // 0x79f324: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_79f328:
    if (ctx->pc == 0x79F328u) {
        ctx->pc = 0x79F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F324u;
        // 0x79f328: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F32Cu;
        goto label_79f32c;
    }
    ctx->pc = 0x79F324u;
    {
        const bool branch_taken_0x79f324 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F324u;
        // 0x79f328: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f324) {
            ctx->pc = 0x79F330u;
            goto label_79f330;
        }
    }
    ctx->pc = 0x79F32Cu;
label_79f32c:
    // 0x79f32c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x79f32cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79f330:
    // 0x79f330: 0x4600a805  abs.s       $f0, $f21
    ctx->pc = 0x79f330u;
    ctx->f[0] = FPU_ABS_S(ctx->f[21]);
label_79f334:
    // 0x79f334: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x79f334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79f338:
    // 0x79f338: 0x0  nop
    ctx->pc = 0x79f338u;
    // NOP
label_79f33c:
    // 0x79f33c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_79f340:
    if (ctx->pc == 0x79F340u) {
        ctx->pc = 0x79F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F33Cu;
        // 0x79f340: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F344u;
        goto label_79f344;
    }
    ctx->pc = 0x79F33Cu;
    {
        const bool branch_taken_0x79f33c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F33Cu;
        // 0x79f340: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f33c) {
            ctx->pc = 0x79F348u;
            goto label_79f348;
        }
    }
    ctx->pc = 0x79F344u;
label_79f344:
    // 0x79f344: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x79f344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_79f348:
    // 0x79f348: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_79f34c:
    if (ctx->pc == 0x79F34Cu) {
        ctx->pc = 0x79F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F348u;
        // 0x79f34c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F350u;
        goto label_79f350;
    }
    ctx->pc = 0x79F348u;
    {
        const bool branch_taken_0x79f348 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x79F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F348u;
        // 0x79f34c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f348) {
            ctx->pc = 0x79F358u;
            goto label_79f358;
        }
    }
    ctx->pc = 0x79F350u;
label_79f350:
    // 0x79f350: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_79f354:
    if (ctx->pc == 0x79F354u) {
        ctx->pc = 0x79F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F350u;
        // 0x79f354: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F358u;
        goto label_79f358;
    }
    ctx->pc = 0x79F350u;
    {
        const bool branch_taken_0x79f350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F350u;
        // 0x79f354: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f350) {
            ctx->pc = 0x79F61Cu;
            goto label_79f61c;
        }
    }
    ctx->pc = 0x79F358u;
label_79f358:
    // 0x79f358: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x79f358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_79f35c:
    // 0x79f35c: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_79f360:
    if (ctx->pc == 0x79F360u) {
        ctx->pc = 0x79F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F35Cu;
        // 0x79f360: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F364u;
        goto label_79f364;
    }
    ctx->pc = 0x79F35Cu;
    {
        const bool branch_taken_0x79f35c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x79F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F35Cu;
        // 0x79f360: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f35c) {
            ctx->pc = 0x79F368u;
            goto label_79f368;
        }
    }
    ctx->pc = 0x79F364u;
label_79f364:
    // 0x79f364: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x79f364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_79f368:
    // 0x79f368: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79f368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_79f36c:
    // 0x79f36c: 0xc07e804  jal         func_1FA010
label_79f370:
    if (ctx->pc == 0x79F370u) {
        ctx->pc = 0x79F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F36Cu;
        // 0x79f370: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F374u;
        goto label_79f374;
    }
    ctx->pc = 0x79F36Cu;
    SET_GPR_U32(ctx, 31, 0x79F374u);
    ctx->pc = 0x79F370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79F36Cu;
    // 0x79f370: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x79F36Cu, 0x79F374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79F374u;
label_79f374:
    // 0x79f374: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x79f374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_79f378:
    // 0x79f378: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79f37c:
    if (ctx->pc == 0x79F37Cu) {
        ctx->pc = 0x79F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F378u;
        // 0x79f37c: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F380u;
        goto label_79f380;
    }
    ctx->pc = 0x79F378u;
    {
        const bool branch_taken_0x79f378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F378u;
        // 0x79f37c: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f378) {
            ctx->pc = 0x79F3B4u;
            goto label_79f3b4;
        }
    }
    ctx->pc = 0x79F380u;
label_79f380:
    // 0x79f380: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79f380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_79f384:
    // 0x79f384: 0xc4420764  lwc1        $f2, 0x764($v0)
    ctx->pc = 0x79f384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79f388:
    // 0x79f388: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79f388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79f38c:
    // 0x79f38c: 0xc4630768  lwc1        $f3, 0x768($v1)
    ctx->pc = 0x79f38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_79f390:
    // 0x79f390: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79f390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79f394:
    // 0x79f394: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x79f394u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_79f398:
    // 0x79f398: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x79f398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79f39c:
    // 0x79f39c: 0x4603a8c2  mul.s       $f3, $f21, $f3
    ctx->pc = 0x79f39cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
label_79f3a0:
    // 0x79f3a0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x79f3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79f3a4:
    // 0x79f3a4: 0xc485076c  lwc1        $f5, 0x76C($a0)
    ctx->pc = 0x79f3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_79f3a8:
    // 0x79f3a8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x79f3a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_79f3ac:
    // 0x79f3ac: 0x1000000e  b           . + 4 + (0xE << 2)
label_79f3b0:
    if (ctx->pc == 0x79F3B0u) {
        ctx->pc = 0x79F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F3ACu;
        // 0x79f3b0: 0xc4440770  lwc1        $f4, 0x770($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F3B4u;
        goto label_79f3b4;
    }
    ctx->pc = 0x79F3ACu;
    {
        const bool branch_taken_0x79f3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F3ACu;
        // 0x79f3b0: 0xc4440770  lwc1        $f4, 0x770($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f3ac) {
            ctx->pc = 0x79F3E8u;
            goto label_79f3e8;
        }
    }
    ctx->pc = 0x79F3B4u;
label_79f3b4:
    // 0x79f3b4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79f3b8:
    // 0x79f3b8: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
label_79f3bc:
    // 0x79f3bc: 0xc4420774  lwc1        $f2, 0x774($v0)
    ctx->pc = 0x79f3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79f3c0:
    // 0x79f3c0: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79f3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79f3c4:
    // 0x79f3c4: 0xc4630778  lwc1        $f3, 0x778($v1)
    ctx->pc = 0x79f3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_79f3c8:
    // 0x79f3c8: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79f3cc:
    // 0x79f3cc: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x79f3ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_79f3d0:
    // 0x79f3d0: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x79f3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79f3d4:
    // 0x79f3d4: 0x4603a8c2  mul.s       $f3, $f21, $f3
    ctx->pc = 0x79f3d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
label_79f3d8:
    // 0x79f3d8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x79f3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79f3dc:
    // 0x79f3dc: 0xc485077c  lwc1        $f5, 0x77C($a0)
    ctx->pc = 0x79f3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_79f3e0:
    // 0x79f3e0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x79f3e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_79f3e4:
    // 0x79f3e4: 0xc4440780  lwc1        $f4, 0x780($v0)
    ctx->pc = 0x79f3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_79f3e8:
    // 0x79f3e8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x79f3e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_79f3ec:
    // 0x79f3ec: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x79f3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79f3f0:
    // 0x79f3f0: 0xc623000c  lwc1        $f3, 0xC($s1)
    ctx->pc = 0x79f3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_79f3f4:
    // 0x79f3f4: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x79f3f4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_79f3f8:
    // 0x79f3f8: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x79f3f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_79f3fc:
    // 0x79f3fc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x79f3fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_79f400:
    // 0x79f400: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x79f400u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_79f404:
    // 0x79f404: 0xe6250008  swc1        $f5, 0x8($s1)
    ctx->pc = 0x79f404u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_79f408:
    // 0x79f408: 0xe6240010  swc1        $f4, 0x10($s1)
    ctx->pc = 0x79f408u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_79f40c:
    // 0x79f40c: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x79f40cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_79f410:
    // 0x79f410: 0xe623000c  swc1        $f3, 0xC($s1)
    ctx->pc = 0x79f410u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_79f414:
    // 0x79f414: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x79f414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79f418:
    // 0x79f418: 0x3c01beb2  lui         $at, 0xBEB2
    ctx->pc = 0x79f418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48818 << 16));
label_79f41c:
    // 0x79f41c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x79f41cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_79f420:
    // 0x79f420: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79f420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_79f424:
    // 0x79f424: 0x3c01bd56  lui         $at, 0xBD56
    ctx->pc = 0x79f424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48470 << 16));
label_79f428:
    // 0x79f428: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x79f428u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
label_79f42c:
    // 0x79f42c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79f42cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79f430:
    // 0x79f430: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x79f430u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_79f434:
    // 0x79f434: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x79f434u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79f438:
    // 0x79f438: 0x0  nop
    ctx->pc = 0x79f438u;
    // NOP
label_79f43c:
    // 0x79f43c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_79f440:
    if (ctx->pc == 0x79F440u) {
        ctx->pc = 0x79F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F43Cu;
        // 0x79f440: 0xe7a20040  swc1        $f2, 0x40($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F444u;
        goto label_79f444;
    }
    ctx->pc = 0x79F43Cu;
    {
        const bool branch_taken_0x79f43c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F43Cu;
        // 0x79f440: 0xe7a20040  swc1        $f2, 0x40($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f43c) {
            ctx->pc = 0x79F448u;
            goto label_79f448;
        }
    }
    ctx->pc = 0x79F444u;
label_79f444:
    // 0x79f444: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x79f444u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_79f448:
    // 0x79f448: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x79f448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79f44c:
    // 0x79f44c: 0x0  nop
    ctx->pc = 0x79f44cu;
    // NOP
label_79f450:
    // 0x79f450: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_79f454:
    if (ctx->pc == 0x79F454u) {
        ctx->pc = 0x79F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F450u;
        // 0x79f454: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F458u;
        goto label_79f458;
    }
    ctx->pc = 0x79F450u;
    {
        const bool branch_taken_0x79f450 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79f450) {
            ctx->pc = 0x79F454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79F450u;
            // 0x79f454: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79F458u;
            goto label_79f458;
        }
    }
    ctx->pc = 0x79F458u;
label_79f458:
    // 0x79f458: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x79f458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79f45c:
    // 0x79f45c: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x79f45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
label_79f460:
    // 0x79f460: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x79f460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_79f464:
    // 0x79f464: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79f464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79f468:
    // 0x79f468: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x79f468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79f46c:
    // 0x79f46c: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x79f46cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_79f470:
    // 0x79f470: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_79f474:
    if (ctx->pc == 0x79F474u) {
        ctx->pc = 0x79F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F470u;
        // 0x79f474: 0xe7a10044  swc1        $f1, 0x44($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F478u;
        goto label_79f478;
    }
    ctx->pc = 0x79F470u;
    {
        const bool branch_taken_0x79f470 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F470u;
        // 0x79f474: 0xe7a10044  swc1        $f1, 0x44($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f470) {
            ctx->pc = 0x79F47Cu;
            goto label_79f47c;
        }
    }
    ctx->pc = 0x79F478u;
label_79f478:
    // 0x79f478: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x79f478u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_79f47c:
    // 0x79f47c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x79f47cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79f480:
    // 0x79f480: 0x0  nop
    ctx->pc = 0x79f480u;
    // NOP
label_79f484:
    // 0x79f484: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_79f488:
    if (ctx->pc == 0x79F488u) {
        ctx->pc = 0x79F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F484u;
        // 0x79f488: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F48Cu;
        goto label_79f48c;
    }
    ctx->pc = 0x79F484u;
    {
        const bool branch_taken_0x79f484 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79f484) {
            ctx->pc = 0x79F488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79F484u;
            // 0x79f488: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79F48Cu;
            goto label_79f48c;
        }
    }
    ctx->pc = 0x79F48Cu;
label_79f48c:
    // 0x79f48c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x79f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_79f490:
    // 0x79f490: 0x1c400062  bgtz        $v0, . + 4 + (0x62 << 2)
label_79f494:
    if (ctx->pc == 0x79F494u) {
        ctx->pc = 0x79F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F490u;
        // 0x79f494: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F498u;
        goto label_79f498;
    }
    ctx->pc = 0x79F490u;
    {
        const bool branch_taken_0x79f490 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x79F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F490u;
        // 0x79f494: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f490) {
            ctx->pc = 0x79F61Cu;
            goto label_79f61c;
        }
    }
    ctx->pc = 0x79F498u;
label_79f498:
    // 0x79f498: 0x260374a0  addiu       $v1, $s0, 0x74A0
    ctx->pc = 0x79f498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 29856));
label_79f49c:
    // 0x79f49c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x79f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_79f4a0:
    // 0x79f4a0: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x79f4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_79f4a4:
    // 0x79f4a4: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_79f4a8:
    if (ctx->pc == 0x79F4A8u) {
        ctx->pc = 0x79F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F4A4u;
        // 0x79f4a8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F4ACu;
        goto label_79f4ac;
    }
    ctx->pc = 0x79F4A4u;
    {
        const bool branch_taken_0x79f4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F4A4u;
        // 0x79f4a8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f4a4) {
            ctx->pc = 0x79F620u;
            goto label_79f620;
        }
    }
    ctx->pc = 0x79F4ACu;
label_79f4ac:
    // 0x79f4ac: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x79f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_79f4b0:
    // 0x79f4b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_79f4b4:
    if (ctx->pc == 0x79F4B4u) {
        ctx->pc = 0x79F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F4B0u;
        // 0x79f4b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F4B8u;
        goto label_79f4b8;
    }
    ctx->pc = 0x79F4B0u;
    {
        const bool branch_taken_0x79f4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F4B0u;
        // 0x79f4b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f4b0) {
            ctx->pc = 0x79F4D8u;
            goto label_79f4d8;
        }
    }
    ctx->pc = 0x79F4B8u;
label_79f4b8:
    // 0x79f4b8: 0x2623001c  addiu       $v1, $s1, 0x1C
    ctx->pc = 0x79f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_79f4bc:
    // 0x79f4bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x79f4bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_79f4c0:
    // 0x79f4c0: 0x2a02000f  slti        $v0, $s0, 0xF
    ctx->pc = 0x79f4c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
label_79f4c4:
    // 0x79f4c4: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_79f4c8:
    if (ctx->pc == 0x79F4C8u) {
        ctx->pc = 0x79F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F4C4u;
        // 0x79f4c8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F4CCu;
        goto label_79f4cc;
    }
    ctx->pc = 0x79F4C4u;
    {
        const bool branch_taken_0x79f4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F4C4u;
        // 0x79f4c8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f4c4) {
            ctx->pc = 0x79F61Cu;
            goto label_79f61c;
        }
    }
    ctx->pc = 0x79F4CCu;
label_79f4cc:
    // 0x79f4cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79f4d0:
    // 0x79f4d0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_79f4d4:
    if (ctx->pc == 0x79F4D4u) {
        ctx->pc = 0x79F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F4D0u;
        // 0x79f4d4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F4D8u;
        goto label_79f4d8;
    }
    ctx->pc = 0x79F4D0u;
    {
        const bool branch_taken_0x79f4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79f4d0) {
            ctx->pc = 0x79F4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79F4D0u;
            // 0x79f4d4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79F4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79f4c0;
        }
    }
    ctx->pc = 0x79F4D8u;
label_79f4d8:
    // 0x79f4d8: 0x2a02000f  slti        $v0, $s0, 0xF
    ctx->pc = 0x79f4d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
label_79f4dc:
    // 0x79f4dc: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_79f4e0:
    if (ctx->pc == 0x79F4E0u) {
        ctx->pc = 0x79F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F4DCu;
        // 0x79f4e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F4E4u;
        goto label_79f4e4;
    }
    ctx->pc = 0x79F4DCu;
    {
        const bool branch_taken_0x79f4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F4DCu;
        // 0x79f4e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f4dc) {
            ctx->pc = 0x79F61Cu;
            goto label_79f61c;
        }
    }
    ctx->pc = 0x79F4E4u;
label_79f4e4:
    // 0x79f4e4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79f4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79f4e8:
    // 0x79f4e8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79f4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_79f4ec:
    // 0x79f4ec: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x79f4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_79f4f0:
    // 0x79f4f0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79f4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79f4f4:
    // 0x79f4f4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79f4f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79f4f8:
    // 0x79f4f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79f4f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79f4fc:
    // 0x79f4fc: 0xc0b2e28  jal         func_2CB8A0
label_79f500:
    if (ctx->pc == 0x79F500u) {
        ctx->pc = 0x79F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F4FCu;
        // 0x79f500: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F504u;
        goto label_79f504;
    }
    ctx->pc = 0x79F4FCu;
    SET_GPR_U32(ctx, 31, 0x79F504u);
    ctx->pc = 0x79F500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79F4FCu;
    // 0x79f500: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79F4FCu, 0x79F504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79F504u;
label_79f504:
    // 0x79f504: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x79f504u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79f508:
    // 0x79f508: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x79f508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_79f50c:
    // 0x79f50c: 0x2622001c  addiu       $v0, $s1, 0x1C
    ctx->pc = 0x79f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_79f510:
    // 0x79f510: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x79f510u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_79f514:
    // 0x79f514: 0xae350014  sw          $s5, 0x14($s1)
    ctx->pc = 0x79f514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 21));
label_79f518:
    // 0x79f518: 0x50a021  addu        $s4, $v0, $s0
    ctx->pc = 0x79f518u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_79f51c:
    // 0x79f51c: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x79f51cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_79f520:
    // 0x79f520: 0xc1e6460  jal         func_799180
label_79f524:
    if (ctx->pc == 0x79F524u) {
        ctx->pc = 0x79F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F520u;
        // 0x79f524: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F528u;
        goto label_79f528;
    }
    ctx->pc = 0x79F520u;
    SET_GPR_U32(ctx, 31, 0x79F528u);
    ctx->pc = 0x79F524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79F520u;
    // 0x79f524: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x79F520u, 0x79F528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79F528u;
label_79f528:
    // 0x79f528: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79f528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79f52c:
    // 0x79f52c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x79f52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_79f530:
    // 0x79f530: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79f530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79f534:
    // 0x79f534: 0x2442d8c0  addiu       $v0, $v0, -0x2740
    ctx->pc = 0x79f534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957248));
label_79f538:
    // 0x79f538: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79f538u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79f53c:
    // 0x79f53c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79f53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_79f540:
    // 0x79f540: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x79f540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79f544:
    // 0x79f544: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x79f544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_79f548:
    // 0x79f548: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x79f548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79f54c:
    // 0x79f54c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x79f54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79f550:
    // 0x79f550: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79f550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79f554:
    // 0x79f554: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79f554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79f558:
    // 0x79f558: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x79f558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79f55c:
    // 0x79f55c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x79f55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_79f560:
    // 0x79f560: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x79f560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_79f564:
    // 0x79f564: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x79f564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_79f568:
    // 0x79f568: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x79f568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79f56c:
    // 0x79f56c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x79f56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_79f570:
    // 0x79f570: 0xc05420c  jal         func_150830
label_79f574:
    if (ctx->pc == 0x79F574u) {
        ctx->pc = 0x79F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F570u;
        // 0x79f574: 0xe442000c  swc1        $f2, 0xC($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F578u;
        goto label_79f578;
    }
    ctx->pc = 0x79F570u;
    SET_GPR_U32(ctx, 31, 0x79F578u);
    ctx->pc = 0x79F574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79F570u;
    // 0x79f574: 0xe442000c  swc1        $f2, 0xC($v0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150830u, 0x79F570u, 0x79F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79F578u;
label_79f578:
    // 0x79f578: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x79f578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79f57c:
    // 0x79f57c: 0x3c014073  lui         $at, 0x4073
    ctx->pc = 0x79f57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16499 << 16));
label_79f580:
    // 0x79f580: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x79f580u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_79f584:
    // 0x79f584: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79f584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79f588:
    // 0x79f588: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79f588u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_79f58c:
    // 0x79f58c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x79f58cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_79f590:
    // 0x79f590: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x79f590u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_79f594:
    // 0x79f594: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x79f594u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79f598:
    // 0x79f598: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79f598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_79f59c:
    // 0x79f59c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79f59cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79f5a0:
    // 0x79f5a0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79f5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_79f5a4:
    // 0x79f5a4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79f5a8:
    // 0x79f5a8: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79f5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79f5ac:
    // 0x79f5ac: 0x8c4309d0  lw          $v1, 0x9D0($v0)
    ctx->pc = 0x79f5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2512)));
label_79f5b0:
    // 0x79f5b0: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x79f5b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_79f5b4:
    // 0x79f5b4: 0x248509c0  addiu       $a1, $a0, 0x9C0
    ctx->pc = 0x79f5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2496));
label_79f5b8:
    // 0x79f5b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x79f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_79f5bc:
    // 0x79f5bc: 0x8c700344  lw          $s0, 0x344($v1)
    ctx->pc = 0x79f5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 836)));
label_79f5c0:
    // 0x79f5c0: 0xfa400010  sqc2        $vf0, 0x10($s2)
    ctx->pc = 0x79f5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_79f5c4:
    // 0x79f5c4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_79f5c8:
    if (ctx->pc == 0x79F5C8u) {
        ctx->pc = 0x79F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F5C4u;
        // 0x79f5c8: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F5CCu;
        goto label_79f5cc;
    }
    ctx->pc = 0x79F5C4u;
    {
        const bool branch_taken_0x79f5c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F5C4u;
        // 0x79f5c8: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f5c4) {
            ctx->pc = 0x79F5E0u;
            goto label_79f5e0;
        }
    }
    ctx->pc = 0x79F5CCu;
label_79f5cc:
    // 0x79f5cc: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x79f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79f5d0:
    // 0x79f5d0: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x79f5d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_79f5d4:
    // 0x79f5d4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x79f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_79f5d8:
    // 0x79f5d8: 0x60f809  jalr        $v1
label_79f5dc:
    if (ctx->pc == 0x79F5DCu) {
        ctx->pc = 0x79F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F5D8u;
        // 0x79f5dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F5E0u;
        goto label_79f5e0;
    }
    ctx->pc = 0x79F5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79F5E0u);
        ctx->pc = 0x79F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F5D8u;
        // 0x79f5dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79F5D8u, 0x79F5E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79F5E0u;
label_79f5e0:
    // 0x79f5e0: 0x127d0006  beq         $s3, $sp, . + 4 + (0x6 << 2)
label_79f5e4:
    if (ctx->pc == 0x79F5E4u) {
        ctx->pc = 0x79F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F5E0u;
        // 0x79f5e4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F5E8u;
        goto label_79f5e8;
    }
    ctx->pc = 0x79F5E0u;
    {
        const bool branch_taken_0x79f5e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 29));
        ctx->pc = 0x79F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F5E0u;
        // 0x79f5e4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f5e0) {
            ctx->pc = 0x79F5FCu;
            goto label_79f5fc;
        }
    }
    ctx->pc = 0x79F5E8u;
label_79f5e8:
    // 0x79f5e8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x79f5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79f5ec:
    // 0x79f5ec: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x79f5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79f5f0:
    // 0x79f5f0: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x79f5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_79f5f4:
    // 0x79f5f4: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x79f5f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_79f5f8:
    // 0x79f5f8: 0xe6620004  swc1        $f2, 0x4($s3)
    ctx->pc = 0x79f5f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_79f5fc:
    // 0x79f5fc: 0xae920000  sw          $s2, 0x0($s4)
    ctx->pc = 0x79f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
label_79f600:
    // 0x79f600: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x79f600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_79f604:
    // 0x79f604: 0xa2350058  sb          $s5, 0x58($s1)
    ctx->pc = 0x79f604u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 88), (uint8_t)GPR_U32(ctx, 21));
label_79f608:
    // 0x79f608: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x79f608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79f60c:
    // 0x79f60c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x79f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_79f610:
    // 0x79f610: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x79f610u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_79f614:
    // 0x79f614: 0xa2400024  sb          $zero, 0x24($s2)
    ctx->pc = 0x79f614u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 0));
label_79f618:
    // 0x79f618: 0xa240002c  sb          $zero, 0x2C($s2)
    ctx->pc = 0x79f618u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 44), (uint8_t)GPR_U32(ctx, 0));
label_79f61c:
    // 0x79f61c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x79f61cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_79f620:
    // 0x79f620: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x79f620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_79f624:
    // 0x79f624: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x79f624u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_79f628:
    // 0x79f628: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x79f628u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_79f62c:
    // 0x79f62c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x79f62cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79f630:
    // 0x79f630: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x79f630u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79f634:
    // 0x79f634: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79f634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_79f638:
    // 0x79f638: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x79f638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_79f63c:
    // 0x79f63c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x79f63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79f640:
    // 0x79f640: 0x3e00008  jr          $ra
label_79f644:
    if (ctx->pc == 0x79F644u) {
        ctx->pc = 0x79F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F640u;
        // 0x79f644: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79F648u;
        goto label_fallthrough_0x79f640;
    }
    ctx->pc = 0x79F640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F640u;
        // 0x79f644: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79F640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79f640:
    ctx->pc = 0x79F648u;
}
} // namespace gh_r501
