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

// Function: func_0018E128
// Address: 0x18e128 - 0x18e450
void func_0018E128_0x18e128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018E128_0x18e128");
#endif

    switch (ctx->pc) {
        case 0x18e128u: goto label_18e128;
        case 0x18e12cu: goto label_18e12c;
        case 0x18e130u: goto label_18e130;
        case 0x18e134u: goto label_18e134;
        case 0x18e138u: goto label_18e138;
        case 0x18e13cu: goto label_18e13c;
        case 0x18e140u: goto label_18e140;
        case 0x18e144u: goto label_18e144;
        case 0x18e148u: goto label_18e148;
        case 0x18e14cu: goto label_18e14c;
        case 0x18e150u: goto label_18e150;
        case 0x18e154u: goto label_18e154;
        case 0x18e158u: goto label_18e158;
        case 0x18e15cu: goto label_18e15c;
        case 0x18e160u: goto label_18e160;
        case 0x18e164u: goto label_18e164;
        case 0x18e168u: goto label_18e168;
        case 0x18e16cu: goto label_18e16c;
        case 0x18e170u: goto label_18e170;
        case 0x18e174u: goto label_18e174;
        case 0x18e178u: goto label_18e178;
        case 0x18e17cu: goto label_18e17c;
        case 0x18e180u: goto label_18e180;
        case 0x18e184u: goto label_18e184;
        case 0x18e188u: goto label_18e188;
        case 0x18e18cu: goto label_18e18c;
        case 0x18e190u: goto label_18e190;
        case 0x18e194u: goto label_18e194;
        case 0x18e198u: goto label_18e198;
        case 0x18e19cu: goto label_18e19c;
        case 0x18e1a0u: goto label_18e1a0;
        case 0x18e1a4u: goto label_18e1a4;
        case 0x18e1a8u: goto label_18e1a8;
        case 0x18e1acu: goto label_18e1ac;
        case 0x18e1b0u: goto label_18e1b0;
        case 0x18e1b4u: goto label_18e1b4;
        case 0x18e1b8u: goto label_18e1b8;
        case 0x18e1bcu: goto label_18e1bc;
        case 0x18e1c0u: goto label_18e1c0;
        case 0x18e1c4u: goto label_18e1c4;
        case 0x18e1c8u: goto label_18e1c8;
        case 0x18e1ccu: goto label_18e1cc;
        case 0x18e1d0u: goto label_18e1d0;
        case 0x18e1d4u: goto label_18e1d4;
        case 0x18e1d8u: goto label_18e1d8;
        case 0x18e1dcu: goto label_18e1dc;
        case 0x18e1e0u: goto label_18e1e0;
        case 0x18e1e4u: goto label_18e1e4;
        case 0x18e1e8u: goto label_18e1e8;
        case 0x18e1ecu: goto label_18e1ec;
        case 0x18e1f0u: goto label_18e1f0;
        case 0x18e1f4u: goto label_18e1f4;
        case 0x18e1f8u: goto label_18e1f8;
        case 0x18e1fcu: goto label_18e1fc;
        case 0x18e200u: goto label_18e200;
        case 0x18e204u: goto label_18e204;
        case 0x18e208u: goto label_18e208;
        case 0x18e20cu: goto label_18e20c;
        case 0x18e210u: goto label_18e210;
        case 0x18e214u: goto label_18e214;
        case 0x18e218u: goto label_18e218;
        case 0x18e21cu: goto label_18e21c;
        case 0x18e220u: goto label_18e220;
        case 0x18e224u: goto label_18e224;
        case 0x18e228u: goto label_18e228;
        case 0x18e22cu: goto label_18e22c;
        case 0x18e230u: goto label_18e230;
        case 0x18e234u: goto label_18e234;
        case 0x18e238u: goto label_18e238;
        case 0x18e23cu: goto label_18e23c;
        case 0x18e240u: goto label_18e240;
        case 0x18e244u: goto label_18e244;
        case 0x18e248u: goto label_18e248;
        case 0x18e24cu: goto label_18e24c;
        case 0x18e250u: goto label_18e250;
        case 0x18e254u: goto label_18e254;
        case 0x18e258u: goto label_18e258;
        case 0x18e25cu: goto label_18e25c;
        case 0x18e260u: goto label_18e260;
        case 0x18e264u: goto label_18e264;
        case 0x18e268u: goto label_18e268;
        case 0x18e26cu: goto label_18e26c;
        case 0x18e270u: goto label_18e270;
        case 0x18e274u: goto label_18e274;
        case 0x18e278u: goto label_18e278;
        case 0x18e27cu: goto label_18e27c;
        case 0x18e280u: goto label_18e280;
        case 0x18e284u: goto label_18e284;
        case 0x18e288u: goto label_18e288;
        case 0x18e28cu: goto label_18e28c;
        case 0x18e290u: goto label_18e290;
        case 0x18e294u: goto label_18e294;
        case 0x18e298u: goto label_18e298;
        case 0x18e29cu: goto label_18e29c;
        case 0x18e2a0u: goto label_18e2a0;
        case 0x18e2a4u: goto label_18e2a4;
        case 0x18e2a8u: goto label_18e2a8;
        case 0x18e2acu: goto label_18e2ac;
        case 0x18e2b0u: goto label_18e2b0;
        case 0x18e2b4u: goto label_18e2b4;
        case 0x18e2b8u: goto label_18e2b8;
        case 0x18e2bcu: goto label_18e2bc;
        case 0x18e2c0u: goto label_18e2c0;
        case 0x18e2c4u: goto label_18e2c4;
        case 0x18e2c8u: goto label_18e2c8;
        case 0x18e2ccu: goto label_18e2cc;
        case 0x18e2d0u: goto label_18e2d0;
        case 0x18e2d4u: goto label_18e2d4;
        case 0x18e2d8u: goto label_18e2d8;
        case 0x18e2dcu: goto label_18e2dc;
        case 0x18e2e0u: goto label_18e2e0;
        case 0x18e2e4u: goto label_18e2e4;
        case 0x18e2e8u: goto label_18e2e8;
        case 0x18e2ecu: goto label_18e2ec;
        case 0x18e2f0u: goto label_18e2f0;
        case 0x18e2f4u: goto label_18e2f4;
        case 0x18e2f8u: goto label_18e2f8;
        case 0x18e2fcu: goto label_18e2fc;
        case 0x18e300u: goto label_18e300;
        case 0x18e304u: goto label_18e304;
        case 0x18e308u: goto label_18e308;
        case 0x18e30cu: goto label_18e30c;
        case 0x18e310u: goto label_18e310;
        case 0x18e314u: goto label_18e314;
        case 0x18e318u: goto label_18e318;
        case 0x18e31cu: goto label_18e31c;
        case 0x18e320u: goto label_18e320;
        case 0x18e324u: goto label_18e324;
        case 0x18e328u: goto label_18e328;
        case 0x18e32cu: goto label_18e32c;
        case 0x18e330u: goto label_18e330;
        case 0x18e334u: goto label_18e334;
        case 0x18e338u: goto label_18e338;
        case 0x18e33cu: goto label_18e33c;
        case 0x18e340u: goto label_18e340;
        case 0x18e344u: goto label_18e344;
        case 0x18e348u: goto label_18e348;
        case 0x18e34cu: goto label_18e34c;
        case 0x18e350u: goto label_18e350;
        case 0x18e354u: goto label_18e354;
        case 0x18e358u: goto label_18e358;
        case 0x18e35cu: goto label_18e35c;
        case 0x18e360u: goto label_18e360;
        case 0x18e364u: goto label_18e364;
        case 0x18e368u: goto label_18e368;
        case 0x18e36cu: goto label_18e36c;
        case 0x18e370u: goto label_18e370;
        case 0x18e374u: goto label_18e374;
        case 0x18e378u: goto label_18e378;
        case 0x18e37cu: goto label_18e37c;
        case 0x18e380u: goto label_18e380;
        case 0x18e384u: goto label_18e384;
        case 0x18e388u: goto label_18e388;
        case 0x18e38cu: goto label_18e38c;
        case 0x18e390u: goto label_18e390;
        case 0x18e394u: goto label_18e394;
        case 0x18e398u: goto label_18e398;
        case 0x18e39cu: goto label_18e39c;
        case 0x18e3a0u: goto label_18e3a0;
        case 0x18e3a4u: goto label_18e3a4;
        case 0x18e3a8u: goto label_18e3a8;
        case 0x18e3acu: goto label_18e3ac;
        case 0x18e3b0u: goto label_18e3b0;
        case 0x18e3b4u: goto label_18e3b4;
        case 0x18e3b8u: goto label_18e3b8;
        case 0x18e3bcu: goto label_18e3bc;
        case 0x18e3c0u: goto label_18e3c0;
        case 0x18e3c4u: goto label_18e3c4;
        case 0x18e3c8u: goto label_18e3c8;
        case 0x18e3ccu: goto label_18e3cc;
        case 0x18e3d0u: goto label_18e3d0;
        case 0x18e3d4u: goto label_18e3d4;
        case 0x18e3d8u: goto label_18e3d8;
        case 0x18e3dcu: goto label_18e3dc;
        case 0x18e3e0u: goto label_18e3e0;
        case 0x18e3e4u: goto label_18e3e4;
        case 0x18e3e8u: goto label_18e3e8;
        case 0x18e3ecu: goto label_18e3ec;
        case 0x18e3f0u: goto label_18e3f0;
        case 0x18e3f4u: goto label_18e3f4;
        case 0x18e3f8u: goto label_18e3f8;
        case 0x18e3fcu: goto label_18e3fc;
        case 0x18e400u: goto label_18e400;
        case 0x18e404u: goto label_18e404;
        case 0x18e408u: goto label_18e408;
        case 0x18e40cu: goto label_18e40c;
        case 0x18e410u: goto label_18e410;
        case 0x18e414u: goto label_18e414;
        case 0x18e418u: goto label_18e418;
        case 0x18e41cu: goto label_18e41c;
        case 0x18e420u: goto label_18e420;
        case 0x18e424u: goto label_18e424;
        case 0x18e428u: goto label_18e428;
        case 0x18e42cu: goto label_18e42c;
        case 0x18e430u: goto label_18e430;
        case 0x18e434u: goto label_18e434;
        case 0x18e438u: goto label_18e438;
        case 0x18e43cu: goto label_18e43c;
        case 0x18e440u: goto label_18e440;
        case 0x18e444u: goto label_18e444;
        case 0x18e448u: goto label_18e448;
        case 0x18e44cu: goto label_18e44c;
        default: break;
    }

    ctx->pc = 0x18e128u;

label_18e128:
    // 0x18e128: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x18e128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_18e12c:
    // 0x18e12c: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x18e12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_18e130:
    // 0x18e130: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x18e130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_18e134:
    // 0x18e134: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18e134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e138:
    // 0x18e138: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x18e138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_18e13c:
    // 0x18e13c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18e13cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18e140:
    // 0x18e140: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x18e140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_18e144:
    // 0x18e144: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x18e144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_18e148:
    // 0x18e148: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x18e148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_18e14c:
    // 0x18e14c: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x18e14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_18e150:
    // 0x18e150: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x18e150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_18e154:
    // 0x18e154: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18e154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_18e158:
    // 0x18e158: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18e158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_18e15c:
    // 0x18e15c: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x18e15cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_18e160:
    // 0x18e160: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x18e160u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_18e164:
    // 0x18e164: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x18e164u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_18e168:
    // 0x18e168: 0x10700036  beq         $v1, $s0, . + 4 + (0x36 << 2)
label_18e16c:
    if (ctx->pc == 0x18E16Cu) {
        ctx->pc = 0x18E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E168u;
        // 0x18e16c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E170u;
        goto label_18e170;
    }
    ctx->pc = 0x18E168u;
    {
        const bool branch_taken_0x18e168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x18E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E168u;
        // 0x18e16c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e168) {
            ctx->pc = 0x18E244u;
            goto label_18e244;
        }
    }
    ctx->pc = 0x18E170u;
label_18e170:
    // 0x18e170: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18e174:
    if (ctx->pc == 0x18E174u) {
        ctx->pc = 0x18E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E170u;
        // 0x18e174: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E178u;
        goto label_18e178;
    }
    ctx->pc = 0x18E170u;
    {
        const bool branch_taken_0x18e170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E170u;
        // 0x18e174: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e170) {
            ctx->pc = 0x18E188u;
            goto label_18e188;
        }
    }
    ctx->pc = 0x18E178u;
label_18e178:
    // 0x18e178: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_18e17c:
    if (ctx->pc == 0x18E17Cu) {
        ctx->pc = 0x18E180u;
        goto label_18e180;
    }
    ctx->pc = 0x18E178u;
    {
        const bool branch_taken_0x18e178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e178) {
            ctx->pc = 0x18E1A0u;
            goto label_18e1a0;
        }
    }
    ctx->pc = 0x18E180u;
label_18e180:
    // 0x18e180: 0x1000004f  b           . + 4 + (0x4F << 2)
label_18e184:
    if (ctx->pc == 0x18E184u) {
        ctx->pc = 0x18E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E180u;
        // 0x18e184: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E188u;
        goto label_18e188;
    }
    ctx->pc = 0x18E180u;
    {
        const bool branch_taken_0x18e180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E180u;
        // 0x18e184: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e180) {
            ctx->pc = 0x18E2C0u;
            goto label_18e2c0;
        }
    }
    ctx->pc = 0x18E188u;
label_18e188:
    // 0x18e188: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_18e18c:
    if (ctx->pc == 0x18E18Cu) {
        ctx->pc = 0x18E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E188u;
        // 0x18e18c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E190u;
        goto label_18e190;
    }
    ctx->pc = 0x18E188u;
    {
        const bool branch_taken_0x18e188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E188u;
        // 0x18e18c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e188) {
            ctx->pc = 0x18E26Cu;
            goto label_18e26c;
        }
    }
    ctx->pc = 0x18E190u;
label_18e190:
    // 0x18e190: 0x50620047  beql        $v1, $v0, . + 4 + (0x47 << 2)
label_18e194:
    if (ctx->pc == 0x18E194u) {
        ctx->pc = 0x18E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E190u;
        // 0x18e194: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E198u;
        goto label_18e198;
    }
    ctx->pc = 0x18E190u;
    {
        const bool branch_taken_0x18e190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e190) {
            ctx->pc = 0x18E194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E190u;
            // 0x18e194: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E2B0u;
            goto label_18e2b0;
        }
    }
    ctx->pc = 0x18E198u;
label_18e198:
    // 0x18e198: 0x10000049  b           . + 4 + (0x49 << 2)
label_18e19c:
    if (ctx->pc == 0x18E19Cu) {
        ctx->pc = 0x18E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E198u;
        // 0x18e19c: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E1A0u;
        goto label_18e1a0;
    }
    ctx->pc = 0x18E198u;
    {
        const bool branch_taken_0x18e198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E198u;
        // 0x18e19c: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e198) {
            ctx->pc = 0x18E2C0u;
            goto label_18e2c0;
        }
    }
    ctx->pc = 0x18E1A0u;
label_18e1a0:
    // 0x18e1a0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x18e1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_18e1a4:
    // 0x18e1a4: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x18e1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_18e1a8:
    // 0x18e1a8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x18e1a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_18e1ac:
    // 0x18e1ac: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x18e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_18e1b0:
    // 0x18e1b0: 0x40f809  jalr        $v0
label_18e1b4:
    if (ctx->pc == 0x18E1B4u) {
        ctx->pc = 0x18E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1B0u;
        // 0x18e1b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E1B8u;
        goto label_18e1b8;
    }
    ctx->pc = 0x18E1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E1B8u);
        ctx->pc = 0x18E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1B0u;
        // 0x18e1b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E1B0u, 0x18E1B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E1B8u;
label_18e1b8:
    // 0x18e1b8: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_18e1bc:
    if (ctx->pc == 0x18E1BCu) {
        ctx->pc = 0x18E1C0u;
        goto label_18e1c0;
    }
    ctx->pc = 0x18E1B8u;
    {
        const bool branch_taken_0x18e1b8 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e1b8) {
            ctx->pc = 0x18E1D8u;
            goto label_18e1d8;
        }
    }
    ctx->pc = 0x18E1C0u;
label_18e1c0:
    // 0x18e1c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x18e1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e1c4:
    // 0x18e1c4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x18e1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18e1c8:
    // 0x18e1c8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x18e1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e1cc:
    // 0x18e1cc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x18e1ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_18e1d0:
    // 0x18e1d0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18e1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e1d4:
    // 0x18e1d4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x18e1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_18e1d8:
    // 0x18e1d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18e1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18e1dc:
    // 0x18e1dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18e1dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18e1e0:
    // 0x18e1e0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x18e1e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18e1e4:
    // 0x18e1e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18e1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e1e8:
    // 0x18e1e8: 0x240500cc  addiu       $a1, $zero, 0xCC
    ctx->pc = 0x18e1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_18e1ec:
    // 0x18e1ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18e1ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e1f0:
    // 0x18e1f0: 0xc0c1a0e  jal         func_306838
label_18e1f4:
    if (ctx->pc == 0x18E1F4u) {
        ctx->pc = 0x18E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1F0u;
        // 0x18e1f4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E1F8u;
        goto label_18e1f8;
    }
    ctx->pc = 0x18E1F0u;
    SET_GPR_U32(ctx, 31, 0x18E1F8u);
    ctx->pc = 0x18E1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E1F0u;
    // 0x18e1f4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x18E1F0u, 0x18E1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E1F8u;
label_18e1f8:
    // 0x18e1f8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x18e1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_18e1fc:
    // 0x18e1fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18e1fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e200:
    // 0x18e200: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18e200u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e204:
    // 0x18e204: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18e204u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e208:
    // 0x18e208: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18e208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e20c:
    // 0x18e20c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x18e20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_18e210:
    // 0x18e210: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x18e210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18e214:
    // 0x18e214: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18e214u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e218:
    // 0x18e218: 0xc0b2e92  jal         func_2CBA48
label_18e21c:
    if (ctx->pc == 0x18E21Cu) {
        ctx->pc = 0x18E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E218u;
        // 0x18e21c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E220u;
        goto label_18e220;
    }
    ctx->pc = 0x18E218u;
    SET_GPR_U32(ctx, 31, 0x18E220u);
    ctx->pc = 0x18E21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E218u;
    // 0x18e21c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x18E218u, 0x18E220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E220u;
label_18e220:
    // 0x18e220: 0xc0639ac  jal         func_18E6B0
label_18e224:
    if (ctx->pc == 0x18E224u) {
        ctx->pc = 0x18E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E220u;
        // 0x18e224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E228u;
        goto label_18e228;
    }
    ctx->pc = 0x18E220u;
    SET_GPR_U32(ctx, 31, 0x18E228u);
    ctx->pc = 0x18E224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E220u;
    // 0x18e224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E6B0u, 0x18E220u, 0x18E228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E228u;
label_18e228:
    // 0x18e228: 0xc06de42  jal         func_1B7908
label_18e22c:
    if (ctx->pc == 0x18E22Cu) {
        ctx->pc = 0x18E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E228u;
        // 0x18e22c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E230u;
        goto label_18e230;
    }
    ctx->pc = 0x18E228u;
    SET_GPR_U32(ctx, 31, 0x18E230u);
    ctx->pc = 0x18E22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E228u;
    // 0x18e22c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x18E228u, 0x18E230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E230u;
label_18e230:
    // 0x18e230: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x18e230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_18e234:
    // 0x18e234: 0xa23002f5  sb          $s0, 0x2F5($s1)
    ctx->pc = 0x18e234u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 16));
label_18e238:
    // 0x18e238: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x18e238u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_18e23c:
    // 0x18e23c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x18e23cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_18e240:
    // 0x18e240: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x18e240u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_18e244:
    // 0x18e244: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x18e244u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_18e248:
    // 0x18e248: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18e248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18e24c:
    // 0x18e24c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x18e24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18e250:
    // 0x18e250: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_18e254:
    if (ctx->pc == 0x18E254u) {
        ctx->pc = 0x18E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E250u;
        // 0x18e254: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E258u;
        goto label_18e258;
    }
    ctx->pc = 0x18E250u;
    {
        const bool branch_taken_0x18e250 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x18E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E250u;
        // 0x18e254: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e250) {
            ctx->pc = 0x18E2BCu;
            goto label_18e2bc;
        }
    }
    ctx->pc = 0x18E258u;
label_18e258:
    // 0x18e258: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18e258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_18e25c:
    // 0x18e25c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e260:
    // 0x18e260: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x18e260u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_18e264:
    // 0x18e264: 0x10000013  b           . + 4 + (0x13 << 2)
label_18e268:
    if (ctx->pc == 0x18E268u) {
        ctx->pc = 0x18E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E264u;
        // 0x18e268: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E26Cu;
        goto label_18e26c;
    }
    ctx->pc = 0x18E264u;
    {
        const bool branch_taken_0x18e264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E264u;
        // 0x18e268: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e264) {
            ctx->pc = 0x18E2B4u;
            goto label_18e2b4;
        }
    }
    ctx->pc = 0x18E26Cu;
label_18e26c:
    // 0x18e26c: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x18e26cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_18e270:
    // 0x18e270: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x18e270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_18e274:
    // 0x18e274: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18e274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18e278:
    // 0x18e278: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18e278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18e27c:
    // 0x18e27c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x18e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18e280:
    // 0x18e280: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x18e280u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_18e284:
    // 0x18e284: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x18e284u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_18e288:
    // 0x18e288: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18e288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e28c:
    // 0x18e28c: 0x0  nop
    ctx->pc = 0x18e28cu;
    // NOP
label_18e290:
    // 0x18e290: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18e290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18e294:
    // 0x18e294: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18e294u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_18e298:
    // 0x18e298: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_18e29c:
    if (ctx->pc == 0x18E29Cu) {
        ctx->pc = 0x18E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E298u;
        // 0x18e29c: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2A0u;
        goto label_18e2a0;
    }
    ctx->pc = 0x18E298u;
    {
        const bool branch_taken_0x18e298 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x18E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E298u;
        // 0x18e29c: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e298) {
            ctx->pc = 0x18E2BCu;
            goto label_18e2bc;
        }
    }
    ctx->pc = 0x18E2A0u;
label_18e2a0:
    // 0x18e2a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18e2a4:
    // 0x18e2a4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x18e2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_18e2a8:
    // 0x18e2a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_18e2ac:
    if (ctx->pc == 0x18E2ACu) {
        ctx->pc = 0x18E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2A8u;
        // 0x18e2ac: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2B0u;
        goto label_18e2b0;
    }
    ctx->pc = 0x18E2A8u;
    {
        const bool branch_taken_0x18e2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2A8u;
        // 0x18e2ac: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2a8) {
            ctx->pc = 0x18E2B8u;
            goto label_18e2b8;
        }
    }
    ctx->pc = 0x18E2B0u;
label_18e2b0:
    // 0x18e2b0: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x18e2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_18e2b4:
    // 0x18e2b4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x18e2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_18e2b8:
    // 0x18e2b8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x18e2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_18e2bc:
    // 0x18e2bc: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18e2bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_18e2c0:
    // 0x18e2c0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x18e2c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e2c4:
    // 0x18e2c4: 0x10560053  beq         $v0, $s6, . + 4 + (0x53 << 2)
label_18e2c8:
    if (ctx->pc == 0x18E2C8u) {
        ctx->pc = 0x18E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2C4u;
        // 0x18e2c8: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2CCu;
        goto label_18e2cc;
    }
    ctx->pc = 0x18E2C4u;
    {
        const bool branch_taken_0x18e2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x18E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2C4u;
        // 0x18e2c8: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2c4) {
            ctx->pc = 0x18E414u;
            goto label_18e414;
        }
    }
    ctx->pc = 0x18E2CCu;
label_18e2cc:
    // 0x18e2cc: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x18e2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_18e2d0:
    // 0x18e2d0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x18e2d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_18e2d4:
    // 0x18e2d4: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x18e2d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_18e2d8:
    // 0x18e2d8: 0x26350700  addiu       $s5, $s1, 0x700
    ctx->pc = 0x18e2d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
label_18e2dc:
    // 0x18e2dc: 0x263006d0  addiu       $s0, $s1, 0x6D0
    ctx->pc = 0x18e2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
label_18e2e0:
    // 0x18e2e0: 0x263406f0  addiu       $s4, $s1, 0x6F0
    ctx->pc = 0x18e2e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_18e2e4:
    // 0x18e2e4: 0x263306e0  addiu       $s3, $s1, 0x6E0
    ctx->pc = 0x18e2e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1760));
label_18e2e8:
    // 0x18e2e8: 0x263206c0  addiu       $s2, $s1, 0x6C0
    ctx->pc = 0x18e2e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
label_18e2ec:
    // 0x18e2ec: 0x0  nop
    ctx->pc = 0x18e2ecu;
    // NOP
label_18e2f0:
    // 0x18e2f0: 0xc05ce40  jal         func_173900
label_18e2f4:
    if (ctx->pc == 0x18E2F4u) {
        ctx->pc = 0x18E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2F0u;
        // 0x18e2f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2F8u;
        goto label_18e2f8;
    }
    ctx->pc = 0x18E2F0u;
    SET_GPR_U32(ctx, 31, 0x18E2F8u);
    ctx->pc = 0x18E2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E2F0u;
    // 0x18e2f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x18E2F0u, 0x18E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E2F8u;
label_18e2f8:
    // 0x18e2f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e2fc:
    // 0x18e2fc: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_18e300:
    if (ctx->pc == 0x18E300u) {
        ctx->pc = 0x18E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2FCu;
        // 0x18e300: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E304u;
        goto label_18e304;
    }
    ctx->pc = 0x18E2FCu;
    {
        const bool branch_taken_0x18e2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18e2fc) {
            ctx->pc = 0x18E300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E2FCu;
            // 0x18e300: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E3ECu;
            goto label_18e3ec;
        }
    }
    ctx->pc = 0x18E304u;
label_18e304:
    // 0x18e304: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18e304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_18e308:
    // 0x18e308: 0xc0a4bd4  jal         func_292F50
label_18e30c:
    if (ctx->pc == 0x18E30Cu) {
        ctx->pc = 0x18E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E308u;
        // 0x18e30c: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E310u;
        goto label_18e310;
    }
    ctx->pc = 0x18E308u;
    SET_GPR_U32(ctx, 31, 0x18E310u);
    ctx->pc = 0x18E30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E308u;
    // 0x18e30c: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x18E308u, 0x18E310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E310u;
label_18e310:
    // 0x18e310: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x18e310u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_18e314:
    // 0x18e314: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x18e314u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_18e318:
    // 0x18e318: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18e318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18e31c:
    // 0x18e31c: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18e31cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18e320:
    // 0x18e320: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x18e320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_18e324:
    // 0x18e324: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18e324u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_18e328:
    // 0x18e328: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18e328u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18e32c:
    // 0x18e32c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18e32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18e330:
    // 0x18e330: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x18e330u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_18e334:
    // 0x18e334: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18e334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_18e338:
    // 0x18e338: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x18e338u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_18e33c:
    // 0x18e33c: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x18e33cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_18e340:
    // 0x18e340: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18e340u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18e344:
    // 0x18e344: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x18e344u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_18e348:
    // 0x18e348: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x18e348u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_18e34c:
    // 0x18e34c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18e34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18e350:
    // 0x18e350: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18e350u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18e354:
    // 0x18e354: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x18e354u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_18e358:
    // 0x18e358: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18e358u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_18e35c:
    // 0x18e35c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18e35cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18e360:
    // 0x18e360: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18e360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18e364:
    // 0x18e364: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x18e364u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_18e368:
    // 0x18e368: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18e368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_18e36c:
    // 0x18e36c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18e36cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_18e370:
    // 0x18e370: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x18e370u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_18e374:
    // 0x18e374: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x18e374u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18e378:
    // 0x18e378: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18e378u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_18e37c:
    // 0x18e37c: 0xc07df68  jal         func_1F7DA0
label_18e380:
    if (ctx->pc == 0x18E380u) {
        ctx->pc = 0x18E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E37Cu;
        // 0x18e380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E384u;
        goto label_18e384;
    }
    ctx->pc = 0x18E37Cu;
    SET_GPR_U32(ctx, 31, 0x18E384u);
    ctx->pc = 0x18E380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E37Cu;
    // 0x18e380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x18E37Cu, 0x18E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E384u;
label_18e384:
    // 0x18e384: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18e384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18e388:
    // 0x18e388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18e388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e38c:
    // 0x18e38c: 0xc051dca  jal         func_147728
label_18e390:
    if (ctx->pc == 0x18E390u) {
        ctx->pc = 0x18E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E38Cu;
        // 0x18e390: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E394u;
        goto label_18e394;
    }
    ctx->pc = 0x18E38Cu;
    SET_GPR_U32(ctx, 31, 0x18E394u);
    ctx->pc = 0x18E390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E38Cu;
    // 0x18e390: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x18E38Cu, 0x18E394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E394u;
label_18e394:
    // 0x18e394: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18e394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18e398:
    // 0x18e398: 0xc051f10  jal         func_147C40
label_18e39c:
    if (ctx->pc == 0x18E39Cu) {
        ctx->pc = 0x18E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E398u;
        // 0x18e39c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E3A0u;
        goto label_18e3a0;
    }
    ctx->pc = 0x18E398u;
    SET_GPR_U32(ctx, 31, 0x18E3A0u);
    ctx->pc = 0x18E39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E398u;
    // 0x18e39c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x18E398u, 0x18E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E3A0u;
label_18e3a0:
    // 0x18e3a0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18e3a4:
    // 0x18e3a4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x18e3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18e3a8:
    // 0x18e3a8: 0xc051efe  jal         func_147BF8
label_18e3ac:
    if (ctx->pc == 0x18E3ACu) {
        ctx->pc = 0x18E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3A8u;
        // 0x18e3ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E3B0u;
        goto label_18e3b0;
    }
    ctx->pc = 0x18E3A8u;
    SET_GPR_U32(ctx, 31, 0x18E3B0u);
    ctx->pc = 0x18E3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E3A8u;
    // 0x18e3ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x18E3A8u, 0x18E3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E3B0u;
label_18e3b0:
    // 0x18e3b0: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x18e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_18e3b4:
    // 0x18e3b4: 0xc051d4a  jal         func_147528
label_18e3b8:
    if (ctx->pc == 0x18E3B8u) {
        ctx->pc = 0x18E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3B4u;
        // 0x18e3b8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E3BCu;
        goto label_18e3bc;
    }
    ctx->pc = 0x18E3B4u;
    SET_GPR_U32(ctx, 31, 0x18E3BCu);
    ctx->pc = 0x18E3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E3B4u;
    // 0x18e3b8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x18E3B4u, 0x18E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E3BCu;
label_18e3bc:
    // 0x18e3bc: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x18e3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e3c0:
    // 0x18e3c0: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x18e3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e3c4:
    // 0x18e3c4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x18e3c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_18e3c8:
    // 0x18e3c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18e3c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18e3cc:
    // 0x18e3cc: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x18e3ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e3d0:
    // 0x18e3d0: 0x0  nop
    ctx->pc = 0x18e3d0u;
    // NOP
label_18e3d4:
    // 0x18e3d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_18e3d8:
    if (ctx->pc == 0x18E3D8u) {
        ctx->pc = 0x18E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3D4u;
        // 0x18e3d8: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E3DCu;
        goto label_18e3dc;
    }
    ctx->pc = 0x18E3D4u;
    {
        const bool branch_taken_0x18e3d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3D4u;
        // 0x18e3d8: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3d4) {
            ctx->pc = 0x18E3E8u;
            goto label_18e3e8;
        }
    }
    ctx->pc = 0x18E3DCu;
label_18e3dc:
    // 0x18e3dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18e3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18e3e0:
    // 0x18e3e0: 0xc05bd90  jal         func_16F640
label_18e3e4:
    if (ctx->pc == 0x18E3E4u) {
        ctx->pc = 0x18E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3E0u;
        // 0x18e3e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E3E8u;
        goto label_18e3e8;
    }
    ctx->pc = 0x18E3E0u;
    SET_GPR_U32(ctx, 31, 0x18E3E8u);
    ctx->pc = 0x18E3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E3E0u;
    // 0x18e3e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x18E3E0u, 0x18E3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E3E8u;
label_18e3e8:
    // 0x18e3e8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x18e3e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_18e3ec:
    // 0x18e3ec: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x18e3ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_18e3f0:
    // 0x18e3f0: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x18e3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_18e3f4:
    // 0x18e3f4: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x18e3f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_18e3f8:
    // 0x18e3f8: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x18e3f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_18e3fc:
    // 0x18e3fc: 0x2ac20006  slti        $v0, $s6, 0x6
    ctx->pc = 0x18e3fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
label_18e400:
    // 0x18e400: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18e404:
    if (ctx->pc == 0x18E404u) {
        ctx->pc = 0x18E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E400u;
        // 0x18e404: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E408u;
        goto label_18e408;
    }
    ctx->pc = 0x18E400u;
    {
        const bool branch_taken_0x18e400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E400u;
        // 0x18e404: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e400) {
            ctx->pc = 0x18E414u;
            goto label_18e414;
        }
    }
    ctx->pc = 0x18E408u;
label_18e408:
    // 0x18e408: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18e408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_18e40c:
    // 0x18e40c: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_18e410:
    if (ctx->pc == 0x18E410u) {
        ctx->pc = 0x18E414u;
        goto label_18e414;
    }
    ctx->pc = 0x18E40Cu;
    {
        const bool branch_taken_0x18e40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x18e40c) {
            ctx->pc = 0x18E2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e2f0;
        }
    }
    ctx->pc = 0x18E414u;
label_18e414:
    // 0x18e414: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x18e414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_18e418:
    // 0x18e418: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x18e418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_18e41c:
    // 0x18e41c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x18e41cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_18e420:
    // 0x18e420: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x18e420u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_18e424:
    // 0x18e424: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x18e424u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_18e428:
    // 0x18e428: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x18e428u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_18e42c:
    // 0x18e42c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x18e42cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_18e430:
    // 0x18e430: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x18e430u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_18e434:
    // 0x18e434: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x18e434u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18e438:
    // 0x18e438: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18e438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_18e43c:
    // 0x18e43c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x18e43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_18e440:
    // 0x18e440: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x18e440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18e444:
    // 0x18e444: 0x3e00008  jr          $ra
label_18e448:
    if (ctx->pc == 0x18E448u) {
        ctx->pc = 0x18E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E444u;
        // 0x18e448: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E44Cu;
        goto label_18e44c;
    }
    ctx->pc = 0x18E444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E444u;
        // 0x18e448: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E44Cu;
label_18e44c:
    // 0x18e44c: 0x0  nop
    ctx->pc = 0x18e44cu;
    // NOP
    ctx->pc = 0x18e450u;
}
