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

// Function: cOmDoor_setObjCollisionCenterOnly
// Address: 0x1bda00 - 0x1bdbb8
void cOmDoor_setObjCollisionCenterOnly_0x1bda00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmDoor_setObjCollisionCenterOnly_0x1bda00");
#endif

    switch (ctx->pc) {
        case 0x1bdad8u: goto label_1bdad8;
        case 0x1bdb4cu: goto label_1bdb4c;
        case 0x1bdb98u: goto label_1bdb98;
        default: break;
    }

    ctx->pc = 0x1bda00u;

    // 0x1bda00: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1bda00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1bda04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bda04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bda08: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bda08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bda0c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1bda0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1bda10: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1bda10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bda14: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1bda14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x1bda18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bda18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bda1c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1bda1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x1bda20: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1bda20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x1bda24: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1bda24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1bda28: 0xc6020600  lwc1        $f2, 0x600($s0)
    ctx->pc = 0x1bda28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bda2c: 0xc6000608  lwc1        $f0, 0x608($s0)
    ctx->pc = 0x1bda2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bda30: 0xc6010604  lwc1        $f1, 0x604($s0)
    ctx->pc = 0x1bda30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bda34: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1bda34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1bda38: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1bda38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1bda3c: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x1bda3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1bda40: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1bda40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1bda44: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1bda44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1bda48: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bda48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bda4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bda4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bda50: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1bda50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bda54: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1bda54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1bda58: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1bda58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1bda5c: 0x4bc52100  vaddx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1bda5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1bda60: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1bda60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1bda64: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bda64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1bda68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bda68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bda6c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1bda6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bda70: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1bda70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1bda74: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1bda74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1bda78: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1bda78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1bda7c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1bda7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1bda80: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1bda80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bda84: 0x244993c0  addiu       $t1, $v0, -0x6C40
    ctx->pc = 0x1bda84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939584));
    // 0x1bda88: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1bda88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bda8c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1bda8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bda90: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1bda90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1bda94: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1bda94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bda98: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x1bda98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1bda9c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1bda9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdaa0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1bdaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1bdaa4: 0x31220007  andi        $v0, $t1, 0x7
    ctx->pc = 0x1bdaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)7);
    // 0x1bdaa8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1bdaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1bdaac: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1bdaacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1bdab0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BDAB0u;
    {
        const bool branch_taken_0x1bdab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDAB0u;
        // 0x1bdab4: 0xe483000c  swc1        $f3, 0xC($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdab0) {
            ctx->pc = 0x1BDB2Cu;
            goto label_1bdb2c;
        }
    }
    ctx->pc = 0x1BDAB8u;
    // 0x1bdab8: 0x252e0060  addiu       $t6, $t1, 0x60
    ctx->pc = 0x1bdab8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x1bdabc: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x1bdabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1bdac0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1bdac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1bdac4: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x1bdac4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bdac8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1bdac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bdacc: 0x27ac0080  addiu       $t4, $sp, 0x80
    ctx->pc = 0x1bdaccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bdad0: 0x27ad0090  addiu       $t5, $sp, 0x90
    ctx->pc = 0x1bdad0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bdad4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1bdad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1bdad8:
    // 0x1bdad8: 0x692f0007  ldl         $t7, 0x7($t1)
    ctx->pc = 0x1bdad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x1bdadc: 0x6d2f0000  ldr         $t7, 0x0($t1)
    ctx->pc = 0x1bdadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x1bdae0: 0x6931000f  ldl         $s1, 0xF($t1)
    ctx->pc = 0x1bdae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x1bdae4: 0x6d310008  ldr         $s1, 0x8($t1)
    ctx->pc = 0x1bdae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x1bdae8: 0x69320017  ldl         $s2, 0x17($t1)
    ctx->pc = 0x1bdae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x1bdaec: 0x6d320010  ldr         $s2, 0x10($t1)
    ctx->pc = 0x1bdaecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x1bdaf0: 0x6933001f  ldl         $s3, 0x1F($t1)
    ctx->pc = 0x1bdaf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x1bdaf4: 0x6d330018  ldr         $s3, 0x18($t1)
    ctx->pc = 0x1bdaf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
    // 0x1bdaf8: 0xb0af0007  sdl         $t7, 0x7($a1)
    ctx->pc = 0x1bdaf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bdafc: 0xb4af0000  sdr         $t7, 0x0($a1)
    ctx->pc = 0x1bdafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bdb00: 0xb0b1000f  sdl         $s1, 0xF($a1)
    ctx->pc = 0x1bdb00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bdb04: 0xb4b10008  sdr         $s1, 0x8($a1)
    ctx->pc = 0x1bdb04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bdb08: 0xb0b20017  sdl         $s2, 0x17($a1)
    ctx->pc = 0x1bdb08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bdb0c: 0xb4b20010  sdr         $s2, 0x10($a1)
    ctx->pc = 0x1bdb0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bdb10: 0xb0b3001f  sdl         $s3, 0x1F($a1)
    ctx->pc = 0x1bdb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bdb14: 0xb4b30018  sdr         $s3, 0x18($a1)
    ctx->pc = 0x1bdb14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bdb18: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x1bdb18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x1bdb1c: 0x152effee  bne         $t1, $t6, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1BDB1Cu;
    {
        const bool branch_taken_0x1bdb1c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x1BDB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDB1Cu;
        // 0x1bdb20: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdb1c) {
            ctx->pc = 0x1BDAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bdad8;
        }
    }
    ctx->pc = 0x1BDB24u;
    // 0x1bdb24: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1BDB24u;
    {
        const bool branch_taken_0x1bdb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDB24u;
        // 0x1bdb28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdb24) {
            ctx->pc = 0x1BDB7Cu;
            goto label_1bdb7c;
        }
    }
    ctx->pc = 0x1BDB2Cu;
label_1bdb2c:
    // 0x1bdb2c: 0x252e0060  addiu       $t6, $t1, 0x60
    ctx->pc = 0x1bdb2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x1bdb30: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x1bdb30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1bdb34: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1bdb34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1bdb38: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x1bdb38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bdb3c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1bdb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bdb40: 0x27ac0080  addiu       $t4, $sp, 0x80
    ctx->pc = 0x1bdb40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bdb44: 0x27ad0090  addiu       $t5, $sp, 0x90
    ctx->pc = 0x1bdb44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bdb48: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1bdb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1bdb4c:
    // 0x1bdb4c: 0xdd2f0000  ld          $t7, 0x0($t1)
    ctx->pc = 0x1bdb4cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1bdb50: 0xdd310008  ld          $s1, 0x8($t1)
    ctx->pc = 0x1bdb50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1bdb54: 0xdd320010  ld          $s2, 0x10($t1)
    ctx->pc = 0x1bdb54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1bdb58: 0xdd330018  ld          $s3, 0x18($t1)
    ctx->pc = 0x1bdb58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x1bdb5c: 0xfcaf0000  sd          $t7, 0x0($a1)
    ctx->pc = 0x1bdb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 15));
    // 0x1bdb60: 0xfcb10008  sd          $s1, 0x8($a1)
    ctx->pc = 0x1bdb60u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 17));
    // 0x1bdb64: 0xfcb20010  sd          $s2, 0x10($a1)
    ctx->pc = 0x1bdb64u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 18));
    // 0x1bdb68: 0xfcb30018  sd          $s3, 0x18($a1)
    ctx->pc = 0x1bdb68u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 19));
    // 0x1bdb6c: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x1bdb6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x1bdb70: 0x152efff6  bne         $t1, $t6, . + 4 + (-0xA << 2)
    ctx->pc = 0x1BDB70u;
    {
        const bool branch_taken_0x1bdb70 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x1BDB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDB70u;
        // 0x1bdb74: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdb70) {
            ctx->pc = 0x1BDB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bdb4c;
        }
    }
    ctx->pc = 0x1BDB78u;
    // 0x1bdb78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bdb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bdb7c:
    // 0x1bdb7c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1bdb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1bdb80: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x1bdb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x1bdb84: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x1bdb84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x1bdb88: 0xafad0010  sw          $t5, 0x10($sp)
    ctx->pc = 0x1bdb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
    // 0x1bdb8c: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x1bdb8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bdb90: 0xc04bab6  jal         func_12EAD8
    ctx->pc = 0x1BDB90u;
    SET_GPR_U32(ctx, 31, 0x1BDB98u);
    ctx->pc = 0x1BDB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB90u;
    // 0x1bdb94: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EAD8u, 0x1BDB90u, 0x1BDB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB98u;
label_1bdb98:
    // 0x1bdb98: 0xae02077c  sw          $v0, 0x77C($s0)
    ctx->pc = 0x1bdb98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1916), GPR_U32(ctx, 2));
    // 0x1bdb9c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1bdb9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1bdba0: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1bdba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1bdba4: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1bdba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bdba8: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1bdba8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1bdbac: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1bdbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bdbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDBB0u;
        // 0x1bdbb4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDBB8u;
}
