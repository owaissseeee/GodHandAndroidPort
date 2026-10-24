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

// Function: func_001A5208
// Address: 0x1a5208 - 0x1a5470
void func_001A5208_0x1a5208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A5208_0x1a5208");
#endif

    switch (ctx->pc) {
        case 0x1a5208u: goto label_1a5208;
        case 0x1a520cu: goto label_1a520c;
        case 0x1a5210u: goto label_1a5210;
        case 0x1a5214u: goto label_1a5214;
        case 0x1a5218u: goto label_1a5218;
        case 0x1a521cu: goto label_1a521c;
        case 0x1a5220u: goto label_1a5220;
        case 0x1a5224u: goto label_1a5224;
        case 0x1a5228u: goto label_1a5228;
        case 0x1a522cu: goto label_1a522c;
        case 0x1a5230u: goto label_1a5230;
        case 0x1a5234u: goto label_1a5234;
        case 0x1a5238u: goto label_1a5238;
        case 0x1a523cu: goto label_1a523c;
        case 0x1a5240u: goto label_1a5240;
        case 0x1a5244u: goto label_1a5244;
        case 0x1a5248u: goto label_1a5248;
        case 0x1a524cu: goto label_1a524c;
        case 0x1a5250u: goto label_1a5250;
        case 0x1a5254u: goto label_1a5254;
        case 0x1a5258u: goto label_1a5258;
        case 0x1a525cu: goto label_1a525c;
        case 0x1a5260u: goto label_1a5260;
        case 0x1a5264u: goto label_1a5264;
        case 0x1a5268u: goto label_1a5268;
        case 0x1a526cu: goto label_1a526c;
        case 0x1a5270u: goto label_1a5270;
        case 0x1a5274u: goto label_1a5274;
        case 0x1a5278u: goto label_1a5278;
        case 0x1a527cu: goto label_1a527c;
        case 0x1a5280u: goto label_1a5280;
        case 0x1a5284u: goto label_1a5284;
        case 0x1a5288u: goto label_1a5288;
        case 0x1a528cu: goto label_1a528c;
        case 0x1a5290u: goto label_1a5290;
        case 0x1a5294u: goto label_1a5294;
        case 0x1a5298u: goto label_1a5298;
        case 0x1a529cu: goto label_1a529c;
        case 0x1a52a0u: goto label_1a52a0;
        case 0x1a52a4u: goto label_1a52a4;
        case 0x1a52a8u: goto label_1a52a8;
        case 0x1a52acu: goto label_1a52ac;
        case 0x1a52b0u: goto label_1a52b0;
        case 0x1a52b4u: goto label_1a52b4;
        case 0x1a52b8u: goto label_1a52b8;
        case 0x1a52bcu: goto label_1a52bc;
        case 0x1a52c0u: goto label_1a52c0;
        case 0x1a52c4u: goto label_1a52c4;
        case 0x1a52c8u: goto label_1a52c8;
        case 0x1a52ccu: goto label_1a52cc;
        case 0x1a52d0u: goto label_1a52d0;
        case 0x1a52d4u: goto label_1a52d4;
        case 0x1a52d8u: goto label_1a52d8;
        case 0x1a52dcu: goto label_1a52dc;
        case 0x1a52e0u: goto label_1a52e0;
        case 0x1a52e4u: goto label_1a52e4;
        case 0x1a52e8u: goto label_1a52e8;
        case 0x1a52ecu: goto label_1a52ec;
        case 0x1a52f0u: goto label_1a52f0;
        case 0x1a52f4u: goto label_1a52f4;
        case 0x1a52f8u: goto label_1a52f8;
        case 0x1a52fcu: goto label_1a52fc;
        case 0x1a5300u: goto label_1a5300;
        case 0x1a5304u: goto label_1a5304;
        case 0x1a5308u: goto label_1a5308;
        case 0x1a530cu: goto label_1a530c;
        case 0x1a5310u: goto label_1a5310;
        case 0x1a5314u: goto label_1a5314;
        case 0x1a5318u: goto label_1a5318;
        case 0x1a531cu: goto label_1a531c;
        case 0x1a5320u: goto label_1a5320;
        case 0x1a5324u: goto label_1a5324;
        case 0x1a5328u: goto label_1a5328;
        case 0x1a532cu: goto label_1a532c;
        case 0x1a5330u: goto label_1a5330;
        case 0x1a5334u: goto label_1a5334;
        case 0x1a5338u: goto label_1a5338;
        case 0x1a533cu: goto label_1a533c;
        case 0x1a5340u: goto label_1a5340;
        case 0x1a5344u: goto label_1a5344;
        case 0x1a5348u: goto label_1a5348;
        case 0x1a534cu: goto label_1a534c;
        case 0x1a5350u: goto label_1a5350;
        case 0x1a5354u: goto label_1a5354;
        case 0x1a5358u: goto label_1a5358;
        case 0x1a535cu: goto label_1a535c;
        case 0x1a5360u: goto label_1a5360;
        case 0x1a5364u: goto label_1a5364;
        case 0x1a5368u: goto label_1a5368;
        case 0x1a536cu: goto label_1a536c;
        case 0x1a5370u: goto label_1a5370;
        case 0x1a5374u: goto label_1a5374;
        case 0x1a5378u: goto label_1a5378;
        case 0x1a537cu: goto label_1a537c;
        case 0x1a5380u: goto label_1a5380;
        case 0x1a5384u: goto label_1a5384;
        case 0x1a5388u: goto label_1a5388;
        case 0x1a538cu: goto label_1a538c;
        case 0x1a5390u: goto label_1a5390;
        case 0x1a5394u: goto label_1a5394;
        case 0x1a5398u: goto label_1a5398;
        case 0x1a539cu: goto label_1a539c;
        case 0x1a53a0u: goto label_1a53a0;
        case 0x1a53a4u: goto label_1a53a4;
        case 0x1a53a8u: goto label_1a53a8;
        case 0x1a53acu: goto label_1a53ac;
        case 0x1a53b0u: goto label_1a53b0;
        case 0x1a53b4u: goto label_1a53b4;
        case 0x1a53b8u: goto label_1a53b8;
        case 0x1a53bcu: goto label_1a53bc;
        case 0x1a53c0u: goto label_1a53c0;
        case 0x1a53c4u: goto label_1a53c4;
        case 0x1a53c8u: goto label_1a53c8;
        case 0x1a53ccu: goto label_1a53cc;
        case 0x1a53d0u: goto label_1a53d0;
        case 0x1a53d4u: goto label_1a53d4;
        case 0x1a53d8u: goto label_1a53d8;
        case 0x1a53dcu: goto label_1a53dc;
        case 0x1a53e0u: goto label_1a53e0;
        case 0x1a53e4u: goto label_1a53e4;
        case 0x1a53e8u: goto label_1a53e8;
        case 0x1a53ecu: goto label_1a53ec;
        case 0x1a53f0u: goto label_1a53f0;
        case 0x1a53f4u: goto label_1a53f4;
        case 0x1a53f8u: goto label_1a53f8;
        case 0x1a53fcu: goto label_1a53fc;
        case 0x1a5400u: goto label_1a5400;
        case 0x1a5404u: goto label_1a5404;
        case 0x1a5408u: goto label_1a5408;
        case 0x1a540cu: goto label_1a540c;
        case 0x1a5410u: goto label_1a5410;
        case 0x1a5414u: goto label_1a5414;
        case 0x1a5418u: goto label_1a5418;
        case 0x1a541cu: goto label_1a541c;
        case 0x1a5420u: goto label_1a5420;
        case 0x1a5424u: goto label_1a5424;
        case 0x1a5428u: goto label_1a5428;
        case 0x1a542cu: goto label_1a542c;
        case 0x1a5430u: goto label_1a5430;
        case 0x1a5434u: goto label_1a5434;
        case 0x1a5438u: goto label_1a5438;
        case 0x1a543cu: goto label_1a543c;
        case 0x1a5440u: goto label_1a5440;
        case 0x1a5444u: goto label_1a5444;
        case 0x1a5448u: goto label_1a5448;
        case 0x1a544cu: goto label_1a544c;
        case 0x1a5450u: goto label_1a5450;
        case 0x1a5454u: goto label_1a5454;
        case 0x1a5458u: goto label_1a5458;
        case 0x1a545cu: goto label_1a545c;
        case 0x1a5460u: goto label_1a5460;
        case 0x1a5464u: goto label_1a5464;
        case 0x1a5468u: goto label_1a5468;
        case 0x1a546cu: goto label_1a546c;
        default: break;
    }

    ctx->pc = 0x1a5208u;

label_1a5208:
    // 0x1a5208: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a5208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a520c:
    // 0x1a520c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a520cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1a5210:
    // 0x1a5210: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a5210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5214:
    // 0x1a5214: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a5214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1a5218:
    // 0x1a5218: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a5218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1a521c:
    // 0x1a521c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a521cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a5220:
    // 0x1a5220: 0xc06dbee  jal         func_1B6FB8
label_1a5224:
    if (ctx->pc == 0x1A5224u) {
        ctx->pc = 0x1A5224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5220u;
        // 0x1a5224: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5228u;
        goto label_1a5228;
    }
    ctx->pc = 0x1A5220u;
    SET_GPR_U32(ctx, 31, 0x1A5228u);
    ctx->pc = 0x1A5224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5220u;
    // 0x1a5224: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1A5220u, 0x1A5228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5228u;
label_1a5228:
    // 0x1a5228: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1a5228u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a522c:
    // 0x1a522c: 0x26044380  addiu       $a0, $s0, 0x4380
    ctx->pc = 0x1a522cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17280));
label_1a5230:
    // 0x1a5230: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a5230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a5234:
    // 0x1a5234: 0xc07f83a  jal         func_1FE0E8
label_1a5238:
    if (ctx->pc == 0x1A5238u) {
        ctx->pc = 0x1A5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5234u;
        // 0x1a5238: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A523Cu;
        goto label_1a523c;
    }
    ctx->pc = 0x1A5234u;
    SET_GPR_U32(ctx, 31, 0x1A523Cu);
    ctx->pc = 0x1A5238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5234u;
    // 0x1a5238: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1A5234u, 0x1A523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A523Cu;
label_1a523c:
    // 0x1a523c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1a5240:
    if (ctx->pc == 0x1A5240u) {
        ctx->pc = 0x1A5240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A523Cu;
        // 0x1a5240: 0xae220620  sw          $v0, 0x620($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5244u;
        goto label_1a5244;
    }
    ctx->pc = 0x1A523Cu;
    {
        const bool branch_taken_0x1a523c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A523Cu;
        // 0x1a5240: 0xae220620  sw          $v0, 0x620($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a523c) {
            ctx->pc = 0x1A52B8u;
            goto label_1a52b8;
        }
    }
    ctx->pc = 0x1A5244u;
label_1a5244:
    // 0x1a5244: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1a5244u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1a5248:
    // 0x1a5248: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a524c:
    if (ctx->pc == 0x1A524Cu) {
        ctx->pc = 0x1A524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5248u;
        // 0x1a524c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5250u;
        goto label_1a5250;
    }
    ctx->pc = 0x1A5248u;
    {
        const bool branch_taken_0x1a5248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5248u;
        // 0x1a524c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5248) {
            ctx->pc = 0x1A525Cu;
            goto label_1a525c;
        }
    }
    ctx->pc = 0x1A5250u;
label_1a5250:
    // 0x1a5250: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1a5250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_1a5254:
    // 0x1a5254: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a5258:
    if (ctx->pc == 0x1A5258u) {
        ctx->pc = 0x1A5258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5254u;
        // 0x1a5258: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A525Cu;
        goto label_1a525c;
    }
    ctx->pc = 0x1A5254u;
    {
        const bool branch_taken_0x1a5254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5254u;
        // 0x1a5258: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5254) {
            ctx->pc = 0x1A5260u;
            goto label_1a5260;
        }
    }
    ctx->pc = 0x1A525Cu;
label_1a525c:
    // 0x1a525c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a525cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5260:
    // 0x1a5260: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1a5260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1a5264:
    // 0x1a5264: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1a5264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a5268:
    // 0x1a5268: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1a5268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1a526c:
    // 0x1a526c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1a526cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1a5270:
    // 0x1a5270: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1a5270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1a5274:
    // 0x1a5274: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a5274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5278:
    // 0x1a5278: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a5278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a527c:
    // 0x1a527c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a527cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5280:
    // 0x1a5280: 0x8e240620  lw          $a0, 0x620($s1)
    ctx->pc = 0x1a5280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
label_1a5284:
    // 0x1a5284: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1a5284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1a5288:
    // 0x1a5288: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a5288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a528c:
    // 0x1a528c: 0xc07f6bc  jal         func_1FDAF0
label_1a5290:
    if (ctx->pc == 0x1A5290u) {
        ctx->pc = 0x1A5290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A528Cu;
        // 0x1a5290: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5294u;
        goto label_1a5294;
    }
    ctx->pc = 0x1A528Cu;
    SET_GPR_U32(ctx, 31, 0x1A5294u);
    ctx->pc = 0x1A5290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A528Cu;
    // 0x1a5290: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1A528Cu, 0x1A5294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5294u;
label_1a5294:
    // 0x1a5294: 0x8e240620  lw          $a0, 0x620($s1)
    ctx->pc = 0x1a5294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
label_1a5298:
    // 0x1a5298: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x1a5298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_1a529c:
    // 0x1a529c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x1a529cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1a52a0:
    // 0x1a52a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a52a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a52a4:
    // 0x1a52a4: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1a52a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
label_1a52a8:
    // 0x1a52a8: 0x8e220620  lw          $v0, 0x620($s1)
    ctx->pc = 0x1a52a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
label_1a52ac:
    // 0x1a52ac: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x1a52acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
label_1a52b0:
    // 0x1a52b0: 0xc07f59a  jal         func_1FD668
label_1a52b4:
    if (ctx->pc == 0x1A52B4u) {
        ctx->pc = 0x1A52B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52B0u;
        // 0x1a52b4: 0x8e240620  lw          $a0, 0x620($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52B8u;
        goto label_1a52b8;
    }
    ctx->pc = 0x1A52B0u;
    SET_GPR_U32(ctx, 31, 0x1A52B8u);
    ctx->pc = 0x1A52B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A52B0u;
    // 0x1a52b4: 0x8e240620  lw          $a0, 0x620($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1A52B0u, 0x1A52B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A52B8u;
label_1a52b8:
    // 0x1a52b8: 0x26444380  addiu       $a0, $s2, 0x4380
    ctx->pc = 0x1a52b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 17280));
label_1a52bc:
    // 0x1a52bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a52bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a52c0:
    // 0x1a52c0: 0xc07f886  jal         func_1FE218
label_1a52c4:
    if (ctx->pc == 0x1A52C4u) {
        ctx->pc = 0x1A52C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52C0u;
        // 0x1a52c4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52C8u;
        goto label_1a52c8;
    }
    ctx->pc = 0x1A52C0u;
    SET_GPR_U32(ctx, 31, 0x1A52C8u);
    ctx->pc = 0x1A52C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A52C0u;
    // 0x1a52c4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1A52C0u, 0x1A52C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A52C8u;
label_1a52c8:
    // 0x1a52c8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1a52cc:
    if (ctx->pc == 0x1A52CCu) {
        ctx->pc = 0x1A52CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52C8u;
        // 0x1a52cc: 0xae220624  sw          $v0, 0x624($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52D0u;
        goto label_1a52d0;
    }
    ctx->pc = 0x1A52C8u;
    {
        const bool branch_taken_0x1a52c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A52CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52C8u;
        // 0x1a52cc: 0xae220624  sw          $v0, 0x624($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a52c8) {
            ctx->pc = 0x1A5338u;
            goto label_1a5338;
        }
    }
    ctx->pc = 0x1A52D0u;
label_1a52d0:
    // 0x1a52d0: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1a52d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1a52d4:
    // 0x1a52d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a52d8:
    if (ctx->pc == 0x1A52D8u) {
        ctx->pc = 0x1A52D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52D4u;
        // 0x1a52d8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52DCu;
        goto label_1a52dc;
    }
    ctx->pc = 0x1A52D4u;
    {
        const bool branch_taken_0x1a52d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A52D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52D4u;
        // 0x1a52d8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a52d4) {
            ctx->pc = 0x1A52E8u;
            goto label_1a52e8;
        }
    }
    ctx->pc = 0x1A52DCu;
label_1a52dc:
    // 0x1a52dc: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1a52dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_1a52e0:
    // 0x1a52e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a52e4:
    if (ctx->pc == 0x1A52E4u) {
        ctx->pc = 0x1A52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52E0u;
        // 0x1a52e4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52E8u;
        goto label_1a52e8;
    }
    ctx->pc = 0x1A52E0u;
    {
        const bool branch_taken_0x1a52e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52E0u;
        // 0x1a52e4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a52e0) {
            ctx->pc = 0x1A52ECu;
            goto label_1a52ec;
        }
    }
    ctx->pc = 0x1A52E8u;
label_1a52e8:
    // 0x1a52e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a52e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a52ec:
    // 0x1a52ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a52ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a52f0:
    // 0x1a52f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a52f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a52f4:
    // 0x1a52f4: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x1a52f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1a52f8:
    // 0x1a52f8: 0x8e240624  lw          $a0, 0x624($s1)
    ctx->pc = 0x1a52f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1572)));
label_1a52fc:
    // 0x1a52fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a52fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a5300:
    // 0x1a5300: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1a5300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_1a5304:
    // 0x1a5304: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a5304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a5308:
    // 0x1a5308: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1a5308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1a530c:
    // 0x1a530c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a530cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a5310:
    // 0x1a5310: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1a5310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1a5314:
    // 0x1a5314: 0xc07f6bc  jal         func_1FDAF0
label_1a5318:
    if (ctx->pc == 0x1A5318u) {
        ctx->pc = 0x1A5318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5314u;
        // 0x1a5318: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A531Cu;
        goto label_1a531c;
    }
    ctx->pc = 0x1A5314u;
    SET_GPR_U32(ctx, 31, 0x1A531Cu);
    ctx->pc = 0x1A5318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5314u;
    // 0x1a5318: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1A5314u, 0x1A531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A531Cu;
label_1a531c:
    // 0x1a531c: 0x8e230624  lw          $v1, 0x624($s1)
    ctx->pc = 0x1a531cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1572)));
label_1a5320:
    // 0x1a5320: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a5320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5324:
    // 0x1a5324: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a5324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a5328:
    // 0x1a5328: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a5328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a532c:
    // 0x1a532c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a532cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1a5330:
    // 0x1a5330: 0xc07f59a  jal         func_1FD668
label_1a5334:
    if (ctx->pc == 0x1A5334u) {
        ctx->pc = 0x1A5334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5330u;
        // 0x1a5334: 0x8e240624  lw          $a0, 0x624($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5338u;
        goto label_1a5338;
    }
    ctx->pc = 0x1A5330u;
    SET_GPR_U32(ctx, 31, 0x1A5338u);
    ctx->pc = 0x1A5334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5330u;
    // 0x1a5334: 0x8e240624  lw          $a0, 0x624($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1572)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1A5330u, 0x1A5338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5338u;
label_1a5338:
    // 0x1a5338: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1a5338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1a533c:
    // 0x1a533c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a533cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a5340:
    // 0x1a5340: 0x24502fc0  addiu       $s0, $v0, 0x2FC0
    ctx->pc = 0x1a5340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12224));
label_1a5344:
    // 0x1a5344: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1a5344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1a5348:
    // 0x1a5348: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1a5348u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1a534c:
    // 0x1a534c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a534cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a5350:
    // 0x1a5350: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x1a5350u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_1a5354:
    // 0x1a5354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5358:
    // 0x1a5358: 0xa6230548  sh          $v1, 0x548($s1)
    ctx->pc = 0x1a5358u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1352), (uint16_t)GPR_U32(ctx, 3));
label_1a535c:
    // 0x1a535c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a535cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5360:
    // 0x1a5360: 0xc04d1be  jal         func_1346F8
label_1a5364:
    if (ctx->pc == 0x1A5364u) {
        ctx->pc = 0x1A5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5360u;
        // 0x1a5364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5368u;
        goto label_1a5368;
    }
    ctx->pc = 0x1A5360u;
    SET_GPR_U32(ctx, 31, 0x1A5368u);
    ctx->pc = 0x1A5364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5360u;
    // 0x1a5364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1346F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346F8u, 0x1A5360u, 0x1A5368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5368u;
label_1a5368:
    // 0x1a5368: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1a5368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1a536c:
    // 0x1a536c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a5370:
    if (ctx->pc == 0x1A5370u) {
        ctx->pc = 0x1A5370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A536Cu;
        // 0x1a5370: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5374u;
        goto label_1a5374;
    }
    ctx->pc = 0x1A536Cu;
    {
        const bool branch_taken_0x1a536c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A536Cu;
        // 0x1a5370: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a536c) {
            ctx->pc = 0x1A5380u;
            goto label_1a5380;
        }
    }
    ctx->pc = 0x1A5374u;
label_1a5374:
    // 0x1a5374: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1a5374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_1a5378:
    // 0x1a5378: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a537c:
    if (ctx->pc == 0x1A537Cu) {
        ctx->pc = 0x1A537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5378u;
        // 0x1a537c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5380u;
        goto label_1a5380;
    }
    ctx->pc = 0x1A5378u;
    {
        const bool branch_taken_0x1a5378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5378u;
        // 0x1a537c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5378) {
            ctx->pc = 0x1A5384u;
            goto label_1a5384;
        }
    }
    ctx->pc = 0x1A5380u;
label_1a5380:
    // 0x1a5380: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5384:
    // 0x1a5384: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a5384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a5388:
    // 0x1a5388: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a5388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a538c:
    // 0x1a538c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1a538cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a5390:
    // 0x1a5390: 0x3c013ff3  lui         $at, 0x3FF3
    ctx->pc = 0x1a5390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16371 << 16));
label_1a5394:
    // 0x1a5394: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1a5394u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1a5398:
    // 0x1a5398: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a5398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a539c:
    // 0x1a539c: 0x24460080  addiu       $a2, $v0, 0x80
    ctx->pc = 0x1a539cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1a53a0:
    // 0x1a53a0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1a53a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1a53a4:
    // 0x1a53a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a53a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a53a8:
    // 0x1a53a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1a53a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1a53ac:
    // 0x1a53ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a53acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a53b0:
    // 0x1a53b0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1a53b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1a53b4:
    // 0x1a53b4: 0xc04d220  jal         func_134880
label_1a53b8:
    if (ctx->pc == 0x1A53B8u) {
        ctx->pc = 0x1A53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53B4u;
        // 0x1a53b8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53BCu;
        goto label_1a53bc;
    }
    ctx->pc = 0x1A53B4u;
    SET_GPR_U32(ctx, 31, 0x1A53BCu);
    ctx->pc = 0x1A53B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A53B4u;
    // 0x1a53b8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134880u, 0x1A53B4u, 0x1A53BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53BCu;
label_1a53bc:
    // 0x1a53bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a53bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a53c0:
    // 0x1a53c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a53c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a53c4:
    // 0x1a53c4: 0xc06dcc0  jal         func_1B7300
label_1a53c8:
    if (ctx->pc == 0x1A53C8u) {
        ctx->pc = 0x1A53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53C4u;
        // 0x1a53c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53CCu;
        goto label_1a53cc;
    }
    ctx->pc = 0x1A53C4u;
    SET_GPR_U32(ctx, 31, 0x1A53CCu);
    ctx->pc = 0x1A53C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A53C4u;
    // 0x1a53c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1A53C4u, 0x1A53CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53CCu;
label_1a53cc:
    // 0x1a53cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a53ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a53d0:
    // 0x1a53d0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1a53d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1a53d4:
    // 0x1a53d4: 0xc06dcc0  jal         func_1B7300
label_1a53d8:
    if (ctx->pc == 0x1A53D8u) {
        ctx->pc = 0x1A53D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53D4u;
        // 0x1a53d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53DCu;
        goto label_1a53dc;
    }
    ctx->pc = 0x1A53D4u;
    SET_GPR_U32(ctx, 31, 0x1A53DCu);
    ctx->pc = 0x1A53D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A53D4u;
    // 0x1a53d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1A53D4u, 0x1A53DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53DCu;
label_1a53dc:
    // 0x1a53dc: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1a53dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_1a53e0:
    // 0x1a53e0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1a53e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1a53e4:
    // 0x1a53e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a53e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a53e8:
    // 0x1a53e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a53e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a53ec:
    // 0x1a53ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a53ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a53f0:
    // 0x1a53f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a53f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a53f4:
    // 0x1a53f4: 0xc06dca0  jal         func_1B7280
label_1a53f8:
    if (ctx->pc == 0x1A53F8u) {
        ctx->pc = 0x1A53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53F4u;
        // 0x1a53f8: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53FCu;
        goto label_1a53fc;
    }
    ctx->pc = 0x1A53F4u;
    SET_GPR_U32(ctx, 31, 0x1A53FCu);
    ctx->pc = 0x1A53F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A53F4u;
    // 0x1a53f8: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1A53F4u, 0x1A53FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53FCu;
label_1a53fc:
    // 0x1a53fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a53fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5400:
    // 0x1a5400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5404:
    // 0x1a5404: 0xc06dca0  jal         func_1B7280
label_1a5408:
    if (ctx->pc == 0x1A5408u) {
        ctx->pc = 0x1A5408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5404u;
        // 0x1a5408: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A540Cu;
        goto label_1a540c;
    }
    ctx->pc = 0x1A5404u;
    SET_GPR_U32(ctx, 31, 0x1A540Cu);
    ctx->pc = 0x1A5408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5404u;
    // 0x1a5408: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1A5404u, 0x1A540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A540Cu;
label_1a540c:
    // 0x1a540c: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x1a540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
label_1a5410:
    // 0x1a5410: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x1a5410u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
label_1a5414:
    // 0x1a5414: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1a5414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1a5418:
    // 0x1a5418: 0x26107b00  addiu       $s0, $s0, 0x7B00
    ctx->pc = 0x1a5418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31488));
label_1a541c:
    // 0x1a541c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1a541cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1a5420:
    // 0x1a5420: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a5420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5424:
    // 0x1a5424: 0xae2205b8  sw          $v0, 0x5B8($s1)
    ctx->pc = 0x1a5424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 2));
label_1a5428:
    // 0x1a5428: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1a5428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1a542c:
    // 0x1a542c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1a542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1a5430:
    // 0x1a5430: 0x40f809  jalr        $v0
label_1a5434:
    if (ctx->pc == 0x1A5434u) {
        ctx->pc = 0x1A5434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5430u;
        // 0x1a5434: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5438u;
        goto label_1a5438;
    }
    ctx->pc = 0x1A5430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5438u);
        ctx->pc = 0x1A5434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5430u;
        // 0x1a5434: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5430u, 0x1A5438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5438u;
label_1a5438:
    // 0x1a5438: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1a5438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1a543c:
    // 0x1a543c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a543cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5440:
    // 0x1a5440: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x1a5440u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_1a5444:
    // 0x1a5444: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x1a5444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_1a5448:
    // 0x1a5448: 0x40f809  jalr        $v0
label_1a544c:
    if (ctx->pc == 0x1A544Cu) {
        ctx->pc = 0x1A544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5448u;
        // 0x1a544c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5450u;
        goto label_1a5450;
    }
    ctx->pc = 0x1A5448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5450u);
        ctx->pc = 0x1A544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5448u;
        // 0x1a544c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5448u, 0x1A5450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5450u;
label_1a5450:
    // 0x1a5450: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a5450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a5454:
    // 0x1a5454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5458:
    // 0x1a5458: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a5458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a545c:
    // 0x1a545c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a545cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a5460:
    // 0x1a5460: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a5460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5464:
    // 0x1a5464: 0x3e00008  jr          $ra
label_1a5468:
    if (ctx->pc == 0x1A5468u) {
        ctx->pc = 0x1A5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5464u;
        // 0x1a5468: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A546Cu;
        goto label_1a546c;
    }
    ctx->pc = 0x1A5464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5464u;
        // 0x1a5468: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A546Cu;
label_1a546c:
    // 0x1a546c: 0x0  nop
    ctx->pc = 0x1a546cu;
    // NOP
    ctx->pc = 0x1a5470u;
}
