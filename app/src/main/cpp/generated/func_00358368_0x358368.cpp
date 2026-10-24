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

// Function: func_00358368
// Address: 0x358368 - 0x358598
void func_00358368_0x358368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00358368_0x358368");
#endif

    switch (ctx->pc) {
        case 0x3583d8u: goto label_3583d8;
        case 0x358410u: goto label_358410;
        case 0x358474u: goto label_358474;
        case 0x3584dcu: goto label_3584dc;
        case 0x3584e4u: goto label_3584e4;
        case 0x3584ecu: goto label_3584ec;
        case 0x3584f4u: goto label_3584f4;
        case 0x3584fcu: goto label_3584fc;
        case 0x35850cu: goto label_35850c;
        case 0x35851cu: goto label_35851c;
        case 0x358528u: goto label_358528;
        case 0x358538u: goto label_358538;
        case 0x358554u: goto label_358554;
        case 0x35855cu: goto label_35855c;
        case 0x358564u: goto label_358564;
        default: break;
    }

    ctx->pc = 0x358368u;

    // 0x358368: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35836c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35836cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358370: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x358370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x358374: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x358374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358378: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x358378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35837c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x35837cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358380: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x358380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x358384: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x358384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x358388: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x358388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35838c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x35838cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x358390: 0x8e470040  lw          $a3, 0x40($s2)
    ctx->pc = 0x358390u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x358394: 0x8e50003c  lw          $s0, 0x3C($s2)
    ctx->pc = 0x358394u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x358398: 0x12000077  beqz        $s0, . + 4 + (0x77 << 2)
    ctx->pc = 0x358398u;
    {
        const bool branch_taken_0x358398 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358398u;
        // 0x35839c: 0x73082  srl         $a2, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358398) {
            ctx->pc = 0x358578u;
            goto label_358578;
        }
    }
    ctx->pc = 0x3583A0u;
    // 0x3583a0: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x3583a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3583a4: 0x2c636fa0  sltiu       $v1, $v1, 0x6FA0
    ctx->pc = 0x3583a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)28576) ? 1 : 0);
    // 0x3583a8: 0x50600074  beql        $v1, $zero, . + 4 + (0x74 << 2)
    ctx->pc = 0x3583A8u;
    {
        const bool branch_taken_0x3583a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3583a8) {
            ctx->pc = 0x3583ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3583A8u;
            // 0x3583ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35857Cu;
            goto label_35857c;
        }
    }
    ctx->pc = 0x3583B0u;
    // 0x3583b0: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x3583b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x3583b4: 0x8d03e300  lw          $v1, -0x1D00($t0)
    ctx->pc = 0x3583b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EE300u));
    // 0x3583b8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3583B8u;
    {
        const bool branch_taken_0x3583b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3583BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3583B8u;
        // 0x3583bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3583b8) {
            ctx->pc = 0x3583CCu;
            goto label_3583cc;
        }
    }
    ctx->pc = 0x3583C0u;
    // 0x3583c0: 0x5467006e  bnel        $v1, $a3, . + 4 + (0x6E << 2)
    ctx->pc = 0x3583C0u;
    {
        const bool branch_taken_0x3583c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3583c0) {
            ctx->pc = 0x3583C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3583C0u;
            // 0x3583c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35857Cu;
            goto label_35857c;
        }
    }
    ctx->pc = 0x3583C8u;
    // 0x3583c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3583c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3583cc:
    // 0x3583cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3583ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3583d0: 0xc0d9b14  jal         func_366C50
    ctx->pc = 0x3583D0u;
    SET_GPR_U32(ctx, 31, 0x3583D8u);
    ctx->pc = 0x3583D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3583D0u;
    // 0x3583d4: 0xad07e300  sw          $a3, -0x1D00($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294959872), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366C50u, 0x3583D0u, 0x3583D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3583D8u;
label_3583d8:
    // 0x3583d8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3583d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3583dc: 0x2603001f  addiu       $v1, $s0, 0x1F
    ctx->pc = 0x3583dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x3583e0: 0x2404ffe0  addiu       $a0, $zero, -0x20
    ctx->pc = 0x3583e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x3583e4: 0x32450007  andi        $a1, $s2, 0x7
    ctx->pc = 0x3583e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x3583e8: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x3583e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x3583ec: 0x648824  and         $s1, $v1, $a0
    ctx->pc = 0x3583ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3583f0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3583f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3583f4: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x3583f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x3583f8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3583f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x3583fc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3583fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358400: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x358400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x358404: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x358404u;
    {
        const bool branch_taken_0x358404 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x358408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358404u;
        // 0x358408: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358404) {
            ctx->pc = 0x358470u;
            goto label_358470;
        }
    }
    ctx->pc = 0x35840Cu;
    // 0x35840c: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x35840cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_358410:
    // 0x358410: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x358410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x358414: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x358414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x358418: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x358418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x35841c: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x35841cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x358420: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x358420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x358424: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x358424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x358428: 0x6848001f  ldl         $t0, 0x1F($v0)
    ctx->pc = 0x358428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x35842c: 0x6c480018  ldr         $t0, 0x18($v0)
    ctx->pc = 0x35842cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x358430: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x358430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x358434: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x358434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x358438: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x358438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35843c: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x35843cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x358440: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x358440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x358444: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x358444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x358448: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x358448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35844c: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x35844cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x358450: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x358450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x358454: 0x0  nop
    ctx->pc = 0x358454u;
    // NOP
    // 0x358458: 0x0  nop
    ctx->pc = 0x358458u;
    // NOP
    // 0x35845c: 0x1444ffec  bne         $v0, $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x35845Cu;
    {
        const bool branch_taken_0x35845c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x358460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35845Cu;
        // 0x358460: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35845c) {
            ctx->pc = 0x358410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358410;
        }
    }
    ctx->pc = 0x358464u;
    // 0x358464: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x358464u;
    {
        const bool branch_taken_0x358464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358464) {
            ctx->pc = 0x3584A8u;
            goto label_3584a8;
        }
    }
    ctx->pc = 0x35846Cu;
    // 0x35846c: 0x0  nop
    ctx->pc = 0x35846cu;
    // NOP
label_358470:
    // 0x358470: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x358470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_358474:
    // 0x358474: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x358474u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x358478: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x358478u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x35847c: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x35847cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x358480: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x358480u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x358484: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x358484u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x358488: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x358488u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x35848c: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x35848cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x358490: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x358490u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x358494: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x358494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x358498: 0x0  nop
    ctx->pc = 0x358498u;
    // NOP
    // 0x35849c: 0x0  nop
    ctx->pc = 0x35849cu;
    // NOP
    // 0x3584a0: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3584A0u;
    {
        const bool branch_taken_0x3584a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3584A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3584A0u;
        // 0x3584a4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3584a0) {
            ctx->pc = 0x358474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358474;
        }
    }
    ctx->pc = 0x3584A8u;
label_3584a8:
    // 0x3584a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3584a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3584ac: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3584acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3584b0: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x3584b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x3584b4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3584b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x3584b8: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x3584b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x3584bc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x3584bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x3584c0: 0x2610e0c0  addiu       $s0, $s0, -0x1F40
    ctx->pc = 0x3584c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959296));
    // 0x3584c4: 0xae330044  sw          $s3, 0x44($s1)
    ctx->pc = 0x3584c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 19));
    // 0x3584c8: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x3584c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x3584cc: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x3584ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x3584d0: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x3584d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x3584d4: 0xc0d3420  jal         func_34D080
    ctx->pc = 0x3584D4u;
    SET_GPR_U32(ctx, 31, 0x3584DCu);
    ctx->pc = 0x3584D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584D4u;
    // 0x3584d8: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D080u, 0x3584D4u, 0x3584DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584DCu;
label_3584dc:
    // 0x3584dc: 0xc0d6166  jal         func_358598
    ctx->pc = 0x3584DCu;
    SET_GPR_U32(ctx, 31, 0x3584E4u);
    ctx->pc = 0x3584E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584DCu;
    // 0x3584e0: 0x2624090c  addiu       $a0, $s1, 0x90C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358598u, 0x3584DCu, 0x3584E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584E4u;
label_3584e4:
    // 0x3584e4: 0xc0d6180  jal         func_358600
    ctx->pc = 0x3584E4u;
    SET_GPR_U32(ctx, 31, 0x3584ECu);
    ctx->pc = 0x3584E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584E4u;
    // 0x3584e8: 0x26240950  addiu       $a0, $s1, 0x950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358600u, 0x3584E4u, 0x3584ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584ECu;
label_3584ec:
    // 0x3584ec: 0xc0d61a2  jal         func_358688
    ctx->pc = 0x3584ECu;
    SET_GPR_U32(ctx, 31, 0x3584F4u);
    ctx->pc = 0x3584F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584ECu;
    // 0x3584f0: 0x262436c0  addiu       $a0, $s1, 0x36C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358688u, 0x3584ECu, 0x3584F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584F4u;
label_3584f4:
    // 0x3584f4: 0xc0d3756  jal         func_34DD58
    ctx->pc = 0x3584F4u;
    SET_GPR_U32(ctx, 31, 0x3584FCu);
    ctx->pc = 0x3584F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3584F4u;
    // 0x3584f8: 0x262409f8  addiu       $a0, $s1, 0x9F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD58u, 0x3584F4u, 0x3584FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3584FCu;
label_3584fc:
    // 0x3584fc: 0x26240a0c  addiu       $a0, $s1, 0xA0C
    ctx->pc = 0x3584fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2572));
    // 0x358500: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x358500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358504: 0xc0d9a58  jal         func_366960
    ctx->pc = 0x358504u;
    SET_GPR_U32(ctx, 31, 0x35850Cu);
    ctx->pc = 0x358508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358504u;
    // 0x358508: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366960u, 0x358504u, 0x35850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35850Cu;
label_35850c:
    // 0x35850c: 0x26240b9c  addiu       $a0, $s1, 0xB9C
    ctx->pc = 0x35850cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2972));
    // 0x358510: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x358510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x358514: 0xc0d9a58  jal         func_366960
    ctx->pc = 0x358514u;
    SET_GPR_U32(ctx, 31, 0x35851Cu);
    ctx->pc = 0x358518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358514u;
    // 0x358518: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366960u, 0x358514u, 0x35851Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35851Cu;
label_35851c:
    // 0x35851c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35851cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358520: 0xc0d68ac  jal         func_35A2B0
    ctx->pc = 0x358520u;
    SET_GPR_U32(ctx, 31, 0x358528u);
    ctx->pc = 0x358524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358520u;
    // 0x358524: 0x26250d30  addiu       $a1, $s1, 0xD30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A2B0u, 0x358520u, 0x358528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358528u;
label_358528:
    // 0x358528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x358528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35852c: 0x26251310  addiu       $a1, $s1, 0x1310
    ctx->pc = 0x35852cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4880));
    // 0x358530: 0xc0d2ea2  jal         func_34BA88
    ctx->pc = 0x358530u;
    SET_GPR_U32(ctx, 31, 0x358538u);
    ctx->pc = 0x358534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358530u;
    // 0x358534: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BA88u, 0x358530u, 0x358538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358538u;
label_358538:
    // 0x358538: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x358538u;
    {
        const bool branch_taken_0x358538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x358538) {
            ctx->pc = 0x35853Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358538u;
            // 0x35853c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358578u;
            goto label_358578;
        }
    }
    ctx->pc = 0x358540u;
    // 0x358540: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x358540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358544: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x358544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x358548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35854c: 0xc0d6f34  jal         func_35BCD0
    ctx->pc = 0x35854Cu;
    SET_GPR_U32(ctx, 31, 0x358554u);
    ctx->pc = 0x358550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35854Cu;
    // 0x358550: 0x26251f30  addiu       $a1, $s1, 0x1F30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 7984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BCD0u, 0x35854Cu, 0x358554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358554u;
label_358554:
    // 0x358554: 0xc0d65cc  jal         func_359730
    ctx->pc = 0x358554u;
    SET_GPR_U32(ctx, 31, 0x35855Cu);
    ctx->pc = 0x358558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358554u;
    // 0x358558: 0x262436b0  addiu       $a0, $s1, 0x36B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359730u, 0x358554u, 0x35855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35855Cu;
label_35855c:
    // 0x35855c: 0xc0d61f4  jal         func_3587D0
    ctx->pc = 0x35855Cu;
    SET_GPR_U32(ctx, 31, 0x358564u);
    ctx->pc = 0x358560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35855Cu;
    // 0x358560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3587D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3587D0u, 0x35855Cu, 0x358564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358564u;
label_358564:
    // 0x358564: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x358564u;
    {
        const bool branch_taken_0x358564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358564u;
        // 0x358568: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358564) {
            ctx->pc = 0x358578u;
            goto label_358578;
        }
    }
    ctx->pc = 0x35856Cu;
    // 0x35856c: 0xae330048  sw          $s3, 0x48($s1)
    ctx->pc = 0x35856cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 19));
    // 0x358570: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x358570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358574: 0xae33004c  sw          $s3, 0x4C($s1)
    ctx->pc = 0x358574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 19));
label_358578:
    // 0x358578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x358578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35857c:
    // 0x35857c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35857cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358580: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x358580u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358584: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x358584u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x358588: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x358588u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35858c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x35858cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358590: 0x3e00008  jr          $ra
    ctx->pc = 0x358590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358590u;
        // 0x358594: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358598u;
}
