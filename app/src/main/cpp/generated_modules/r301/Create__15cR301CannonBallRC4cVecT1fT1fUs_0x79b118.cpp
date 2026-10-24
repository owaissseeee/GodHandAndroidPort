#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: Create__15cR301CannonBallRC4cVecT1fT1fUs
// Address: 0x79b118 - 0x79b2a0
void Create__15cR301CannonBallRC4cVecT1fT1fUs_0x79b118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Create__15cR301CannonBallRC4cVecT1fT1fUs_0x79b118");
#endif

    switch (ctx->pc) {
        case 0x79b118u: goto label_79b118;
        case 0x79b11cu: goto label_79b11c;
        case 0x79b120u: goto label_79b120;
        case 0x79b124u: goto label_79b124;
        case 0x79b128u: goto label_79b128;
        case 0x79b12cu: goto label_79b12c;
        case 0x79b130u: goto label_79b130;
        case 0x79b134u: goto label_79b134;
        case 0x79b138u: goto label_79b138;
        case 0x79b13cu: goto label_79b13c;
        case 0x79b140u: goto label_79b140;
        case 0x79b144u: goto label_79b144;
        case 0x79b148u: goto label_79b148;
        case 0x79b14cu: goto label_79b14c;
        case 0x79b150u: goto label_79b150;
        case 0x79b154u: goto label_79b154;
        case 0x79b158u: goto label_79b158;
        case 0x79b15cu: goto label_79b15c;
        case 0x79b160u: goto label_79b160;
        case 0x79b164u: goto label_79b164;
        case 0x79b168u: goto label_79b168;
        case 0x79b16cu: goto label_79b16c;
        case 0x79b170u: goto label_79b170;
        case 0x79b174u: goto label_79b174;
        case 0x79b178u: goto label_79b178;
        case 0x79b17cu: goto label_79b17c;
        case 0x79b180u: goto label_79b180;
        case 0x79b184u: goto label_79b184;
        case 0x79b188u: goto label_79b188;
        case 0x79b18cu: goto label_79b18c;
        case 0x79b190u: goto label_79b190;
        case 0x79b194u: goto label_79b194;
        case 0x79b198u: goto label_79b198;
        case 0x79b19cu: goto label_79b19c;
        case 0x79b1a0u: goto label_79b1a0;
        case 0x79b1a4u: goto label_79b1a4;
        case 0x79b1a8u: goto label_79b1a8;
        case 0x79b1acu: goto label_79b1ac;
        case 0x79b1b0u: goto label_79b1b0;
        case 0x79b1b4u: goto label_79b1b4;
        case 0x79b1b8u: goto label_79b1b8;
        case 0x79b1bcu: goto label_79b1bc;
        case 0x79b1c0u: goto label_79b1c0;
        case 0x79b1c4u: goto label_79b1c4;
        case 0x79b1c8u: goto label_79b1c8;
        case 0x79b1ccu: goto label_79b1cc;
        case 0x79b1d0u: goto label_79b1d0;
        case 0x79b1d4u: goto label_79b1d4;
        case 0x79b1d8u: goto label_79b1d8;
        case 0x79b1dcu: goto label_79b1dc;
        case 0x79b1e0u: goto label_79b1e0;
        case 0x79b1e4u: goto label_79b1e4;
        case 0x79b1e8u: goto label_79b1e8;
        case 0x79b1ecu: goto label_79b1ec;
        case 0x79b1f0u: goto label_79b1f0;
        case 0x79b1f4u: goto label_79b1f4;
        case 0x79b1f8u: goto label_79b1f8;
        case 0x79b1fcu: goto label_79b1fc;
        case 0x79b200u: goto label_79b200;
        case 0x79b204u: goto label_79b204;
        case 0x79b208u: goto label_79b208;
        case 0x79b20cu: goto label_79b20c;
        case 0x79b210u: goto label_79b210;
        case 0x79b214u: goto label_79b214;
        case 0x79b218u: goto label_79b218;
        case 0x79b21cu: goto label_79b21c;
        case 0x79b220u: goto label_79b220;
        case 0x79b224u: goto label_79b224;
        case 0x79b228u: goto label_79b228;
        case 0x79b22cu: goto label_79b22c;
        case 0x79b230u: goto label_79b230;
        case 0x79b234u: goto label_79b234;
        case 0x79b238u: goto label_79b238;
        case 0x79b23cu: goto label_79b23c;
        case 0x79b240u: goto label_79b240;
        case 0x79b244u: goto label_79b244;
        case 0x79b248u: goto label_79b248;
        case 0x79b24cu: goto label_79b24c;
        case 0x79b250u: goto label_79b250;
        case 0x79b254u: goto label_79b254;
        case 0x79b258u: goto label_79b258;
        case 0x79b25cu: goto label_79b25c;
        case 0x79b260u: goto label_79b260;
        case 0x79b264u: goto label_79b264;
        case 0x79b268u: goto label_79b268;
        case 0x79b26cu: goto label_79b26c;
        case 0x79b270u: goto label_79b270;
        case 0x79b274u: goto label_79b274;
        case 0x79b278u: goto label_79b278;
        case 0x79b27cu: goto label_79b27c;
        case 0x79b280u: goto label_79b280;
        case 0x79b284u: goto label_79b284;
        case 0x79b288u: goto label_79b288;
        case 0x79b28cu: goto label_79b28c;
        case 0x79b290u: goto label_79b290;
        case 0x79b294u: goto label_79b294;
        case 0x79b298u: goto label_79b298;
        case 0x79b29cu: goto label_79b29c;
        default: break;
    }

    ctx->pc = 0x79b118u;

label_79b118:
    // 0x79b118: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79b118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_79b11c:
    // 0x79b11c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x79b11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_79b120:
    // 0x79b120: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x79b120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_79b124:
    // 0x79b124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79b124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_79b128:
    // 0x79b128: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x79b128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_79b12c:
    // 0x79b12c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x79b12cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_79b130:
    // 0x79b130: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x79b130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_79b134:
    // 0x79b134: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x79b134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_79b138:
    // 0x79b138: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x79b138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_79b13c:
    // 0x79b13c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x79b13cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79b140:
    // 0x79b140: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x79b140u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_79b144:
    // 0x79b144: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x79b144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_79b148:
    // 0x79b148: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x79b148u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_79b14c:
    // 0x79b14c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x79b14cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_79b150:
    // 0x79b150: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79b150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79b154:
    // 0x79b154: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x79b154u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_79b158:
    // 0x79b158: 0x3114ffff  andi        $s4, $t0, 0xFFFF
    ctx->pc = 0x79b158u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_79b15c:
    // 0x79b15c: 0xc0c3ea6  jal         func_30FA98
label_79b160:
    if (ctx->pc == 0x79B160u) {
        ctx->pc = 0x79B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B15Cu;
        // 0x79b160: 0x240403b2  addiu       $a0, $zero, 0x3B2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 946));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B164u;
        goto label_79b164;
    }
    ctx->pc = 0x79B15Cu;
    SET_GPR_U32(ctx, 31, 0x79B164u);
    ctx->pc = 0x79B160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B15Cu;
    // 0x79b160: 0x240403b2  addiu       $a0, $zero, 0x3B2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 946));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x79B15Cu, 0x79B164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B164u;
label_79b164:
    // 0x79b164: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79b164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b168:
    // 0x79b168: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_79b16c:
    if (ctx->pc == 0x79B16Cu) {
        ctx->pc = 0x79B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B168u;
        // 0x79b16c: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B170u;
        goto label_79b170;
    }
    ctx->pc = 0x79B168u;
    {
        const bool branch_taken_0x79b168 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b168) {
            ctx->pc = 0x79B16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B168u;
            // 0x79b16c: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B178u;
            goto label_79b178;
        }
    }
    ctx->pc = 0x79B170u;
label_79b170:
    // 0x79b170: 0x10000040  b           . + 4 + (0x40 << 2)
label_79b174:
    if (ctx->pc == 0x79B174u) {
        ctx->pc = 0x79B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B170u;
        // 0x79b174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B178u;
        goto label_79b178;
    }
    ctx->pc = 0x79B170u;
    {
        const bool branch_taken_0x79b170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B170u;
        // 0x79b174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b170) {
            ctx->pc = 0x79B274u;
            goto label_79b274;
        }
    }
    ctx->pc = 0x79B178u;
label_79b178:
    // 0x79b178: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x79b178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_79b17c:
    // 0x79b17c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x79b17cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_79b180:
    // 0x79b180: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x79b180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_79b184:
    // 0x79b184: 0x40f809  jalr        $v0
label_79b188:
    if (ctx->pc == 0x79B188u) {
        ctx->pc = 0x79B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B184u;
        // 0x79b188: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B18Cu;
        goto label_79b18c;
    }
    ctx->pc = 0x79B184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79B18Cu);
        ctx->pc = 0x79B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B184u;
        // 0x79b188: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B184u, 0x79B18Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B18Cu;
label_79b18c:
    // 0x79b18c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x79b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79b190:
    // 0x79b190: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x79b190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_79b194:
    // 0x79b194: 0x50510008  beql        $v0, $s1, . + 4 + (0x8 << 2)
label_79b198:
    if (ctx->pc == 0x79B198u) {
        ctx->pc = 0x79B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B194u;
        // 0x79b198: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B19Cu;
        goto label_79b19c;
    }
    ctx->pc = 0x79B194u;
    {
        const bool branch_taken_0x79b194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x79b194) {
            ctx->pc = 0x79B198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B194u;
            // 0x79b198: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B1B8u;
            goto label_79b1b8;
        }
    }
    ctx->pc = 0x79B19Cu;
label_79b19c:
    // 0x79b19c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x79b19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79b1a0:
    // 0x79b1a0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x79b1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_79b1a4:
    // 0x79b1a4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x79b1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79b1a8:
    // 0x79b1a8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79b1a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_79b1ac:
    // 0x79b1ac: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x79b1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79b1b0:
    // 0x79b1b0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79b1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79b1b4:
    // 0x79b1b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79b1b8:
    // 0x79b1b8: 0xe4540110  swc1        $f20, 0x110($v0)
    ctx->pc = 0x79b1b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_79b1bc:
    // 0x79b1bc: 0xe4540118  swc1        $f20, 0x118($v0)
    ctx->pc = 0x79b1bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_79b1c0:
    // 0x79b1c0: 0xe4540114  swc1        $f20, 0x114($v0)
    ctx->pc = 0x79b1c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_79b1c4:
    // 0x79b1c4: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x79b1c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_79b1c8:
    // 0x79b1c8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79b1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_79b1cc:
    // 0x79b1cc: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x79b1ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_79b1d0:
    // 0x79b1d0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79b1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_79b1d4:
    // 0x79b1d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79b1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79b1d8:
    // 0x79b1d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79b1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79b1dc:
    // 0x79b1dc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x79b1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79b1e0:
    // 0x79b1e0: 0xc06ce44  jal         func_1B3910
label_79b1e4:
    if (ctx->pc == 0x79B1E4u) {
        ctx->pc = 0x79B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1E0u;
        // 0x79b1e4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1E8u;
        goto label_79b1e8;
    }
    ctx->pc = 0x79B1E0u;
    SET_GPR_U32(ctx, 31, 0x79B1E8u);
    ctx->pc = 0x79B1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1E0u;
    // 0x79b1e4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3910u, 0x79B1E0u, 0x79B1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1E8u;
label_79b1e8:
    // 0x79b1e8: 0xa6140008  sh          $s4, 0x8($s0)
    ctx->pc = 0x79b1e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 20));
label_79b1ec:
    // 0x79b1ec: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_79b1f0:
    // 0x79b1f0: 0x2446de48  addiu       $a2, $v0, -0x21B8
    ctx->pc = 0x79b1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958664));
label_79b1f4:
    // 0x79b1f4: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x79b1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_79b1f8:
    // 0x79b1f8: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x79b1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_79b1fc:
    // 0x79b1fc: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x79b1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_79b200:
    // 0x79b200: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x79b200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_79b204:
    // 0x79b204: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x79b204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_79b208:
    // 0x79b208: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x79b208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_79b20c:
    // 0x79b20c: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x79b20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_79b210:
    // 0x79b210: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x79b210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_79b214:
    // 0x79b214: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x79b214u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_79b218:
    // 0x79b218: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x79b218u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_79b21c:
    // 0x79b21c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b220:
    // 0x79b220: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x79b220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_79b224:
    // 0x79b224: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79b224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b228:
    // 0x79b228: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79b228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79b22c:
    // 0x79b22c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b230:
    // 0x79b230: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x79b230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_79b234:
    // 0x79b234: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b238:
    // 0x79b238: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x79b238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79b23c:
    // 0x79b23c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79b23cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79b240:
    // 0x79b240: 0xc0c194a  jal         func_306528
label_79b244:
    if (ctx->pc == 0x79B244u) {
        ctx->pc = 0x79B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B240u;
        // 0x79b244: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B248u;
        goto label_79b248;
    }
    ctx->pc = 0x79B240u;
    SET_GPR_U32(ctx, 31, 0x79B248u);
    ctx->pc = 0x79B244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B240u;
    // 0x79b244: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x79B240u, 0x79B248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B248u;
label_79b248:
    // 0x79b248: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x79b248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79b24c:
    // 0x79b24c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79b250:
    // 0x79b250: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79b250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_79b254:
    // 0x79b254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b258:
    // 0x79b258: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x79b258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_79b25c:
    // 0x79b25c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79b25cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b260:
    // 0x79b260: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79b260u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b264:
    // 0x79b264: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79b264u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b268:
    // 0x79b268: 0xc0b2e92  jal         func_2CBA48
label_79b26c:
    if (ctx->pc == 0x79B26Cu) {
        ctx->pc = 0x79B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B268u;
        // 0x79b26c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B270u;
        goto label_79b270;
    }
    ctx->pc = 0x79B268u;
    SET_GPR_U32(ctx, 31, 0x79B270u);
    ctx->pc = 0x79B26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B268u;
    // 0x79b26c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x79B268u, 0x79B270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B270u;
label_79b270:
    // 0x79b270: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b274:
    // 0x79b274: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x79b274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79b278:
    // 0x79b278: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x79b278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79b27c:
    // 0x79b27c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x79b27cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79b280:
    // 0x79b280: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x79b280u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79b284:
    // 0x79b284: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x79b284u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79b288:
    // 0x79b288: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79b288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79b28c:
    // 0x79b28c: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x79b28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_79b290:
    // 0x79b290: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x79b290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79b294:
    // 0x79b294: 0x3e00008  jr          $ra
label_79b298:
    if (ctx->pc == 0x79B298u) {
        ctx->pc = 0x79B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B294u;
        // 0x79b298: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B29Cu;
        goto label_79b29c;
    }
    ctx->pc = 0x79B294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B294u;
        // 0x79b298: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B29Cu;
label_79b29c:
    // 0x79b29c: 0x0  nop
    ctx->pc = 0x79b29cu;
    // NOP
    ctx->pc = 0x79b2a0u;
}
} // namespace gh_r301
