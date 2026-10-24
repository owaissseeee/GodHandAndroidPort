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

// Function: func_001311A0
// Address: 0x1311a0 - 0x131e10
void func_001311A0_0x1311a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001311A0_0x1311a0");
#endif

    switch (ctx->pc) {
        case 0x131210u: goto label_131210;
        case 0x1312ccu: goto label_1312cc;
        case 0x1313e8u: goto label_1313e8;
        case 0x1313f4u: goto label_1313f4;
        case 0x131408u: goto label_131408;
        case 0x131450u: goto label_131450;
        case 0x1314e0u: goto label_1314e0;
        case 0x131570u: goto label_131570;
        case 0x131600u: goto label_131600;
        case 0x131670u: goto label_131670;
        case 0x131688u: goto label_131688;
        case 0x1316a0u: goto label_1316a0;
        case 0x1316b8u: goto label_1316b8;
        case 0x1316e8u: goto label_1316e8;
        case 0x131728u: goto label_131728;
        case 0x131738u: goto label_131738;
        case 0x131754u: goto label_131754;
        case 0x131764u: goto label_131764;
        case 0x1317d8u: goto label_1317d8;
        case 0x131850u: goto label_131850;
        case 0x131968u: goto label_131968;
        case 0x131974u: goto label_131974;
        case 0x131990u: goto label_131990;
        case 0x1319d8u: goto label_1319d8;
        case 0x131a68u: goto label_131a68;
        case 0x131af8u: goto label_131af8;
        case 0x131b88u: goto label_131b88;
        case 0x131bf8u: goto label_131bf8;
        case 0x131c10u: goto label_131c10;
        case 0x131c28u: goto label_131c28;
        case 0x131c40u: goto label_131c40;
        case 0x131c70u: goto label_131c70;
        case 0x131cb0u: goto label_131cb0;
        case 0x131cc0u: goto label_131cc0;
        case 0x131cdcu: goto label_131cdc;
        case 0x131cecu: goto label_131cec;
        case 0x131d60u: goto label_131d60;
        default: break;
    }

    ctx->pc = 0x1311a0u;

    // 0x1311a0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1311a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1311a4: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x1311a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x1311a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1311a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311ac: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x1311acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x1311b0: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x1311b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x1311b4: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x1311b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x1311b8: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x1311b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x1311bc: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x1311bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x1311c0: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x1311c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x1311c4: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x1311c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
    // 0x1311c8: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x1311c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
    // 0x1311cc: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1311ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1311d0: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x1311d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x1311d4: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x1311d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1311d8: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x1311d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1311dc: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x1311dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x1311e0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1311e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1311e4: 0x8e120190  lw          $s2, 0x190($s0)
    ctx->pc = 0x1311e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x1311e8: 0x124002f9  beqz        $s2, . + 4 + (0x2F9 << 2)
    ctx->pc = 0x1311E8u;
    {
        const bool branch_taken_0x1311e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1311ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1311E8u;
        // 0x1311ec: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1311e8) {
            ctx->pc = 0x131DD0u;
            goto label_131dd0;
        }
    }
    ctx->pc = 0x1311F0u;
    // 0x1311f0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1311f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1311f4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1311f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1311f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1311f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1311fc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1311fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x131200: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x131200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x131204: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x131204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x131208: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x131208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
    // 0x13120c: 0x9e420008  lwu         $v0, 0x8($s2)
    ctx->pc = 0x13120cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_131210:
    // 0x131210: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x131210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x131214: 0x104002eb  beqz        $v0, . + 4 + (0x2EB << 2)
    ctx->pc = 0x131214u;
    {
        const bool branch_taken_0x131214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131214u;
        // 0x131218: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131214) {
            ctx->pc = 0x131DC4u;
            goto label_131dc4;
        }
    }
    ctx->pc = 0x13121Cu;
    // 0x13121c: 0xc6030110  lwc1        $f3, 0x110($s0)
    ctx->pc = 0x13121cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x131220: 0xc6020120  lwc1        $f2, 0x120($s0)
    ctx->pc = 0x131220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131224: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x131224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x131228: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x131228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13122c: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x13122cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131230: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x131230u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x131234: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x131234u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x131238: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x131238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13123c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13123cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x131240: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x131240u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x131244: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x131244u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x131248: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x131248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x13124c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x13124cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x131250: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x131250u;
    {
        const bool branch_taken_0x131250 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x131254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131250u;
        // 0x131254: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131250) {
            ctx->pc = 0x131270u;
            goto label_131270;
        }
    }
    ctx->pc = 0x131258u;
    // 0x131258: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x131258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13125c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x13125cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131260: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x131260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x131264: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x131264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x131268: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x131268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13126c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x13126cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_131270:
    // 0x131270: 0xc6030110  lwc1        $f3, 0x110($s0)
    ctx->pc = 0x131270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x131274: 0x260600a0  addiu       $a2, $s0, 0xA0
    ctx->pc = 0x131274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x131278: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x131278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13127c: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x13127cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131280: 0xc6020128  lwc1        $f2, 0x128($s0)
    ctx->pc = 0x131280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131284: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x131284u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x131288: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x131288u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x13128c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x13128cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x131290: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x131290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x131294: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x131294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x131298: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x131298u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x13129c: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13129Cu;
    {
        const bool branch_taken_0x13129c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1312A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13129Cu;
        // 0x1312a0: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13129c) {
            ctx->pc = 0x1312BCu;
            goto label_1312bc;
        }
    }
    ctx->pc = 0x1312A4u;
    // 0x1312a4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1312a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1312a8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1312a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1312ac: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x1312acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x1312b0: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1312b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1312b4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1312b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1312b8: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1312b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1312bc:
    // 0x1312bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1312bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1312c0: 0x26470010  addiu       $a3, $s2, 0x10
    ctx->pc = 0x1312c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1312c4: 0xc04cd02  jal         func_133408
    ctx->pc = 0x1312C4u;
    SET_GPR_U32(ctx, 31, 0x1312CCu);
    ctx->pc = 0x1312C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1312C4u;
    // 0x1312c8: 0x26480020  addiu       $t0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133408u, 0x1312C4u, 0x1312CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312CCu;
label_1312cc:
    // 0x1312cc: 0x104002bd  beqz        $v0, . + 4 + (0x2BD << 2)
    ctx->pc = 0x1312CCu;
    {
        const bool branch_taken_0x1312cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1312D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312CCu;
        // 0x1312d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312cc) {
            ctx->pc = 0x131DC4u;
            goto label_131dc4;
        }
    }
    ctx->pc = 0x1312D4u;
    // 0x1312d4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1312d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1312d8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1312D8u;
    {
        const bool branch_taken_0x1312d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1312DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312D8u;
        // 0x1312dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312d8) {
            ctx->pc = 0x1312F0u;
            goto label_1312f0;
        }
    }
    ctx->pc = 0x1312E0u;
    // 0x1312e0: 0x10620151  beq         $v1, $v0, . + 4 + (0x151 << 2)
    ctx->pc = 0x1312E0u;
    {
        const bool branch_taken_0x1312e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1312E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312E0u;
        // 0x1312e4: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312e0) {
            ctx->pc = 0x131828u;
            goto label_131828;
        }
    }
    ctx->pc = 0x1312E8u;
    // 0x1312e8: 0x100002b7  b           . + 4 + (0x2B7 << 2)
    ctx->pc = 0x1312E8u;
    {
        const bool branch_taken_0x1312e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1312ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312E8u;
        // 0x1312ec: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312e8) {
            ctx->pc = 0x131DC8u;
            goto label_131dc8;
        }
    }
    ctx->pc = 0x1312F0u;
label_1312f0:
    // 0x1312f0: 0x265100a8  addiu       $s1, $s2, 0xA8
    ctx->pc = 0x1312f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
    // 0x1312f4: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1312f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1312f8: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1312f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1312fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1312fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x131300: 0x504002b1  beql        $v0, $zero, . + 4 + (0x2B1 << 2)
    ctx->pc = 0x131300u;
    {
        const bool branch_taken_0x131300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131300) {
            ctx->pc = 0x131304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131300u;
            // 0x131304: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131DC8u;
            goto label_131dc8;
        }
    }
    ctx->pc = 0x131308u;
    // 0x131308: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x131308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13130c: 0x8e030178  lw          $v1, 0x178($s0)
    ctx->pc = 0x13130cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x131310: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x131310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x131314: 0x544002ac  bnel        $v0, $zero, . + 4 + (0x2AC << 2)
    ctx->pc = 0x131314u;
    {
        const bool branch_taken_0x131314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131314) {
            ctx->pc = 0x131318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131314u;
            // 0x131318: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131DC8u;
            goto label_131dc8;
        }
    }
    ctx->pc = 0x13131Cu;
    // 0x13131c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x13131cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x131320: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x131320u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131324: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x131324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131328: 0x2463d630  addiu       $v1, $v1, -0x29D0
    ctx->pc = 0x131328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956592));
    // 0x13132c: 0x24c6d630  addiu       $a2, $a2, -0x29D0
    ctx->pc = 0x13132cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956592));
    // 0x131330: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x131330u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x41D634u));
    // 0x131334: 0x8c43d630  lw          $v1, -0x29D0($v0)
    ctx->pc = 0x131334u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x41D630u));
    // 0x131338: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x131338u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x41D638u));
    // 0x13133c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13133cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x131340: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x131340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x131344: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x131344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x131348: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x131348u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x13134c: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x13134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x131350: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x131350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x131354: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x131354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x131358: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x131358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x13135c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x13135cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x131360: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x131360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x131364: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x131364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x131368: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x131368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x13136c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x13136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x131370: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x131370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x131374: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x131374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x131378: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x131378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x13137c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x13137cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x131380: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x131380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131384: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x131384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x131388: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x131388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13138c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x13138cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131390: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x131390u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131394: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x131394u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131398: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x131398u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x13139c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x13139cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1313a0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1313a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1313a4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1313a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1313a8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1313a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1313ac: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1313acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1313b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1313b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1313b4: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1313b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1313b8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1313b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1313bc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1313bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1313c0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1313c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1313c4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1313c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1313c8: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1313c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1313cc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1313ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1313d0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1313d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1313d4: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x1313d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1313d8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1313d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1313dc: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x1313dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1313e0: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x1313E0u;
    SET_GPR_U32(ctx, 31, 0x1313E8u);
    ctx->pc = 0x1313E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313E0u;
    // 0x1313e4: 0x26130120  addiu       $s3, $s0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x1313E0u, 0x1313E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313E8u;
label_1313e8:
    // 0x1313e8: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x1313e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1313ec: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x1313ECu;
    SET_GPR_U32(ctx, 31, 0x1313F4u);
    ctx->pc = 0x1313F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313ECu;
    // 0x1313f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x1313ECu, 0x1313F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313F4u;
label_1313f4:
    // 0x1313f4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1313f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1313f8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1313f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1313fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1313fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131400: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x131400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x131404: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x131404u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_131408:
    // 0x131408: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x131408u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13140c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13140cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x131410: 0x0  nop
    ctx->pc = 0x131410u;
    // NOP
    // 0x131414: 0x0  nop
    ctx->pc = 0x131414u;
    // NOP
    // 0x131418: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x131418u;
    {
        const bool branch_taken_0x131418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x13141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131418u;
        // 0x13141c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131418) {
            ctx->pc = 0x131408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131408;
        }
    }
    ctx->pc = 0x131420u;
    // 0x131420: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x131420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131424: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x131424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131428: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x131428u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13142c: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x13142cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x131430: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x131430u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x131434: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x131434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131438: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x131438u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13143c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x13143cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131440: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x131440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131444: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x131444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x131448: 0xc04078a  jal         func_101E28
    ctx->pc = 0x131448u;
    SET_GPR_U32(ctx, 31, 0x131450u);
    ctx->pc = 0x13144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131448u;
    // 0x13144c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x131448u, 0x131450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131450u;
label_131450:
    // 0x131450: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x131450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131454: 0x0  nop
    ctx->pc = 0x131454u;
    // NOP
    // 0x131458: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x131458u;
    {
        const bool branch_taken_0x131458 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131458u;
        // 0x13145c: 0xc7a30040  lwc1        $f3, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131458) {
            ctx->pc = 0x131494u;
            goto label_131494;
        }
    }
    ctx->pc = 0x131460u;
    // 0x131460: 0x0  nop
    ctx->pc = 0x131460u;
    // NOP
    // 0x131464: 0x0  nop
    ctx->pc = 0x131464u;
    // NOP
    // 0x131468: 0x4600b083  div.s       $f2, $f22, $f0
    ctx->pc = 0x131468u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[0]);
    // 0x13146c: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x13146cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x131470: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x131470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131474: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x131474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131478: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x131478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x13147c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x13147cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x131480: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x131480u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x131484: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x131484u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x131488: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x131488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x13148c: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x13148cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x131490: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x131490u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_131494:
    // 0x131494: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x131494u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x131498: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x131498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13149c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x13149cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1314a0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1314a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1314a4: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1314a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1314a8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1314a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1314ac: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1314acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1314b0: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1314b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1314b4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1314b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1314b8: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1314b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1314bc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1314bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1314c0: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x1314c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1314c4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1314c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1314c8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1314c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1314cc: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1314ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1314d0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1314d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1314d4: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1314d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1314d8: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1314D8u;
    SET_GPR_U32(ctx, 31, 0x1314E0u);
    ctx->pc = 0x1314DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1314D8u;
    // 0x1314dc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1314D8u, 0x1314E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1314E0u;
label_1314e0:
    // 0x1314e0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1314e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1314e4: 0x0  nop
    ctx->pc = 0x1314e4u;
    // NOP
    // 0x1314e8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1314E8u;
    {
        const bool branch_taken_0x1314e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1314ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1314E8u;
        // 0x1314ec: 0xc7a30040  lwc1        $f3, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1314e8) {
            ctx->pc = 0x131524u;
            goto label_131524;
        }
    }
    ctx->pc = 0x1314F0u;
    // 0x1314f0: 0x0  nop
    ctx->pc = 0x1314f0u;
    // NOP
    // 0x1314f4: 0x0  nop
    ctx->pc = 0x1314f4u;
    // NOP
    // 0x1314f8: 0x4600b083  div.s       $f2, $f22, $f0
    ctx->pc = 0x1314f8u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[0]);
    // 0x1314fc: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x1314fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x131500: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x131500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131504: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x131504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131508: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x131508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x13150c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x13150cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x131510: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x131510u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x131514: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x131514u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x131518: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x131518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x13151c: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x13151cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x131520: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x131520u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_131524:
    // 0x131524: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x131524u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x131528: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x131528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13152c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x13152cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131530: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x131530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131534: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x131534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131538: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x131538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x13153c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x13153cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x131540: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x131540u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x131544: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x131544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x131548: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x131548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13154c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x13154cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131550: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x131550u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x131554: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x131554u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x131558: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x131558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13155c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x13155cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x131560: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x131560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131564: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x131564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131568: 0xc04078a  jal         func_101E28
    ctx->pc = 0x131568u;
    SET_GPR_U32(ctx, 31, 0x131570u);
    ctx->pc = 0x13156Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131568u;
    // 0x13156c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x131568u, 0x131570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131570u;
label_131570:
    // 0x131570: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x131570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131574: 0x0  nop
    ctx->pc = 0x131574u;
    // NOP
    // 0x131578: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x131578u;
    {
        const bool branch_taken_0x131578 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131578u;
        // 0x13157c: 0xc7a30040  lwc1        $f3, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131578) {
            ctx->pc = 0x1315B4u;
            goto label_1315b4;
        }
    }
    ctx->pc = 0x131580u;
    // 0x131580: 0x0  nop
    ctx->pc = 0x131580u;
    // NOP
    // 0x131584: 0x0  nop
    ctx->pc = 0x131584u;
    // NOP
    // 0x131588: 0x4600b083  div.s       $f2, $f22, $f0
    ctx->pc = 0x131588u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[0]);
    // 0x13158c: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x13158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x131590: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x131590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131594: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x131594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131598: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x131598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x13159c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x13159cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1315a0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1315a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1315a4: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x1315a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1315a8: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1315a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1315ac: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x1315acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1315b0: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x1315b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1315b4:
    // 0x1315b4: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1315b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1315b8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1315b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1315bc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1315bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1315c0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1315c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1315c4: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1315c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1315c8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1315c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1315cc: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1315ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1315d0: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x1315d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1315d4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1315d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1315d8: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1315d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1315dc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1315dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1315e0: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x1315e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1315e4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1315e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1315e8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1315e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1315ec: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1315ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1315f0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1315f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1315f4: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1315f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1315f8: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1315F8u;
    SET_GPR_U32(ctx, 31, 0x131600u);
    ctx->pc = 0x1315FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1315F8u;
    // 0x1315fc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1315F8u, 0x131600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131600u;
label_131600:
    // 0x131600: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x131600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131604: 0x0  nop
    ctx->pc = 0x131604u;
    // NOP
    // 0x131608: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x131608u;
    {
        const bool branch_taken_0x131608 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131608u;
        // 0x13160c: 0xc7a30040  lwc1        $f3, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131608) {
            ctx->pc = 0x131644u;
            goto label_131644;
        }
    }
    ctx->pc = 0x131610u;
    // 0x131610: 0x0  nop
    ctx->pc = 0x131610u;
    // NOP
    // 0x131614: 0x0  nop
    ctx->pc = 0x131614u;
    // NOP
    // 0x131618: 0x4600b083  div.s       $f2, $f22, $f0
    ctx->pc = 0x131618u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[0]);
    // 0x13161c: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x13161cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x131620: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x131620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131624: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x131624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131628: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x131628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x13162c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x13162cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x131630: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x131630u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x131634: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x131634u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x131638: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x131638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x13163c: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x13163cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x131640: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x131640u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_131644:
    // 0x131644: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x131644u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x131648: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x131648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13164c: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x13164cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131650: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x131650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131654: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x131654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131658: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x131658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13165c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x13165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131660: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x131660u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x131664: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x131664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x131668: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x131668u;
    SET_GPR_U32(ctx, 31, 0x131670u);
    ctx->pc = 0x13166Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131668u;
    // 0x13166c: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x131668u, 0x131670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131670u;
label_131670:
    // 0x131670: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x131670u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131674: 0x0  nop
    ctx->pc = 0x131674u;
    // NOP
    // 0x131678: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x131678u;
    {
        const bool branch_taken_0x131678 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131678u;
        // 0x13167c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131678) {
            ctx->pc = 0x1316C8u;
            goto label_1316c8;
        }
    }
    ctx->pc = 0x131680u;
    // 0x131680: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x131680u;
    SET_GPR_U32(ctx, 31, 0x131688u);
    ctx->pc = 0x131684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131680u;
    // 0x131684: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x131680u, 0x131688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131688u;
label_131688:
    // 0x131688: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x131688u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13168c: 0x0  nop
    ctx->pc = 0x13168cu;
    // NOP
    // 0x131690: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x131690u;
    {
        const bool branch_taken_0x131690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x131694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131690u;
        // 0x131694: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131690) {
            ctx->pc = 0x1316C8u;
            goto label_1316c8;
        }
    }
    ctx->pc = 0x131698u;
    // 0x131698: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x131698u;
    SET_GPR_U32(ctx, 31, 0x1316A0u);
    ctx->pc = 0x13169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131698u;
    // 0x13169c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x131698u, 0x1316A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1316A0u;
label_1316a0:
    // 0x1316a0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1316a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1316a4: 0x0  nop
    ctx->pc = 0x1316a4u;
    // NOP
    // 0x1316a8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1316A8u;
    {
        const bool branch_taken_0x1316a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1316ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316A8u;
        // 0x1316ac: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1316a8) {
            ctx->pc = 0x1316C8u;
            goto label_1316c8;
        }
    }
    ctx->pc = 0x1316B0u;
    // 0x1316b0: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x1316B0u;
    SET_GPR_U32(ctx, 31, 0x1316B8u);
    ctx->pc = 0x1316B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1316B0u;
    // 0x1316b4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x1316B0u, 0x1316B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1316B8u;
label_1316b8:
    // 0x1316b8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1316b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1316bc: 0x0  nop
    ctx->pc = 0x1316bcu;
    // NOP
    // 0x1316c0: 0x450301c1  bc1tl       . + 4 + (0x1C1 << 2)
    ctx->pc = 0x1316C0u;
    {
        const bool branch_taken_0x1316c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1316c0) {
            ctx->pc = 0x1316C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1316C0u;
            // 0x1316c4: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131DC8u;
            goto label_131dc8;
        }
    }
    ctx->pc = 0x1316C8u;
label_1316c8:
    // 0x1316c8: 0xc60c0110  lwc1        $f12, 0x110($s0)
    ctx->pc = 0x1316c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1316cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1316ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1316d0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1316d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1316d4: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x1316d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1316d8: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x1316d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1316dc: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x1316dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1316e0: 0xc04d754  jal         func_135D50
    ctx->pc = 0x1316E0u;
    SET_GPR_U32(ctx, 31, 0x1316E8u);
    ctx->pc = 0x1316E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1316E0u;
    // 0x1316e4: 0x8fa8001c  lw          $t0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D50u, 0x1316E0u, 0x1316E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1316E8u;
label_1316e8:
    // 0x1316e8: 0x104001b6  beqz        $v0, . + 4 + (0x1B6 << 2)
    ctx->pc = 0x1316E8u;
    {
        const bool branch_taken_0x1316e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1316ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1316E8u;
        // 0x1316ec: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1316e8) {
            ctx->pc = 0x131DC4u;
            goto label_131dc4;
        }
    }
    ctx->pc = 0x1316F0u;
    // 0x1316f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1316f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1316f4: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1316f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1316f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1316f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1316fc: 0xc6140120  lwc1        $f20, 0x120($s0)
    ctx->pc = 0x1316fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x131700: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x131700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131704: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x131704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131708: 0x4602a501  sub.s       $f20, $f20, $f2
    ctx->pc = 0x131708u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x13170c: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x13170cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131710: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x131710u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x131714: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x131714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x131718: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x131718u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x13171c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x13171cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x131720: 0xc0c292e  jal         func_30A4B8
    ctx->pc = 0x131720u;
    SET_GPR_U32(ctx, 31, 0x131728u);
    ctx->pc = 0x131724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131720u;
    // 0x131724: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4B8u, 0x131720u, 0x131728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131728u;
label_131728:
    // 0x131728: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x131728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13172c: 0xc60c0110  lwc1        $f12, 0x110($s0)
    ctx->pc = 0x13172cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x131730: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x131730u;
    SET_GPR_U32(ctx, 31, 0x131738u);
    ctx->pc = 0x131734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131730u;
    // 0x131734: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x131730u, 0x131738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131738u;
label_131738:
    // 0x131738: 0x0  nop
    ctx->pc = 0x131738u;
    // NOP
    // 0x13173c: 0x0  nop
    ctx->pc = 0x13173cu;
    // NOP
    // 0x131740: 0x46140504  c1          0x140504
    ctx->pc = 0x131740u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[20]);
    // 0x131744: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x131744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x131748: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x131748u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13174c: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x13174Cu;
    SET_GPR_U32(ctx, 31, 0x131754u);
    ctx->pc = 0x131750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13174Cu;
    // 0x131750: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x13174Cu, 0x131754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131754u;
label_131754:
    // 0x131754: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x131754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x131758: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x131758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13175c: 0xc0c292e  jal         func_30A4B8
    ctx->pc = 0x13175Cu;
    SET_GPR_U32(ctx, 31, 0x131764u);
    ctx->pc = 0x131760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13175Cu;
    // 0x131760: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4B8u, 0x13175Cu, 0x131764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131764u;
label_131764:
    // 0x131764: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x131764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131768: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x131768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13176c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x13176cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x131770: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x131770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x131774: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x131774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131778: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x131778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x13177c: 0x8e04018c  lw          $a0, 0x18C($s0)
    ctx->pc = 0x13177cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x131780: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x131780u;
    {
        const bool branch_taken_0x131780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x131780) {
            ctx->pc = 0x131784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131780u;
            // 0x131784: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1317B4u;
            goto label_1317b4;
        }
    }
    ctx->pc = 0x131788u;
    // 0x131788: 0x8e03017c  lw          $v1, 0x17C($s0)
    ctx->pc = 0x131788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x13178c: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x13178cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x131790: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x131790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x131794: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x131794u;
    {
        const bool branch_taken_0x131794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131794u;
        // 0x131798: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131794) {
            ctx->pc = 0x1317B0u;
            goto label_1317b0;
        }
    }
    ctx->pc = 0x13179Cu;
    // 0x13179c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13179cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1317a0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1317a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1317a4: 0x8e03017c  lw          $v1, 0x17C($s0)
    ctx->pc = 0x1317a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x1317a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1317a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1317ac: 0xae03017c  sw          $v1, 0x17C($s0)
    ctx->pc = 0x1317acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 3));
label_1317b0:
    // 0x1317b0: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x1317b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_1317b4:
    // 0x1317b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1317b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1317b8: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1317b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1317bc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1317BCu;
    {
        const bool branch_taken_0x1317bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1317C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317BCu;
        // 0x1317c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1317bc) {
            ctx->pc = 0x13181Cu;
            goto label_13181c;
        }
    }
    ctx->pc = 0x1317C4u;
    // 0x1317c4: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1317C4u;
    {
        const bool branch_taken_0x1317c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1317C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317C4u;
        // 0x1317c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1317c4) {
            ctx->pc = 0x1317FCu;
            goto label_1317fc;
        }
    }
    ctx->pc = 0x1317CCu;
    // 0x1317cc: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1317ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1317d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1317D0u;
    {
        const bool branch_taken_0x1317d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1317D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317D0u;
        // 0x1317d4: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1317d0) {
            ctx->pc = 0x1317F0u;
            goto label_1317f0;
        }
    }
    ctx->pc = 0x1317D8u;
label_1317d8:
    // 0x1317d8: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x1317d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1317dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1317DCu;
    {
        const bool branch_taken_0x1317dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1317E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317DCu;
        // 0x1317e0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1317dc) {
            ctx->pc = 0x1317FCu;
            goto label_1317fc;
        }
    }
    ctx->pc = 0x1317E4u;
    // 0x1317e4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1317e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1317e8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1317e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1317ec: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1317ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1317f0:
    // 0x1317f0: 0x5462fff9  bnel        $v1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1317F0u;
    {
        const bool branch_taken_0x1317f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1317f0) {
            ctx->pc = 0x1317F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1317F0u;
            // 0x1317f4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1317D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1317d8;
        }
    }
    ctx->pc = 0x1317F8u;
    // 0x1317f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1317f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1317fc:
    // 0x1317fc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1317FCu;
    {
        const bool branch_taken_0x1317fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x131800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317FCu;
        // 0x131800: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1317fc) {
            ctx->pc = 0x13181Cu;
            goto label_13181c;
        }
    }
    ctx->pc = 0x131804u;
    // 0x131804: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x131804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x131808: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x131808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x13180c: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x13180cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x131810: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x131810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x131814: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x131814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x131818: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x131818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_13181c:
    // 0x13181c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13181cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131820: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x131820u;
    {
        const bool branch_taken_0x131820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131820u;
        // 0x131824: 0xa2020180  sb          $v0, 0x180($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131820) {
            ctx->pc = 0x131DC4u;
            goto label_131dc4;
        }
    }
    ctx->pc = 0x131828u;
label_131828:
    // 0x131828: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x131828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13182c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x13182cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x131830: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x131830u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x131834: 0x26420034  addiu       $v0, $s2, 0x34
    ctx->pc = 0x131834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x131838: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x131838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x13183c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x13183cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x131840: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x131840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131844: 0x27be0020  addiu       $fp, $sp, 0x20
    ctx->pc = 0x131844u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x131848: 0x27b60070  addiu       $s6, $sp, 0x70
    ctx->pc = 0x131848u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13184c: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x13184cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_131850:
    // 0x131850: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x131850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x131854: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x131854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x131858: 0x24a300b0  addiu       $v1, $a1, 0xB0
    ctx->pc = 0x131858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x13185c: 0xafa600bc  sw          $a2, 0xBC($sp)
    ctx->pc = 0x13185cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
    // 0x131860: 0x243b821  addu        $s7, $s2, $v1
    ctx->pc = 0x131860u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x131864: 0x96e20002  lhu         $v0, 0x2($s7)
    ctx->pc = 0x131864u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x131868: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x131868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x13186c: 0x10400152  beqz        $v0, . + 4 + (0x152 << 2)
    ctx->pc = 0x13186Cu;
    {
        const bool branch_taken_0x13186c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13186Cu;
        // 0x131870: 0x8fa600bc  lw          $a2, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13186c) {
            ctx->pc = 0x131DB8u;
            goto label_131db8;
        }
    }
    ctx->pc = 0x131874u;
    // 0x131874: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x131874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x131878: 0x8e030178  lw          $v1, 0x178($s0)
    ctx->pc = 0x131878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x13187c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13187cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x131880: 0x5440014e  bnel        $v0, $zero, . + 4 + (0x14E << 2)
    ctx->pc = 0x131880u;
    {
        const bool branch_taken_0x131880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131880) {
            ctx->pc = 0x131884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131880u;
            // 0x131884: 0x2cc20006  sltiu       $v0, $a2, 0x6 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x131DBCu;
            goto label_131dbc;
        }
    }
    ctx->pc = 0x131888u;
    // 0x131888: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x131888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x13188c: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x13188cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x131890: 0x2463d64c  addiu       $v1, $v1, -0x29B4
    ctx->pc = 0x131890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956620));
    // 0x131894: 0x24c6d640  addiu       $a2, $a2, -0x29C0
    ctx->pc = 0x131894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956608));
    // 0x131898: 0xa34021  addu        $t0, $a1, $v1
    ctx->pc = 0x131898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13189c: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x13189cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1318a0: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x1318a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x1318a4: 0x2463d640  addiu       $v1, $v1, -0x29C0
    ctx->pc = 0x1318a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956608));
    // 0x1318a8: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1318a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1318ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1318acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1318b0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1318b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1318b4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1318b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1318b8: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1318b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1318bc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1318bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1318c0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1318c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1318c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1318c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1318c8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1318c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1318cc: 0x24a50110  addiu       $a1, $a1, 0x110
    ctx->pc = 0x1318ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    // 0x1318d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1318d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1318d4: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x1318d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x1318d8: 0x24840110  addiu       $a0, $a0, 0x110
    ctx->pc = 0x1318d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x1318dc: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x1318dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1318e0: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x1318e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1318e4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1318e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1318e8: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1318e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1318ec: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1318ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1318f0: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1318f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1318f4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1318f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1318f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1318f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1318fc: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1318fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x131900: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x131900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131904: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x131904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x131908: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x131908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13190c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x13190cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131910: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x131910u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131914: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x131914u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131918: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x131918u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x13191c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x13191cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131920: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x131920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x131924: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x131924u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x131928: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x131928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13192c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x13192cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x131930: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x131930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131934: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x131934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131938: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x131938u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13193c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x13193cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131940: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x131940u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x131944: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x131944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131948: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x131948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13194c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x13194cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131950: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x131950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131954: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x131954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x131958: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x131958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13195c: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x13195cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x131960: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x131960u;
    SET_GPR_U32(ctx, 31, 0x131968u);
    ctx->pc = 0x131964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131960u;
    // 0x131964: 0x26130120  addiu       $s3, $s0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x131960u, 0x131968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131968u;
label_131968:
    // 0x131968: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x131968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13196c: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x13196Cu;
    SET_GPR_U32(ctx, 31, 0x131974u);
    ctx->pc = 0x131970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13196Cu;
    // 0x131970: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x13196Cu, 0x131974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131974u;
label_131974:
    // 0x131974: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x131974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x131978: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x131978u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13197c: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x13197cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x131980: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x131980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x131984: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x131984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x131988: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x131988u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13198c: 0x0  nop
    ctx->pc = 0x13198cu;
    // NOP
label_131990:
    // 0x131990: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x131990u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131994: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x131994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x131998: 0x0  nop
    ctx->pc = 0x131998u;
    // NOP
    // 0x13199c: 0x0  nop
    ctx->pc = 0x13199cu;
    // NOP
    // 0x1319a0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1319A0u;
    {
        const bool branch_taken_0x1319a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1319A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1319A0u;
        // 0x1319a4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1319a0) {
            ctx->pc = 0x131990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131990;
        }
    }
    ctx->pc = 0x1319A8u;
    // 0x1319a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1319a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1319ac: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1319acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1319b0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1319b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1319b4: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x1319b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1319b8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1319b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1319bc: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1319bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1319c0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1319c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1319c4: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1319c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1319c8: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1319c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1319cc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1319ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1319d0: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1319D0u;
    SET_GPR_U32(ctx, 31, 0x1319D8u);
    ctx->pc = 0x1319D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1319D0u;
    // 0x1319d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1319D0u, 0x1319D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1319D8u;
label_1319d8:
    // 0x1319d8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1319d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1319dc: 0x0  nop
    ctx->pc = 0x1319dcu;
    // NOP
    // 0x1319e0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1319E0u;
    {
        const bool branch_taken_0x1319e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1319E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1319E0u;
        // 0x1319e4: 0xc7a30080  lwc1        $f3, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1319e0) {
            ctx->pc = 0x131A1Cu;
            goto label_131a1c;
        }
    }
    ctx->pc = 0x1319E8u;
    // 0x1319e8: 0x0  nop
    ctx->pc = 0x1319e8u;
    // NOP
    // 0x1319ec: 0x0  nop
    ctx->pc = 0x1319ecu;
    // NOP
    // 0x1319f0: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x1319f0u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x1319f4: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x1319f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1319f8: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1319f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1319fc: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1319fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131a00: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x131a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x131a04: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x131a04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x131a08: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x131a08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x131a0c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x131a0cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x131a10: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x131a10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x131a14: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x131a14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x131a18: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x131a18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_131a1c:
    // 0x131a1c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x131a1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131a20: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x131a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131a24: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x131a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131a28: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x131a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131a2c: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x131a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131a30: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x131a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x131a34: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x131a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x131a38: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x131a38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x131a3c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x131a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x131a40: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x131a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131a44: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x131a44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131a48: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x131a48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x131a4c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x131a4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x131a50: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x131a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131a54: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x131a54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131a58: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x131a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131a5c: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x131a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131a60: 0xc04078a  jal         func_101E28
    ctx->pc = 0x131A60u;
    SET_GPR_U32(ctx, 31, 0x131A68u);
    ctx->pc = 0x131A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A60u;
    // 0x131a64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x131A60u, 0x131A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A68u;
label_131a68:
    // 0x131a68: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x131a68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131a6c: 0x0  nop
    ctx->pc = 0x131a6cu;
    // NOP
    // 0x131a70: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x131A70u;
    {
        const bool branch_taken_0x131a70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x131A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131A70u;
        // 0x131a74: 0xc7a30080  lwc1        $f3, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131a70) {
            ctx->pc = 0x131AACu;
            goto label_131aac;
        }
    }
    ctx->pc = 0x131A78u;
    // 0x131a78: 0x0  nop
    ctx->pc = 0x131a78u;
    // NOP
    // 0x131a7c: 0x0  nop
    ctx->pc = 0x131a7cu;
    // NOP
    // 0x131a80: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x131a80u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x131a84: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x131a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x131a88: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x131a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131a8c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x131a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131a90: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x131a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x131a94: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x131a94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x131a98: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x131a98u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x131a9c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x131a9cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x131aa0: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x131aa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x131aa4: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x131aa4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x131aa8: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x131aa8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_131aac:
    // 0x131aac: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x131aacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131ab0: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x131ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131ab4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x131ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131ab8: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x131ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131abc: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x131abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131ac0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x131ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x131ac4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x131ac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x131ac8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x131ac8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x131acc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x131accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x131ad0: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x131ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131ad4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x131ad4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131ad8: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x131ad8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x131adc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x131adcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x131ae0: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x131ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131ae4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x131ae4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131ae8: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x131ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131aec: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x131aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131af0: 0xc04078a  jal         func_101E28
    ctx->pc = 0x131AF0u;
    SET_GPR_U32(ctx, 31, 0x131AF8u);
    ctx->pc = 0x131AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131AF0u;
    // 0x131af4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x131AF0u, 0x131AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131AF8u;
label_131af8:
    // 0x131af8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x131af8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131afc: 0x0  nop
    ctx->pc = 0x131afcu;
    // NOP
    // 0x131b00: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x131B00u;
    {
        const bool branch_taken_0x131b00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x131B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B00u;
        // 0x131b04: 0xc7a30080  lwc1        $f3, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b00) {
            ctx->pc = 0x131B3Cu;
            goto label_131b3c;
        }
    }
    ctx->pc = 0x131B08u;
    // 0x131b08: 0x0  nop
    ctx->pc = 0x131b08u;
    // NOP
    // 0x131b0c: 0x0  nop
    ctx->pc = 0x131b0cu;
    // NOP
    // 0x131b10: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x131b10u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x131b14: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x131b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x131b18: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x131b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131b1c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x131b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131b20: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x131b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x131b24: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x131b24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x131b28: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x131b28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x131b2c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x131b2cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x131b30: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x131b30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x131b34: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x131b34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x131b38: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x131b38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_131b3c:
    // 0x131b3c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x131b3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131b40: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x131b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131b44: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x131b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131b48: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x131b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131b4c: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x131b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131b50: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x131b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x131b54: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x131b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x131b58: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x131b58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x131b5c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x131b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x131b60: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x131b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131b64: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x131b64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131b68: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x131b68u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x131b6c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x131b6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x131b70: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x131b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131b74: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x131b74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131b78: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x131b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131b7c: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x131b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x131b80: 0xc04078a  jal         func_101E28
    ctx->pc = 0x131B80u;
    SET_GPR_U32(ctx, 31, 0x131B88u);
    ctx->pc = 0x131B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131B80u;
    // 0x131b84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x131B80u, 0x131B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131B88u;
label_131b88:
    // 0x131b88: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x131b88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131b8c: 0x0  nop
    ctx->pc = 0x131b8cu;
    // NOP
    // 0x131b90: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x131B90u;
    {
        const bool branch_taken_0x131b90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x131B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B90u;
        // 0x131b94: 0xc7a30080  lwc1        $f3, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b90) {
            ctx->pc = 0x131BCCu;
            goto label_131bcc;
        }
    }
    ctx->pc = 0x131B98u;
    // 0x131b98: 0x0  nop
    ctx->pc = 0x131b98u;
    // NOP
    // 0x131b9c: 0x0  nop
    ctx->pc = 0x131b9cu;
    // NOP
    // 0x131ba0: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x131ba0u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x131ba4: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x131ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x131ba8: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x131ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131bac: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x131bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131bb0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x131bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x131bb4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x131bb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x131bb8: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x131bb8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x131bbc: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x131bbcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x131bc0: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x131bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x131bc4: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x131bc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x131bc8: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x131bc8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_131bcc:
    // 0x131bcc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x131bccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131bd0: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x131bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x131bd4: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x131bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131bd8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x131bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x131bdc: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x131bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131be0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x131be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x131be4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x131be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131be8: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x131be8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x131bec: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x131becu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x131bf0: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x131BF0u;
    SET_GPR_U32(ctx, 31, 0x131BF8u);
    ctx->pc = 0x131BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131BF0u;
    // 0x131bf4: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x131BF0u, 0x131BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131BF8u;
label_131bf8:
    // 0x131bf8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x131bf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131bfc: 0x0  nop
    ctx->pc = 0x131bfcu;
    // NOP
    // 0x131c00: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x131C00u;
    {
        const bool branch_taken_0x131c00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x131C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C00u;
        // 0x131c04: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c00) {
            ctx->pc = 0x131C50u;
            goto label_131c50;
        }
    }
    ctx->pc = 0x131C08u;
    // 0x131c08: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x131C08u;
    SET_GPR_U32(ctx, 31, 0x131C10u);
    ctx->pc = 0x131C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C08u;
    // 0x131c0c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x131C08u, 0x131C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C10u;
label_131c10:
    // 0x131c10: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x131c10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131c14: 0x0  nop
    ctx->pc = 0x131c14u;
    // NOP
    // 0x131c18: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x131C18u;
    {
        const bool branch_taken_0x131c18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x131C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C18u;
        // 0x131c1c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c18) {
            ctx->pc = 0x131C50u;
            goto label_131c50;
        }
    }
    ctx->pc = 0x131C20u;
    // 0x131c20: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x131C20u;
    SET_GPR_U32(ctx, 31, 0x131C28u);
    ctx->pc = 0x131C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C20u;
    // 0x131c24: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x131C20u, 0x131C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C28u;
label_131c28:
    // 0x131c28: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x131c28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131c2c: 0x0  nop
    ctx->pc = 0x131c2cu;
    // NOP
    // 0x131c30: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x131C30u;
    {
        const bool branch_taken_0x131c30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x131C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C30u;
        // 0x131c34: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c30) {
            ctx->pc = 0x131C50u;
            goto label_131c50;
        }
    }
    ctx->pc = 0x131C38u;
    // 0x131c38: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x131C38u;
    SET_GPR_U32(ctx, 31, 0x131C40u);
    ctx->pc = 0x131C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C38u;
    // 0x131c3c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x131C38u, 0x131C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C40u;
label_131c40:
    // 0x131c40: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x131c40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131c44: 0x0  nop
    ctx->pc = 0x131c44u;
    // NOP
    // 0x131c48: 0x4501005b  bc1t        . + 4 + (0x5B << 2)
    ctx->pc = 0x131C48u;
    {
        const bool branch_taken_0x131c48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x131C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C48u;
        // 0x131c4c: 0x8fa600bc  lw          $a2, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c48) {
            ctx->pc = 0x131DB8u;
            goto label_131db8;
        }
    }
    ctx->pc = 0x131C50u;
label_131c50:
    // 0x131c50: 0xc60c0110  lwc1        $f12, 0x110($s0)
    ctx->pc = 0x131c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x131c54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x131c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c58: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x131c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131c5c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x131c5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c60: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x131c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x131c64: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x131c64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x131c68: 0xc04d754  jal         func_135D50
    ctx->pc = 0x131C68u;
    SET_GPR_U32(ctx, 31, 0x131C70u);
    ctx->pc = 0x131C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C68u;
    // 0x131c6c: 0x8fa8001c  lw          $t0, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D50u, 0x131C68u, 0x131C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C70u;
label_131c70:
    // 0x131c70: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x131C70u;
    {
        const bool branch_taken_0x131c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C70u;
        // 0x131c74: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c70) {
            ctx->pc = 0x131DB4u;
            goto label_131db4;
        }
    }
    ctx->pc = 0x131C78u;
    // 0x131c78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x131c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c7c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x131c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x131c80: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x131c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c84: 0xc6140120  lwc1        $f20, 0x120($s0)
    ctx->pc = 0x131c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x131c88: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x131c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c8c: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x131c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131c90: 0x4602a501  sub.s       $f20, $f20, $f2
    ctx->pc = 0x131c90u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x131c94: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x131c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131c98: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x131c98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x131c9c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x131c9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x131ca0: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x131ca0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x131ca4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x131ca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x131ca8: 0xc0c292e  jal         func_30A4B8
    ctx->pc = 0x131CA8u;
    SET_GPR_U32(ctx, 31, 0x131CB0u);
    ctx->pc = 0x131CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131CA8u;
    // 0x131cac: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4B8u, 0x131CA8u, 0x131CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CB0u;
label_131cb0:
    // 0x131cb0: 0xc60c0110  lwc1        $f12, 0x110($s0)
    ctx->pc = 0x131cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x131cb4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x131cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131cb8: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x131CB8u;
    SET_GPR_U32(ctx, 31, 0x131CC0u);
    ctx->pc = 0x131CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131CB8u;
    // 0x131cbc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x131CB8u, 0x131CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CC0u;
label_131cc0:
    // 0x131cc0: 0x0  nop
    ctx->pc = 0x131cc0u;
    // NOP
    // 0x131cc4: 0x0  nop
    ctx->pc = 0x131cc4u;
    // NOP
    // 0x131cc8: 0x46140504  c1          0x140504
    ctx->pc = 0x131cc8u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[20]);
    // 0x131ccc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x131cccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x131cd0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x131cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131cd4: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x131CD4u;
    SET_GPR_U32(ctx, 31, 0x131CDCu);
    ctx->pc = 0x131CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131CD4u;
    // 0x131cd8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x131CD4u, 0x131CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CDCu;
label_131cdc:
    // 0x131cdc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x131cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131ce0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x131ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131ce4: 0xc0c292e  jal         func_30A4B8
    ctx->pc = 0x131CE4u;
    SET_GPR_U32(ctx, 31, 0x131CECu);
    ctx->pc = 0x131CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131CE4u;
    // 0x131ce8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4B8u, 0x131CE4u, 0x131CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CECu;
label_131cec:
    // 0x131cec: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x131cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131cf0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x131cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131cf4: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x131cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x131cf8: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x131cf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x131cfc: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x131cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131d00: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x131d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x131d04: 0x8e04018c  lw          $a0, 0x18C($s0)
    ctx->pc = 0x131d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x131d08: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x131D08u;
    {
        const bool branch_taken_0x131d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d08) {
            ctx->pc = 0x131D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131D08u;
            // 0x131d0c: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131D3Cu;
            goto label_131d3c;
        }
    }
    ctx->pc = 0x131D10u;
    // 0x131d10: 0x8e03017c  lw          $v1, 0x17C($s0)
    ctx->pc = 0x131d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x131d14: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x131d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x131d18: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x131d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x131d1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x131D1Cu;
    {
        const bool branch_taken_0x131d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131D1Cu;
        // 0x131d20: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131d1c) {
            ctx->pc = 0x131D38u;
            goto label_131d38;
        }
    }
    ctx->pc = 0x131D24u;
    // 0x131d24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x131d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x131d28: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x131d28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x131d2c: 0x8e03017c  lw          $v1, 0x17C($s0)
    ctx->pc = 0x131d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x131d30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x131d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x131d34: 0xae03017c  sw          $v1, 0x17C($s0)
    ctx->pc = 0x131d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 3));
label_131d38:
    // 0x131d38: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x131d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_131d3c:
    // 0x131d3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x131d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131d40: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x131d40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x131d44: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x131D44u;
    {
        const bool branch_taken_0x131d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131D44u;
        // 0x131d48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131d44) {
            ctx->pc = 0x131DACu;
            goto label_131dac;
        }
    }
    ctx->pc = 0x131D4Cu;
    // 0x131d4c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x131D4Cu;
    {
        const bool branch_taken_0x131d4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x131D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131D4Cu;
        // 0x131d50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131d4c) {
            ctx->pc = 0x131D88u;
            goto label_131d88;
        }
    }
    ctx->pc = 0x131D54u;
    // 0x131d54: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x131d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x131d58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x131D58u;
    {
        const bool branch_taken_0x131d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131D58u;
        // 0x131d5c: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131d58) {
            ctx->pc = 0x131D7Cu;
            goto label_131d7c;
        }
    }
    ctx->pc = 0x131D60u;
label_131d60:
    // 0x131d60: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x131d60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x131d64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x131D64u;
    {
        const bool branch_taken_0x131d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131D64u;
        // 0x131d68: 0x8fa300b8  lw          $v1, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131d64) {
            ctx->pc = 0x131D88u;
            goto label_131d88;
        }
    }
    ctx->pc = 0x131D6Cu;
    // 0x131d6c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x131d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x131d70: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x131d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x131d74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x131d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131d78: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x131d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_131d7c:
    // 0x131d7c: 0x5462fff8  bnel        $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x131D7Cu;
    {
        const bool branch_taken_0x131d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x131d7c) {
            ctx->pc = 0x131D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131D7Cu;
            // 0x131d80: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131d60;
        }
    }
    ctx->pc = 0x131D84u;
    // 0x131d84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x131d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131d88:
    // 0x131d88: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x131D88u;
    {
        const bool branch_taken_0x131d88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x131D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131D88u;
        // 0x131d8c: 0x8fa300b8  lw          $v1, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131d88) {
            ctx->pc = 0x131DACu;
            goto label_131dac;
        }
    }
    ctx->pc = 0x131D90u;
    // 0x131d90: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x131d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x131d94: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x131d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x131d98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x131d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x131d9c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x131d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x131da0: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x131da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x131da4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x131da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x131da8: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x131da8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_131dac:
    // 0x131dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131db0: 0xa2020180  sb          $v0, 0x180($s0)
    ctx->pc = 0x131db0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 384), (uint8_t)GPR_U32(ctx, 2));
label_131db4:
    // 0x131db4: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x131db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_131db8:
    // 0x131db8: 0x2cc20006  sltiu       $v0, $a2, 0x6
    ctx->pc = 0x131db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_131dbc:
    // 0x131dbc: 0x1440fea4  bnez        $v0, . + 4 + (-0x15C << 2)
    ctx->pc = 0x131DBCu;
    {
        const bool branch_taken_0x131dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131DBCu;
        // 0x131dc0: 0x62900  sll         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131dbc) {
            ctx->pc = 0x131850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131850;
        }
    }
    ctx->pc = 0x131DC4u;
label_131dc4:
    // 0x131dc4: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x131dc4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_131dc8:
    // 0x131dc8: 0x5640fd11  bnel        $s2, $zero, . + 4 + (-0x2EF << 2)
    ctx->pc = 0x131DC8u;
    {
        const bool branch_taken_0x131dc8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x131dc8) {
            ctx->pc = 0x131DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131DC8u;
            // 0x131dcc: 0x9e420008  lwu         $v0, 0x8($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131210;
        }
    }
    ctx->pc = 0x131DD0u;
label_131dd0:
    // 0x131dd0: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x131dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x131dd4: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x131dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x131dd8: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x131dd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x131ddc: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x131ddcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x131de0: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x131de0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x131de4: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x131de4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x131de8: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x131de8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x131dec: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x131decu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x131df0: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x131df0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x131df4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x131df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x131df8: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x131df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x131dfc: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x131dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x131e00: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x131e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x131e04: 0x3e00008  jr          $ra
    ctx->pc = 0x131E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E04u;
        // 0x131e08: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131E0Cu;
    // 0x131e0c: 0x0  nop
    ctx->pc = 0x131e0cu;
    // NOP
    ctx->pc = 0x131e10u;
}
