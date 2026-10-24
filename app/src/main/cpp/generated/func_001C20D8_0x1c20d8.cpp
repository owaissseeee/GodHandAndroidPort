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

// Function: func_001C20D8
// Address: 0x1c20d8 - 0x1c2260
void func_001C20D8_0x1c20d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C20D8_0x1c20d8");
#endif

    switch (ctx->pc) {
        case 0x1c20d8u: goto label_1c20d8;
        case 0x1c20dcu: goto label_1c20dc;
        case 0x1c20e0u: goto label_1c20e0;
        case 0x1c20e4u: goto label_1c20e4;
        case 0x1c20e8u: goto label_1c20e8;
        case 0x1c20ecu: goto label_1c20ec;
        case 0x1c20f0u: goto label_1c20f0;
        case 0x1c20f4u: goto label_1c20f4;
        case 0x1c20f8u: goto label_1c20f8;
        case 0x1c20fcu: goto label_1c20fc;
        case 0x1c2100u: goto label_1c2100;
        case 0x1c2104u: goto label_1c2104;
        case 0x1c2108u: goto label_1c2108;
        case 0x1c210cu: goto label_1c210c;
        case 0x1c2110u: goto label_1c2110;
        case 0x1c2114u: goto label_1c2114;
        case 0x1c2118u: goto label_1c2118;
        case 0x1c211cu: goto label_1c211c;
        case 0x1c2120u: goto label_1c2120;
        case 0x1c2124u: goto label_1c2124;
        case 0x1c2128u: goto label_1c2128;
        case 0x1c212cu: goto label_1c212c;
        case 0x1c2130u: goto label_1c2130;
        case 0x1c2134u: goto label_1c2134;
        case 0x1c2138u: goto label_1c2138;
        case 0x1c213cu: goto label_1c213c;
        case 0x1c2140u: goto label_1c2140;
        case 0x1c2144u: goto label_1c2144;
        case 0x1c2148u: goto label_1c2148;
        case 0x1c214cu: goto label_1c214c;
        case 0x1c2150u: goto label_1c2150;
        case 0x1c2154u: goto label_1c2154;
        case 0x1c2158u: goto label_1c2158;
        case 0x1c215cu: goto label_1c215c;
        case 0x1c2160u: goto label_1c2160;
        case 0x1c2164u: goto label_1c2164;
        case 0x1c2168u: goto label_1c2168;
        case 0x1c216cu: goto label_1c216c;
        case 0x1c2170u: goto label_1c2170;
        case 0x1c2174u: goto label_1c2174;
        case 0x1c2178u: goto label_1c2178;
        case 0x1c217cu: goto label_1c217c;
        case 0x1c2180u: goto label_1c2180;
        case 0x1c2184u: goto label_1c2184;
        case 0x1c2188u: goto label_1c2188;
        case 0x1c218cu: goto label_1c218c;
        case 0x1c2190u: goto label_1c2190;
        case 0x1c2194u: goto label_1c2194;
        case 0x1c2198u: goto label_1c2198;
        case 0x1c219cu: goto label_1c219c;
        case 0x1c21a0u: goto label_1c21a0;
        case 0x1c21a4u: goto label_1c21a4;
        case 0x1c21a8u: goto label_1c21a8;
        case 0x1c21acu: goto label_1c21ac;
        case 0x1c21b0u: goto label_1c21b0;
        case 0x1c21b4u: goto label_1c21b4;
        case 0x1c21b8u: goto label_1c21b8;
        case 0x1c21bcu: goto label_1c21bc;
        case 0x1c21c0u: goto label_1c21c0;
        case 0x1c21c4u: goto label_1c21c4;
        case 0x1c21c8u: goto label_1c21c8;
        case 0x1c21ccu: goto label_1c21cc;
        case 0x1c21d0u: goto label_1c21d0;
        case 0x1c21d4u: goto label_1c21d4;
        case 0x1c21d8u: goto label_1c21d8;
        case 0x1c21dcu: goto label_1c21dc;
        case 0x1c21e0u: goto label_1c21e0;
        case 0x1c21e4u: goto label_1c21e4;
        case 0x1c21e8u: goto label_1c21e8;
        case 0x1c21ecu: goto label_1c21ec;
        case 0x1c21f0u: goto label_1c21f0;
        case 0x1c21f4u: goto label_1c21f4;
        case 0x1c21f8u: goto label_1c21f8;
        case 0x1c21fcu: goto label_1c21fc;
        case 0x1c2200u: goto label_1c2200;
        case 0x1c2204u: goto label_1c2204;
        case 0x1c2208u: goto label_1c2208;
        case 0x1c220cu: goto label_1c220c;
        case 0x1c2210u: goto label_1c2210;
        case 0x1c2214u: goto label_1c2214;
        case 0x1c2218u: goto label_1c2218;
        case 0x1c221cu: goto label_1c221c;
        case 0x1c2220u: goto label_1c2220;
        case 0x1c2224u: goto label_1c2224;
        case 0x1c2228u: goto label_1c2228;
        case 0x1c222cu: goto label_1c222c;
        case 0x1c2230u: goto label_1c2230;
        case 0x1c2234u: goto label_1c2234;
        case 0x1c2238u: goto label_1c2238;
        case 0x1c223cu: goto label_1c223c;
        case 0x1c2240u: goto label_1c2240;
        case 0x1c2244u: goto label_1c2244;
        case 0x1c2248u: goto label_1c2248;
        case 0x1c224cu: goto label_1c224c;
        case 0x1c2250u: goto label_1c2250;
        case 0x1c2254u: goto label_1c2254;
        case 0x1c2258u: goto label_1c2258;
        case 0x1c225cu: goto label_1c225c;
        default: break;
    }

    ctx->pc = 0x1c20d8u;

label_1c20d8:
    // 0x1c20d8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1c20d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1c20dc:
    // 0x1c20dc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c20dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1c20e0:
    // 0x1c20e0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c20e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1c20e4:
    // 0x1c20e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c20e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1c20e8:
    // 0x1c20e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c20e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c20ec:
    // 0x1c20ec: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1c20ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1c20f0:
    // 0x1c20f0: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1c20f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1c20f4:
    // 0x1c20f4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1c20f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1c20f8:
    // 0x1c20f8: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1c20f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1c20fc:
    // 0x1c20fc: 0x40f809  jalr        $v0
label_1c2100:
    if (ctx->pc == 0x1C2100u) {
        ctx->pc = 0x1C2100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20FCu;
        // 0x1c2100: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2104u;
        goto label_1c2104;
    }
    ctx->pc = 0x1C20FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C2104u);
        ctx->pc = 0x1C2100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20FCu;
        // 0x1c2100: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C20FCu, 0x1C2104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2104u;
label_1c2104:
    // 0x1c2104: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1c2104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c2108:
    // 0x1c2108: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c2108u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c210c:
    // 0x1c210c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1c210cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c2110:
    // 0x1c2110: 0xc0b6dac  jal         func_2DB6B0
label_1c2114:
    if (ctx->pc == 0x1C2114u) {
        ctx->pc = 0x1C2118u;
        goto label_1c2118;
    }
    ctx->pc = 0x1C2110u;
    SET_GPR_U32(ctx, 31, 0x1C2118u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C2110u, 0x1C2118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2118u;
label_1c2118:
    // 0x1c2118: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x1c2118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_1c211c:
    // 0x1c211c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1c211cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1c2120:
    // 0x1c2120: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x1c2120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1c2124:
    // 0x1c2124: 0xa0f809  jalr        $a1
label_1c2128:
    if (ctx->pc == 0x1C2128u) {
        ctx->pc = 0x1C2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2124u;
        // 0x1c2128: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C212Cu;
        goto label_1c212c;
    }
    ctx->pc = 0x1C2124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1C212Cu);
        ctx->pc = 0x1C2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2124u;
        // 0x1c2128: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2124u, 0x1C212Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C212Cu;
label_1c212c:
    // 0x1c212c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c212cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c2130:
    // 0x1c2130: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c2130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c2134:
    // 0x1c2134: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1c2134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c2138:
    // 0x1c2138: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1c2138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c213c:
    // 0x1c213c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1c213cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c2140:
    // 0x1c2140: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c2140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c2144:
    // 0x1c2144: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c2144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c2148:
    // 0x1c2148: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1c2148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c214c:
    // 0x1c214c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c214cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c2150:
    // 0x1c2150: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1c2150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1c2154:
    // 0x1c2154: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1c2154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c2158:
    // 0x1c2158: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1c2158u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1c215c:
    // 0x1c215c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1c215cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c2160:
    // 0x1c2160: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c2160u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c2164:
    // 0x1c2164: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c2164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c2168:
    // 0x1c2168: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c2168u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c216c:
    // 0x1c216c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c216cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c2170:
    // 0x1c2170: 0x92220676  lbu         $v0, 0x676($s1)
    ctx->pc = 0x1c2170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1654)));
label_1c2174:
    // 0x1c2174: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1c2174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c2178:
    // 0x1c2178: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x1c2178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c217c:
    // 0x1c217c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c217cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2180:
    // 0x1c2180: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1c2180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c2184:
    // 0x1c2184: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1c2184u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_1c2188:
    // 0x1c2188: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1c2188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c218c:
    // 0x1c218c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c218cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c2190:
    // 0x1c2190: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x1c2190u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1c2194:
    // 0x1c2194: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1c2194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1c2198:
    // 0x1c2198: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1c2198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1c219c:
    // 0x1c219c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c219cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c21a0:
    // 0x1c21a0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1c21a4:
    if (ctx->pc == 0x1C21A4u) {
        ctx->pc = 0x1C21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21A0u;
        // 0x1c21a4: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C21A8u;
        goto label_1c21a8;
    }
    ctx->pc = 0x1C21A0u;
    {
        const bool branch_taken_0x1c21a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21A0u;
        // 0x1c21a4: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21a0) {
            ctx->pc = 0x1C21B0u;
            goto label_1c21b0;
        }
    }
    ctx->pc = 0x1C21A8u;
label_1c21a8:
    // 0x1c21a8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1c21a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_1c21ac:
    // 0x1c21ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c21acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c21b0:
    // 0x1c21b0: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x1c21b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
label_1c21b4:
    // 0x1c21b4: 0x240203ec  addiu       $v0, $zero, 0x3EC
    ctx->pc = 0x1c21b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1004));
label_1c21b8:
    // 0x1c21b8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1c21bc:
    if (ctx->pc == 0x1C21BCu) {
        ctx->pc = 0x1C21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21B8u;
        // 0x1c21bc: 0x240203ed  addiu       $v0, $zero, 0x3ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C21C0u;
        goto label_1c21c0;
    }
    ctx->pc = 0x1C21B8u;
    {
        const bool branch_taken_0x1c21b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21B8u;
        // 0x1c21bc: 0x240203ed  addiu       $v0, $zero, 0x3ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21b8) {
            ctx->pc = 0x1C21C8u;
            goto label_1c21c8;
        }
    }
    ctx->pc = 0x1C21C0u;
label_1c21c0:
    // 0x1c21c0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1c21c4:
    if (ctx->pc == 0x1C21C4u) {
        ctx->pc = 0x1C21C8u;
        goto label_1c21c8;
    }
    ctx->pc = 0x1C21C0u;
    {
        const bool branch_taken_0x1c21c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c21c0) {
            ctx->pc = 0x1C21D0u;
            goto label_1c21d0;
        }
    }
    ctx->pc = 0x1C21C8u;
label_1c21c8:
    // 0x1c21c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c21c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c21cc:
    // 0x1c21cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c21ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c21d0:
    // 0x1c21d0: 0xc07df8a  jal         func_1F7E28
label_1c21d4:
    if (ctx->pc == 0x1C21D4u) {
        ctx->pc = 0x1C21D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21D0u;
        // 0x1c21d4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C21D8u;
        goto label_1c21d8;
    }
    ctx->pc = 0x1C21D0u;
    SET_GPR_U32(ctx, 31, 0x1C21D8u);
    ctx->pc = 0x1C21D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21D0u;
    // 0x1c21d4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1C21D0u, 0x1C21D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21D8u;
label_1c21d8:
    // 0x1c21d8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1c21d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c21dc:
    // 0x1c21dc: 0x0  nop
    ctx->pc = 0x1c21dcu;
    // NOP
label_1c21e0:
    // 0x1c21e0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_1c21e4:
    if (ctx->pc == 0x1C21E4u) {
        ctx->pc = 0x1C21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21E0u;
        // 0x1c21e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C21E8u;
        goto label_1c21e8;
    }
    ctx->pc = 0x1C21E0u;
    {
        const bool branch_taken_0x1c21e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21E0u;
        // 0x1c21e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21e0) {
            ctx->pc = 0x1C2248u;
            goto label_1c2248;
        }
    }
    ctx->pc = 0x1C21E8u;
label_1c21e8:
    // 0x1c21e8: 0x92220676  lbu         $v0, 0x676($s1)
    ctx->pc = 0x1c21e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1654)));
label_1c21ec:
    // 0x1c21ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c21ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c21f0:
    // 0x1c21f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c21f4:
    if (ctx->pc == 0x1C21F4u) {
        ctx->pc = 0x1C21F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21F0u;
        // 0x1c21f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C21F8u;
        goto label_1c21f8;
    }
    ctx->pc = 0x1C21F0u;
    {
        const bool branch_taken_0x1c21f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C21F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21F0u;
        // 0x1c21f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21f0) {
            ctx->pc = 0x1C2200u;
            goto label_1c2200;
        }
    }
    ctx->pc = 0x1C21F8u;
label_1c21f8:
    // 0x1c21f8: 0x10000014  b           . + 4 + (0x14 << 2)
label_1c21fc:
    if (ctx->pc == 0x1C21FCu) {
        ctx->pc = 0x1C21FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21F8u;
        // 0x1c21fc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2200u;
        goto label_1c2200;
    }
    ctx->pc = 0x1C21F8u;
    {
        const bool branch_taken_0x1c21f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21F8u;
        // 0x1c21fc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21f8) {
            ctx->pc = 0x1C224Cu;
            goto label_1c224c;
        }
    }
    ctx->pc = 0x1C2200u;
label_1c2200:
    // 0x1c2200: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c2200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c2204:
    // 0x1c2204: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1c2204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1c2208:
    // 0x1c2208: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c2208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c220c:
    // 0x1c220c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c220cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1c2210:
    // 0x1c2210: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2214:
    // 0x1c2214: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1c2214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1c2218:
    // 0x1c2218: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c221c:
    // 0x1c221c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1c221cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1c2220:
    // 0x1c2220: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1c2220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c2224:
    // 0x1c2224: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1c2224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1c2228:
    // 0x1c2228: 0x24090204  addiu       $t1, $zero, 0x204
    ctx->pc = 0x1c2228u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
label_1c222c:
    // 0x1c222c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c222cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2230:
    // 0x1c2230: 0xc04c784  jal         func_131E10
label_1c2234:
    if (ctx->pc == 0x1C2234u) {
        ctx->pc = 0x1C2234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2230u;
        // 0x1c2234: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2238u;
        goto label_1c2238;
    }
    ctx->pc = 0x1C2230u;
    SET_GPR_U32(ctx, 31, 0x1C2238u);
    ctx->pc = 0x1C2234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2230u;
    // 0x1c2234: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1C2230u, 0x1C2238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2238u;
label_1c2238:
    // 0x1c2238: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c2238u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c223c:
    // 0x1c223c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1c2240:
    if (ctx->pc == 0x1C2240u) {
        ctx->pc = 0x1C2240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C223Cu;
        // 0x1c2240: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2244u;
        goto label_1c2244;
    }
    ctx->pc = 0x1C223Cu;
    {
        const bool branch_taken_0x1c223c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C223Cu;
        // 0x1c2240: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c223c) {
            ctx->pc = 0x1C2248u;
            goto label_1c2248;
        }
    }
    ctx->pc = 0x1C2244u;
label_1c2244:
    // 0x1c2244: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c2244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2248:
    // 0x1c2248: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c2248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c224c:
    // 0x1c224c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c224cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c2250:
    // 0x1c2250: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c2250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1c2254:
    // 0x1c2254: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1c2254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c2258:
    // 0x1c2258: 0x3e00008  jr          $ra
label_1c225c:
    if (ctx->pc == 0x1C225Cu) {
        ctx->pc = 0x1C225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2258u;
        // 0x1c225c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2260u;
        goto label_fallthrough_0x1c2258;
    }
    ctx->pc = 0x1C2258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2258u;
        // 0x1c225c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c2258:
    ctx->pc = 0x1C2260u;
}
