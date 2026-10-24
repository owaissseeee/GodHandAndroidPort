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

// Function: cWorldLight_Light_curent_set
// Address: 0x2d8408 - 0x2d8810
void cWorldLight_Light_curent_set_0x2d8408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cWorldLight_Light_curent_set_0x2d8408");
#endif

    switch (ctx->pc) {
        case 0x2d8590u: goto label_2d8590;
        case 0x2d85bcu: goto label_2d85bc;
        case 0x2d85fcu: goto label_2d85fc;
        case 0x2d8658u: goto label_2d8658;
        case 0x2d8688u: goto label_2d8688;
        case 0x2d86ecu: goto label_2d86ec;
        case 0x2d8708u: goto label_2d8708;
        case 0x2d872cu: goto label_2d872c;
        case 0x2d879cu: goto label_2d879c;
        default: break;
    }

    ctx->pc = 0x2d8408u;

    // 0x2d8408: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2d8408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2d840c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2d840cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2d8410: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2d8410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x2d8414: 0x2442a400  addiu       $v0, $v0, -0x5C00
    ctx->pc = 0x2d8414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943744));
    // 0x2d8418: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2d8418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x2d841c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2d841cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x2d8420: 0x519c0  sll         $v1, $a1, 7
    ctx->pc = 0x2d8420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x2d8424: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2d8424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x2d8428: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2d8428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x2d842c: 0x24d14700  addiu       $s1, $a2, 0x4700
    ctx->pc = 0x2d842cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 18176));
    // 0x2d8430: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2d8430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x2d8434: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2d8434u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d8438: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2d8438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x2d843c: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2d843cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x2d8440: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2d8440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x2d8444: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2d8444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d8448: 0x124000e6  beqz        $s2, . + 4 + (0xE6 << 2)
    ctx->pc = 0x2D8448u;
    {
        const bool branch_taken_0x2d8448 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8448u;
        // 0x2d844c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8448) {
            ctx->pc = 0x2D87E4u;
            goto label_2d87e4;
        }
    }
    ctx->pc = 0x2D8450u;
    // 0x2d8450: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d8450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d8454: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x2d8454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2d8458: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d8458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d845c: 0x12430007  beq         $s2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D845Cu;
    {
        const bool branch_taken_0x2d845c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D845Cu;
        // 0x2d8460: 0xac456288  sw          $a1, 0x6288($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 25224), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d845c) {
            ctx->pc = 0x2D847Cu;
            goto label_2d847c;
        }
    }
    ctx->pc = 0x2D8464u;
    // 0x2d8464: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2d8464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8468: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2d8468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2d846c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2d846cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8470: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d8470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d8474: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2d8474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8478: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d8478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2d847c:
    // 0x2d847c: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x2d847cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2d8480: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x2d8480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2d8484: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8484u;
    {
        const bool branch_taken_0x2d8484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8484) {
            ctx->pc = 0x2D84A4u;
            goto label_2d84a4;
        }
    }
    ctx->pc = 0x2D848Cu;
    // 0x2d848c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x2d848cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8490: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x2d8490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x2d8494: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d8494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8498: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d8498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d849c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d849cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d84a0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d84a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2d84a4:
    // 0x2d84a4: 0x24c54700  addiu       $a1, $a2, 0x4700
    ctx->pc = 0x2d84a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 18176));
    // 0x2d84a8: 0x8a420033  lwl         $v0, 0x33($s2)
    ctx->pc = 0x2d84a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2d84ac: 0x9a420030  lwr         $v0, 0x30($s2)
    ctx->pc = 0x2d84acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2d84b0: 0xa8a20003  swl         $v0, 0x3($a1)
    ctx->pc = 0x2d84b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d84b4: 0xb8a20000  swr         $v0, 0x0($a1)
    ctx->pc = 0x2d84b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d84b8: 0x8a460037  lwl         $a2, 0x37($s2)
    ctx->pc = 0x2d84b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x2d84bc: 0x9a460034  lwr         $a2, 0x34($s2)
    ctx->pc = 0x2d84bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 52); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x2d84c0: 0xaa260007  swl         $a2, 0x7($s1)
    ctx->pc = 0x2d84c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d84c4: 0xba260004  swr         $a2, 0x4($s1)
    ctx->pc = 0x2d84c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d84c8: 0x8a4e003b  lwl         $t6, 0x3B($s2)
    ctx->pc = 0x2d84c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 59); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 14) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 14, (int32_t)merged); }
    // 0x2d84cc: 0x9a4e0038  lwr         $t6, 0x38($s2)
    ctx->pc = 0x2d84ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 56); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 14) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 14) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 14, merged64); }
    // 0x2d84d0: 0xaa2e000b  swl         $t6, 0xB($s1)
    ctx->pc = 0x2d84d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 14); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d84d4: 0xba2e0008  swr         $t6, 0x8($s1)
    ctx->pc = 0x2d84d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 14); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d84d8: 0x8a43003f  lwl         $v1, 0x3F($s2)
    ctx->pc = 0x2d84d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 63); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2d84dc: 0x9a43003c  lwr         $v1, 0x3C($s2)
    ctx->pc = 0x2d84dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 60); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2d84e0: 0xaa23000f  swl         $v1, 0xF($s1)
    ctx->pc = 0x2d84e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d84e4: 0xba23000c  swr         $v1, 0xC($s1)
    ctx->pc = 0x2d84e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d84e8: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x2d84e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d84ec: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2d84ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2d84f0: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x2d84f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d84f4: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x2d84f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2d84f8: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x2d84f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d84fc: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x2d84fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2d8500: 0xc641004c  lwc1        $f1, 0x4C($s2)
    ctx->pc = 0x2d8500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8504: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x2d8504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x2d8508: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x2d8508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d850c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2d850cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2d8510: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x2d8510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8514: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x2d8514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2d8518: 0x8a47005b  lwl         $a3, 0x5B($s2)
    ctx->pc = 0x2d8518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 91); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x2d851c: 0x9a470058  lwr         $a3, 0x58($s2)
    ctx->pc = 0x2d851cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 88); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x2d8520: 0xaa270063  swl         $a3, 0x63($s1)
    ctx->pc = 0x2d8520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8524: 0xba270060  swr         $a3, 0x60($s1)
    ctx->pc = 0x2d8524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8528: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x2d8528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d852c: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x2d852cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x2d8530: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x2d8530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8534: 0xe6210068  swc1        $f1, 0x68($s1)
    ctx->pc = 0x2d8534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x2d8538: 0x8a4f0067  lwl         $t7, 0x67($s2)
    ctx->pc = 0x2d8538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 103); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 15) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 15, (int32_t)merged); }
    // 0x2d853c: 0x9a4f0064  lwr         $t7, 0x64($s2)
    ctx->pc = 0x2d853cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 100); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 15) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 15) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 15, merged64); }
    // 0x2d8540: 0xaa2f006f  swl         $t7, 0x6F($s1)
    ctx->pc = 0x2d8540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 111); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 15); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8544: 0xba2f006c  swr         $t7, 0x6C($s1)
    ctx->pc = 0x2d8544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 108); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 15); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8548: 0xc6400068  lwc1        $f0, 0x68($s2)
    ctx->pc = 0x2d8548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d854c: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x2d854cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x2d8550: 0xc641006c  lwc1        $f1, 0x6C($s2)
    ctx->pc = 0x2d8550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8554: 0xe6210074  swc1        $f1, 0x74($s1)
    ctx->pc = 0x2d8554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x2d8558: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x2d8558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x2d855c: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2D855Cu;
    {
        const bool branch_taken_0x2d855c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D855Cu;
        // 0x2d8560: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d855c) {
            ctx->pc = 0x2D87E0u;
            goto label_2d87e0;
        }
    }
    ctx->pc = 0x2D8564u;
    // 0x2d8564: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2d8564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d8568: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2d8568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d856c: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2d856cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d8570: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2d8570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2d8574: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x2d8574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d8578: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2D8578u;
    {
        const bool branch_taken_0x2d8578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8578u;
        // 0x2d857c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8578) {
            ctx->pc = 0x2D8638u;
            goto label_2d8638;
        }
    }
    ctx->pc = 0x2D8580u;
    // 0x2d8580: 0x240b0070  addiu       $t3, $zero, 0x70
    ctx->pc = 0x2d8580u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2d8584: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x2d8584u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d8588: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x2d8588u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d858c: 0xcb1018  mult        $v0, $a2, $t3
    ctx->pc = 0x2d858cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2d8590:
    // 0x2d8590: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2d8590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d8594: 0x94620080  lhu         $v0, 0x80($v1)
    ctx->pc = 0x2d8594u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2d8598: 0x104d0022  beq         $v0, $t5, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D8598u;
    {
        const bool branch_taken_0x2d8598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 13));
        ctx->pc = 0x2D859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8598u;
        // 0x2d859c: 0x24ca0001  addiu       $t2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8598) {
            ctx->pc = 0x2D8624u;
            goto label_2d8624;
        }
    }
    ctx->pc = 0x2D85A0u;
    // 0x2d85a0: 0x94620082  lhu         $v0, 0x82($v1)
    ctx->pc = 0x2d85a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 130)));
    // 0x2d85a4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D85A4u;
    {
        const bool branch_taken_0x2d85a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D85A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85A4u;
        // 0x2d85a8: 0x246200e0  addiu       $v0, $v1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85a4) {
            ctx->pc = 0x2D8624u;
            goto label_2d8624;
        }
    }
    ctx->pc = 0x2D85ACu;
    // 0x2d85ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d85acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d85b0: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x2d85b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2d85b4: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2d85b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d85b8: 0x25280001  addiu       $t0, $t1, 0x1
    ctx->pc = 0x2d85b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2d85bc:
    // 0x2d85bc: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2d85bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d85c0: 0x788e0010  lq          $t6, 0x10($a0)
    ctx->pc = 0x2d85c0u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d85c4: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2d85c4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2d85c8: 0x7cae0010  sq          $t6, 0x10($a1)
    ctx->pc = 0x2d85c8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 14));
    // 0x2d85cc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2d85ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2d85d0: 0x1482fffa  bne         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D85D0u;
    {
        const bool branch_taken_0x2d85d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D85D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D85D0u;
        // 0x2d85d4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d85d0) {
            ctx->pc = 0x2D85BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d85bc;
        }
    }
    ctx->pc = 0x2D85D8u;
    // 0x2d85d8: 0xcb1818  mult        $v1, $a2, $t3
    ctx->pc = 0x2d85d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d85dc: 0x12b3018  mult        $a2, $t1, $t3
    ctx->pc = 0x2d85dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2d85e0: 0x78890000  lq          $t1, 0x0($a0)
    ctx->pc = 0x2d85e0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d85e4: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x2d85e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
    // 0x2d85e8: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x2d85e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d85ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d85ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d85f0: 0xd11821  addu        $v1, $a2, $s1
    ctx->pc = 0x2d85f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2d85f4: 0xa44c0080  sh          $t4, 0x80($v0)
    ctx->pc = 0x2d85f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 128), (uint16_t)GPR_U32(ctx, 12));
    // 0x2d85f8: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x2d85f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_2d85fc:
    // 0x2d85fc: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2d85fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8600: 0x78850010  lq          $a1, 0x10($a0)
    ctx->pc = 0x2d8600u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d8604: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2d8604u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2d8608: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x2d8608u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
    // 0x2d860c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2d860cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2d8610: 0x1487fffa  bne         $a0, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D8610u;
    {
        const bool branch_taken_0x2d8610 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x2D8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8610u;
        // 0x2d8614: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8610) {
            ctx->pc = 0x2D85FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d85fc;
        }
    }
    ctx->pc = 0x2D8618u;
    // 0x2d8618: 0x788e0000  lq          $t6, 0x0($a0)
    ctx->pc = 0x2d8618u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d861c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2d861cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8620: 0x7c4e0000  sq          $t6, 0x0($v0)
    ctx->pc = 0x2d8620u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 14));
label_2d8624:
    // 0x2d8624: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2d8624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2d8628: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x2d8628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d862c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2d862cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d8630: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2D8630u;
    {
        const bool branch_taken_0x2d8630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D8634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8630u;
        // 0x2d8634: 0xcb1018  mult        $v0, $a2, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8630) {
            ctx->pc = 0x2D8590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8590;
        }
    }
    ctx->pc = 0x2D8638u;
label_2d8638:
    // 0x2d8638: 0xae290078  sw          $t1, 0x78($s1)
    ctx->pc = 0x2d8638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 9));
    // 0x2d863c: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x2d863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x2d8640: 0x18400067  blez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2D8640u;
    {
        const bool branch_taken_0x2d8640 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2D8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8640u;
        // 0x2d8644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8640) {
            ctx->pc = 0x2D87E0u;
            goto label_2d87e0;
        }
    }
    ctx->pc = 0x2D8648u;
    // 0x2d8648: 0x24140070  addiu       $s4, $zero, 0x70
    ctx->pc = 0x2d8648u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2d864c: 0x241700ff  addiu       $s7, $zero, 0xFF
    ctx->pc = 0x2d864cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d8650: 0x3c160400  lui         $s6, 0x400
    ctx->pc = 0x2d8650u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)1024 << 16));
    // 0x2d8654: 0xb42018  mult        $a0, $a1, $s4
    ctx->pc = 0x2d8654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2d8658:
    // 0x2d8658: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x2d8658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x2d865c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d865cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d8660: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2d8660u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8664: 0x10570059  beq         $v0, $s7, . + 4 + (0x59 << 2)
    ctx->pc = 0x2D8664u;
    {
        const bool branch_taken_0x2d8664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x2D8668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8664u;
        // 0x2d8668: 0x24b50001  addiu       $s5, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8664) {
            ctx->pc = 0x2D87CCu;
            goto label_2d87cc;
        }
    }
    ctx->pc = 0x2D866Cu;
    // 0x2d866c: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x2d866cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2d8670: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2D8670u;
    {
        const bool branch_taken_0x2d8670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8670u;
        // 0x2d8674: 0x24830060  addiu       $v1, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8670) {
            ctx->pc = 0x2D878Cu;
            goto label_2d878c;
        }
    }
    ctx->pc = 0x2D8678u;
    // 0x2d8678: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2d8678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2d867c: 0x542818  mult        $a1, $v0, $s4
    ctx->pc = 0x2d867cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2d8680: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x2d8680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2d8684: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2d8684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_2d8688:
    // 0x2d8688: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x2d8688u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d868c: 0x78870010  lq          $a3, 0x10($a0)
    ctx->pc = 0x2d868cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d8690: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x2d8690u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x2d8694: 0x7c470010  sq          $a3, 0x10($v0)
    ctx->pc = 0x2d8694u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 7));
    // 0x2d8698: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2d8698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2d869c: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D869Cu;
    {
        const bool branch_taken_0x2d869c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D86A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D869Cu;
        // 0x2d86a0: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d869c) {
            ctx->pc = 0x2D8688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8688;
        }
    }
    ctx->pc = 0x2D86A4u;
    // 0x2d86a4: 0x788e0000  lq          $t6, 0x0($a0)
    ctx->pc = 0x2d86a4u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d86a8: 0x24130070  addiu       $s3, $zero, 0x70
    ctx->pc = 0x2d86a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2d86ac: 0x7c4e0000  sq          $t6, 0x0($v0)
    ctx->pc = 0x2d86acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 14));
    // 0x2d86b0: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x2d86b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2d86b4: 0x931018  mult        $v0, $a0, $s3
    ctx->pc = 0x2d86b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d86b8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2d86b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d86bc: 0x8c6200d8  lw          $v0, 0xD8($v1)
    ctx->pc = 0x2d86bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x2d86c0: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x2d86c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x2d86c4: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D86C4u;
    {
        const bool branch_taken_0x2d86c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D86C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D86C4u;
        // 0x2d86c8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d86c4) {
            ctx->pc = 0x2D87C0u;
            goto label_2d87c0;
        }
    }
    ctx->pc = 0x2D86CCu;
    // 0x2d86cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d86ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d86d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d86d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d86d4: 0x0  nop
    ctx->pc = 0x2d86d4u;
    // NOP
    // 0x2d86d8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2d86d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2d86dc: 0x8e300078  lw          $s0, 0x78($s1)
    ctx->pc = 0x2d86dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2d86e0: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x2d86e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d86e4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2D86E4u;
    SET_GPR_U32(ctx, 31, 0x2D86ECu);
    ctx->pc = 0x2D86E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D86E4u;
    // 0x2d86e8: 0x518021  addu        $s0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2D86E4u, 0x2D86ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D86ECu;
label_2d86ec:
    // 0x2d86ec: 0x904302b4  lbu         $v1, 0x2B4($v0)
    ctx->pc = 0x2d86ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 692)));
    // 0x2d86f0: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x2d86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2d86f4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2d86f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d86f8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D86F8u;
    {
        const bool branch_taken_0x2d86f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d86f8) {
            ctx->pc = 0x2D8724u;
            goto label_2d8724;
        }
    }
    ctx->pc = 0x2D8700u;
    // 0x2d8700: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2D8700u;
    SET_GPR_U32(ctx, 31, 0x2D8708u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2D8700u, 0x2D8708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8708u;
label_2d8708:
    // 0x2d8708: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d8708u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d870c: 0x906202b4  lbu         $v0, 0x2B4($v1)
    ctx->pc = 0x2d870cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x2d8710: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D8710u;
    {
        const bool branch_taken_0x2d8710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8710u;
        // 0x2d8714: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8710) {
            ctx->pc = 0x2D8774u;
            goto label_2d8774;
        }
    }
    ctx->pc = 0x2D8718u;
    // 0x2d8718: 0x8c620278  lw          $v0, 0x278($v1)
    ctx->pc = 0x2d8718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x2d871c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2D871Cu;
    {
        const bool branch_taken_0x2d871c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D871Cu;
        // 0x2d8720: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d871c) {
            ctx->pc = 0x2D8778u;
            goto label_2d8778;
        }
    }
    ctx->pc = 0x2D8724u;
label_2d8724:
    // 0x2d8724: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2D8724u;
    SET_GPR_U32(ctx, 31, 0x2D872Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2D8724u, 0x2D872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D872Cu;
label_2d872c:
    // 0x2d872c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d872cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8730: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2d8730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2d8734: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x2d8734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x2d8738: 0x532018  mult        $a0, $v0, $s3
    ctx->pc = 0x2d8738u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2d873c: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x2d873cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x2d8740: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x2d8740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2d8744: 0x8c4400cc  lw          $a0, 0xCC($v0)
    ctx->pc = 0x2d8744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x2d8748: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D8748u;
    {
        const bool branch_taken_0x2d8748 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2D874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8748u;
        // 0x2d874c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8748) {
            ctx->pc = 0x2D8758u;
            goto label_2d8758;
        }
    }
    ctx->pc = 0x2D8750u;
    // 0x2d8750: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2d8750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d8754: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d8754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8758:
    // 0x2d8758: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2d8758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2d875c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D875Cu;
    {
        const bool branch_taken_0x2d875c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D875Cu;
        // 0x2d8760: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d875c) {
            ctx->pc = 0x2D8774u;
            goto label_2d8774;
        }
    }
    ctx->pc = 0x2D8764u;
    // 0x2d8764: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x2d8764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x2d8768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d8768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d876c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D876Cu;
    {
        const bool branch_taken_0x2d876c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D876Cu;
        // 0x2d8770: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d876c) {
            ctx->pc = 0x2D8778u;
            goto label_2d8778;
        }
    }
    ctx->pc = 0x2D8774u;
label_2d8774:
    // 0x2d8774: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d8774u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8778:
    // 0x2d8778: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2d8778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2d877c: 0x542018  mult        $a0, $v0, $s4
    ctx->pc = 0x2d877cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2d8780: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x2d8780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2d8784: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D8784u;
    {
        const bool branch_taken_0x2d8784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8784u;
        // 0x2d8788: 0xac4300d4  sw          $v1, 0xD4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8784) {
            ctx->pc = 0x2D87C0u;
            goto label_2d87c0;
        }
    }
    ctx->pc = 0x2D878Cu;
label_2d878c:
    // 0x2d878c: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2d878cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2d8790: 0x542818  mult        $a1, $v0, $s4
    ctx->pc = 0x2d8790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2d8794: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x2d8794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2d8798: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2d8798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_2d879c:
    // 0x2d879c: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x2d879cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d87a0: 0x78870010  lq          $a3, 0x10($a0)
    ctx->pc = 0x2d87a0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d87a4: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x2d87a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x2d87a8: 0x7c470010  sq          $a3, 0x10($v0)
    ctx->pc = 0x2d87a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 7));
    // 0x2d87ac: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2d87acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2d87b0: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D87B0u;
    {
        const bool branch_taken_0x2d87b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D87B0u;
        // 0x2d87b4: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d87b0) {
            ctx->pc = 0x2D879Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d879c;
        }
    }
    ctx->pc = 0x2D87B8u;
    // 0x2d87b8: 0x788e0000  lq          $t6, 0x0($a0)
    ctx->pc = 0x2d87b8u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d87bc: 0x7c4e0000  sq          $t6, 0x0($v0)
    ctx->pc = 0x2d87bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 14));
label_2d87c0:
    // 0x2d87c0: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2d87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2d87c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d87c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d87c8: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x2d87c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
label_2d87cc:
    // 0x2d87cc: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x2d87ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x2d87d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d87d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d87d4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2d87d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d87d8: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x2D87D8u;
    {
        const bool branch_taken_0x2d87d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D87DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D87D8u;
        // 0x2d87dc: 0xb42018  mult        $a0, $a1, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d87d8) {
            ctx->pc = 0x2D8658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8658;
        }
    }
    ctx->pc = 0x2D87E0u;
label_2d87e0:
    // 0x2d87e0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2d87e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d87e4:
    // 0x2d87e4: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x2d87e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2d87e8: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x2d87e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d87ec: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2d87ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d87f0: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x2d87f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d87f4: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x2d87f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d87f8: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2d87f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d87fc: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x2d87fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d8800: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2d8800u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d8804: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2d8804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d8808: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8808u;
        // 0x2d880c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8810u;
}
