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

// Function: func_001F00E8
// Address: 0x1f00e8 - 0x1f0360
void func_001F00E8_0x1f00e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F00E8_0x1f00e8");
#endif

    switch (ctx->pc) {
        case 0x1f00e8u: goto label_1f00e8;
        case 0x1f00ecu: goto label_1f00ec;
        case 0x1f00f0u: goto label_1f00f0;
        case 0x1f00f4u: goto label_1f00f4;
        case 0x1f00f8u: goto label_1f00f8;
        case 0x1f00fcu: goto label_1f00fc;
        case 0x1f0100u: goto label_1f0100;
        case 0x1f0104u: goto label_1f0104;
        case 0x1f0108u: goto label_1f0108;
        case 0x1f010cu: goto label_1f010c;
        case 0x1f0110u: goto label_1f0110;
        case 0x1f0114u: goto label_1f0114;
        case 0x1f0118u: goto label_1f0118;
        case 0x1f011cu: goto label_1f011c;
        case 0x1f0120u: goto label_1f0120;
        case 0x1f0124u: goto label_1f0124;
        case 0x1f0128u: goto label_1f0128;
        case 0x1f012cu: goto label_1f012c;
        case 0x1f0130u: goto label_1f0130;
        case 0x1f0134u: goto label_1f0134;
        case 0x1f0138u: goto label_1f0138;
        case 0x1f013cu: goto label_1f013c;
        case 0x1f0140u: goto label_1f0140;
        case 0x1f0144u: goto label_1f0144;
        case 0x1f0148u: goto label_1f0148;
        case 0x1f014cu: goto label_1f014c;
        case 0x1f0150u: goto label_1f0150;
        case 0x1f0154u: goto label_1f0154;
        case 0x1f0158u: goto label_1f0158;
        case 0x1f015cu: goto label_1f015c;
        case 0x1f0160u: goto label_1f0160;
        case 0x1f0164u: goto label_1f0164;
        case 0x1f0168u: goto label_1f0168;
        case 0x1f016cu: goto label_1f016c;
        case 0x1f0170u: goto label_1f0170;
        case 0x1f0174u: goto label_1f0174;
        case 0x1f0178u: goto label_1f0178;
        case 0x1f017cu: goto label_1f017c;
        case 0x1f0180u: goto label_1f0180;
        case 0x1f0184u: goto label_1f0184;
        case 0x1f0188u: goto label_1f0188;
        case 0x1f018cu: goto label_1f018c;
        case 0x1f0190u: goto label_1f0190;
        case 0x1f0194u: goto label_1f0194;
        case 0x1f0198u: goto label_1f0198;
        case 0x1f019cu: goto label_1f019c;
        case 0x1f01a0u: goto label_1f01a0;
        case 0x1f01a4u: goto label_1f01a4;
        case 0x1f01a8u: goto label_1f01a8;
        case 0x1f01acu: goto label_1f01ac;
        case 0x1f01b0u: goto label_1f01b0;
        case 0x1f01b4u: goto label_1f01b4;
        case 0x1f01b8u: goto label_1f01b8;
        case 0x1f01bcu: goto label_1f01bc;
        case 0x1f01c0u: goto label_1f01c0;
        case 0x1f01c4u: goto label_1f01c4;
        case 0x1f01c8u: goto label_1f01c8;
        case 0x1f01ccu: goto label_1f01cc;
        case 0x1f01d0u: goto label_1f01d0;
        case 0x1f01d4u: goto label_1f01d4;
        case 0x1f01d8u: goto label_1f01d8;
        case 0x1f01dcu: goto label_1f01dc;
        case 0x1f01e0u: goto label_1f01e0;
        case 0x1f01e4u: goto label_1f01e4;
        case 0x1f01e8u: goto label_1f01e8;
        case 0x1f01ecu: goto label_1f01ec;
        case 0x1f01f0u: goto label_1f01f0;
        case 0x1f01f4u: goto label_1f01f4;
        case 0x1f01f8u: goto label_1f01f8;
        case 0x1f01fcu: goto label_1f01fc;
        case 0x1f0200u: goto label_1f0200;
        case 0x1f0204u: goto label_1f0204;
        case 0x1f0208u: goto label_1f0208;
        case 0x1f020cu: goto label_1f020c;
        case 0x1f0210u: goto label_1f0210;
        case 0x1f0214u: goto label_1f0214;
        case 0x1f0218u: goto label_1f0218;
        case 0x1f021cu: goto label_1f021c;
        case 0x1f0220u: goto label_1f0220;
        case 0x1f0224u: goto label_1f0224;
        case 0x1f0228u: goto label_1f0228;
        case 0x1f022cu: goto label_1f022c;
        case 0x1f0230u: goto label_1f0230;
        case 0x1f0234u: goto label_1f0234;
        case 0x1f0238u: goto label_1f0238;
        case 0x1f023cu: goto label_1f023c;
        case 0x1f0240u: goto label_1f0240;
        case 0x1f0244u: goto label_1f0244;
        case 0x1f0248u: goto label_1f0248;
        case 0x1f024cu: goto label_1f024c;
        case 0x1f0250u: goto label_1f0250;
        case 0x1f0254u: goto label_1f0254;
        case 0x1f0258u: goto label_1f0258;
        case 0x1f025cu: goto label_1f025c;
        case 0x1f0260u: goto label_1f0260;
        case 0x1f0264u: goto label_1f0264;
        case 0x1f0268u: goto label_1f0268;
        case 0x1f026cu: goto label_1f026c;
        case 0x1f0270u: goto label_1f0270;
        case 0x1f0274u: goto label_1f0274;
        case 0x1f0278u: goto label_1f0278;
        case 0x1f027cu: goto label_1f027c;
        case 0x1f0280u: goto label_1f0280;
        case 0x1f0284u: goto label_1f0284;
        case 0x1f0288u: goto label_1f0288;
        case 0x1f028cu: goto label_1f028c;
        case 0x1f0290u: goto label_1f0290;
        case 0x1f0294u: goto label_1f0294;
        case 0x1f0298u: goto label_1f0298;
        case 0x1f029cu: goto label_1f029c;
        case 0x1f02a0u: goto label_1f02a0;
        case 0x1f02a4u: goto label_1f02a4;
        case 0x1f02a8u: goto label_1f02a8;
        case 0x1f02acu: goto label_1f02ac;
        case 0x1f02b0u: goto label_1f02b0;
        case 0x1f02b4u: goto label_1f02b4;
        case 0x1f02b8u: goto label_1f02b8;
        case 0x1f02bcu: goto label_1f02bc;
        case 0x1f02c0u: goto label_1f02c0;
        case 0x1f02c4u: goto label_1f02c4;
        case 0x1f02c8u: goto label_1f02c8;
        case 0x1f02ccu: goto label_1f02cc;
        case 0x1f02d0u: goto label_1f02d0;
        case 0x1f02d4u: goto label_1f02d4;
        case 0x1f02d8u: goto label_1f02d8;
        case 0x1f02dcu: goto label_1f02dc;
        case 0x1f02e0u: goto label_1f02e0;
        case 0x1f02e4u: goto label_1f02e4;
        case 0x1f02e8u: goto label_1f02e8;
        case 0x1f02ecu: goto label_1f02ec;
        case 0x1f02f0u: goto label_1f02f0;
        case 0x1f02f4u: goto label_1f02f4;
        case 0x1f02f8u: goto label_1f02f8;
        case 0x1f02fcu: goto label_1f02fc;
        case 0x1f0300u: goto label_1f0300;
        case 0x1f0304u: goto label_1f0304;
        case 0x1f0308u: goto label_1f0308;
        case 0x1f030cu: goto label_1f030c;
        case 0x1f0310u: goto label_1f0310;
        case 0x1f0314u: goto label_1f0314;
        case 0x1f0318u: goto label_1f0318;
        case 0x1f031cu: goto label_1f031c;
        case 0x1f0320u: goto label_1f0320;
        case 0x1f0324u: goto label_1f0324;
        case 0x1f0328u: goto label_1f0328;
        case 0x1f032cu: goto label_1f032c;
        case 0x1f0330u: goto label_1f0330;
        case 0x1f0334u: goto label_1f0334;
        case 0x1f0338u: goto label_1f0338;
        case 0x1f033cu: goto label_1f033c;
        case 0x1f0340u: goto label_1f0340;
        case 0x1f0344u: goto label_1f0344;
        case 0x1f0348u: goto label_1f0348;
        case 0x1f034cu: goto label_1f034c;
        case 0x1f0350u: goto label_1f0350;
        case 0x1f0354u: goto label_1f0354;
        case 0x1f0358u: goto label_1f0358;
        case 0x1f035cu: goto label_1f035c;
        default: break;
    }

    ctx->pc = 0x1f00e8u;

label_1f00e8:
    // 0x1f00e8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1f00e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_1f00ec:
    // 0x1f00ec: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x1f00ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1f00f0:
    // 0x1f00f0: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1f00f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_1f00f4:
    // 0x1f00f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f00f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f00f8:
    // 0x1f00f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f00f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f00fc:
    // 0x1f00fc: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1f00fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f0100:
    // 0x1f0100: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x1f0100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_1f0104:
    // 0x1f0104: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x1f0104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_1f0108:
    // 0x1f0108: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1f0108u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f010c:
    // 0x1f010c: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x1f010cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1f0110:
    // 0x1f0110: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1f0110u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f0114:
    // 0x1f0114: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1f0114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_1f0118:
    // 0x1f0118: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1f0118u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_1f011c:
    // 0x1f011c: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1f011cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_1f0120:
    // 0x1f0120: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1f0120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_1f0124:
    // 0x1f0124: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x1f0124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_1f0128:
    // 0x1f0128: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1f0128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1f012c:
    // 0x1f012c: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x1f012cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1f0130:
    // 0x1f0130: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1f0130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_1f0134:
    // 0x1f0134: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1f0134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1f0138:
    // 0x1f0138: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1f0138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1f013c:
    // 0x1f013c: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1f013cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1f0140:
    // 0x1f0140: 0x8e830214  lw          $v1, 0x214($s4)
    ctx->pc = 0x1f0140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 532)));
label_1f0144:
    // 0x1f0144: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1f0144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1f0148:
    // 0x1f0148: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1f0148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1f014c:
    // 0x1f014c: 0x40f809  jalr        $v0
label_1f0150:
    if (ctx->pc == 0x1F0150u) {
        ctx->pc = 0x1F0150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F014Cu;
        // 0x1f0150: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0154u;
        goto label_1f0154;
    }
    ctx->pc = 0x1F014Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F0154u);
        ctx->pc = 0x1F0150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F014Cu;
        // 0x1f0150: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F014Cu, 0x1F0154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F0154u;
label_1f0154:
    // 0x1f0154: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1f0154u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1f0158:
    // 0x1f0158: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1f0158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1f015c:
    // 0x1f015c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1f015cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0160:
    // 0x1f0160: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x1f0160u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1f0164:
    // 0x1f0164: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1f0164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0168:
    // 0x1f0168: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x1f0168u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f016c:
    // 0x1f016c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1f016cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1f0170:
    // 0x1f0170: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x1f0170u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f0174:
    // 0x1f0174: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x1f0174u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_1f0178:
    // 0x1f0178: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1f0178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1f017c:
    // 0x1f017c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1f017cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1f0180:
    // 0x1f0180: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1f0180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_1f0184:
    // 0x1f0184: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1f0184u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1f0188:
    // 0x1f0188: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x1f0188u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1f018c:
    // 0x1f018c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1f018cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1f0190:
    // 0x1f0190: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1f0190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1f0194:
    // 0x1f0194: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1f0194u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1f0198:
    // 0x1f0198: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1f0198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1f019c:
    // 0x1f019c: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1f019cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_1f01a0:
    // 0x1f01a0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1f01a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1f01a4:
    // 0x1f01a4: 0xc04078a  jal         func_101E28
label_1f01a8:
    if (ctx->pc == 0x1F01A8u) {
        ctx->pc = 0x1F01A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01A4u;
        // 0x1f01a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F01ACu;
        goto label_1f01ac;
    }
    ctx->pc = 0x1F01A4u;
    SET_GPR_U32(ctx, 31, 0x1F01ACu);
    ctx->pc = 0x1F01A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F01A4u;
    // 0x1f01a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1F01A4u, 0x1F01ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F01ACu;
label_1f01ac:
    // 0x1f01ac: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1f01acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f01b0:
    // 0x1f01b0: 0x0  nop
    ctx->pc = 0x1f01b0u;
    // NOP
label_1f01b4:
    // 0x1f01b4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_1f01b8:
    if (ctx->pc == 0x1F01B8u) {
        ctx->pc = 0x1F01B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01B4u;
        // 0x1f01b8: 0xc7a30050  lwc1        $f3, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F01BCu;
        goto label_1f01bc;
    }
    ctx->pc = 0x1F01B4u;
    {
        const bool branch_taken_0x1f01b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F01B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01B4u;
        // 0x1f01b8: 0xc7a30050  lwc1        $f3, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01b4) {
            ctx->pc = 0x1F01F0u;
            goto label_1f01f0;
        }
    }
    ctx->pc = 0x1F01BCu;
label_1f01bc:
    // 0x1f01bc: 0x0  nop
    ctx->pc = 0x1f01bcu;
    // NOP
label_1f01c0:
    // 0x1f01c0: 0x0  nop
    ctx->pc = 0x1f01c0u;
    // NOP
label_1f01c4:
    // 0x1f01c4: 0x4600a083  div.s       $f2, $f20, $f0
    ctx->pc = 0x1f01c4u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
label_1f01c8:
    // 0x1f01c8: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x1f01c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f01cc:
    // 0x1f01cc: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1f01ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f01d0:
    // 0x1f01d0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1f01d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f01d4:
    // 0x1f01d4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1f01d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_1f01d8:
    // 0x1f01d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1f01d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1f01dc:
    // 0x1f01dc: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1f01dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1f01e0:
    // 0x1f01e0: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x1f01e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_1f01e4:
    // 0x1f01e4: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1f01e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1f01e8:
    // 0x1f01e8: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x1f01e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1f01ec:
    // 0x1f01ec: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x1f01ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1f01f0:
    // 0x1f01f0: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x1f01f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f01f4:
    // 0x1f01f4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1f01f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1f01f8:
    // 0x1f01f8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1f01f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1f01fc:
    // 0x1f01fc: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1f01fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0200:
    // 0x1f0200: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1f0200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0204:
    // 0x1f0204: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1f0204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f0208:
    // 0x1f0208: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1f0208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1f020c:
    // 0x1f020c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1f020cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1f0210:
    // 0x1f0210: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x1f0210u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1f0214:
    // 0x1f0214: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1f0214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_1f0218:
    // 0x1f0218: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f021c:
    // 0x1f021c: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1f021cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f0220:
    // 0x1f0220: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1f0220u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1f0224:
    // 0x1f0224: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1f0224u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1f0228:
    // 0x1f0228: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1f0228u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1f022c:
    // 0x1f022c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1f022cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1f0230:
    // 0x1f0230: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1f0230u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1f0234:
    // 0x1f0234: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1f0234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1f0238:
    // 0x1f0238: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1f0238u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f023c:
    // 0x1f023c: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x1f023cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1f0240:
    // 0x1f0240: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1f0240u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1f0244:
    // 0x1f0244: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1f0244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1f0248:
    // 0x1f0248: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1f0248u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1f024c:
    // 0x1f024c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1f024cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1f0250:
    // 0x1f0250: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1f0250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_1f0254:
    // 0x1f0254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0258:
    // 0x1f0258: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f0258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f025c:
    // 0x1f025c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1f025cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1f0260:
    // 0x1f0260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f0264:
    // 0x1f0264: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f0264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1f0268:
    // 0x1f0268: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f0268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f026c:
    // 0x1f026c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1f026cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1f0270:
    // 0x1f0270: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f0270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0274:
    // 0x1f0274: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1f0274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1f0278:
    // 0x1f0278: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f0278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f027c:
    // 0x1f027c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f027cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1f0280:
    // 0x1f0280: 0x24090024  addiu       $t1, $zero, 0x24
    ctx->pc = 0x1f0280u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1f0284:
    // 0x1f0284: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f0284u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0288:
    // 0x1f0288: 0xc04c784  jal         func_131E10
label_1f028c:
    if (ctx->pc == 0x1F028Cu) {
        ctx->pc = 0x1F028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0288u;
        // 0x1f028c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0290u;
        goto label_1f0290;
    }
    ctx->pc = 0x1F0288u;
    SET_GPR_U32(ctx, 31, 0x1F0290u);
    ctx->pc = 0x1F028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0288u;
    // 0x1f028c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1F0288u, 0x1F0290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0290u;
label_1f0290:
    // 0x1f0290: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_1f0294:
    if (ctx->pc == 0x1F0294u) {
        ctx->pc = 0x1F0294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0290u;
        // 0x1f0294: 0x27b20090  addiu       $s2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0298u;
        goto label_1f0298;
    }
    ctx->pc = 0x1F0290u;
    {
        const bool branch_taken_0x1f0290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0290u;
        // 0x1f0294: 0x27b20090  addiu       $s2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0290) {
            ctx->pc = 0x1F0328u;
            goto label_1f0328;
        }
    }
    ctx->pc = 0x1F0298u;
label_1f0298:
    // 0x1f0298: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1f0298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1f029c:
    // 0x1f029c: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1f029cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
label_1f02a0:
    // 0x1f02a0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1f02a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1f02a4:
    // 0x1f02a4: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x1f02a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1f02a8:
    // 0x1f02a8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1f02a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1f02ac:
    // 0x1f02ac: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1f02acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_1f02b0:
    // 0x1f02b0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1f02b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1f02b4:
    // 0x1f02b4: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1f02b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_1f02b8:
    // 0x1f02b8: 0xc07df8a  jal         func_1F7E28
label_1f02bc:
    if (ctx->pc == 0x1F02BCu) {
        ctx->pc = 0x1F02BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F02B8u;
        // 0x1f02bc: 0xe7b50084  swc1        $f21, 0x84($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F02C0u;
        goto label_1f02c0;
    }
    ctx->pc = 0x1F02B8u;
    SET_GPR_U32(ctx, 31, 0x1F02C0u);
    ctx->pc = 0x1F02BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02B8u;
    // 0x1f02bc: 0xe7b50084  swc1        $f21, 0x84($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1F02B8u, 0x1F02C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F02C0u;
label_1f02c0:
    // 0x1f02c0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1f02c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1f02c4:
    // 0x1f02c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f02c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1f02c8:
    // 0x1f02c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f02c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f02cc:
    // 0x1f02cc: 0x0  nop
    ctx->pc = 0x1f02ccu;
    // NOP
label_1f02d0:
    // 0x1f02d0: 0x4601b040  add.s       $f1, $f22, $f1
    ctx->pc = 0x1f02d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
label_1f02d4:
    // 0x1f02d4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1f02d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1f02d8:
    // 0x1f02d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f02d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f02dc:
    // 0x1f02dc: 0x0  nop
    ctx->pc = 0x1f02dcu;
    // NOP
label_1f02e0:
    // 0x1f02e0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_1f02e4:
    if (ctx->pc == 0x1F02E4u) {
        ctx->pc = 0x1F02E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F02E0u;
        // 0x1f02e4: 0x27a200a0  addiu       $v0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F02E8u;
        goto label_1f02e8;
    }
    ctx->pc = 0x1F02E0u;
    {
        const bool branch_taken_0x1f02e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F02E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F02E0u;
        // 0x1f02e4: 0x27a200a0  addiu       $v0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f02e0) {
            ctx->pc = 0x1F0328u;
            goto label_1f0328;
        }
    }
    ctx->pc = 0x1F02E8u;
label_1f02e8:
    // 0x1f02e8: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x1f02e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_1f02ec:
    // 0x1f02ec: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1f02ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1f02f0:
    // 0x1f02f0: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x1f02f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1f02f4:
    // 0x1f02f4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1f02f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1f02f8:
    // 0x1f02f8: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1f02f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_1f02fc:
    // 0x1f02fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1f02fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1f0300:
    // 0x1f0300: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1f0300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_1f0304:
    // 0x1f0304: 0xc680054c  lwc1        $f0, 0x54C($s4)
    ctx->pc = 0x1f0304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0308:
    // 0x1f0308: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1f0308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f030c:
    // 0x1f030c: 0x0  nop
    ctx->pc = 0x1f030cu;
    // NOP
label_1f0310:
    // 0x1f0310: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1f0314:
    if (ctx->pc == 0x1F0314u) {
        ctx->pc = 0x1F0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0310u;
        // 0x1f0314: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0318u;
        goto label_1f0318;
    }
    ctx->pc = 0x1F0310u;
    {
        const bool branch_taken_0x1f0310 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0310u;
        // 0x1f0314: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0310) {
            ctx->pc = 0x1F032Cu;
            goto label_1f032c;
        }
    }
    ctx->pc = 0x1F0318u;
label_1f0318:
    // 0x1f0318: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f0318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f031c:
    // 0x1f031c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f031cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f0320:
    // 0x1f0320: 0xc07bfb4  jal         func_1EFED0
label_1f0324:
    if (ctx->pc == 0x1F0324u) {
        ctx->pc = 0x1F0324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0320u;
        // 0x1f0324: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0328u;
        goto label_1f0328;
    }
    ctx->pc = 0x1F0320u;
    SET_GPR_U32(ctx, 31, 0x1F0328u);
    ctx->pc = 0x1F0324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0320u;
    // 0x1f0324: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFED0u, 0x1F0320u, 0x1F0328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0328u;
label_1f0328:
    // 0x1f0328: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1f0328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1f032c:
    // 0x1f032c: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1f032cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1f0330:
    // 0x1f0330: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1f0330u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1f0334:
    // 0x1f0334: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1f0334u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1f0338:
    // 0x1f0338: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x1f0338u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1f033c:
    // 0x1f033c: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x1f033cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1f0340:
    // 0x1f0340: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x1f0340u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1f0344:
    // 0x1f0344: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1f0344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1f0348:
    // 0x1f0348: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x1f0348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1f034c:
    // 0x1f034c: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x1f034cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1f0350:
    // 0x1f0350: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x1f0350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f0354:
    // 0x1f0354: 0x3e00008  jr          $ra
label_1f0358:
    if (ctx->pc == 0x1F0358u) {
        ctx->pc = 0x1F0358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0354u;
        // 0x1f0358: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F035Cu;
        goto label_1f035c;
    }
    ctx->pc = 0x1F0354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0354u;
        // 0x1f0358: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F035Cu;
label_1f035c:
    // 0x1f035c: 0x0  nop
    ctx->pc = 0x1f035cu;
    // NOP
    ctx->pc = 0x1f0360u;
}
