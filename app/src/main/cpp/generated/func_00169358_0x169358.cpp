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

// Function: func_00169358
// Address: 0x169358 - 0x169df8
void func_00169358_0x169358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00169358_0x169358");
#endif

    switch (ctx->pc) {
        case 0x169500u: goto label_169500;
        case 0x169588u: goto label_169588;
        case 0x1695a0u: goto label_1695a0;
        case 0x1695acu: goto label_1695ac;
        case 0x1695d0u: goto label_1695d0;
        case 0x16970cu: goto label_16970c;
        case 0x169758u: goto label_169758;
        case 0x169808u: goto label_169808;
        case 0x169844u: goto label_169844;
        case 0x169860u: goto label_169860;
        case 0x1698a8u: goto label_1698a8;
        case 0x1698c0u: goto label_1698c0;
        case 0x1698e0u: goto label_1698e0;
        case 0x169970u: goto label_169970;
        case 0x169988u: goto label_169988;
        case 0x1699c0u: goto label_1699c0;
        case 0x1699d8u: goto label_1699d8;
        case 0x169a30u: goto label_169a30;
        case 0x169ae8u: goto label_169ae8;
        case 0x169b00u: goto label_169b00;
        case 0x169b10u: goto label_169b10;
        case 0x169b34u: goto label_169b34;
        case 0x169b50u: goto label_169b50;
        case 0x169b6cu: goto label_169b6c;
        case 0x169cfcu: goto label_169cfc;
        case 0x169d38u: goto label_169d38;
        case 0x169d64u: goto label_169d64;
        case 0x169d70u: goto label_169d70;
        case 0x169d84u: goto label_169d84;
        case 0x169d9cu: goto label_169d9c;
        case 0x169dc4u: goto label_169dc4;
        default: break;
    }

    ctx->pc = 0x169358u;

    // 0x169358: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x169358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x16935c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16935cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x169360: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x169360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169364: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x169364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x169368: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x169368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x16936c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16936cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169370: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x169370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x169374: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x169374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x169378: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x169378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x16937c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x16937cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x169380: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x169380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x169384: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x169384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x169388: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x169388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x16938c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16938cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x169390: 0x8e6301d8  lw          $v1, 0x1D8($s3)
    ctx->pc = 0x169390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 472)));
    // 0x169394: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x169394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x169398: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x169398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x16939c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x16939cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1693a0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1693a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1693a4: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1693A4u;
    {
        const bool branch_taken_0x1693a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1693A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693A4u;
        // 0x1693a8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1693a4) {
            ctx->pc = 0x1693C4u;
            goto label_1693c4;
        }
    }
    ctx->pc = 0x1693ACu;
    // 0x1693ac: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1693acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1693b0: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x1693b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x1693b4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1693b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1693b8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1693b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1693bc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1693bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1693c0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1693c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1693c4:
    // 0x1693c4: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x1693c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x1693c8: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x1693c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
    // 0x1693cc: 0x8ca27a80  lw          $v0, 0x7A80($a1)
    ctx->pc = 0x1693ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x1693d0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1693d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1693d4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1693d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1693d8: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x1693d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x1693dc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1693dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1693e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1693e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1693e4: 0x3c04ffdf  lui         $a0, 0xFFDF
    ctx->pc = 0x1693e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65503 << 16));
    // 0x1693e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1693e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1693ec: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1693ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1693f0: 0x3c07f7ff  lui         $a3, 0xF7FF
    ctx->pc = 0x1693f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63487 << 16));
    // 0x1693f4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1693f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1693f8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1693f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1693fc: 0xaca27a80  sw          $v0, 0x7A80($a1)
    ctx->pc = 0x1693fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 31360), GPR_U32(ctx, 2));
    // 0x169400: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x169400u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169404: 0x26620260  addiu       $v0, $s3, 0x260
    ctx->pc = 0x169404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 608));
    // 0x169408: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x169408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x16940c: 0x8e6300b8  lw          $v1, 0xB8($s3)
    ctx->pc = 0x16940cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    // 0x169410: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x169410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x169414: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x169414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x169418: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x169418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x16941c: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x16941cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x169420: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x169420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x169424: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x169424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x169428: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x169428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x16942c: 0x8e6300b4  lw          $v1, 0xB4($s3)
    ctx->pc = 0x16942cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x169430: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x169430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x169434: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x169434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x169438: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x169438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x16943c: 0x8e640198  lw          $a0, 0x198($s3)
    ctx->pc = 0x16943cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 408)));
    // 0x169440: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x169440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x169444: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x169444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x169448: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x169448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x16944c: 0x8e6501d8  lw          $a1, 0x1D8($s3)
    ctx->pc = 0x16944cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 472)));
    // 0x169450: 0x96630280  lhu         $v1, 0x280($s3)
    ctx->pc = 0x169450u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 640)));
    // 0x169454: 0x94a203ac  lhu         $v0, 0x3AC($a1)
    ctx->pc = 0x169454u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 940)));
    // 0x169458: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x169458u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x16945c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x16945cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x169460: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x169460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x169464: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x169464u;
    {
        const bool branch_taken_0x169464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169464u;
        // 0x169468: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169464) {
            ctx->pc = 0x1694E0u;
            goto label_1694e0;
        }
    }
    ctx->pc = 0x16946Cu;
    // 0x16946c: 0x96620282  lhu         $v0, 0x282($s3)
    ctx->pc = 0x16946cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 642)));
    // 0x169470: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x169470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169474: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x169474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x169478: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x169478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x16947c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x16947cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x169480: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x169480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169484: 0x24a5c7d0  addiu       $a1, $a1, -0x3830
    ctx->pc = 0x169484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952912));
    // 0x169488: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x169488u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x16948c: 0x86620200  lh          $v0, 0x200($s3)
    ctx->pc = 0x16948cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 512)));
    // 0x169490: 0x96630282  lhu         $v1, 0x282($s3)
    ctx->pc = 0x169490u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 642)));
    // 0x169494: 0x462018  mult        $a0, $v0, $a2
    ctx->pc = 0x169494u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x169498: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x169498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16949c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x16949cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1694a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1694a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1694a4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1694a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1694a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1694a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1694ac: 0xac64026c  sw          $a0, 0x26C($v1)
    ctx->pc = 0x1694acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 620), GPR_U32(ctx, 4));
    // 0x1694b0: 0x96620282  lhu         $v0, 0x282($s3)
    ctx->pc = 0x1694b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 642)));
    // 0x1694b4: 0x86630200  lh          $v1, 0x200($s3)
    ctx->pc = 0x1694b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 512)));
    // 0x1694b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1694b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1694bc: 0xa6620282  sh          $v0, 0x282($s3)
    ctx->pc = 0x1694bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 642), (uint16_t)GPR_U32(ctx, 2));
    // 0x1694c0: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x1694c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1694c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1694c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1694c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1694c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1694cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1694ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1694d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1694d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1694d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1694d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1694d8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1694D8u;
    {
        const bool branch_taken_0x1694d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1694d8) {
            ctx->pc = 0x1694DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1694D8u;
            // 0x1694dc: 0xa6600282  sh          $zero, 0x282($s3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 19), 642), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1694E0u;
            goto label_1694e0;
        }
    }
    ctx->pc = 0x1694E0u;
label_1694e0:
    // 0x1694e0: 0x8e6301d8  lw          $v1, 0x1D8($s3)
    ctx->pc = 0x1694e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 472)));
    // 0x1694e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1694e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1694e8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1694e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1694ec: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x1694ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x1694f0: 0x946203ac  lhu         $v0, 0x3AC($v1)
    ctx->pc = 0x1694f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 940)));
    // 0x1694f4: 0x2665026c  addiu       $a1, $s3, 0x26C
    ctx->pc = 0x1694f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 620));
    // 0x1694f8: 0xa6620280  sh          $v0, 0x280($s3)
    ctx->pc = 0x1694f8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 640), (uint16_t)GPR_U32(ctx, 2));
    // 0x1694fc: 0x0  nop
    ctx->pc = 0x1694fcu;
    // NOP
label_169500:
    // 0x169500: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x169500u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169504: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x169504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x169508: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x169508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16950c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16950Cu;
    {
        const bool branch_taken_0x16950c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x169510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16950Cu;
        // 0x169510: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16950c) {
            ctx->pc = 0x16951Cu;
            goto label_16951c;
        }
    }
    ctx->pc = 0x169514u;
    // 0x169514: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x169514u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x169518: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x169518u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_16951c:
    // 0x16951c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x16951cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x169520: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x169520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x169524: 0x2cc20005  sltiu       $v0, $a2, 0x5
    ctx->pc = 0x169524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x169528: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x169528u;
    {
        const bool branch_taken_0x169528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169528u;
        // 0x16952c: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169528) {
            ctx->pc = 0x169500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169500;
        }
    }
    ctx->pc = 0x169530u;
    // 0x169530: 0x8263005b  lb          $v1, 0x5B($s3)
    ctx->pc = 0x169530u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 91)));
    // 0x169534: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x169534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x169538: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x169538u;
    {
        const bool branch_taken_0x169538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169538u;
        // 0x16953c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169538) {
            ctx->pc = 0x16970Cu;
            goto label_16970c;
        }
    }
    ctx->pc = 0x169540u;
    // 0x169540: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x169540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x169544: 0x2442fd00  addiu       $v0, $v0, -0x300
    ctx->pc = 0x169544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
    // 0x169548: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x169548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16954c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16954cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169550: 0x800008  jr          $a0
    ctx->pc = 0x169550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169558u: goto label_169558;
            case 0x1695B4u: goto label_1695b4;
            case 0x169614u: goto label_169614;
            case 0x169658u: goto label_169658;
            case 0x1696B8u: goto label_1696b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169550u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x169558u;
label_169558:
    // 0x169558: 0x8e22d930  lw          $v0, -0x26D0($s1)
    ctx->pc = 0x169558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957360)));
    // 0x16955c: 0x80430edd  lb          $v1, 0xEDD($v0)
    ctx->pc = 0x16955cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3805)));
    // 0x169560: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x169560u;
    {
        const bool branch_taken_0x169560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169560u;
        // 0x169564: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169560) {
            ctx->pc = 0x169578u;
            goto label_169578;
        }
    }
    ctx->pc = 0x169568u;
    // 0x169568: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x169568u;
    {
        const bool branch_taken_0x169568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169568u;
        // 0x16956c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169568) {
            ctx->pc = 0x169590u;
            goto label_169590;
        }
    }
    ctx->pc = 0x169570u;
    // 0x169570: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x169570u;
    {
        const bool branch_taken_0x169570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169570) {
            ctx->pc = 0x1695A4u;
            goto label_1695a4;
        }
    }
    ctx->pc = 0x169578u;
label_169578:
    // 0x169578: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x169578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x16957c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16957cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169580: 0xc0b2428  jal         func_2C90A0
    ctx->pc = 0x169580u;
    SET_GPR_U32(ctx, 31, 0x169588u);
    ctx->pc = 0x169584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169580u;
    // 0x169584: 0x2444ec58  addiu       $a0, $v0, -0x13A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C90A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C90A0u, 0x169580u, 0x169588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169588u;
label_169588:
    // 0x169588: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x169588u;
    {
        const bool branch_taken_0x169588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169588u;
        // 0x16958c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169588) {
            ctx->pc = 0x1695A4u;
            goto label_1695a4;
        }
    }
    ctx->pc = 0x169590u;
label_169590:
    // 0x169590: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x169590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x169594: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x169594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169598: 0xc0b2428  jal         func_2C90A0
    ctx->pc = 0x169598u;
    SET_GPR_U32(ctx, 31, 0x1695A0u);
    ctx->pc = 0x16959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169598u;
    // 0x16959c: 0x2464ec58  addiu       $a0, $v1, -0x13A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C90A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C90A0u, 0x169598u, 0x1695A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695A0u;
label_1695a0:
    // 0x1695a0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1695a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1695a4:
    // 0x1695a4: 0xc0b2654  jal         func_2C9950
    ctx->pc = 0x1695A4u;
    SET_GPR_U32(ctx, 31, 0x1695ACu);
    ctx->pc = 0x1695A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695A4u;
    // 0x1695a8: 0x2444ec58  addiu       $a0, $v0, -0x13A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9950u, 0x1695A4u, 0x1695ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695ACu;
label_1695ac:
    // 0x1695ac: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1695ACu;
    {
        const bool branch_taken_0x1695ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1695B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695ACu;
        // 0x1695b0: 0x8e22d930  lw          $v0, -0x26D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695ac) {
            ctx->pc = 0x169710u;
            goto label_169710;
        }
    }
    ctx->pc = 0x1695B4u;
label_1695b4:
    // 0x1695b4: 0x866201d0  lh          $v0, 0x1D0($s3)
    ctx->pc = 0x1695b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 464)));
    // 0x1695b8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1695b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1695bc: 0x866501d2  lh          $a1, 0x1D2($s3)
    ctx->pc = 0x1695bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 466)));
    // 0x1695c0: 0x2470ec58  addiu       $s0, $v1, -0x13A8
    ctx->pc = 0x1695c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962264));
    // 0x1695c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1695c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695c8: 0xc0b2402  jal         func_2C9008
    ctx->pc = 0x1695C8u;
    SET_GPR_U32(ctx, 31, 0x1695D0u);
    ctx->pc = 0x1695CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695C8u;
    // 0x1695cc: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9008u, 0x1695C8u, 0x1695D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695D0u;
label_1695d0:
    // 0x1695d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1695d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695d4: 0x1240004e  beqz        $s2, . + 4 + (0x4E << 2)
    ctx->pc = 0x1695D4u;
    {
        const bool branch_taken_0x1695d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1695D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695D4u;
        // 0x1695d8: 0x8e22d930  lw          $v0, -0x26D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695d4) {
            ctx->pc = 0x169710u;
            goto label_169710;
        }
    }
    ctx->pc = 0x1695DCu;
    // 0x1695dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1695dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1695e0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1695E0u;
    {
        const bool branch_taken_0x1695e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1695e0) {
            ctx->pc = 0x1695E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1695E0u;
            // 0x1695e4: 0x8e62008c  lw          $v0, 0x8C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16960Cu;
            goto label_16960c;
        }
    }
    ctx->pc = 0x1695E8u;
    // 0x1695e8: 0x96420018  lhu         $v0, 0x18($s2)
    ctx->pc = 0x1695e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1695ec: 0x8e64008c  lw          $a0, 0x8C($s3)
    ctx->pc = 0x1695ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x1695f0: 0x2442200c  addiu       $v0, $v0, 0x200C
    ctx->pc = 0x1695f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8204));
    // 0x1695f4: 0xa4820090  sh          $v0, 0x90($a0)
    ctx->pc = 0x1695f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x1695f8: 0x96430018  lhu         $v1, 0x18($s2)
    ctx->pc = 0x1695f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1695fc: 0x8e620090  lw          $v0, 0x90($s3)
    ctx->pc = 0x1695fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x169600: 0x2463200c  addiu       $v1, $v1, 0x200C
    ctx->pc = 0x169600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8204));
    // 0x169604: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x169604u;
    {
        const bool branch_taken_0x169604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169604u;
        // 0x169608: 0xa4430090  sh          $v1, 0x90($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169604) {
            ctx->pc = 0x16970Cu;
            goto label_16970c;
        }
    }
    ctx->pc = 0x16960Cu;
label_16960c:
    // 0x16960c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16960Cu;
    {
        const bool branch_taken_0x16960c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16960Cu;
        // 0x169610: 0x24042000  addiu       $a0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16960c) {
            ctx->pc = 0x169648u;
            goto label_169648;
        }
    }
    ctx->pc = 0x169614u;
label_169614:
    // 0x169614: 0x8e22d930  lw          $v0, -0x26D0($s1)
    ctx->pc = 0x169614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957360)));
    // 0x169618: 0x80430edd  lb          $v1, 0xEDD($v0)
    ctx->pc = 0x169618u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3805)));
    // 0x16961c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16961Cu;
    {
        const bool branch_taken_0x16961c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16961Cu;
        // 0x169620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16961c) {
            ctx->pc = 0x169634u;
            goto label_169634;
        }
    }
    ctx->pc = 0x169624u;
    // 0x169624: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x169624u;
    {
        const bool branch_taken_0x169624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x169628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169624u;
        // 0x169628: 0x8e22d930  lw          $v0, -0x26D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169624) {
            ctx->pc = 0x169640u;
            goto label_169640;
        }
    }
    ctx->pc = 0x16962Cu;
    // 0x16962c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x16962Cu;
    {
        const bool branch_taken_0x16962c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16962Cu;
        // 0x169630: 0x80430edd  lb          $v1, 0xEDD($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3805)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16962c) {
            ctx->pc = 0x169714u;
            goto label_169714;
        }
    }
    ctx->pc = 0x169634u;
label_169634:
    // 0x169634: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x169634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x169638: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x169638u;
    {
        const bool branch_taken_0x169638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169638u;
        // 0x16963c: 0x24042001  addiu       $a0, $zero, 0x2001 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169638) {
            ctx->pc = 0x169648u;
            goto label_169648;
        }
    }
    ctx->pc = 0x169640u;
label_169640:
    // 0x169640: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x169640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x169644: 0x24042002  addiu       $a0, $zero, 0x2002
    ctx->pc = 0x169644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8194));
label_169648:
    // 0x169648: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x169648u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x16964c: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x16964cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x169650: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x169650u;
    {
        const bool branch_taken_0x169650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169650u;
        // 0x169654: 0xa4640090  sh          $a0, 0x90($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169650) {
            ctx->pc = 0x16970Cu;
            goto label_16970c;
        }
    }
    ctx->pc = 0x169658u;
label_169658:
    // 0x169658: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x169658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x16965c: 0x2404200a  addiu       $a0, $zero, 0x200A
    ctx->pc = 0x16965cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8202));
    // 0x169660: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x169660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
    // 0x169664: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x169664u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x169668: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x169668u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x16966c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x16966cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x169670: 0x24c6fe78  addiu       $a2, $a2, -0x188
    ctx->pc = 0x169670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966904));
    // 0x169674: 0x8e620090  lw          $v0, 0x90($s3)
    ctx->pc = 0x169674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x169678: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x169678u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x16967c: 0x8e630098  lw          $v1, 0x98($s3)
    ctx->pc = 0x16967cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x169680: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x169680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x169684: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x169684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x169688: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x169688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x16968c: 0x8e640094  lw          $a0, 0x94($s3)
    ctx->pc = 0x16968cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x169690: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x169690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x169694: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x169694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x169698: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x169698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x16969c: 0x826301d4  lb          $v1, 0x1D4($s3)
    ctx->pc = 0x16969cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 468)));
    // 0x1696a0: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x1696a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x1696a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1696a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1696a8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1696a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1696ac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1696acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1696b0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1696B0u;
    {
        const bool branch_taken_0x1696b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1696B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1696B0u;
        // 0x1696b4: 0xe4400038  swc1        $f0, 0x38($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1696b0) {
            ctx->pc = 0x16970Cu;
            goto label_16970c;
        }
    }
    ctx->pc = 0x1696B8u;
label_1696b8:
    // 0x1696b8: 0x92620286  lbu         $v0, 0x286($s3)
    ctx->pc = 0x1696b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 646)));
    // 0x1696bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1696BCu;
    {
        const bool branch_taken_0x1696bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1696C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1696BCu;
        // 0x1696c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1696bc) {
            ctx->pc = 0x1696CCu;
            goto label_1696cc;
        }
    }
    ctx->pc = 0x1696C4u;
    // 0x1696c4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1696C4u;
    {
        const bool branch_taken_0x1696c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1696C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1696C4u;
        // 0x1696c8: 0xa262005b  sb          $v0, 0x5B($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 91), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1696c4) {
            ctx->pc = 0x16970Cu;
            goto label_16970c;
        }
    }
    ctx->pc = 0x1696CCu;
label_1696cc:
    // 0x1696cc: 0x8d027a80  lw          $v0, 0x7A80($t0)
    ctx->pc = 0x1696ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 31360)));
    // 0x1696d0: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1696d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1696d4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1696d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1696d8: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1696d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1696dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1696dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1696e0: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x1696e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x1696e4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1696e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1696e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1696e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1696ec: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1696ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1696f0: 0xad027a80  sw          $v0, 0x7A80($t0)
    ctx->pc = 0x1696f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 31360), GPR_U32(ctx, 2));
    // 0x1696f4: 0x8e630198  lw          $v1, 0x198($s3)
    ctx->pc = 0x1696f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 408)));
    // 0x1696f8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1696f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1696fc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1696fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x169700: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x169700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x169704: 0xc042e22  jal         func_10B888
    ctx->pc = 0x169704u;
    SET_GPR_U32(ctx, 31, 0x16970Cu);
    ctx->pc = 0x169708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169704u;
    // 0x169708: 0x8e6401d8  lw          $a0, 0x1D8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 472)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B888u, 0x169704u, 0x16970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16970Cu;
label_16970c:
    // 0x16970c: 0x8e22d930  lw          $v0, -0x26D0($s1)
    ctx->pc = 0x16970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957360)));
label_169710:
    // 0x169710: 0x80430edd  lb          $v1, 0xEDD($v0)
    ctx->pc = 0x169710u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3805)));
label_169714:
    // 0x169714: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x169714u;
    {
        const bool branch_taken_0x169714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169714u;
        // 0x169718: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169714) {
            ctx->pc = 0x16972Cu;
            goto label_16972c;
        }
    }
    ctx->pc = 0x16971Cu;
    // 0x16971c: 0x106200c0  beq         $v1, $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x16971Cu;
    {
        const bool branch_taken_0x16971c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x169720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16971Cu;
        // 0x169720: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16971c) {
            ctx->pc = 0x169A20u;
            goto label_169a20;
        }
    }
    ctx->pc = 0x169724u;
    // 0x169724: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x169724u;
    {
        const bool branch_taken_0x169724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169724u;
        // 0x169728: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169724) {
            ctx->pc = 0x169BF0u;
            goto label_169bf0;
        }
    }
    ctx->pc = 0x16972Cu;
label_16972c:
    // 0x16972c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x16972cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x169730: 0x26640120  addiu       $a0, $s3, 0x120
    ctx->pc = 0x169730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x169734: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x169734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x169738: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x169738u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16973c: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x16973cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x169740: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x169740u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169744: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x169744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169748: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x169748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x16974c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x16974cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x169750: 0x26a20018  addiu       $v0, $s5, 0x18
    ctx->pc = 0x169750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x169754: 0x0  nop
    ctx->pc = 0x169754u;
    // NOP
label_169758:
    // 0x169758: 0x866301d0  lh          $v1, 0x1D0($s3)
    ctx->pc = 0x169758u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 464)));
    // 0x16975c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16975cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x169760: 0x26a40005  addiu       $a0, $s5, 0x5
    ctx->pc = 0x169760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 5));
    // 0x169764: 0x2c23021  addu        $a2, $s6, $v0
    ctx->pc = 0x169764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x169768: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x169768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x16976c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x169770: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x169770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x169774: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x169774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x169778: 0x240530c1  addiu       $a1, $zero, 0x30C1
    ctx->pc = 0x169778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12481));
    // 0x16977c: 0xac430084  sw          $v1, 0x84($v0)
    ctx->pc = 0x16977cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
    // 0x169780: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x169780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x169784: 0x2c48821  addu        $s1, $s6, $a0
    ctx->pc = 0x169784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x169788: 0x26a2000b  addiu       $v0, $s5, 0xB
    ctx->pc = 0x169788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11));
    // 0x16978c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x16978cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x169790: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x169790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x169794: 0x2c28021  addu        $s0, $s6, $v0
    ctx->pc = 0x169794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x169798: 0x26a30011  addiu       $v1, $s5, 0x11
    ctx->pc = 0x169798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 17));
    // 0x16979c: 0xa4850090  sh          $a1, 0x90($a0)
    ctx->pc = 0x16979cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x1697a0: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x1697a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1697a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1697a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1697a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1697ac: 0x2c3b821  addu        $s7, $s6, $v1
    ctx->pc = 0x1697acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1697b0: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x1697b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x1697b4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1697b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1697b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1697b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1697bc: 0xa044008b  sb          $a0, 0x8B($v0)
    ctx->pc = 0x1697bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 4));
    // 0x1697c0: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x1697c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1697c4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1697c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1697c8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1697c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1697cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1697ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1697d0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1697d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1697d4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1697d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1697d8: 0x2484ec58  addiu       $a0, $a0, -0x13A8
    ctx->pc = 0x1697d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962264));
    // 0x1697dc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1697dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FEC68u));
    // 0x1697e0: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x1697e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1697e4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1697E4u;
    {
        const bool branch_taken_0x1697e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1697e4) {
            ctx->pc = 0x1697E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1697E4u;
            // 0x1697e8: 0x866501d0  lh          $a1, 0x1D0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1697F8u;
            goto label_1697f8;
        }
    }
    ctx->pc = 0x1697ECu;
    // 0x1697ec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1697ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1697f0: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1697F0u;
    {
        const bool branch_taken_0x1697f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1697F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697F0u;
        // 0x1697f4: 0xac400084  sw          $zero, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697f0) {
            ctx->pc = 0x169A04u;
            goto label_169a04;
        }
    }
    ctx->pc = 0x1697F8u;
label_1697f8:
    // 0x1697f8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1697f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1697fc: 0x2484ec58  addiu       $a0, $a0, -0x13A8
    ctx->pc = 0x1697fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962264));
    // 0x169800: 0xc0b2402  jal         func_2C9008
    ctx->pc = 0x169800u;
    SET_GPR_U32(ctx, 31, 0x169808u);
    ctx->pc = 0x169804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169800u;
    // 0x169804: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9008u, 0x169800u, 0x169808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169808u;
label_169808:
    // 0x169808: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x169808u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16980c: 0x1240007e  beqz        $s2, . + 4 + (0x7E << 2)
    ctx->pc = 0x16980Cu;
    {
        const bool branch_taken_0x16980c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x169810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16980Cu;
        // 0x169810: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16980c) {
            ctx->pc = 0x169A08u;
            goto label_169a08;
        }
    }
    ctx->pc = 0x169814u;
    // 0x169814: 0x96420010  lhu         $v0, 0x10($s2)
    ctx->pc = 0x169814u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x169818: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x169818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16981c: 0x2484ec58  addiu       $a0, $a0, -0x13A8
    ctx->pc = 0x16981cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962264));
    // 0x169820: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x169820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x169824: 0x2442304e  addiu       $v0, $v0, 0x304E
    ctx->pc = 0x169824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12366));
    // 0x169828: 0xa4620090  sh          $v0, 0x90($v1)
    ctx->pc = 0x169828u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x16982c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x16982cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x169830: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x169830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x169834: 0xaca20084  sw          $v0, 0x84($a1)
    ctx->pc = 0x169834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 2));
    // 0x169838: 0x866501d0  lh          $a1, 0x1D0($s3)
    ctx->pc = 0x169838u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 464)));
    // 0x16983c: 0xc0b26a4  jal         func_2C9A90
    ctx->pc = 0x16983Cu;
    SET_GPR_U32(ctx, 31, 0x169844u);
    ctx->pc = 0x169840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16983Cu;
    // 0x169840: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9A90u, 0x16983Cu, 0x169844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169844u;
label_169844:
    // 0x169844: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x169844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x169848: 0x54430021  bnel        $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x169848u;
    {
        const bool branch_taken_0x169848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x169848) {
            ctx->pc = 0x16984Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169848u;
            // 0x16984c: 0x866501d0  lh          $a1, 0x1D0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1698D0u;
            goto label_1698d0;
        }
    }
    ctx->pc = 0x169850u;
    // 0x169850: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x169850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x169854: 0x24949b70  addiu       $s4, $a0, -0x6490
    ctx->pc = 0x169854u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x169858: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x169858u;
    SET_GPR_U32(ctx, 31, 0x169860u);
    ctx->pc = 0x16985Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169858u;
    // 0x16985c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x169858u, 0x169860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169860u;
label_169860:
    // 0x169860: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x169860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x169864: 0x8c640084  lw          $a0, 0x84($v1)
    ctx->pc = 0x169864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x169868: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x169868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x16986c: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x16986Cu;
    {
        const bool branch_taken_0x16986c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16986c) {
            ctx->pc = 0x169870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16986Cu;
            // 0x169870: 0x866501d0  lh          $a1, 0x1D0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1698D0u;
            goto label_1698d0;
        }
    }
    ctx->pc = 0x169874u;
    // 0x169874: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x169874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x169878: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x169878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x16987c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x16987cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x169880: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x169880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169884: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x169884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x169888: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x169888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16988c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x16988cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x169890: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x169890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x169894: 0xa066008b  sb          $a2, 0x8B($v1)
    ctx->pc = 0x169894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 139), (uint8_t)GPR_U32(ctx, 6));
    // 0x169898: 0x96450012  lhu         $a1, 0x12($s2)
    ctx->pc = 0x169898u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x16989c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16989cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1698a0: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x1698A0u;
    SET_GPR_U32(ctx, 31, 0x1698A8u);
    ctx->pc = 0x1698A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1698A0u;
    // 0x1698a4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x1698A0u, 0x1698A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1698A8u;
label_1698a8:
    // 0x1698a8: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1698A8u;
    {
        const bool branch_taken_0x1698a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1698ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698A8u;
        // 0x1698ac: 0x96420012  lhu         $v0, 0x12($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1698a8) {
            ctx->pc = 0x1699A4u;
            goto label_1699a4;
        }
    }
    ctx->pc = 0x1698B0u;
    // 0x1698b0: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1698B0u;
    {
        const bool branch_taken_0x1698b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1698B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698B0u;
        // 0x1698b4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1698b0) {
            ctx->pc = 0x1699A8u;
            goto label_1699a8;
        }
    }
    ctx->pc = 0x1698B8u;
    // 0x1698b8: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x1698B8u;
    SET_GPR_U32(ctx, 31, 0x1698C0u);
    ctx->pc = 0x1698BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1698B8u;
    // 0x1698bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x1698B8u, 0x1698C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1698C0u;
label_1698c0:
    // 0x1698c0: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1698C0u;
    {
        const bool branch_taken_0x1698c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1698C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698C0u;
        // 0x1698c4: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1698c0) {
            ctx->pc = 0x1699E4u;
            goto label_1699e4;
        }
    }
    ctx->pc = 0x1698C8u;
    // 0x1698c8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1698C8u;
    {
        const bool branch_taken_0x1698c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1698CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698C8u;
        // 0x1698cc: 0x96420012  lhu         $v0, 0x12($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1698c8) {
            ctx->pc = 0x1699A4u;
            goto label_1699a4;
        }
    }
    ctx->pc = 0x1698D0u;
label_1698d0:
    // 0x1698d0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1698d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1698d4: 0x2464ec58  addiu       $a0, $v1, -0x13A8
    ctx->pc = 0x1698d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962264));
    // 0x1698d8: 0xc0b26a4  jal         func_2C9A90
    ctx->pc = 0x1698D8u;
    SET_GPR_U32(ctx, 31, 0x1698E0u);
    ctx->pc = 0x1698DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1698D8u;
    // 0x1698dc: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9A90u, 0x1698D8u, 0x1698E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1698E0u;
label_1698e0:
    // 0x1698e0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1698e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1698e4: 0x1044000e  beq         $v0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1698E4u;
    {
        const bool branch_taken_0x1698e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1698E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698E4u;
        // 0x1698e8: 0x1e1880  sll         $v1, $fp, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1698e4) {
            ctx->pc = 0x169920u;
            goto label_169920;
        }
    }
    ctx->pc = 0x1698ECu;
    // 0x1698ec: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1698ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1698f0: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x1698f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1698f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1698f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1698f8: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1698f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1698fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1698fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169900: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x169900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x169904: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x169904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x169908: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x169908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16990c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x16990cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x169910: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x169910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x169914: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x169914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x169918: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x169918u;
    {
        const bool branch_taken_0x169918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169918u;
        // 0x16991c: 0xa064008b  sb          $a0, 0x8B($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 139), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169918) {
            ctx->pc = 0x169A04u;
            goto label_169a04;
        }
    }
    ctx->pc = 0x169920u;
label_169920:
    // 0x169920: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x169920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x169924: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x169924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x169928: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x169928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x16992c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x16992cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x169930: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x169930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169934: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x169934u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x169938: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x169938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x16993c: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x16993cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x169940: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x169940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x169944: 0x24909b70  addiu       $s0, $a0, -0x6490
    ctx->pc = 0x169944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x169948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16994c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16994cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x169950: 0xacc2002c  sw          $v0, 0x2C($a2)
    ctx->pc = 0x169950u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
    // 0x169954: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x169954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x169958: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x169958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16995c: 0xa062008b  sb          $v0, 0x8B($v1)
    ctx->pc = 0x16995cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 139), (uint8_t)GPR_U32(ctx, 2));
    // 0x169960: 0x96450012  lhu         $a1, 0x12($s2)
    ctx->pc = 0x169960u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x169964: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x169964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x169968: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x169968u;
    SET_GPR_U32(ctx, 31, 0x169970u);
    ctx->pc = 0x16996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169968u;
    // 0x16996c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x169968u, 0x169970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169970u;
label_169970:
    // 0x169970: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x169970u;
    {
        const bool branch_taken_0x169970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169970u;
        // 0x169974: 0x96420012  lhu         $v0, 0x12($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169970) {
            ctx->pc = 0x1699A4u;
            goto label_1699a4;
        }
    }
    ctx->pc = 0x169978u;
    // 0x169978: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x169978u;
    {
        const bool branch_taken_0x169978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169978u;
        // 0x16997c: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169978) {
            ctx->pc = 0x1699A8u;
            goto label_1699a8;
        }
    }
    ctx->pc = 0x169980u;
    // 0x169980: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x169980u;
    SET_GPR_U32(ctx, 31, 0x169988u);
    ctx->pc = 0x169984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169980u;
    // 0x169984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x169980u, 0x169988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169988u;
label_169988:
    // 0x169988: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x169988u;
    {
        const bool branch_taken_0x169988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169988) {
            ctx->pc = 0x16998Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169988u;
            // 0x16998c: 0x96420012  lhu         $v0, 0x12($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1699A4u;
            goto label_1699a4;
        }
    }
    ctx->pc = 0x169990u;
    // 0x169990: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x169990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x169994: 0x26a2001f  addiu       $v0, $s5, 0x1F
    ctx->pc = 0x169994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 31));
    // 0x169998: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x169998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16999c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x16999Cu;
    {
        const bool branch_taken_0x16999c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1699A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16999Cu;
        // 0x1699a0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16999c) {
            ctx->pc = 0x1699F0u;
            goto label_1699f0;
        }
    }
    ctx->pc = 0x1699A4u;
label_1699a4:
    // 0x1699a4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1699a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1699a8:
    // 0x1699a8: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1699A8u;
    {
        const bool branch_taken_0x1699a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1699ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699A8u;
        // 0x1699ac: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699a8) {
            ctx->pc = 0x169A08u;
            goto label_169a08;
        }
    }
    ctx->pc = 0x1699B0u;
    // 0x1699b0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1699b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1699b4: 0x24909b70  addiu       $s0, $a0, -0x6490
    ctx->pc = 0x1699b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1699b8: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x1699B8u;
    SET_GPR_U32(ctx, 31, 0x1699C0u);
    ctx->pc = 0x1699BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1699B8u;
    // 0x1699bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x1699B8u, 0x1699C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1699C0u;
label_1699c0:
    // 0x1699c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1699c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1699c4: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1699C4u;
    {
        const bool branch_taken_0x1699c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1699C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699C4u;
        // 0x1699c8: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699c4) {
            ctx->pc = 0x169A08u;
            goto label_169a08;
        }
    }
    ctx->pc = 0x1699CCu;
    // 0x1699cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1699ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1699d0: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x1699D0u;
    SET_GPR_U32(ctx, 31, 0x1699D8u);
    ctx->pc = 0x1699D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1699D0u;
    // 0x1699d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x1699D0u, 0x1699D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1699D8u;
label_1699d8:
    // 0x1699d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1699D8u;
    {
        const bool branch_taken_0x1699d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1699DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699D8u;
        // 0x1699dc: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699d8) {
            ctx->pc = 0x169A08u;
            goto label_169a08;
        }
    }
    ctx->pc = 0x1699E0u;
    // 0x1699e0: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1699e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1699e4:
    // 0x1699e4: 0x26a2001f  addiu       $v0, $s5, 0x1F
    ctx->pc = 0x1699e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 31));
    // 0x1699e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1699e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1699ec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1699ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1699f0:
    // 0x1699f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1699f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1699f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1699f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1699f8: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1699f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1699fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1699fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x169a00: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x169a00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_169a04:
    // 0x169a04: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x169a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_169a08:
    // 0x169a08: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x169a08u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x169a0c: 0x2ea30006  sltiu       $v1, $s5, 0x6
    ctx->pc = 0x169a0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x169a10: 0x1460ff51  bnez        $v1, . + 4 + (-0xAF << 2)
    ctx->pc = 0x169A10u;
    {
        const bool branch_taken_0x169a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x169A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A10u;
        // 0x169a14: 0x26a20018  addiu       $v0, $s5, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a10) {
            ctx->pc = 0x169758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169758;
        }
    }
    ctx->pc = 0x169A18u;
    // 0x169a18: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x169A18u;
    {
        const bool branch_taken_0x169a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A18u;
        // 0x169a1c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a18) {
            ctx->pc = 0x169BECu;
            goto label_169bec;
        }
    }
    ctx->pc = 0x169A20u;
label_169a20:
    // 0x169a20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x169a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a24: 0x26760120  addiu       $s6, $s3, 0x120
    ctx->pc = 0x169a24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x169a28: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x169a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x169a2c: 0x0  nop
    ctx->pc = 0x169a2cu;
    // NOP
label_169a30:
    // 0x169a30: 0x866301d0  lh          $v1, 0x1D0($s3)
    ctx->pc = 0x169a30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 464)));
    // 0x169a34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x169a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x169a38: 0x26050005  addiu       $a1, $s0, 0x5
    ctx->pc = 0x169a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x169a3c: 0x2c24021  addu        $t0, $s6, $v0
    ctx->pc = 0x169a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x169a40: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x169a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x169a44: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x169a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x169a48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x169a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x169a4c: 0x26040011  addiu       $a0, $s0, 0x11
    ctx->pc = 0x169a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x169a50: 0x240730c1  addiu       $a3, $zero, 0x30C1
    ctx->pc = 0x169a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12481));
    // 0x169a54: 0xac430084  sw          $v1, 0x84($v0)
    ctx->pc = 0x169a54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
    // 0x169a58: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x169a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x169a5c: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x169a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x169a60: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x169a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x169a64: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x169a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x169a68: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x169a68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x169a6c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x169a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169a70: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x169a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x169a74: 0x2604000b  addiu       $a0, $s0, 0xB
    ctx->pc = 0x169a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
    // 0x169a78: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x169a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x169a7c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x169a7cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a80: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x169a80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x169a84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x169a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x169a88: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x169a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x169a8c: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x169a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x169a90: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x169a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x169a94: 0xa4470090  sh          $a3, 0x90($v0)
    ctx->pc = 0x169a94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 7));
    // 0x169a98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169a9c: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x169a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
    // 0x169aa0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x169aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x169aa4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x169aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x169aa8: 0xa083008b  sb          $v1, 0x8B($a0)
    ctx->pc = 0x169aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 139), (uint8_t)GPR_U32(ctx, 3));
    // 0x169aac: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x169aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x169ab0: 0x2484ec58  addiu       $a0, $a0, -0x13A8
    ctx->pc = 0x169ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962264));
    // 0x169ab4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x169ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FEC68u));
    // 0x169ab8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x169ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x169abc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x169ABCu;
    {
        const bool branch_taken_0x169abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169abc) {
            ctx->pc = 0x169AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169ABCu;
            // 0x169ac0: 0x866501d0  lh          $a1, 0x1D0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169AD4u;
            goto label_169ad4;
        }
    }
    ctx->pc = 0x169AC4u;
    // 0x169ac4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x169ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x169ac8: 0x26170001  addiu       $s7, $s0, 0x1
    ctx->pc = 0x169ac8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x169acc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x169ACCu;
    {
        const bool branch_taken_0x169acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169ACCu;
        // 0x169ad0: 0xac400084  sw          $zero, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169acc) {
            ctx->pc = 0x169BD8u;
            goto label_169bd8;
        }
    }
    ctx->pc = 0x169AD4u;
label_169ad4:
    // 0x169ad4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x169ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x169ad8: 0x2484ec58  addiu       $a0, $a0, -0x13A8
    ctx->pc = 0x169ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962264));
    // 0x169adc: 0x26170001  addiu       $s7, $s0, 0x1
    ctx->pc = 0x169adcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x169ae0: 0xc0b2402  jal         func_2C9008
    ctx->pc = 0x169AE0u;
    SET_GPR_U32(ctx, 31, 0x169AE8u);
    ctx->pc = 0x169AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169AE0u;
    // 0x169ae4: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9008u, 0x169AE0u, 0x169AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169AE8u;
label_169ae8:
    // 0x169ae8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x169ae8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169aec: 0x1240003a  beqz        $s2, . + 4 + (0x3A << 2)
    ctx->pc = 0x169AECu;
    {
        const bool branch_taken_0x169aec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x169AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AECu;
        // 0x169af0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169aec) {
            ctx->pc = 0x169BD8u;
            goto label_169bd8;
        }
    }
    ctx->pc = 0x169AF4u;
    // 0x169af4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x169AF4u;
    {
        const bool branch_taken_0x169af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169AF4u;
        // 0x169af8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169af4) {
            ctx->pc = 0x169B24u;
            goto label_169b24;
        }
    }
    ctx->pc = 0x169AFCu;
    // 0x169afc: 0x0  nop
    ctx->pc = 0x169afcu;
    // NOP
label_169b00:
    // 0x169b00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x169b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b04: 0x86500018  lh          $s0, 0x18($s2)
    ctx->pc = 0x169b04u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x169b08: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x169B08u;
    SET_GPR_U32(ctx, 31, 0x169B10u);
    ctx->pc = 0x169B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169B08u;
    // 0x169b0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x169B08u, 0x169B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B10u;
label_169b10:
    // 0x169b10: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x169b10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x169b14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169b18: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x169b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x169b1c: 0x70a00a  movz        $s4, $v1, $s0
    ctx->pc = 0x169b1cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    // 0x169b20: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x169b20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_169b24:
    // 0x169b24: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x169b24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x169b28: 0x24909b70  addiu       $s0, $a0, -0x6490
    ctx->pc = 0x169b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x169b2c: 0xc07ef58  jal         func_1FBD60
    ctx->pc = 0x169B2Cu;
    SET_GPR_U32(ctx, 31, 0x169B34u);
    ctx->pc = 0x169B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169B2Cu;
    // 0x169b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD60u, 0x169B2Cu, 0x169B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B34u;
label_169b34:
    // 0x169b34: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x169b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x169b38: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x169b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x169b3c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x169B3Cu;
    {
        const bool branch_taken_0x169b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B3Cu;
        // 0x169b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b3c) {
            ctx->pc = 0x169B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169b00;
        }
    }
    ctx->pc = 0x169B44u;
    // 0x169b44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x169b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b48: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x169b48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169b4c: 0x0  nop
    ctx->pc = 0x169b4cu;
    // NOP
label_169b50:
    // 0x169b50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x169b50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x169b54: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x169b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x169b58: 0x86500018  lh          $s0, 0x18($s2)
    ctx->pc = 0x169b58u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x169b5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x169b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b60: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x169b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x169b64: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x169B64u;
    SET_GPR_U32(ctx, 31, 0x169B6Cu);
    ctx->pc = 0x169B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169B64u;
    // 0x169b68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x169B64u, 0x169B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B6Cu;
label_169b6c:
    // 0x169b6c: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x169b6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x169b70: 0x3231ffff  andi        $s1, $s1, 0xFFFF
    ctx->pc = 0x169b70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x169b74: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x169b74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x169b78: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x169B78u;
    {
        const bool branch_taken_0x169b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B78u;
        // 0x169b7c: 0x2b0a00a  movz        $s4, $s5, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b78) {
            ctx->pc = 0x169B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169b50;
        }
    }
    ctx->pc = 0x169B80u;
    // 0x169b80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x169b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169b84: 0x1e2080  sll         $a0, $fp, 2
    ctx->pc = 0x169b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x169b88: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x169b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x169b8c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x169b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x169b90: 0x96430010  lhu         $v1, 0x10($s2)
    ctx->pc = 0x169b90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x169b94: 0x2c23021  addu        $a2, $s6, $v0
    ctx->pc = 0x169b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x169b98: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x169b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x169b9c: 0x2463304e  addiu       $v1, $v1, 0x304E
    ctx->pc = 0x169b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12366));
    // 0x169ba0: 0xa4a30090  sh          $v1, 0x90($a1)
    ctx->pc = 0x169ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x169ba4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x169ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x169ba8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169bac: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x169bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x169bb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169bb4: 0x16840005  bne         $s4, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x169BB4u;
    {
        const bool branch_taken_0x169bb4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x169BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BB4u;
        // 0x169bb8: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169bb4) {
            ctx->pc = 0x169BCCu;
            goto label_169bcc;
        }
    }
    ctx->pc = 0x169BBCu;
    // 0x169bbc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x169bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x169bc0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x169bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x169bc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x169BC4u;
    {
        const bool branch_taken_0x169bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BC4u;
        // 0x169bc8: 0xa043008b  sb          $v1, 0x8B($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169bc4) {
            ctx->pc = 0x169BD8u;
            goto label_169bd8;
        }
    }
    ctx->pc = 0x169BCCu;
label_169bcc:
    // 0x169bcc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x169bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x169bd0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x169bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x169bd4: 0xa062008b  sb          $v0, 0x8B($v1)
    ctx->pc = 0x169bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 139), (uint8_t)GPR_U32(ctx, 2));
label_169bd8:
    // 0x169bd8: 0x32f0ffff  andi        $s0, $s7, 0xFFFF
    ctx->pc = 0x169bd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x169bdc: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x169bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x169be0: 0x1440ff93  bnez        $v0, . + 4 + (-0x6D << 2)
    ctx->pc = 0x169BE0u;
    {
        const bool branch_taken_0x169be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169BE0u;
        // 0x169be4: 0x26020018  addiu       $v0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169be0) {
            ctx->pc = 0x169A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169a30;
        }
    }
    ctx->pc = 0x169BE8u;
    // 0x169be8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x169be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_169bec:
    // 0x169bec: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x169becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_169bf0:
    // 0x169bf0: 0x2482ec58  addiu       $v0, $a0, -0x13A8
    ctx->pc = 0x169bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962264));
    // 0x169bf4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x169bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x169bf8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x169bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x169bfc: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x169bfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x169c00: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x169c00u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x169c04: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x169C04u;
    {
        const bool branch_taken_0x169c04 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x169C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C04u;
        // 0x169c08: 0x8e66017c  lw          $a2, 0x17C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c04) {
            ctx->pc = 0x169C20u;
            goto label_169c20;
        }
    }
    ctx->pc = 0x169C0Cu;
    // 0x169c0c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x169c0cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x169c10: 0x0  nop
    ctx->pc = 0x169c10u;
    // NOP
    // 0x169c14: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x169c14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x169c18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x169C18u;
    {
        const bool branch_taken_0x169c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c18) {
            ctx->pc = 0x169C3Cu;
            goto label_169c3c;
        }
    }
    ctx->pc = 0x169C20u;
label_169c20:
    // 0x169c20: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x169c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x169c24: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x169c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x169c28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x169c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x169c2c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x169c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x169c30: 0x0  nop
    ctx->pc = 0x169c30u;
    // NOP
    // 0x169c34: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x169c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x169c38: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x169c38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_169c3c:
    // 0x169c3c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x169c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x169c40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x169c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169c44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x169c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x169c48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x169c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x169c4c: 0x0  nop
    ctx->pc = 0x169c4cu;
    // NOP
    // 0x169c50: 0x0  nop
    ctx->pc = 0x169c50u;
    // NOP
    // 0x169c54: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x169c54u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x169c58: 0xe4c00044  swc1        $f0, 0x44($a2)
    ctx->pc = 0x169c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 68), bits); }
    // 0x169c5c: 0x8e66017c  lw          $a2, 0x17C($s3)
    ctx->pc = 0x169c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 380)));
    // 0x169c60: 0x866201d0  lh          $v0, 0x1D0($s3)
    ctx->pc = 0x169c60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 464)));
    // 0x169c64: 0xc4c20044  lwc1        $f2, 0x44($a2)
    ctx->pc = 0x169c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x169c68: 0x8cc4001c  lw          $a0, 0x1C($a2)
    ctx->pc = 0x169c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x169c6c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x169c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x169c70: 0x0  nop
    ctx->pc = 0x169c70u;
    // NOP
    // 0x169c74: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x169c74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x169c78: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x169c78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x169c7c: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x169c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169c80: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x169C80u;
    {
        const bool branch_taken_0x169c80 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x169C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C80u;
        // 0x169c84: 0x460100c2  mul.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c80) {
            ctx->pc = 0x169C9Cu;
            goto label_169c9c;
        }
    }
    ctx->pc = 0x169C88u;
    // 0x169c88: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x169c88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x169c8c: 0x0  nop
    ctx->pc = 0x169c8cu;
    // NOP
    // 0x169c90: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x169c90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x169c94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x169C94u;
    {
        const bool branch_taken_0x169c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c94) {
            ctx->pc = 0x169CB8u;
            goto label_169cb8;
        }
    }
    ctx->pc = 0x169C9Cu;
label_169c9c:
    // 0x169c9c: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x169c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x169ca0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x169ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x169ca4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x169ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x169ca8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x169ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x169cac: 0x0  nop
    ctx->pc = 0x169cacu;
    // NOP
    // 0x169cb0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x169cb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x169cb4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x169cb4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_169cb8:
    // 0x169cb8: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x169cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x169cbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x169cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169cc0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x169cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x169cc4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x169cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169cc8: 0x2450ec58  addiu       $s0, $v0, -0x13A8
    ctx->pc = 0x169cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x169ccc: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x169cccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x169cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169cd4: 0x0  nop
    ctx->pc = 0x169cd4u;
    // NOP
    // 0x169cd8: 0x0  nop
    ctx->pc = 0x169cd8u;
    // NOP
    // 0x169cdc: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x169cdcu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[0]);
    // 0x169ce0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x169ce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x169ce4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x169ce4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x169ce8: 0xe4c1003c  swc1        $f1, 0x3C($a2)
    ctx->pc = 0x169ce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
    // 0x169cec: 0x866201d0  lh          $v0, 0x1D0($s3)
    ctx->pc = 0x169cecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 464)));
    // 0x169cf0: 0x866501d2  lh          $a1, 0x1D2($s3)
    ctx->pc = 0x169cf0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 466)));
    // 0x169cf4: 0xc0b2402  jal         func_2C9008
    ctx->pc = 0x169CF4u;
    SET_GPR_U32(ctx, 31, 0x169CFCu);
    ctx->pc = 0x169CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169CF4u;
    // 0x169cf8: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9008u, 0x169CF4u, 0x169CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169CFCu;
label_169cfc:
    // 0x169cfc: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x169CFCu;
    {
        const bool branch_taken_0x169cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169CFCu;
        // 0x169d00: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169cfc) {
            ctx->pc = 0x169DACu;
            goto label_169dac;
        }
    }
    ctx->pc = 0x169D04u;
    // 0x169d04: 0x8263005b  lb          $v1, 0x5B($s3)
    ctx->pc = 0x169d04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 91)));
    // 0x169d08: 0x50620029  beql        $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x169D08u;
    {
        const bool branch_taken_0x169d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x169d08) {
            ctx->pc = 0x169D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169D08u;
            // 0x169d0c: 0x966201d2  lhu         $v0, 0x1D2($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 466)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169DB0u;
            goto label_169db0;
        }
    }
    ctx->pc = 0x169D10u;
    // 0x169d10: 0x8e6301d8  lw          $v1, 0x1D8($s3)
    ctx->pc = 0x169d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 472)));
    // 0x169d14: 0x906202f6  lbu         $v0, 0x2F6($v1)
    ctx->pc = 0x169d14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 758)));
    // 0x169d18: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x169d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x169d1c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x169D1Cu;
    {
        const bool branch_taken_0x169d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169d1c) {
            ctx->pc = 0x169D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169D1Cu;
            // 0x169d20: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169D4Cu;
            goto label_169d4c;
        }
    }
    ctx->pc = 0x169D24u;
    // 0x169d24: 0x866201d0  lh          $v0, 0x1D0($s3)
    ctx->pc = 0x169d24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 464)));
    // 0x169d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d2c: 0x866501d2  lh          $a1, 0x1D2($s3)
    ctx->pc = 0x169d2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 466)));
    // 0x169d30: 0xc0b2402  jal         func_2C9008
    ctx->pc = 0x169D30u;
    SET_GPR_U32(ctx, 31, 0x169D38u);
    ctx->pc = 0x169D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D30u;
    // 0x169d34: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9008u, 0x169D30u, 0x169D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D38u;
label_169d38:
    // 0x169d38: 0x84430018  lh          $v1, 0x18($v0)
    ctx->pc = 0x169d38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x169d3c: 0x86620200  lh          $v0, 0x200($s3)
    ctx->pc = 0x169d3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 512)));
    // 0x169d40: 0x5043001b  beql        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x169D40u;
    {
        const bool branch_taken_0x169d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x169d40) {
            ctx->pc = 0x169D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169D40u;
            // 0x169d44: 0x966201d2  lhu         $v0, 0x1D2($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 466)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169DB0u;
            goto label_169db0;
        }
    }
    ctx->pc = 0x169D48u;
    // 0x169d48: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x169d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_169d4c:
    // 0x169d4c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x169D4Cu;
    {
        const bool branch_taken_0x169d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D4Cu;
        // 0x169d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d4c) {
            ctx->pc = 0x169DACu;
            goto label_169dac;
        }
    }
    ctx->pc = 0x169D54u;
    // 0x169d54: 0x866201d0  lh          $v0, 0x1D0($s3)
    ctx->pc = 0x169d54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 464)));
    // 0x169d58: 0x866501d2  lh          $a1, 0x1D2($s3)
    ctx->pc = 0x169d58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 466)));
    // 0x169d5c: 0xc0b2402  jal         func_2C9008
    ctx->pc = 0x169D5Cu;
    SET_GPR_U32(ctx, 31, 0x169D64u);
    ctx->pc = 0x169D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D5Cu;
    // 0x169d60: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9008u, 0x169D5Cu, 0x169D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D64u;
label_169d64:
    // 0x169d64: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x169d64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x169d68: 0xc042e60  jal         func_10B980
    ctx->pc = 0x169D68u;
    SET_GPR_U32(ctx, 31, 0x169D70u);
    ctx->pc = 0x169D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D68u;
    // 0x169d6c: 0x8e6401d8  lw          $a0, 0x1D8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 472)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B980u, 0x169D68u, 0x169D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D70u;
label_169d70:
    // 0x169d70: 0x866201d0  lh          $v0, 0x1D0($s3)
    ctx->pc = 0x169d70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 464)));
    // 0x169d74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d78: 0x866501d2  lh          $a1, 0x1D2($s3)
    ctx->pc = 0x169d78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 466)));
    // 0x169d7c: 0xc0b2402  jal         func_2C9008
    ctx->pc = 0x169D7Cu;
    SET_GPR_U32(ctx, 31, 0x169D84u);
    ctx->pc = 0x169D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D7Cu;
    // 0x169d80: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9008u, 0x169D7Cu, 0x169D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D84u;
label_169d84:
    // 0x169d84: 0x94430018  lhu         $v1, 0x18($v0)
    ctx->pc = 0x169d84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x169d88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d8c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x169d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169d90: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x169d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x169d94: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x169D94u;
    SET_GPR_U32(ctx, 31, 0x169D9Cu);
    ctx->pc = 0x169D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D94u;
    // 0x169d98: 0xa6630200  sh          $v1, 0x200($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 512), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x169D94u, 0x169D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D9Cu;
label_169d9c:
    // 0x169d9c: 0x8e6301d8  lw          $v1, 0x1D8($s3)
    ctx->pc = 0x169d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 472)));
    // 0x169da0: 0xa6600282  sh          $zero, 0x282($s3)
    ctx->pc = 0x169da0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 642), (uint16_t)GPR_U32(ctx, 0));
    // 0x169da4: 0xa6600280  sh          $zero, 0x280($s3)
    ctx->pc = 0x169da4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 640), (uint16_t)GPR_U32(ctx, 0));
    // 0x169da8: 0xa46003ac  sh          $zero, 0x3AC($v1)
    ctx->pc = 0x169da8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 940), (uint16_t)GPR_U32(ctx, 0));
label_169dac:
    // 0x169dac: 0x966201d2  lhu         $v0, 0x1D2($s3)
    ctx->pc = 0x169dacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 466)));
label_169db0:
    // 0x169db0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x169db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169db4: 0x966501d0  lhu         $a1, 0x1D0($s3)
    ctx->pc = 0x169db4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 464)));
    // 0x169db8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x169db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x169dbc: 0xc05af38  jal         func_16BCE0
    ctx->pc = 0x169DBCu;
    SET_GPR_U32(ctx, 31, 0x169DC4u);
    ctx->pc = 0x169DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169DBCu;
    // 0x169dc0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BCE0u, 0x169DBCu, 0x169DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169DC4u;
label_169dc4:
    // 0x169dc4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x169dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x169dc8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x169dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x169dcc: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x169dccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x169dd0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x169dd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x169dd4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x169dd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x169dd8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x169dd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x169ddc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x169ddcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169de0: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x169de0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x169de4: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x169de4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x169de8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x169de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169dec: 0x3e00008  jr          $ra
    ctx->pc = 0x169DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DECu;
        // 0x169df0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169DF4u;
    // 0x169df4: 0x0  nop
    ctx->pc = 0x169df4u;
    // NOP
    ctx->pc = 0x169df8u;
}
