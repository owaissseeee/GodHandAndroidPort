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

// Function: cWorldLight_savePreset
// Address: 0x2d82a0 - 0x2d8408
void cWorldLight_savePreset_0x2d82a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cWorldLight_savePreset_0x2d82a0");
#endif

    switch (ctx->pc) {
        case 0x2d83b0u: goto label_2d83b0;
        case 0x2d83c8u: goto label_2d83c8;
        default: break;
    }

    ctx->pc = 0x2d82a0u;

    // 0x2d82a0: 0x24c20030  addiu       $v0, $a2, 0x30
    ctx->pc = 0x2d82a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x2d82a4: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D82A4u;
    {
        const bool branch_taken_0x2d82a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D82A4u;
        // 0x2d82a8: 0x24a30010  addiu       $v1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d82a4) {
            ctx->pc = 0x2D82C4u;
            goto label_2d82c4;
        }
    }
    ctx->pc = 0x2D82ACu;
    // 0x2d82ac: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x2d82acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d82b0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2d82b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2d82b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d82b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d82b8: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x2d82b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2d82bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d82bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d82c0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2d82c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_2d82c4:
    // 0x2d82c4: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x2d82c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2d82c8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D82C8u;
    {
        const bool branch_taken_0x2d82c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d82c8) {
            ctx->pc = 0x2D82E8u;
            goto label_2d82e8;
        }
    }
    ctx->pc = 0x2D82D0u;
    // 0x2d82d0: 0xc4c00040  lwc1        $f0, 0x40($a2)
    ctx->pc = 0x2d82d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d82d4: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x2d82d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x2d82d8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d82d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d82dc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d82dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d82e0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d82e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d82e4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d82e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2d82e8:
    // 0x2d82e8: 0x88c20003  lwl         $v0, 0x3($a2)
    ctx->pc = 0x2d82e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2d82ec: 0x98c20000  lwr         $v0, 0x0($a2)
    ctx->pc = 0x2d82ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2d82f0: 0xa8a20033  swl         $v0, 0x33($a1)
    ctx->pc = 0x2d82f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d82f4: 0xb8a20030  swr         $v0, 0x30($a1)
    ctx->pc = 0x2d82f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d82f8: 0x88c80007  lwl         $t0, 0x7($a2)
    ctx->pc = 0x2d82f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x2d82fc: 0x98c80004  lwr         $t0, 0x4($a2)
    ctx->pc = 0x2d82fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x2d8300: 0xa8a80037  swl         $t0, 0x37($a1)
    ctx->pc = 0x2d8300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 55); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8304: 0xb8a80034  swr         $t0, 0x34($a1)
    ctx->pc = 0x2d8304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 52); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8308: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d8308u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d830c: 0x88cc000b  lwl         $t4, 0xB($a2)
    ctx->pc = 0x2d830cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 12) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 12, (int32_t)merged); }
    // 0x2d8310: 0x98cc0008  lwr         $t4, 0x8($a2)
    ctx->pc = 0x2d8310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 12) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 12) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 12, merged64); }
    // 0x2d8314: 0xa8ac003b  swl         $t4, 0x3B($a1)
    ctx->pc = 0x2d8314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 59); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 12); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8318: 0xb8ac0038  swr         $t4, 0x38($a1)
    ctx->pc = 0x2d8318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 56); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 12); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d831c: 0x88c8000f  lwl         $t0, 0xF($a2)
    ctx->pc = 0x2d831cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x2d8320: 0x98c8000c  lwr         $t0, 0xC($a2)
    ctx->pc = 0x2d8320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x2d8324: 0xa8a8003f  swl         $t0, 0x3F($a1)
    ctx->pc = 0x2d8324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 63); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8328: 0xb8a8003c  swr         $t0, 0x3C($a1)
    ctx->pc = 0x2d8328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 60); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d832c: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2d832cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8330: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x2d8330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x2d8334: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x2d8334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8338: 0xe4a10044  swc1        $f1, 0x44($a1)
    ctx->pc = 0x2d8338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x2d833c: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x2d833cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8340: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x2d8340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x2d8344: 0xc4c1001c  lwc1        $f1, 0x1C($a2)
    ctx->pc = 0x2d8344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8348: 0xe4a1004c  swc1        $f1, 0x4C($a1)
    ctx->pc = 0x2d8348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
    // 0x2d834c: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x2d834cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8350: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x2d8350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x2d8354: 0xc4c10024  lwc1        $f1, 0x24($a2)
    ctx->pc = 0x2d8354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8358: 0xe4a10054  swc1        $f1, 0x54($a1)
    ctx->pc = 0x2d8358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x2d835c: 0x88cc0063  lwl         $t4, 0x63($a2)
    ctx->pc = 0x2d835cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 12) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 12, (int32_t)merged); }
    // 0x2d8360: 0x98cc0060  lwr         $t4, 0x60($a2)
    ctx->pc = 0x2d8360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 12) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 12) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 12, merged64); }
    // 0x2d8364: 0xa8ac005b  swl         $t4, 0x5B($a1)
    ctx->pc = 0x2d8364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 91); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 12); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8368: 0xb8ac0058  swr         $t4, 0x58($a1)
    ctx->pc = 0x2d8368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 88); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 12); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d836c: 0xc4c00064  lwc1        $f0, 0x64($a2)
    ctx->pc = 0x2d836cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8370: 0xe4a0005c  swc1        $f0, 0x5C($a1)
    ctx->pc = 0x2d8370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
    // 0x2d8374: 0xc4c10068  lwc1        $f1, 0x68($a2)
    ctx->pc = 0x2d8374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8378: 0xe4a10060  swc1        $f1, 0x60($a1)
    ctx->pc = 0x2d8378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
    // 0x2d837c: 0x88c8006f  lwl         $t0, 0x6F($a2)
    ctx->pc = 0x2d837cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 111); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x2d8380: 0x98c8006c  lwr         $t0, 0x6C($a2)
    ctx->pc = 0x2d8380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 108); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x2d8384: 0xa8a80067  swl         $t0, 0x67($a1)
    ctx->pc = 0x2d8384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 103); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8388: 0xb8a80064  swr         $t0, 0x64($a1)
    ctx->pc = 0x2d8388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 100); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d838c: 0xc4c00070  lwc1        $f0, 0x70($a2)
    ctx->pc = 0x2d838cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8390: 0xe4a00068  swc1        $f0, 0x68($a1)
    ctx->pc = 0x2d8390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 104), bits); }
    // 0x2d8394: 0xc4c10074  lwc1        $f1, 0x74($a2)
    ctx->pc = 0x2d8394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8398: 0xe4a1006c  swc1        $f1, 0x6C($a1)
    ctx->pc = 0x2d8398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 108), bits); }
    // 0x2d839c: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x2d839cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x2d83a0: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D83A0u;
    {
        const bool branch_taken_0x2d83a0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2D83A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83A0u;
        // 0x2d83a4: 0xaca20070  sw          $v0, 0x70($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d83a0) {
            ctx->pc = 0x2D8400u;
            goto label_2d8400;
        }
    }
    ctx->pc = 0x2D83A8u;
    // 0x2d83a8: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x2d83a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2d83ac: 0x8ca20074  lw          $v0, 0x74($a1)
    ctx->pc = 0x2d83acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
label_2d83b0:
    // 0x2d83b0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D83B0u;
    {
        const bool branch_taken_0x2d83b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D83B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83B0u;
        // 0x2d83b4: 0x24670001  addiu       $a3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d83b0) {
            ctx->pc = 0x2D83ECu;
            goto label_2d83ec;
        }
    }
    ctx->pc = 0x2D83B8u;
    // 0x2d83b8: 0x682018  mult        $a0, $v1, $t0
    ctx->pc = 0x2d83b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2d83bc: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x2d83bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x2d83c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d83c4: 0x24c400e0  addiu       $a0, $a2, 0xE0
    ctx->pc = 0x2d83c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
label_2d83c8:
    // 0x2d83c8: 0x78690000  lq          $t1, 0x0($v1)
    ctx->pc = 0x2d83c8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d83cc: 0x786a0010  lq          $t2, 0x10($v1)
    ctx->pc = 0x2d83ccu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d83d0: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x2d83d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x2d83d4: 0x7c4a0010  sq          $t2, 0x10($v0)
    ctx->pc = 0x2d83d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 10));
    // 0x2d83d8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2d83d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2d83dc: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D83DCu;
    {
        const bool branch_taken_0x2d83dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D83E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D83DCu;
        // 0x2d83e0: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d83dc) {
            ctx->pc = 0x2D83C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d83c8;
        }
    }
    ctx->pc = 0x2D83E4u;
    // 0x2d83e4: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2d83e4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d83e8: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x2d83e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_2d83ec:
    // 0x2d83ec: 0x8ca20070  lw          $v0, 0x70($a1)
    ctx->pc = 0x2d83ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x2d83f0: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2d83f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d83f4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2d83f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d83f8: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2D83F8u;
    {
        const bool branch_taken_0x2d83f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d83f8) {
            ctx->pc = 0x2D83FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D83F8u;
            // 0x2d83fc: 0x8ca20074  lw          $v0, 0x74($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D83B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d83b0;
        }
    }
    ctx->pc = 0x2D8400u;
label_2d8400:
    // 0x2d8400: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8408u;
}
