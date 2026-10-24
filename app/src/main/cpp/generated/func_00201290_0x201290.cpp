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

// Function: func_00201290
// Address: 0x201290 - 0x201718
void func_00201290_0x201290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00201290_0x201290");
#endif

    switch (ctx->pc) {
        case 0x2012c8u: goto label_2012c8;
        case 0x201308u: goto label_201308;
        case 0x20132cu: goto label_20132c;
        case 0x201380u: goto label_201380;
        case 0x2013c4u: goto label_2013c4;
        case 0x201428u: goto label_201428;
        case 0x201458u: goto label_201458;
        case 0x2014c0u: goto label_2014c0;
        case 0x201520u: goto label_201520;
        case 0x201578u: goto label_201578;
        case 0x2015ccu: goto label_2015cc;
        case 0x201618u: goto label_201618;
        case 0x20166cu: goto label_20166c;
        case 0x2016e0u: goto label_2016e0;
        default: break;
    }

    ctx->pc = 0x201290u;

    // 0x201290: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x201290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x201294: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x201294u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201298: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x201298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x20129c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x20129cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x2012a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2012a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2012a4: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2012a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x2012a8: 0x26330004  addiu       $s3, $s1, 0x4
    ctx->pc = 0x2012a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2012ac: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2012acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x2012b0: 0x24140088  addiu       $s4, $zero, 0x88
    ctx->pc = 0x2012b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x2012b4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2012b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2012b8: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x2012b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2012bc: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2012bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2012c0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2012c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2012c4: 0x1342818  mult        $a1, $t1, $s4
    ctx->pc = 0x2012c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2012c8:
    // 0x2012c8: 0x2a51021  addu        $v0, $s5, $a1
    ctx->pc = 0x2012c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x2012cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2012ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2012d0: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x2012D0u;
    {
        const bool branch_taken_0x2012d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2012D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012D0u;
        // 0x2012d4: 0x25320001  addiu       $s2, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012d0) {
            ctx->pc = 0x2013F4u;
            goto label_2013f4;
        }
    }
    ctx->pc = 0x2012D8u;
    // 0x2012d8: 0x2a420020  slti        $v0, $s2, 0x20
    ctx->pc = 0x2012d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2012dc: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2012DCu;
    {
        const bool branch_taken_0x2012dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2012E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012DCu;
        // 0x2012e0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012dc) {
            ctx->pc = 0x2013E8u;
            goto label_2013e8;
        }
    }
    ctx->pc = 0x2012E4u;
    // 0x2012e4: 0x2542018  mult        $a0, $s2, $s4
    ctx->pc = 0x2012e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2012e8: 0xb13821  addu        $a3, $a1, $s1
    ctx->pc = 0x2012e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2012ec: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x2012ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2012f0: 0x24830084  addiu       $v1, $a0, 0x84
    ctx->pc = 0x2012f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
    // 0x2012f4: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x2012f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2012f8: 0x933021  addu        $a2, $a0, $s3
    ctx->pc = 0x2012f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2012fc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2012fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x201300: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x201300u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201304: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x201304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_201308:
    // 0x201308: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x201308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20130c: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x20130Cu;
    {
        const bool branch_taken_0x20130c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20130c) {
            ctx->pc = 0x201310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20130Cu;
            // 0x201310: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2013CCu;
            goto label_2013cc;
        }
    }
    ctx->pc = 0x201314u;
    // 0x201314: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x201314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x201318: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x201318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20131c: 0x1071025  or          $v0, $t0, $a3
    ctx->pc = 0x20131cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x201320: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x201320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x201324: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x201324u;
    {
        const bool branch_taken_0x201324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201324u;
        // 0x201328: 0x24840084  addiu       $a0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201324) {
            ctx->pc = 0x201380u;
            goto label_201380;
        }
    }
    ctx->pc = 0x20132Cu;
label_20132c:
    // 0x20132c: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x20132cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x201330: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x201330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x201334: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x201334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x201338: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x201338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x20133c: 0x68c80017  ldl         $t0, 0x17($a2)
    ctx->pc = 0x20133cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x201340: 0x6cc80010  ldr         $t0, 0x10($a2)
    ctx->pc = 0x201340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x201344: 0x68c9001f  ldl         $t1, 0x1F($a2)
    ctx->pc = 0x201344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x201348: 0x6cc90018  ldr         $t1, 0x18($a2)
    ctx->pc = 0x201348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x20134c: 0xb0e20007  sdl         $v0, 0x7($a3)
    ctx->pc = 0x20134cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201350: 0xb4e20000  sdr         $v0, 0x0($a3)
    ctx->pc = 0x201350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201354: 0xb0e4000f  sdl         $a0, 0xF($a3)
    ctx->pc = 0x201354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201358: 0xb4e40008  sdr         $a0, 0x8($a3)
    ctx->pc = 0x201358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20135c: 0xb0e80017  sdl         $t0, 0x17($a3)
    ctx->pc = 0x20135cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201360: 0xb4e80010  sdr         $t0, 0x10($a3)
    ctx->pc = 0x201360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201364: 0xb0e9001f  sdl         $t1, 0x1F($a3)
    ctx->pc = 0x201364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201368: 0xb4e90018  sdr         $t1, 0x18($a3)
    ctx->pc = 0x201368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20136c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x20136cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x201370: 0x14c3ffee  bne         $a2, $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x201370u;
    {
        const bool branch_taken_0x201370 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x201374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201370u;
        // 0x201374: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201370) {
            ctx->pc = 0x20132Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20132c;
        }
    }
    ctx->pc = 0x201378u;
    // 0x201378: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x201378u;
    {
        const bool branch_taken_0x201378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201378) {
            ctx->pc = 0x2013ACu;
            goto label_2013ac;
        }
    }
    ctx->pc = 0x201380u;
label_201380:
    // 0x201380: 0xdccf0000  ld          $t7, 0x0($a2)
    ctx->pc = 0x201380u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x201384: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x201384u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x201388: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x201388u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x20138c: 0xdcc80018  ld          $t0, 0x18($a2)
    ctx->pc = 0x20138cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x201390: 0xfcef0000  sd          $t7, 0x0($a3)
    ctx->pc = 0x201390u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 15));
    // 0x201394: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x201394u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x201398: 0xfce30010  sd          $v1, 0x10($a3)
    ctx->pc = 0x201398u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 3));
    // 0x20139c: 0xfce80018  sd          $t0, 0x18($a3)
    ctx->pc = 0x20139cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 8));
    // 0x2013a0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2013a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2013a4: 0x14c4fff6  bne         $a2, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2013A4u;
    {
        const bool branch_taken_0x2013a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x2013A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013A4u;
        // 0x2013a8: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013a4) {
            ctx->pc = 0x201380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201380;
        }
    }
    ctx->pc = 0x2013ACu;
label_2013ac:
    // 0x2013ac: 0x68c90007  ldl         $t1, 0x7($a2)
    ctx->pc = 0x2013acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2013b0: 0x6cc90000  ldr         $t1, 0x0($a2)
    ctx->pc = 0x2013b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2013b4: 0xb0e90007  sdl         $t1, 0x7($a3)
    ctx->pc = 0x2013b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2013b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2013b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2013bc: 0xc08048a  jal         func_201228
    ctx->pc = 0x2013BCu;
    SET_GPR_U32(ctx, 31, 0x2013C4u);
    ctx->pc = 0x2013C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2013BCu;
    // 0x2013c0: 0xb4e90000  sdr         $t1, 0x0($a3) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x201228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201228u, 0x2013BCu, 0x2013C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2013C4u;
label_2013c4:
    // 0x2013c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2013C4u;
    {
        const bool branch_taken_0x2013c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013C4u;
        // 0x2013c8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013c4) {
            ctx->pc = 0x2013ECu;
            goto label_2013ec;
        }
    }
    ctx->pc = 0x2013CCu;
label_2013cc:
    // 0x2013cc: 0x24a50088  addiu       $a1, $a1, 0x88
    ctx->pc = 0x2013ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 136));
    // 0x2013d0: 0x24630088  addiu       $v1, $v1, 0x88
    ctx->pc = 0x2013d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
    // 0x2013d4: 0x25080088  addiu       $t0, $t0, 0x88
    ctx->pc = 0x2013d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 136));
    // 0x2013d8: 0x24840088  addiu       $a0, $a0, 0x88
    ctx->pc = 0x2013d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
    // 0x2013dc: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x2013dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2013e0: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x2013E0u;
    {
        const bool branch_taken_0x2013e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2013E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013E0u;
        // 0x2013e4: 0x24c60088  addiu       $a2, $a2, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013e0) {
            ctx->pc = 0x201308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201308;
        }
    }
    ctx->pc = 0x2013E8u;
label_2013e8:
    // 0x2013e8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2013e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2013ec:
    // 0x2013ec: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2013ECu;
    {
        const bool branch_taken_0x2013ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2013ec) {
            ctx->pc = 0x2013F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2013ECu;
            // 0x2013f0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201408u;
            goto label_201408;
        }
    }
    ctx->pc = 0x2013F4u;
label_2013f4:
    // 0x2013f4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2013f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2013f8: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x2013f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2013fc: 0x5440ffb2  bnel        $v0, $zero, . + 4 + (-0x4E << 2)
    ctx->pc = 0x2013FCu;
    {
        const bool branch_taken_0x2013fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2013fc) {
            ctx->pc = 0x201400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2013FCu;
            // 0x201400: 0x1342818  mult        $a1, $t1, $s4 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2012C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2012c8;
        }
    }
    ctx->pc = 0x201404u;
    // 0x201404: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x201404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_201408:
    // 0x201408: 0x104000b8  beqz        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x201408u;
    {
        const bool branch_taken_0x201408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201408u;
        // 0x20140c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201408) {
            ctx->pc = 0x2016ECu;
            goto label_2016ec;
        }
    }
    ctx->pc = 0x201410u;
    // 0x201410: 0x240b0088  addiu       $t3, $zero, 0x88
    ctx->pc = 0x201410u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x201414: 0x260682d  daddu       $t5, $s3, $zero
    ctx->pc = 0x201414u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201418: 0x260602d  daddu       $t4, $s3, $zero
    ctx->pc = 0x201418u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20141c: 0x240e0088  addiu       $t6, $zero, 0x88
    ctx->pc = 0x20141cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x201420: 0x12b1018  mult        $v0, $t1, $t3
    ctx->pc = 0x201420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x201424: 0x0  nop
    ctx->pc = 0x201424u;
    // NOP
label_201428:
    // 0x201428: 0x25300001  addiu       $s0, $t1, 0x1
    ctx->pc = 0x201428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x20142c: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x20142cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x201430: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x201430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201434: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x201434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x201438: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x201438u;
    {
        const bool branch_taken_0x201438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201438u;
        // 0x20143c: 0x2223821  addu        $a3, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201438) {
            ctx->pc = 0x201490u;
            goto label_201490;
        }
    }
    ctx->pc = 0x201440u;
    // 0x201440: 0x24e1018  mult        $v0, $s2, $t6
    ctx->pc = 0x201440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x201444: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x201444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x201448: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x201448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x20144c: 0x713021  addu        $a2, $v1, $s1
    ctx->pc = 0x20144cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x201450: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x201450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x201454: 0x4c2821  addu        $a1, $v0, $t4
    ctx->pc = 0x201454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_201458:
    // 0x201458: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20145c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x20145Cu;
    {
        const bool branch_taken_0x20145c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20145c) {
            ctx->pc = 0x201460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20145Cu;
            // 0x201460: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20147Cu;
            goto label_20147c;
        }
    }
    ctx->pc = 0x201464u;
    // 0x201464: 0x8ce2006c  lw          $v0, 0x6C($a3)
    ctx->pc = 0x201464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 108)));
    // 0x201468: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x201468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20146c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x20146cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x201470: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x201470u;
    {
        const bool branch_taken_0x201470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201470) {
            ctx->pc = 0x201474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201470u;
            // 0x201474: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201478u;
            goto label_201478;
        }
    }
    ctx->pc = 0x201478u;
label_201478:
    // 0x201478: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x201478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20147c:
    // 0x20147c: 0x24c60088  addiu       $a2, $a2, 0x88
    ctx->pc = 0x20147cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 136));
    // 0x201480: 0x24840088  addiu       $a0, $a0, 0x88
    ctx->pc = 0x201480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
    // 0x201484: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x201484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x201488: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x201488u;
    {
        const bool branch_taken_0x201488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201488u;
        // 0x20148c: 0x24a50088  addiu       $a1, $a1, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201488) {
            ctx->pc = 0x201458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201458;
        }
    }
    ctx->pc = 0x201490u;
label_201490:
    // 0x201490: 0x12b1818  mult        $v1, $t1, $t3
    ctx->pc = 0x201490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x201494: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x201494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x201498: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x201498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x20149c: 0x10470082  beq         $v0, $a3, . + 4 + (0x82 << 2)
    ctx->pc = 0x20149Cu;
    {
        const bool branch_taken_0x20149c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x2014A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20149Cu;
        // 0x2014a0: 0x711821  addu        $v1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20149c) {
            ctx->pc = 0x2016A8u;
            goto label_2016a8;
        }
    }
    ctx->pc = 0x2014A4u;
    // 0x2014a4: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2014a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2014a8: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x2014a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x2014ac: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2014ACu;
    {
        const bool branch_taken_0x2014ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2014B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2014ACu;
        // 0x2014b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2014ac) {
            ctx->pc = 0x201514u;
            goto label_201514;
        }
    }
    ctx->pc = 0x2014B4u;
    // 0x2014b4: 0x24620084  addiu       $v0, $v1, 0x84
    ctx->pc = 0x2014b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
    // 0x2014b8: 0x24e80080  addiu       $t0, $a3, 0x80
    ctx->pc = 0x2014b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x2014bc: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2014bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2014c0:
    // 0x2014c0: 0x68860007  ldl         $a2, 0x7($a0)
    ctx->pc = 0x2014c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2014c4: 0x6c860000  ldr         $a2, 0x0($a0)
    ctx->pc = 0x2014c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2014c8: 0x688f000f  ldl         $t7, 0xF($a0)
    ctx->pc = 0x2014c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x2014cc: 0x6c8f0008  ldr         $t7, 0x8($a0)
    ctx->pc = 0x2014ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x2014d0: 0x68900017  ldl         $s0, 0x17($a0)
    ctx->pc = 0x2014d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x2014d4: 0x6c900010  ldr         $s0, 0x10($a0)
    ctx->pc = 0x2014d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x2014d8: 0x6883001f  ldl         $v1, 0x1F($a0)
    ctx->pc = 0x2014d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2014dc: 0x6c830018  ldr         $v1, 0x18($a0)
    ctx->pc = 0x2014dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2014e0: 0xb0a60007  sdl         $a2, 0x7($a1)
    ctx->pc = 0x2014e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2014e4: 0xb4a60000  sdr         $a2, 0x0($a1)
    ctx->pc = 0x2014e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2014e8: 0xb0af000f  sdl         $t7, 0xF($a1)
    ctx->pc = 0x2014e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2014ec: 0xb4af0008  sdr         $t7, 0x8($a1)
    ctx->pc = 0x2014ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2014f0: 0xb0b00017  sdl         $s0, 0x17($a1)
    ctx->pc = 0x2014f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2014f4: 0xb4b00010  sdr         $s0, 0x10($a1)
    ctx->pc = 0x2014f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2014f8: 0xb0a3001f  sdl         $v1, 0x1F($a1)
    ctx->pc = 0x2014f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2014fc: 0xb4a30018  sdr         $v1, 0x18($a1)
    ctx->pc = 0x2014fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201500: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x201500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x201504: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x201504u;
    {
        const bool branch_taken_0x201504 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x201508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201504u;
        // 0x201508: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201504) {
            ctx->pc = 0x2014C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2014c0;
        }
    }
    ctx->pc = 0x20150Cu;
    // 0x20150c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x20150Cu;
    {
        const bool branch_taken_0x20150c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20150Cu;
        // 0x201510: 0x12b1018  mult        $v0, $t1, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20150c) {
            ctx->pc = 0x201550u;
            goto label_201550;
        }
    }
    ctx->pc = 0x201514u;
label_201514:
    // 0x201514: 0x24620084  addiu       $v0, $v1, 0x84
    ctx->pc = 0x201514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
    // 0x201518: 0x24e80080  addiu       $t0, $a3, 0x80
    ctx->pc = 0x201518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x20151c: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x20151cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_201520:
    // 0x201520: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x201520u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201524: 0xdc8f0008  ld          $t7, 0x8($a0)
    ctx->pc = 0x201524u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x201528: 0xdc900010  ld          $s0, 0x10($a0)
    ctx->pc = 0x201528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x20152c: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x20152cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x201530: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x201530u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x201534: 0xfcaf0008  sd          $t7, 0x8($a1)
    ctx->pc = 0x201534u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 15));
    // 0x201538: 0xfcb00010  sd          $s0, 0x10($a1)
    ctx->pc = 0x201538u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 16));
    // 0x20153c: 0xfca30018  sd          $v1, 0x18($a1)
    ctx->pc = 0x20153cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 3));
    // 0x201540: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x201540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x201544: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x201544u;
    {
        const bool branch_taken_0x201544 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x201548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201544u;
        // 0x201548: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201544) {
            ctx->pc = 0x201520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201520;
        }
    }
    ctx->pc = 0x20154Cu;
    // 0x20154c: 0x12b1018  mult        $v0, $t1, $t3
    ctx->pc = 0x20154cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_201550:
    // 0x201550: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x201550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x201554: 0x68890007  ldl         $t1, 0x7($a0)
    ctx->pc = 0x201554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x201558: 0x6c890000  ldr         $t1, 0x0($a0)
    ctx->pc = 0x201558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x20155c: 0xb0a90007  sdl         $t1, 0x7($a1)
    ctx->pc = 0x20155cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201560: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x201560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x201564: 0xb4a90000  sdr         $t1, 0x0($a1)
    ctx->pc = 0x201564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201568: 0xe31025  or          $v0, $a3, $v1
    ctx->pc = 0x201568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x20156c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x20156cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x201570: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x201570u;
    {
        const bool branch_taken_0x201570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201570u;
        // 0x201574: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201570) {
            ctx->pc = 0x2015CCu;
            goto label_2015cc;
        }
    }
    ctx->pc = 0x201578u;
label_201578:
    // 0x201578: 0x68c40007  ldl         $a0, 0x7($a2)
    ctx->pc = 0x201578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x20157c: 0x6cc40000  ldr         $a0, 0x0($a2)
    ctx->pc = 0x20157cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x201580: 0x68c5000f  ldl         $a1, 0xF($a2)
    ctx->pc = 0x201580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x201584: 0x6cc50008  ldr         $a1, 0x8($a2)
    ctx->pc = 0x201584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x201588: 0x68c90017  ldl         $t1, 0x17($a2)
    ctx->pc = 0x201588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x20158c: 0x6cc90010  ldr         $t1, 0x10($a2)
    ctx->pc = 0x20158cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x201590: 0x68cf001f  ldl         $t7, 0x1F($a2)
    ctx->pc = 0x201590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x201594: 0x6ccf0018  ldr         $t7, 0x18($a2)
    ctx->pc = 0x201594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x201598: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x201598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20159c: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x20159cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2015a0: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x2015a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2015a4: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x2015a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2015a8: 0xb0690017  sdl         $t1, 0x17($v1)
    ctx->pc = 0x2015a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2015ac: 0xb4690010  sdr         $t1, 0x10($v1)
    ctx->pc = 0x2015acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2015b0: 0xb06f001f  sdl         $t7, 0x1F($v1)
    ctx->pc = 0x2015b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2015b4: 0xb46f0018  sdr         $t7, 0x18($v1)
    ctx->pc = 0x2015b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2015b8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2015b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2015bc: 0x14c8ffee  bne         $a2, $t0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2015BCu;
    {
        const bool branch_taken_0x2015bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x2015C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2015BCu;
        // 0x2015c0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2015bc) {
            ctx->pc = 0x201578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201578;
        }
    }
    ctx->pc = 0x2015C4u;
    // 0x2015c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2015C4u;
    {
        const bool branch_taken_0x2015c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2015C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2015C4u;
        // 0x2015c8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2015c4) {
            ctx->pc = 0x2015FCu;
            goto label_2015fc;
        }
    }
    ctx->pc = 0x2015CCu;
label_2015cc:
    // 0x2015cc: 0xdcd00000  ld          $s0, 0x0($a2)
    ctx->pc = 0x2015ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2015d0: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x2015d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2015d4: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x2015d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2015d8: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x2015d8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2015dc: 0xfc700000  sd          $s0, 0x0($v1)
    ctx->pc = 0x2015dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 16));
    // 0x2015e0: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x2015e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x2015e4: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x2015e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x2015e8: 0xfc650018  sd          $a1, 0x18($v1)
    ctx->pc = 0x2015e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 5));
    // 0x2015ec: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2015ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2015f0: 0x14c8fff6  bne         $a2, $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2015F0u;
    {
        const bool branch_taken_0x2015f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x2015F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2015F0u;
        // 0x2015f4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2015f0) {
            ctx->pc = 0x2015CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2015cc;
        }
    }
    ctx->pc = 0x2015F8u;
    // 0x2015f8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2015f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2015fc:
    // 0x2015fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2015fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201600: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x201600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x201604: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x201604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x201608: 0xb0670007  sdl         $a3, 0x7($v1)
    ctx->pc = 0x201608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20160c: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x20160cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x201610: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x201610u;
    {
        const bool branch_taken_0x201610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201610u;
        // 0x201614: 0xb4670000  sdr         $a3, 0x0($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x201610) {
            ctx->pc = 0x20166Cu;
            goto label_20166c;
        }
    }
    ctx->pc = 0x201618u;
label_201618:
    // 0x201618: 0x68900007  ldl         $s0, 0x7($a0)
    ctx->pc = 0x201618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x20161c: 0x6c900000  ldr         $s0, 0x0($a0)
    ctx->pc = 0x20161cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x201620: 0x6882000f  ldl         $v0, 0xF($a0)
    ctx->pc = 0x201620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x201624: 0x6c820008  ldr         $v0, 0x8($a0)
    ctx->pc = 0x201624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x201628: 0x68830017  ldl         $v1, 0x17($a0)
    ctx->pc = 0x201628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x20162c: 0x6c830010  ldr         $v1, 0x10($a0)
    ctx->pc = 0x20162cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x201630: 0x6886001f  ldl         $a2, 0x1F($a0)
    ctx->pc = 0x201630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x201634: 0x6c860018  ldr         $a2, 0x18($a0)
    ctx->pc = 0x201634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x201638: 0xb0b00007  sdl         $s0, 0x7($a1)
    ctx->pc = 0x201638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20163c: 0xb4b00000  sdr         $s0, 0x0($a1)
    ctx->pc = 0x20163cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201640: 0xb0a2000f  sdl         $v0, 0xF($a1)
    ctx->pc = 0x201640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201644: 0xb4a20008  sdr         $v0, 0x8($a1)
    ctx->pc = 0x201644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201648: 0xb0a30017  sdl         $v1, 0x17($a1)
    ctx->pc = 0x201648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20164c: 0xb4a30010  sdr         $v1, 0x10($a1)
    ctx->pc = 0x20164cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201650: 0xb0a6001f  sdl         $a2, 0x1F($a1)
    ctx->pc = 0x201650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201654: 0xb4a60018  sdr         $a2, 0x18($a1)
    ctx->pc = 0x201654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x201658: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x201658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x20165c: 0x148affee  bne         $a0, $t2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x20165Cu;
    {
        const bool branch_taken_0x20165c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x201660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20165Cu;
        // 0x201660: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20165c) {
            ctx->pc = 0x201618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201618;
        }
    }
    ctx->pc = 0x201664u;
    // 0x201664: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x201664u;
    {
        const bool branch_taken_0x201664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201664) {
            ctx->pc = 0x201698u;
            goto label_201698;
        }
    }
    ctx->pc = 0x20166Cu;
label_20166c:
    // 0x20166c: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x20166cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201670: 0xdc880008  ld          $t0, 0x8($a0)
    ctx->pc = 0x201670u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x201674: 0xdc890010  ld          $t1, 0x10($a0)
    ctx->pc = 0x201674u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x201678: 0xdc8f0018  ld          $t7, 0x18($a0)
    ctx->pc = 0x201678u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x20167c: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x20167cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x201680: 0xfca80008  sd          $t0, 0x8($a1)
    ctx->pc = 0x201680u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 8));
    // 0x201684: 0xfca90010  sd          $t1, 0x10($a1)
    ctx->pc = 0x201684u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 9));
    // 0x201688: 0xfcaf0018  sd          $t7, 0x18($a1)
    ctx->pc = 0x201688u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 15));
    // 0x20168c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x20168cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x201690: 0x148afff6  bne         $a0, $t2, . + 4 + (-0xA << 2)
    ctx->pc = 0x201690u;
    {
        const bool branch_taken_0x201690 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x201694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201690u;
        // 0x201694: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201690) {
            ctx->pc = 0x20166Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20166c;
        }
    }
    ctx->pc = 0x201698u;
label_201698:
    // 0x201698: 0x68900007  ldl         $s0, 0x7($a0)
    ctx->pc = 0x201698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x20169c: 0x6c900000  ldr         $s0, 0x0($a0)
    ctx->pc = 0x20169cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x2016a0: 0xb0b00007  sdl         $s0, 0x7($a1)
    ctx->pc = 0x2016a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2016a4: 0xb4b00000  sdr         $s0, 0x0($a1)
    ctx->pc = 0x2016a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2016a8:
    // 0x2016a8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2016a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2016ac: 0x2922001f  slti        $v0, $t1, 0x1F
    ctx->pc = 0x2016acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x2016b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2016B0u;
    {
        const bool branch_taken_0x2016b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2016B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016B0u;
        // 0x2016b4: 0x12b1818  mult        $v1, $t1, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016b0) {
            ctx->pc = 0x2016C8u;
            goto label_2016c8;
        }
    }
    ctx->pc = 0x2016B8u;
    // 0x2016b8: 0x6d1021  addu        $v0, $v1, $t5
    ctx->pc = 0x2016b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x2016bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2016bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2016c0: 0x1460ff59  bnez        $v1, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x2016C0u;
    {
        const bool branch_taken_0x2016c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2016C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016C0u;
        // 0x2016c4: 0x12b1018  mult        $v0, $t1, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016c0) {
            ctx->pc = 0x201428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201428;
        }
    }
    ctx->pc = 0x2016C8u;
label_2016c8:
    // 0x2016c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2016c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2016cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2016CCu;
    {
        const bool branch_taken_0x2016cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2016D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016CCu;
        // 0x2016d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016cc) {
            ctx->pc = 0x2016ECu;
            goto label_2016ec;
        }
    }
    ctx->pc = 0x2016D4u;
    // 0x2016d4: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2016d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2016d8: 0xc080610  jal         func_201840
    ctx->pc = 0x2016D8u;
    SET_GPR_U32(ctx, 31, 0x2016E0u);
    ctx->pc = 0x2016DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2016D8u;
    // 0x2016dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201840u, 0x2016D8u, 0x2016E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2016E0u;
label_2016e0:
    // 0x2016e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2016e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2016e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2016E4u;
    {
        const bool branch_taken_0x2016e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2016E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016E4u;
        // 0x2016e8: 0xae221108  sw          $v0, 0x1108($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016e4) {
            ctx->pc = 0x2016F0u;
            goto label_2016f0;
        }
    }
    ctx->pc = 0x2016ECu;
label_2016ec:
    // 0x2016ec: 0xae201108  sw          $zero, 0x1108($s1)
    ctx->pc = 0x2016ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4360), GPR_U32(ctx, 0));
label_2016f0:
    // 0x2016f0: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2016f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2016f4: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2016f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2016f8: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2016f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2016fc: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2016fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x201700: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x201700u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x201704: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x201704u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x201708: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x201708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20170c: 0x3e00008  jr          $ra
    ctx->pc = 0x20170Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20170Cu;
        // 0x201710: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20170Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201714u;
    // 0x201714: 0x0  nop
    ctx->pc = 0x201714u;
    // NOP
    ctx->pc = 0x201718u;
}
