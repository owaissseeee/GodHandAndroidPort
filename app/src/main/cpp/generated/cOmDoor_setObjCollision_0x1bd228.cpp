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

// Function: cOmDoor_setObjCollision
// Address: 0x1bd228 - 0x1bd3f0
void cOmDoor_setObjCollision_0x1bd228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmDoor_setObjCollision_0x1bd228");
#endif

    switch (ctx->pc) {
        case 0x1bd30cu: goto label_1bd30c;
        case 0x1bd380u: goto label_1bd380;
        case 0x1bd3ccu: goto label_1bd3cc;
        default: break;
    }

    ctx->pc = 0x1bd228u;

    // 0x1bd228: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1bd228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1bd22c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bd22cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bd230: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1bd230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1bd234: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1bd234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1bd238: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1bd238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bd23c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1bd23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x1bd240: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bd240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd244: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1bd244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x1bd248: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1bd248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x1bd24c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1bd24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1bd250: 0xc6010610  lwc1        $f1, 0x610($s0)
    ctx->pc = 0x1bd250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bd254: 0xc6000618  lwc1        $f0, 0x618($s0)
    ctx->pc = 0x1bd254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd258: 0xc6020614  lwc1        $f2, 0x614($s0)
    ctx->pc = 0x1bd258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bd25c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1bd25cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1bd260: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1bd260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1bd264: 0xe444000c  swc1        $f4, 0xC($v0)
    ctx->pc = 0x1bd264u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1bd268: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1bd268u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1bd26c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1bd26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1bd270: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bd270u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bd274: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bd274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd278: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1bd278u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd27c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1bd27cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1bd280: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1bd280u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1bd284: 0x4bc52100  vaddx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1bd284u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1bd288: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1bd288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1bd28c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1bd28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1bd290: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bd290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bd294: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1bd294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bd298: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bd298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1bd29c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bd29cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd2a0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1bd2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1bd2a4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1bd2a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1bd2a8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1bd2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1bd2ac: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1bd2acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bd2b0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1bd2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bd2b4: 0x24499290  addiu       $t1, $v0, -0x6D70
    ctx->pc = 0x1bd2b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939280));
    // 0x1bd2b8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1bd2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bd2bc: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1bd2bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1bd2c0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1bd2c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2c4: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1bd2c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1bd2c8: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1bd2c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2cc: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x1bd2ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1bd2d0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1bd2d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd2d4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1bd2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1bd2d8: 0x31220007  andi        $v0, $t1, 0x7
    ctx->pc = 0x1bd2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)7);
    // 0x1bd2dc: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1bd2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1bd2e0: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1bd2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1bd2e4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BD2E4u;
    {
        const bool branch_taken_0x1bd2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD2E4u;
        // 0x1bd2e8: 0xe464000c  swc1        $f4, 0xC($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd2e4) {
            ctx->pc = 0x1BD360u;
            goto label_1bd360;
        }
    }
    ctx->pc = 0x1BD2ECu;
    // 0x1bd2ec: 0x252e0060  addiu       $t6, $t1, 0x60
    ctx->pc = 0x1bd2ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x1bd2f0: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x1bd2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1bd2f4: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1bd2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1bd2f8: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x1bd2f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bd2fc: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1bd2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bd300: 0x27ac0080  addiu       $t4, $sp, 0x80
    ctx->pc = 0x1bd300u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bd304: 0x27ad0090  addiu       $t5, $sp, 0x90
    ctx->pc = 0x1bd304u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bd308: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1bd308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1bd30c:
    // 0x1bd30c: 0x692f0007  ldl         $t7, 0x7($t1)
    ctx->pc = 0x1bd30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x1bd310: 0x6d2f0000  ldr         $t7, 0x0($t1)
    ctx->pc = 0x1bd310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x1bd314: 0x6931000f  ldl         $s1, 0xF($t1)
    ctx->pc = 0x1bd314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x1bd318: 0x6d310008  ldr         $s1, 0x8($t1)
    ctx->pc = 0x1bd318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x1bd31c: 0x69320017  ldl         $s2, 0x17($t1)
    ctx->pc = 0x1bd31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x1bd320: 0x6d320010  ldr         $s2, 0x10($t1)
    ctx->pc = 0x1bd320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x1bd324: 0x6933001f  ldl         $s3, 0x1F($t1)
    ctx->pc = 0x1bd324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x1bd328: 0x6d330018  ldr         $s3, 0x18($t1)
    ctx->pc = 0x1bd328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
    // 0x1bd32c: 0xb0af0007  sdl         $t7, 0x7($a1)
    ctx->pc = 0x1bd32cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd330: 0xb4af0000  sdr         $t7, 0x0($a1)
    ctx->pc = 0x1bd330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd334: 0xb0b1000f  sdl         $s1, 0xF($a1)
    ctx->pc = 0x1bd334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd338: 0xb4b10008  sdr         $s1, 0x8($a1)
    ctx->pc = 0x1bd338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd33c: 0xb0b20017  sdl         $s2, 0x17($a1)
    ctx->pc = 0x1bd33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd340: 0xb4b20010  sdr         $s2, 0x10($a1)
    ctx->pc = 0x1bd340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd344: 0xb0b3001f  sdl         $s3, 0x1F($a1)
    ctx->pc = 0x1bd344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd348: 0xb4b30018  sdr         $s3, 0x18($a1)
    ctx->pc = 0x1bd348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bd34c: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x1bd34cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x1bd350: 0x152effee  bne         $t1, $t6, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1BD350u;
    {
        const bool branch_taken_0x1bd350 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x1BD354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD350u;
        // 0x1bd354: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd350) {
            ctx->pc = 0x1BD30Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd30c;
        }
    }
    ctx->pc = 0x1BD358u;
    // 0x1bd358: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1BD358u;
    {
        const bool branch_taken_0x1bd358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD358u;
        // 0x1bd35c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd358) {
            ctx->pc = 0x1BD3B0u;
            goto label_1bd3b0;
        }
    }
    ctx->pc = 0x1BD360u;
label_1bd360:
    // 0x1bd360: 0x252e0060  addiu       $t6, $t1, 0x60
    ctx->pc = 0x1bd360u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x1bd364: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x1bd364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1bd368: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1bd368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1bd36c: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x1bd36cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bd370: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1bd370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bd374: 0x27ac0080  addiu       $t4, $sp, 0x80
    ctx->pc = 0x1bd374u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bd378: 0x27ad0090  addiu       $t5, $sp, 0x90
    ctx->pc = 0x1bd378u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bd37c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1bd37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1bd380:
    // 0x1bd380: 0xdd2f0000  ld          $t7, 0x0($t1)
    ctx->pc = 0x1bd380u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1bd384: 0xdd310008  ld          $s1, 0x8($t1)
    ctx->pc = 0x1bd384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1bd388: 0xdd320010  ld          $s2, 0x10($t1)
    ctx->pc = 0x1bd388u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1bd38c: 0xdd330018  ld          $s3, 0x18($t1)
    ctx->pc = 0x1bd38cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x1bd390: 0xfcaf0000  sd          $t7, 0x0($a1)
    ctx->pc = 0x1bd390u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 15));
    // 0x1bd394: 0xfcb10008  sd          $s1, 0x8($a1)
    ctx->pc = 0x1bd394u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 17));
    // 0x1bd398: 0xfcb20010  sd          $s2, 0x10($a1)
    ctx->pc = 0x1bd398u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 18));
    // 0x1bd39c: 0xfcb30018  sd          $s3, 0x18($a1)
    ctx->pc = 0x1bd39cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 19));
    // 0x1bd3a0: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x1bd3a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x1bd3a4: 0x152efff6  bne         $t1, $t6, . + 4 + (-0xA << 2)
    ctx->pc = 0x1BD3A4u;
    {
        const bool branch_taken_0x1bd3a4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x1BD3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD3A4u;
        // 0x1bd3a8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd3a4) {
            ctx->pc = 0x1BD380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd380;
        }
    }
    ctx->pc = 0x1BD3ACu;
    // 0x1bd3ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bd3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bd3b0:
    // 0x1bd3b0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1bd3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1bd3b4: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x1bd3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x1bd3b8: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x1bd3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x1bd3bc: 0xafad0010  sw          $t5, 0x10($sp)
    ctx->pc = 0x1bd3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
    // 0x1bd3c0: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x1bd3c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bd3c4: 0xc04bab6  jal         func_12EAD8
    ctx->pc = 0x1BD3C4u;
    SET_GPR_U32(ctx, 31, 0x1BD3CCu);
    ctx->pc = 0x1BD3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD3C4u;
    // 0x1bd3c8: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EAD8u, 0x1BD3C4u, 0x1BD3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD3CCu;
label_1bd3cc:
    // 0x1bd3cc: 0xae020644  sw          $v0, 0x644($s0)
    ctx->pc = 0x1bd3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1604), GPR_U32(ctx, 2));
    // 0x1bd3d0: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1bd3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1bd3d4: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1bd3d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1bd3d8: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1bd3d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bd3dc: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1bd3dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1bd3e0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1bd3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bd3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD3E4u;
        // 0x1bd3e8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD3ECu;
    // 0x1bd3ec: 0x0  nop
    ctx->pc = 0x1bd3ecu;
    // NOP
    ctx->pc = 0x1bd3f0u;
}
