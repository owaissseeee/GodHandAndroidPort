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

// Function: cWorldLight_loadPreset
// Address: 0x2d8a10 - 0x2d8c60
void cWorldLight_loadPreset_0x2d8a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cWorldLight_loadPreset_0x2d8a10");
#endif

    switch (ctx->pc) {
        case 0x2d8b88u: goto label_2d8b88;
        case 0x2d8bb4u: goto label_2d8bb4;
        case 0x2d8bf4u: goto label_2d8bf4;
        default: break;
    }

    ctx->pc = 0x2d8a10u;

    // 0x2d8a10: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2d8a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2d8a14: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d8a14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2d8a18: 0x2442a400  addiu       $v0, $v0, -0x5C00
    ctx->pc = 0x2d8a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943744));
    // 0x2d8a1c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2d8a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x2d8a20: 0x519c0  sll         $v1, $a1, 7
    ctx->pc = 0x2d8a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x2d8a24: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2d8a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2d8a28: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2d8a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2d8a2c: 0x24c84700  addiu       $t0, $a2, 0x4700
    ctx->pc = 0x2d8a2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 18176));
    // 0x2d8a30: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2d8a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2d8a34: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x2d8a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d8a38: 0x10e00083  beqz        $a3, . + 4 + (0x83 << 2)
    ctx->pc = 0x2D8A38u;
    {
        const bool branch_taken_0x2d8a38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A38u;
        // 0x2d8a3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a38) {
            ctx->pc = 0x2D8C48u;
            goto label_2d8c48;
        }
    }
    ctx->pc = 0x2D8A40u;
    // 0x2d8a40: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d8a44: 0x25030030  addiu       $v1, $t0, 0x30
    ctx->pc = 0x2d8a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x2d8a48: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d8a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d8a4c: 0x10e30007  beq         $a3, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8A4Cu;
    {
        const bool branch_taken_0x2d8a4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8A4Cu;
        // 0x2d8a50: 0xac456288  sw          $a1, 0x6288($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 25224), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8a4c) {
            ctx->pc = 0x2D8A6Cu;
            goto label_2d8a6c;
        }
    }
    ctx->pc = 0x2D8A54u;
    // 0x2d8a54: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2d8a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8a58: 0xe5000030  swc1        $f0, 0x30($t0)
    ctx->pc = 0x2d8a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 48), bits); }
    // 0x2d8a5c: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x2d8a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8a60: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d8a60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d8a64: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2d8a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8a68: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d8a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2d8a6c:
    // 0x2d8a6c: 0x25030040  addiu       $v1, $t0, 0x40
    ctx->pc = 0x2d8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x2d8a70: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x2d8a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2d8a74: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8A74u;
    {
        const bool branch_taken_0x2d8a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8a74) {
            ctx->pc = 0x2D8A94u;
            goto label_2d8a94;
        }
    }
    ctx->pc = 0x2D8A7Cu;
    // 0x2d8a7c: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x2d8a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8a80: 0xe5000040  swc1        $f0, 0x40($t0)
    ctx->pc = 0x2d8a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 64), bits); }
    // 0x2d8a84: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d8a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8a88: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d8a88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d8a8c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d8a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8a90: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d8a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2d8a94:
    // 0x2d8a94: 0x24c54700  addiu       $a1, $a2, 0x4700
    ctx->pc = 0x2d8a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 18176));
    // 0x2d8a98: 0x88e20033  lwl         $v0, 0x33($a3)
    ctx->pc = 0x2d8a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2d8a9c: 0x98e20030  lwr         $v0, 0x30($a3)
    ctx->pc = 0x2d8a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2d8aa0: 0xa8a20003  swl         $v0, 0x3($a1)
    ctx->pc = 0x2d8aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8aa4: 0xb8a20000  swr         $v0, 0x0($a1)
    ctx->pc = 0x2d8aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8aa8: 0x88e60037  lwl         $a2, 0x37($a3)
    ctx->pc = 0x2d8aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 55); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x2d8aac: 0x98e60034  lwr         $a2, 0x34($a3)
    ctx->pc = 0x2d8aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 52); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x2d8ab0: 0xa9060007  swl         $a2, 0x7($t0)
    ctx->pc = 0x2d8ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8ab4: 0xb9060004  swr         $a2, 0x4($t0)
    ctx->pc = 0x2d8ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8ab8: 0x88f1003b  lwl         $s1, 0x3B($a3)
    ctx->pc = 0x2d8ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 59); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 17) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 17, (int32_t)merged); }
    // 0x2d8abc: 0x98f10038  lwr         $s1, 0x38($a3)
    ctx->pc = 0x2d8abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 56); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 17) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 17) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 17, merged64); }
    // 0x2d8ac0: 0xa911000b  swl         $s1, 0xB($t0)
    ctx->pc = 0x2d8ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 17); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8ac4: 0xb9110008  swr         $s1, 0x8($t0)
    ctx->pc = 0x2d8ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 17); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8ac8: 0x88e4003f  lwl         $a0, 0x3F($a3)
    ctx->pc = 0x2d8ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 63); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x2d8acc: 0x98e4003c  lwr         $a0, 0x3C($a3)
    ctx->pc = 0x2d8accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 60); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x2d8ad0: 0xa904000f  swl         $a0, 0xF($t0)
    ctx->pc = 0x2d8ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8ad4: 0xb904000c  swr         $a0, 0xC($t0)
    ctx->pc = 0x2d8ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8ad8: 0xc4e00040  lwc1        $f0, 0x40($a3)
    ctx->pc = 0x2d8ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8adc: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x2d8adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x2d8ae0: 0xc4e10044  lwc1        $f1, 0x44($a3)
    ctx->pc = 0x2d8ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8ae4: 0xe5010014  swc1        $f1, 0x14($t0)
    ctx->pc = 0x2d8ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x2d8ae8: 0xc4e00048  lwc1        $f0, 0x48($a3)
    ctx->pc = 0x2d8ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8aec: 0xe5000018  swc1        $f0, 0x18($t0)
    ctx->pc = 0x2d8aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x2d8af0: 0xc4e1004c  lwc1        $f1, 0x4C($a3)
    ctx->pc = 0x2d8af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8af4: 0xe501001c  swc1        $f1, 0x1C($t0)
    ctx->pc = 0x2d8af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
    // 0x2d8af8: 0xc4e00050  lwc1        $f0, 0x50($a3)
    ctx->pc = 0x2d8af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8afc: 0xe5000020  swc1        $f0, 0x20($t0)
    ctx->pc = 0x2d8afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x2d8b00: 0xc4e10054  lwc1        $f1, 0x54($a3)
    ctx->pc = 0x2d8b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8b04: 0xe5010024  swc1        $f1, 0x24($t0)
    ctx->pc = 0x2d8b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
    // 0x2d8b08: 0x88ec005b  lwl         $t4, 0x5B($a3)
    ctx->pc = 0x2d8b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 91); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 12) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 12, (int32_t)merged); }
    // 0x2d8b0c: 0x98ec0058  lwr         $t4, 0x58($a3)
    ctx->pc = 0x2d8b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 88); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 12) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 12) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 12, merged64); }
    // 0x2d8b10: 0xa90c0063  swl         $t4, 0x63($t0)
    ctx->pc = 0x2d8b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 12); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8b14: 0xb90c0060  swr         $t4, 0x60($t0)
    ctx->pc = 0x2d8b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 12); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8b18: 0xc4e0005c  lwc1        $f0, 0x5C($a3)
    ctx->pc = 0x2d8b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8b1c: 0xe5000064  swc1        $f0, 0x64($t0)
    ctx->pc = 0x2d8b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 100), bits); }
    // 0x2d8b20: 0xc4e10060  lwc1        $f1, 0x60($a3)
    ctx->pc = 0x2d8b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8b24: 0xe5010068  swc1        $f1, 0x68($t0)
    ctx->pc = 0x2d8b24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 104), bits); }
    // 0x2d8b28: 0x88e20067  lwl         $v0, 0x67($a3)
    ctx->pc = 0x2d8b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 103); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2d8b2c: 0x98e20064  lwr         $v0, 0x64($a3)
    ctx->pc = 0x2d8b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 100); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2d8b30: 0xa902006f  swl         $v0, 0x6F($t0)
    ctx->pc = 0x2d8b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 111); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8b34: 0xb902006c  swr         $v0, 0x6C($t0)
    ctx->pc = 0x2d8b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 108); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8b38: 0xc4e00068  lwc1        $f0, 0x68($a3)
    ctx->pc = 0x2d8b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8b3c: 0xe5000070  swc1        $f0, 0x70($t0)
    ctx->pc = 0x2d8b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 112), bits); }
    // 0x2d8b40: 0xc4e1006c  lwc1        $f1, 0x6C($a3)
    ctx->pc = 0x2d8b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8b44: 0xe5010074  swc1        $f1, 0x74($t0)
    ctx->pc = 0x2d8b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 116), bits); }
    // 0x2d8b48: 0x8ce20074  lw          $v0, 0x74($a3)
    ctx->pc = 0x2d8b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 116)));
    // 0x2d8b4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8B4Cu;
    {
        const bool branch_taken_0x2d8b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B4Cu;
        // 0x2d8b50: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b4c) {
            ctx->pc = 0x2D8B5Cu;
            goto label_2d8b5c;
        }
    }
    ctx->pc = 0x2D8B54u;
    // 0x2d8b54: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2D8B54u;
    {
        const bool branch_taken_0x2d8b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B54u;
        // 0x2d8b58: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b54) {
            ctx->pc = 0x2D8C48u;
            goto label_2d8c48;
        }
    }
    ctx->pc = 0x2D8B5Cu;
label_2d8b5c:
    // 0x2d8b5c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2d8b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d8b60: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2d8b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d8b64: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2d8b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d8b68: 0x8d020078  lw          $v0, 0x78($t0)
    ctx->pc = 0x2d8b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 120)));
    // 0x2d8b6c: 0x18400030  blez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2D8B6Cu;
    {
        const bool branch_taken_0x2d8b6c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2D8B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B6Cu;
        // 0x2d8b70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b6c) {
            ctx->pc = 0x2D8C30u;
            goto label_2d8c30;
        }
    }
    ctx->pc = 0x2D8B74u;
    // 0x2d8b74: 0x240d0070  addiu       $t5, $zero, 0x70
    ctx->pc = 0x2d8b74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2d8b78: 0x240f00ff  addiu       $t7, $zero, 0xFF
    ctx->pc = 0x2d8b78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d8b7c: 0x240e00ff  addiu       $t6, $zero, 0xFF
    ctx->pc = 0x2d8b7cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d8b80: 0xcd1018  mult        $v0, $a2, $t5
    ctx->pc = 0x2d8b80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d8b84: 0x0  nop
    ctx->pc = 0x2d8b84u;
    // NOP
label_2d8b88:
    // 0x2d8b88: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x2d8b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2d8b8c: 0x94620080  lhu         $v0, 0x80($v1)
    ctx->pc = 0x2d8b8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2d8b90: 0x104f0022  beq         $v0, $t7, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D8B90u;
    {
        const bool branch_taken_0x2d8b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x2D8B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B90u;
        // 0x2d8b94: 0x24cb0001  addiu       $t3, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b90) {
            ctx->pc = 0x2D8C1Cu;
            goto label_2d8c1c;
        }
    }
    ctx->pc = 0x2D8B98u;
    // 0x2d8b98: 0x94620082  lhu         $v0, 0x82($v1)
    ctx->pc = 0x2d8b98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 130)));
    // 0x2d8b9c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D8B9Cu;
    {
        const bool branch_taken_0x2d8b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8B9Cu;
        // 0x2d8ba0: 0x246200e0  addiu       $v0, $v1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8b9c) {
            ctx->pc = 0x2D8C1Cu;
            goto label_2d8c1c;
        }
    }
    ctx->pc = 0x2D8BA4u;
    // 0x2d8ba4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d8ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8ba8: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x2d8ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2d8bac: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2d8bacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d8bb0: 0x258a0001  addiu       $t2, $t4, 0x1
    ctx->pc = 0x2d8bb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_2d8bb4:
    // 0x2d8bb4: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2d8bb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8bb8: 0x78900010  lq          $s0, 0x10($a0)
    ctx->pc = 0x2d8bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d8bbc: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2d8bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2d8bc0: 0x7cb00010  sq          $s0, 0x10($a1)
    ctx->pc = 0x2d8bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 16));
    // 0x2d8bc4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2d8bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2d8bc8: 0x1482fffa  bne         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D8BC8u;
    {
        const bool branch_taken_0x2d8bc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D8BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8BC8u;
        // 0x2d8bcc: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8bc8) {
            ctx->pc = 0x2D8BB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8bb4;
        }
    }
    ctx->pc = 0x2D8BD0u;
    // 0x2d8bd0: 0xcd1818  mult        $v1, $a2, $t5
    ctx->pc = 0x2d8bd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d8bd4: 0x18d3018  mult        $a2, $t4, $t5
    ctx->pc = 0x2d8bd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2d8bd8: 0x788c0000  lq          $t4, 0x0($a0)
    ctx->pc = 0x2d8bd8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8bdc: 0x7cac0000  sq          $t4, 0x0($a1)
    ctx->pc = 0x2d8bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 12));
    // 0x2d8be0: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x2d8be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2d8be4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d8be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8be8: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x2d8be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2d8bec: 0xa44e0080  sh          $t6, 0x80($v0)
    ctx->pc = 0x2d8becu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 128), (uint16_t)GPR_U32(ctx, 14));
    // 0x2d8bf0: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x2d8bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_2d8bf4:
    // 0x2d8bf4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2d8bf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8bf8: 0x78850010  lq          $a1, 0x10($a0)
    ctx->pc = 0x2d8bf8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d8bfc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d8bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d8c00: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x2d8c00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
    // 0x2d8c04: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2d8c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2d8c08: 0x1489fffa  bne         $a0, $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D8C08u;
    {
        const bool branch_taken_0x2d8c08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x2D8C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C08u;
        // 0x2d8c0c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8c08) {
            ctx->pc = 0x2D8BF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8bf4;
        }
    }
    ctx->pc = 0x2D8C10u;
    // 0x2d8c10: 0x78900000  lq          $s0, 0x0($a0)
    ctx->pc = 0x2d8c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8c14: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x2d8c14u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c18: 0x7c700000  sq          $s0, 0x0($v1)
    ctx->pc = 0x2d8c18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 16));
label_2d8c1c:
    // 0x2d8c1c: 0x8d020078  lw          $v0, 0x78($t0)
    ctx->pc = 0x2d8c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 120)));
    // 0x2d8c20: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2d8c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c24: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2d8c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d8c28: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2D8C28u;
    {
        const bool branch_taken_0x2d8c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C28u;
        // 0x2d8c2c: 0xcd1018  mult        $v0, $a2, $t5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8c28) {
            ctx->pc = 0x2D8B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8b88;
        }
    }
    ctx->pc = 0x2D8C30u;
label_2d8c30:
    // 0x2d8c30: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2d8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2d8c34: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x2d8c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x2d8c38: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2d8c38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x2d8c3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d8c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8c40: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2d8c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2d8c44: 0xe3100a  movz        $v0, $a3, $v1
    ctx->pc = 0x2d8c44u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
label_2d8c48:
    // 0x2d8c48: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2d8c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d8c4c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2d8c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d8c50: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2d8c50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d8c54: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8C54u;
        // 0x2d8c58: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8C5Cu;
    // 0x2d8c5c: 0x0  nop
    ctx->pc = 0x2d8c5cu;
    // NOP
    ctx->pc = 0x2d8c60u;
}
