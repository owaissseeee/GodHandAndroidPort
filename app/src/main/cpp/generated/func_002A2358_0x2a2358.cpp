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

// Function: func_002A2358
// Address: 0x2a2358 - 0x2a2818
void func_002A2358_0x2a2358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A2358_0x2a2358");
#endif

    switch (ctx->pc) {
        case 0x2a23d8u: goto label_2a23d8;
        case 0x2a246cu: goto label_2a246c;
        case 0x2a24b0u: goto label_2a24b0;
        case 0x2a2504u: goto label_2a2504;
        case 0x2a254cu: goto label_2a254c;
        case 0x2a25a0u: goto label_2a25a0;
        case 0x2a25e8u: goto label_2a25e8;
        case 0x2a263cu: goto label_2a263c;
        case 0x2a2684u: goto label_2a2684;
        case 0x2a26d8u: goto label_2a26d8;
        case 0x2a2720u: goto label_2a2720;
        case 0x2a2774u: goto label_2a2774;
        default: break;
    }

    ctx->pc = 0x2a2358u;

    // 0x2a2358: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x2a2358u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a235c: 0x24a80008  addiu       $t0, $a1, 0x8
    ctx->pc = 0x2a235cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2a2360: 0x24c40078  addiu       $a0, $a2, 0x78
    ctx->pc = 0x2a2360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 120));
    // 0x2a2364: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a2364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a2368: 0x881025  or          $v0, $a0, $t0
    ctx->pc = 0x2a2368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x2a236c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2a236cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2a2370: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2a2370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2a2374: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2a2374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2a2378: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2a2378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2a237c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a237cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a2380: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2a2380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2a2384: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2a2384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2a2388: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2a2388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2a238c: 0x7fb70000  sq          $s7, 0x0($sp)
    ctx->pc = 0x2a238cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 23));
    // 0x2a2390: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2A2390u;
    {
        const bool branch_taken_0x2a2390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2390u;
        // 0x2a2394: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2390) {
            ctx->pc = 0x2A242Cu;
            goto label_2a242c;
        }
    }
    ctx->pc = 0x2A2398u;
    // 0x2a2398: 0x24c300d8  addiu       $v1, $a2, 0xD8
    ctx->pc = 0x2a2398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 216));
    // 0x2a239c: 0x24a7006c  addiu       $a3, $a1, 0x6C
    ctx->pc = 0x2a239cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 108));
    // 0x2a23a0: 0x24c200dc  addiu       $v0, $a2, 0xDC
    ctx->pc = 0x2a23a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 220));
    // 0x2a23a4: 0x24c9013c  addiu       $t1, $a2, 0x13C
    ctx->pc = 0x2a23a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 316));
    // 0x2a23a8: 0x24af00d0  addiu       $t7, $a1, 0xD0
    ctx->pc = 0x2a23a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x2a23ac: 0x24ce0140  addiu       $t6, $a2, 0x140
    ctx->pc = 0x2a23acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x2a23b0: 0x24ca01a0  addiu       $t2, $a2, 0x1A0
    ctx->pc = 0x2a23b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 416));
    // 0x2a23b4: 0x24b90134  addiu       $t9, $a1, 0x134
    ctx->pc = 0x2a23b4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), 308));
    // 0x2a23b8: 0x24d801a4  addiu       $t8, $a2, 0x1A4
    ctx->pc = 0x2a23b8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 6), 420));
    // 0x2a23bc: 0x24cb0204  addiu       $t3, $a2, 0x204
    ctx->pc = 0x2a23bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 516));
    // 0x2a23c0: 0x24b101fc  addiu       $s1, $a1, 0x1FC
    ctx->pc = 0x2a23c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 508));
    // 0x2a23c4: 0x24d00014  addiu       $s0, $a2, 0x14
    ctx->pc = 0x2a23c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x2a23c8: 0x24cc0074  addiu       $t4, $a2, 0x74
    ctx->pc = 0x2a23c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 116));
    // 0x2a23cc: 0x24b30198  addiu       $s3, $a1, 0x198
    ctx->pc = 0x2a23ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 408));
    // 0x2a23d0: 0x24d20274  addiu       $s2, $a2, 0x274
    ctx->pc = 0x2a23d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 628));
    // 0x2a23d4: 0x24cd02d4  addiu       $t5, $a2, 0x2D4
    ctx->pc = 0x2a23d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 724));
label_2a23d8:
    // 0x2a23d8: 0x68940007  ldl         $s4, 0x7($a0)
    ctx->pc = 0x2a23d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x2a23dc: 0x6c940000  ldr         $s4, 0x0($a0)
    ctx->pc = 0x2a23dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x2a23e0: 0x6895000f  ldl         $s5, 0xF($a0)
    ctx->pc = 0x2a23e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem << shift)); }
    // 0x2a23e4: 0x6c950008  ldr         $s5, 0x8($a0)
    ctx->pc = 0x2a23e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x2a23e8: 0x68960017  ldl         $s6, 0x17($a0)
    ctx->pc = 0x2a23e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
    // 0x2a23ec: 0x6c960010  ldr         $s6, 0x10($a0)
    ctx->pc = 0x2a23ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem >> shift)); }
    // 0x2a23f0: 0x6897001f  ldl         $s7, 0x1F($a0)
    ctx->pc = 0x2a23f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
    // 0x2a23f4: 0x6c970018  ldr         $s7, 0x18($a0)
    ctx->pc = 0x2a23f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
    // 0x2a23f8: 0xb1140007  sdl         $s4, 0x7($t0)
    ctx->pc = 0x2a23f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a23fc: 0xb5140000  sdr         $s4, 0x0($t0)
    ctx->pc = 0x2a23fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2400: 0xb115000f  sdl         $s5, 0xF($t0)
    ctx->pc = 0x2a2400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2404: 0xb5150008  sdr         $s5, 0x8($t0)
    ctx->pc = 0x2a2404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2408: 0xb1160017  sdl         $s6, 0x17($t0)
    ctx->pc = 0x2a2408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a240c: 0xb5160010  sdr         $s6, 0x10($t0)
    ctx->pc = 0x2a240cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2410: 0xb117001f  sdl         $s7, 0x1F($t0)
    ctx->pc = 0x2a2410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2414: 0xb5170018  sdr         $s7, 0x18($t0)
    ctx->pc = 0x2a2414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2418: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2a2418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2a241c: 0x1483ffee  bne         $a0, $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A241Cu;
    {
        const bool branch_taken_0x2a241c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A241Cu;
        // 0x2a2420: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a241c) {
            ctx->pc = 0x2A23D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a23d8;
        }
    }
    ctx->pc = 0x2A2424u;
    // 0x2a2424: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2A2424u;
    {
        const bool branch_taken_0x2a2424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2424u;
        // 0x2a2428: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2424) {
            ctx->pc = 0x2A249Cu;
            goto label_2a249c;
        }
    }
    ctx->pc = 0x2A242Cu;
label_2a242c:
    // 0x2a242c: 0x24c300d8  addiu       $v1, $a2, 0xD8
    ctx->pc = 0x2a242cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 216));
    // 0x2a2430: 0x24a7006c  addiu       $a3, $a1, 0x6C
    ctx->pc = 0x2a2430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 108));
    // 0x2a2434: 0x24c200dc  addiu       $v0, $a2, 0xDC
    ctx->pc = 0x2a2434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 220));
    // 0x2a2438: 0x24c9013c  addiu       $t1, $a2, 0x13C
    ctx->pc = 0x2a2438u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 316));
    // 0x2a243c: 0x24af00d0  addiu       $t7, $a1, 0xD0
    ctx->pc = 0x2a243cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x2a2440: 0x24ce0140  addiu       $t6, $a2, 0x140
    ctx->pc = 0x2a2440u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x2a2444: 0x24ca01a0  addiu       $t2, $a2, 0x1A0
    ctx->pc = 0x2a2444u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 416));
    // 0x2a2448: 0x24b90134  addiu       $t9, $a1, 0x134
    ctx->pc = 0x2a2448u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), 308));
    // 0x2a244c: 0x24d801a4  addiu       $t8, $a2, 0x1A4
    ctx->pc = 0x2a244cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 6), 420));
    // 0x2a2450: 0x24cb0204  addiu       $t3, $a2, 0x204
    ctx->pc = 0x2a2450u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 516));
    // 0x2a2454: 0x24b101fc  addiu       $s1, $a1, 0x1FC
    ctx->pc = 0x2a2454u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 508));
    // 0x2a2458: 0x24d00014  addiu       $s0, $a2, 0x14
    ctx->pc = 0x2a2458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x2a245c: 0x24cc0074  addiu       $t4, $a2, 0x74
    ctx->pc = 0x2a245cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 116));
    // 0x2a2460: 0x24b30198  addiu       $s3, $a1, 0x198
    ctx->pc = 0x2a2460u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 408));
    // 0x2a2464: 0x24d20274  addiu       $s2, $a2, 0x274
    ctx->pc = 0x2a2464u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 628));
    // 0x2a2468: 0x24cd02d4  addiu       $t5, $a2, 0x2D4
    ctx->pc = 0x2a2468u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 724));
label_2a246c:
    // 0x2a246c: 0xdc940000  ld          $s4, 0x0($a0)
    ctx->pc = 0x2a246cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a2470: 0xdc950008  ld          $s5, 0x8($a0)
    ctx->pc = 0x2a2470u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a2474: 0xdc960010  ld          $s6, 0x10($a0)
    ctx->pc = 0x2a2474u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a2478: 0xdc970018  ld          $s7, 0x18($a0)
    ctx->pc = 0x2a2478u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2a247c: 0xfd140000  sd          $s4, 0x0($t0)
    ctx->pc = 0x2a247cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 20));
    // 0x2a2480: 0xfd150008  sd          $s5, 0x8($t0)
    ctx->pc = 0x2a2480u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 21));
    // 0x2a2484: 0xfd160010  sd          $s6, 0x10($t0)
    ctx->pc = 0x2a2484u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 22));
    // 0x2a2488: 0xfd170018  sd          $s7, 0x18($t0)
    ctx->pc = 0x2a2488u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 23));
    // 0x2a248c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2a248cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2a2490: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A2490u;
    {
        const bool branch_taken_0x2a2490 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A2494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2490u;
        // 0x2a2494: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2490) {
            ctx->pc = 0x2A246Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a246c;
        }
    }
    ctx->pc = 0x2A2498u;
    // 0x2a2498: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a2498u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a249c:
    // 0x2a249c: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x2a249cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a24a0: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x2a24a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2a24a4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2a24a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2a24a8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A24A8u;
    {
        const bool branch_taken_0x2a24a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A24A8u;
        // 0x2a24ac: 0xad140000  sw          $s4, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a24a8) {
            ctx->pc = 0x2A2504u;
            goto label_2a2504;
        }
    }
    ctx->pc = 0x2A24B0u;
label_2a24b0:
    // 0x2a24b0: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x2a24b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a24b4: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x2a24b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a24b8: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x2a24b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a24bc: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x2a24bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a24c0: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x2a24c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2a24c4: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x2a24c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2a24c8: 0x6874001f  ldl         $s4, 0x1F($v1)
    ctx->pc = 0x2a24c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x2a24cc: 0x6c740018  ldr         $s4, 0x18($v1)
    ctx->pc = 0x2a24ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x2a24d0: 0xb0e20007  sdl         $v0, 0x7($a3)
    ctx->pc = 0x2a24d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a24d4: 0xb4e20000  sdr         $v0, 0x0($a3)
    ctx->pc = 0x2a24d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a24d8: 0xb0e4000f  sdl         $a0, 0xF($a3)
    ctx->pc = 0x2a24d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a24dc: 0xb4e40008  sdr         $a0, 0x8($a3)
    ctx->pc = 0x2a24dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a24e0: 0xb0e80017  sdl         $t0, 0x17($a3)
    ctx->pc = 0x2a24e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a24e4: 0xb4e80010  sdr         $t0, 0x10($a3)
    ctx->pc = 0x2a24e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a24e8: 0xb0f4001f  sdl         $s4, 0x1F($a3)
    ctx->pc = 0x2a24e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a24ec: 0xb4f40018  sdr         $s4, 0x18($a3)
    ctx->pc = 0x2a24ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a24f0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a24f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a24f4: 0x1469ffee  bne         $v1, $t1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A24F4u;
    {
        const bool branch_taken_0x2a24f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x2A24F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A24F4u;
        // 0x2a24f8: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a24f4) {
            ctx->pc = 0x2A24B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a24b0;
        }
    }
    ctx->pc = 0x2A24FCu;
    // 0x2a24fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A24FCu;
    {
        const bool branch_taken_0x2a24fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A24FCu;
        // 0x2a2500: 0x1e0402d  daddu       $t0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a24fc) {
            ctx->pc = 0x2A2534u;
            goto label_2a2534;
        }
    }
    ctx->pc = 0x2A2504u;
label_2a2504:
    // 0x2a2504: 0xdc750000  ld          $s5, 0x0($v1)
    ctx->pc = 0x2a2504u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a2508: 0xdc760008  ld          $s6, 0x8($v1)
    ctx->pc = 0x2a2508u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a250c: 0xdc770010  ld          $s7, 0x10($v1)
    ctx->pc = 0x2a250cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a2510: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x2a2510u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a2514: 0xfcf50000  sd          $s5, 0x0($a3)
    ctx->pc = 0x2a2514u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 21));
    // 0x2a2518: 0xfcf60008  sd          $s6, 0x8($a3)
    ctx->pc = 0x2a2518u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 22));
    // 0x2a251c: 0xfcf70010  sd          $s7, 0x10($a3)
    ctx->pc = 0x2a251cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 23));
    // 0x2a2520: 0xfce20018  sd          $v0, 0x18($a3)
    ctx->pc = 0x2a2520u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 2));
    // 0x2a2524: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a2524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a2528: 0x1469fff6  bne         $v1, $t1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A2528u;
    {
        const bool branch_taken_0x2a2528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x2A252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2528u;
        // 0x2a252c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2528) {
            ctx->pc = 0x2A2504u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2504;
        }
    }
    ctx->pc = 0x2A2530u;
    // 0x2a2530: 0x1e0402d  daddu       $t0, $t7, $zero
    ctx->pc = 0x2a2530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2a2534:
    // 0x2a2534: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x2a2534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2538: 0x881025  or          $v0, $a0, $t0
    ctx->pc = 0x2a2538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x2a253c: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x2a253cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a2540: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2a2540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2a2544: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A2544u;
    {
        const bool branch_taken_0x2a2544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2544u;
        // 0x2a2548: 0xace90000  sw          $t1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2544) {
            ctx->pc = 0x2A25A0u;
            goto label_2a25a0;
        }
    }
    ctx->pc = 0x2A254Cu;
label_2a254c:
    // 0x2a254c: 0x68950007  ldl         $s5, 0x7($a0)
    ctx->pc = 0x2a254cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem << shift)); }
    // 0x2a2550: 0x6c950000  ldr         $s5, 0x0($a0)
    ctx->pc = 0x2a2550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x2a2554: 0x6896000f  ldl         $s6, 0xF($a0)
    ctx->pc = 0x2a2554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
    // 0x2a2558: 0x6c960008  ldr         $s6, 0x8($a0)
    ctx->pc = 0x2a2558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem >> shift)); }
    // 0x2a255c: 0x68970017  ldl         $s7, 0x17($a0)
    ctx->pc = 0x2a255cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
    // 0x2a2560: 0x6c970010  ldr         $s7, 0x10($a0)
    ctx->pc = 0x2a2560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
    // 0x2a2564: 0x6882001f  ldl         $v0, 0x1F($a0)
    ctx->pc = 0x2a2564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a2568: 0x6c820018  ldr         $v0, 0x18($a0)
    ctx->pc = 0x2a2568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a256c: 0xb1150007  sdl         $s5, 0x7($t0)
    ctx->pc = 0x2a256cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2570: 0xb5150000  sdr         $s5, 0x0($t0)
    ctx->pc = 0x2a2570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2574: 0xb116000f  sdl         $s6, 0xF($t0)
    ctx->pc = 0x2a2574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2578: 0xb5160008  sdr         $s6, 0x8($t0)
    ctx->pc = 0x2a2578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a257c: 0xb1170017  sdl         $s7, 0x17($t0)
    ctx->pc = 0x2a257cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2580: 0xb5170010  sdr         $s7, 0x10($t0)
    ctx->pc = 0x2a2580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2584: 0xb102001f  sdl         $v0, 0x1F($t0)
    ctx->pc = 0x2a2584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2588: 0xb5020018  sdr         $v0, 0x18($t0)
    ctx->pc = 0x2a2588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a258c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2a258cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2a2590: 0x148affee  bne         $a0, $t2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A2590u;
    {
        const bool branch_taken_0x2a2590 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x2A2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2590u;
        // 0x2a2594: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2590) {
            ctx->pc = 0x2A254Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a254c;
        }
    }
    ctx->pc = 0x2A2598u;
    // 0x2a2598: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A2598u;
    {
        const bool branch_taken_0x2a2598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2598u;
        // 0x2a259c: 0x320382d  daddu       $a3, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2598) {
            ctx->pc = 0x2A25D0u;
            goto label_2a25d0;
        }
    }
    ctx->pc = 0x2A25A0u;
label_2a25a0:
    // 0x2a25a0: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2a25a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a25a4: 0xdc870008  ld          $a3, 0x8($a0)
    ctx->pc = 0x2a25a4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a25a8: 0xdc890010  ld          $t1, 0x10($a0)
    ctx->pc = 0x2a25a8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a25ac: 0xdc8e0018  ld          $t6, 0x18($a0)
    ctx->pc = 0x2a25acu;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2a25b0: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x2a25b0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x2a25b4: 0xfd070008  sd          $a3, 0x8($t0)
    ctx->pc = 0x2a25b4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 7));
    // 0x2a25b8: 0xfd090010  sd          $t1, 0x10($t0)
    ctx->pc = 0x2a25b8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 9));
    // 0x2a25bc: 0xfd0e0018  sd          $t6, 0x18($t0)
    ctx->pc = 0x2a25bcu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 14));
    // 0x2a25c0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2a25c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2a25c4: 0x148afff6  bne         $a0, $t2, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A25C4u;
    {
        const bool branch_taken_0x2a25c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x2A25C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25C4u;
        // 0x2a25c8: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a25c4) {
            ctx->pc = 0x2A25A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a25a0;
        }
    }
    ctx->pc = 0x2A25CCu;
    // 0x2a25cc: 0x320382d  daddu       $a3, $t9, $zero
    ctx->pc = 0x2a25ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_2a25d0:
    // 0x2a25d0: 0x300182d  daddu       $v1, $t8, $zero
    ctx->pc = 0x2a25d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a25d4: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x2a25d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2a25d8: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x2a25d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a25dc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2a25dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2a25e0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A25E0u;
    {
        const bool branch_taken_0x2a25e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A25E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A25E0u;
        // 0x2a25e4: 0xad0f0000  sw          $t7, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a25e0) {
            ctx->pc = 0x2A263Cu;
            goto label_2a263c;
        }
    }
    ctx->pc = 0x2A25E8u;
label_2a25e8:
    // 0x2a25e8: 0x68770007  ldl         $s7, 0x7($v1)
    ctx->pc = 0x2a25e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
    // 0x2a25ec: 0x6c770000  ldr         $s7, 0x0($v1)
    ctx->pc = 0x2a25ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
    // 0x2a25f0: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x2a25f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a25f4: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x2a25f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a25f8: 0x68640017  ldl         $a0, 0x17($v1)
    ctx->pc = 0x2a25f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a25fc: 0x6c640010  ldr         $a0, 0x10($v1)
    ctx->pc = 0x2a25fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a2600: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x2a2600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2a2604: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x2a2604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2a2608: 0xb0f70007  sdl         $s7, 0x7($a3)
    ctx->pc = 0x2a2608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a260c: 0xb4f70000  sdr         $s7, 0x0($a3)
    ctx->pc = 0x2a260cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2610: 0xb0e2000f  sdl         $v0, 0xF($a3)
    ctx->pc = 0x2a2610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2614: 0xb4e20008  sdr         $v0, 0x8($a3)
    ctx->pc = 0x2a2614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2618: 0xb0e40017  sdl         $a0, 0x17($a3)
    ctx->pc = 0x2a2618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a261c: 0xb4e40010  sdr         $a0, 0x10($a3)
    ctx->pc = 0x2a261cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2620: 0xb0e8001f  sdl         $t0, 0x1F($a3)
    ctx->pc = 0x2a2620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2624: 0xb4e80018  sdr         $t0, 0x18($a3)
    ctx->pc = 0x2a2624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2628: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a2628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a262c: 0x146bffee  bne         $v1, $t3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A262Cu;
    {
        const bool branch_taken_0x2a262c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        ctx->pc = 0x2A2630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A262Cu;
        // 0x2a2630: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a262c) {
            ctx->pc = 0x2A25E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a25e8;
        }
    }
    ctx->pc = 0x2A2634u;
    // 0x2a2634: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A2634u;
    {
        const bool branch_taken_0x2a2634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2634u;
        // 0x2a2638: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2634) {
            ctx->pc = 0x2A266Cu;
            goto label_2a266c;
        }
    }
    ctx->pc = 0x2A263Cu;
label_2a263c:
    // 0x2a263c: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x2a263cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a2640: 0xdc6a0008  ld          $t2, 0x8($v1)
    ctx->pc = 0x2a2640u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a2644: 0xdc6e0010  ld          $t6, 0x10($v1)
    ctx->pc = 0x2a2644u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a2648: 0xdc6f0018  ld          $t7, 0x18($v1)
    ctx->pc = 0x2a2648u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a264c: 0xfce90000  sd          $t1, 0x0($a3)
    ctx->pc = 0x2a264cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 9));
    // 0x2a2650: 0xfcea0008  sd          $t2, 0x8($a3)
    ctx->pc = 0x2a2650u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
    // 0x2a2654: 0xfcee0010  sd          $t6, 0x10($a3)
    ctx->pc = 0x2a2654u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 14));
    // 0x2a2658: 0xfcef0018  sd          $t7, 0x18($a3)
    ctx->pc = 0x2a2658u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 15));
    // 0x2a265c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a265cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a2660: 0x146bfff6  bne         $v1, $t3, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A2660u;
    {
        const bool branch_taken_0x2a2660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        ctx->pc = 0x2A2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2660u;
        // 0x2a2664: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2660) {
            ctx->pc = 0x2A263Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a263c;
        }
    }
    ctx->pc = 0x2A2668u;
    // 0x2a2668: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2a2668u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a266c:
    // 0x2a266c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a266cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2670: 0x881025  or          $v0, $a0, $t0
    ctx->pc = 0x2a2670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x2a2674: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x2a2674u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a2678: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2a2678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2a267c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A267Cu;
    {
        const bool branch_taken_0x2a267c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A267Cu;
        // 0x2a2680: 0xacf40000  sw          $s4, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a267c) {
            ctx->pc = 0x2A26D8u;
            goto label_2a26d8;
        }
    }
    ctx->pc = 0x2A2684u;
label_2a2684:
    // 0x2a2684: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x2a2684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a2688: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x2a2688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a268c: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x2a268cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a2690: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x2a2690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a2694: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x2a2694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2a2698: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x2a2698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2a269c: 0x6889001f  ldl         $t1, 0x1F($a0)
    ctx->pc = 0x2a269cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2a26a0: 0x6c890018  ldr         $t1, 0x18($a0)
    ctx->pc = 0x2a26a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2a26a4: 0xb1020007  sdl         $v0, 0x7($t0)
    ctx->pc = 0x2a26a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a26a8: 0xb5020000  sdr         $v0, 0x0($t0)
    ctx->pc = 0x2a26a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a26ac: 0xb103000f  sdl         $v1, 0xF($t0)
    ctx->pc = 0x2a26acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a26b0: 0xb5030008  sdr         $v1, 0x8($t0)
    ctx->pc = 0x2a26b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a26b4: 0xb1070017  sdl         $a3, 0x17($t0)
    ctx->pc = 0x2a26b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a26b8: 0xb5070010  sdr         $a3, 0x10($t0)
    ctx->pc = 0x2a26b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a26bc: 0xb109001f  sdl         $t1, 0x1F($t0)
    ctx->pc = 0x2a26bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a26c0: 0xb5090018  sdr         $t1, 0x18($t0)
    ctx->pc = 0x2a26c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a26c4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2a26c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2a26c8: 0x148cffee  bne         $a0, $t4, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A26C8u;
    {
        const bool branch_taken_0x2a26c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 12));
        ctx->pc = 0x2A26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A26C8u;
        // 0x2a26cc: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a26c8) {
            ctx->pc = 0x2A2684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2684;
        }
    }
    ctx->pc = 0x2A26D0u;
    // 0x2a26d0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A26D0u;
    {
        const bool branch_taken_0x2a26d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A26D0u;
        // 0x2a26d4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a26d0) {
            ctx->pc = 0x2A2708u;
            goto label_2a2708;
        }
    }
    ctx->pc = 0x2A26D8u;
label_2a26d8:
    // 0x2a26d8: 0xdc8a0000  ld          $t2, 0x0($a0)
    ctx->pc = 0x2a26d8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a26dc: 0xdc8b0008  ld          $t3, 0x8($a0)
    ctx->pc = 0x2a26dcu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a26e0: 0xdc8e0010  ld          $t6, 0x10($a0)
    ctx->pc = 0x2a26e0u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a26e4: 0xdc8f0018  ld          $t7, 0x18($a0)
    ctx->pc = 0x2a26e4u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2a26e8: 0xfd0a0000  sd          $t2, 0x0($t0)
    ctx->pc = 0x2a26e8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 10));
    // 0x2a26ec: 0xfd0b0008  sd          $t3, 0x8($t0)
    ctx->pc = 0x2a26ecu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 11));
    // 0x2a26f0: 0xfd0e0010  sd          $t6, 0x10($t0)
    ctx->pc = 0x2a26f0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 14));
    // 0x2a26f4: 0xfd0f0018  sd          $t7, 0x18($t0)
    ctx->pc = 0x2a26f4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 15));
    // 0x2a26f8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2a26f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2a26fc: 0x148cfff6  bne         $a0, $t4, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A26FCu;
    {
        const bool branch_taken_0x2a26fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 12));
        ctx->pc = 0x2A2700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A26FCu;
        // 0x2a2700: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a26fc) {
            ctx->pc = 0x2A26D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a26d8;
        }
    }
    ctx->pc = 0x2A2704u;
    // 0x2a2704: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a2704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a2708:
    // 0x2a2708: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2a2708u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a270c: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x2a270cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2a2710: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x2a2710u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a2714: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2a2714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2a2718: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A2718u;
    {
        const bool branch_taken_0x2a2718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2718u;
        // 0x2a271c: 0xad140000  sw          $s4, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2718) {
            ctx->pc = 0x2A2774u;
            goto label_2a2774;
        }
    }
    ctx->pc = 0x2A2720u;
label_2a2720:
    // 0x2a2720: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x2a2720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a2724: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x2a2724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a2728: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x2a2728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a272c: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x2a272cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a2730: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x2a2730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2a2734: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x2a2734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2a2738: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x2a2738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2a273c: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x2a273cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2a2740: 0xb0e20007  sdl         $v0, 0x7($a3)
    ctx->pc = 0x2a2740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2744: 0xb4e20000  sdr         $v0, 0x0($a3)
    ctx->pc = 0x2a2744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2748: 0xb0e4000f  sdl         $a0, 0xF($a3)
    ctx->pc = 0x2a2748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a274c: 0xb4e40008  sdr         $a0, 0x8($a3)
    ctx->pc = 0x2a274cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2750: 0xb0e80017  sdl         $t0, 0x17($a3)
    ctx->pc = 0x2a2750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2754: 0xb4e80010  sdr         $t0, 0x10($a3)
    ctx->pc = 0x2a2754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2758: 0xb0e9001f  sdl         $t1, 0x1F($a3)
    ctx->pc = 0x2a2758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a275c: 0xb4e90018  sdr         $t1, 0x18($a3)
    ctx->pc = 0x2a275cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a2760: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a2760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a2764: 0x146dffee  bne         $v1, $t5, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A2764u;
    {
        const bool branch_taken_0x2a2764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 13));
        ctx->pc = 0x2A2768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2764u;
        // 0x2a2768: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2764) {
            ctx->pc = 0x2A2720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2720;
        }
    }
    ctx->pc = 0x2A276Cu;
    // 0x2a276c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A276Cu;
    {
        const bool branch_taken_0x2a276c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a276c) {
            ctx->pc = 0x2A27A0u;
            goto label_2a27a0;
        }
    }
    ctx->pc = 0x2A2774u;
label_2a2774:
    // 0x2a2774: 0xdc6a0000  ld          $t2, 0x0($v1)
    ctx->pc = 0x2a2774u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a2778: 0xdc6b0008  ld          $t3, 0x8($v1)
    ctx->pc = 0x2a2778u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a277c: 0xdc6c0010  ld          $t4, 0x10($v1)
    ctx->pc = 0x2a277cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a2780: 0xdc6e0018  ld          $t6, 0x18($v1)
    ctx->pc = 0x2a2780u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a2784: 0xfcea0000  sd          $t2, 0x0($a3)
    ctx->pc = 0x2a2784u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 10));
    // 0x2a2788: 0xfceb0008  sd          $t3, 0x8($a3)
    ctx->pc = 0x2a2788u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 11));
    // 0x2a278c: 0xfcec0010  sd          $t4, 0x10($a3)
    ctx->pc = 0x2a278cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 12));
    // 0x2a2790: 0xfcee0018  sd          $t6, 0x18($a3)
    ctx->pc = 0x2a2790u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 14));
    // 0x2a2794: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2a2794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2a2798: 0x146dfff6  bne         $v1, $t5, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A2798u;
    {
        const bool branch_taken_0x2a2798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 13));
        ctx->pc = 0x2A279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2798u;
        // 0x2a279c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2798) {
            ctx->pc = 0x2A2774u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2774;
        }
    }
    ctx->pc = 0x2A27A0u;
label_2a27a0:
    // 0x2a27a0: 0x8c6f0000  lw          $t7, 0x0($v1)
    ctx->pc = 0x2a27a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a27a4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2a27a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2a27a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a27a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a27ac: 0xacef0000  sw          $t7, 0x0($a3)
    ctx->pc = 0x2a27acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 15));
    // 0x2a27b0: 0xe4a00264  swc1        $f0, 0x264($a1)
    ctx->pc = 0x2a27b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 612), bits); }
    // 0x2a27b4: 0xaca00260  sw          $zero, 0x260($a1)
    ctx->pc = 0x2a27b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 608), GPR_U32(ctx, 0));
    // 0x2a27b8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2a27b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a27bc: 0x90c2026c  lbu         $v0, 0x26C($a2)
    ctx->pc = 0x2a27bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 620)));
    // 0x2a27c0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2a27c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a27c4: 0xa0a20268  sb          $v0, 0x268($a1)
    ctx->pc = 0x2a27c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 616), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a27c8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2a27c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a27cc: 0x90c3026d  lbu         $v1, 0x26D($a2)
    ctx->pc = 0x2a27ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 621)));
    // 0x2a27d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a27d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a27d4: 0xa0a30269  sb          $v1, 0x269($a1)
    ctx->pc = 0x2a27d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 617), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a27d8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2a27d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a27dc: 0x90c40010  lbu         $a0, 0x10($a2)
    ctx->pc = 0x2a27dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2a27e0: 0xa0a0026b  sb          $zero, 0x26B($a1)
    ctx->pc = 0x2a27e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 619), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a27e4: 0xa0a4026a  sb          $a0, 0x26A($a1)
    ctx->pc = 0x2a27e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 618), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a27e8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2a27e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a27ec: 0x94c2026e  lhu         $v0, 0x26E($a2)
    ctx->pc = 0x2a27ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 622)));
    // 0x2a27f0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2a27f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a27f4: 0xa4a2026c  sh          $v0, 0x26C($a1)
    ctx->pc = 0x2a27f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 620), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a27f8: 0x7bb70000  lq          $s7, 0x0($sp)
    ctx->pc = 0x2a27f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a27fc: 0x94c30270  lhu         $v1, 0x270($a2)
    ctx->pc = 0x2a27fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 624)));
    // 0x2a2800: 0xa4a3026e  sh          $v1, 0x26E($a1)
    ctx->pc = 0x2a2800u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 622), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a2804: 0x94c20272  lhu         $v0, 0x272($a2)
    ctx->pc = 0x2a2804u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 626)));
    // 0x2a2808: 0xa4a00272  sh          $zero, 0x272($a1)
    ctx->pc = 0x2a2808u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 626), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a280c: 0xa4a20270  sh          $v0, 0x270($a1)
    ctx->pc = 0x2a280cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 624), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a2810: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2810u;
        // 0x2a2814: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2818u;
}
