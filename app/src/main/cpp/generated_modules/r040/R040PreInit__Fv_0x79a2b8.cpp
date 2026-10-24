#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: R040PreInit__Fv
// Address: 0x79a2b8 - 0x79a4d8
void R040PreInit__Fv_0x79a2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R040PreInit__Fv_0x79a2b8");
#endif

    switch (ctx->pc) {
        case 0x79a4b8u: goto label_79a4b8;
        case 0x79a4c4u: goto label_79a4c4;
        default: break;
    }

    ctx->pc = 0x79a2b8u;

    // 0x79a2b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79a2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79a2bc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a2c0: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a2c4: 0x3c09007a  lui         $t1, 0x7A
    ctx->pc = 0x79a2c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)122 << 16));
    // 0x79a2c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79a2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79a2cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x79a2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a2d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79a2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79a2d4: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x79a2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x79a2d8: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x79a2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x79a2dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a2dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2e0: 0x94670016  lhu         $a3, 0x16($v1)
    ctx->pc = 0x79a2e0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x79a2e4: 0xad24c804  sw          $a0, -0x37FC($t1)
    ctx->pc = 0x79a2e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x79C804u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x79C804u, _value); } while (0);
    // 0x79a2e8: 0x8ca39b70  lw          $v1, -0x6490($a1)
    ctx->pc = 0x79a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x569B70u));
    // 0x79a2ec: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x79a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x79a2f0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x79a2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x79a2f4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x79A2F4u;
    {
        const bool branch_taken_0x79a2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2F4u;
        // 0x79a2f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2f4) {
            ctx->pc = 0x79A364u;
            goto label_79a364;
        }
    }
    ctx->pc = 0x79A2FCu;
    // 0x79a2fc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x79a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x79a300: 0x24428240  addiu       $v0, $v0, -0x7DC0
    ctx->pc = 0x79a300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935104));
    // 0x79a304: 0x6843001f  ldl         $v1, 0x1F($v0)
    ctx->pc = 0x79a304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x79a308: 0x6c430018  ldr         $v1, 0x18($v0)
    ctx->pc = 0x79a308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x79a30c: 0x68440027  ldl         $a0, 0x27($v0)
    ctx->pc = 0x79a30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x79a310: 0x6c440020  ldr         $a0, 0x20($v0)
    ctx->pc = 0x79a310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x79a314: 0x6845002f  ldl         $a1, 0x2F($v0)
    ctx->pc = 0x79a314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x79a318: 0x6c450028  ldr         $a1, 0x28($v0)
    ctx->pc = 0x79a318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x79a31c: 0x68460037  ldl         $a2, 0x37($v0)
    ctx->pc = 0x79a31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x79a320: 0x6c460030  ldr         $a2, 0x30($v0)
    ctx->pc = 0x79a320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x79a324: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x79a324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a328: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x79a328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a32c: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x79a32cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a330: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x79a330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a334: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x79a334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a338: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x79a338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a33c: 0xb3a6001f  sdl         $a2, 0x1F($sp)
    ctx->pc = 0x79a33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a340: 0xb7a60018  sdr         $a2, 0x18($sp)
    ctx->pc = 0x79a340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a344: 0x6843003f  ldl         $v1, 0x3F($v0)
    ctx->pc = 0x79a344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x79a348: 0x6c430038  ldr         $v1, 0x38($v0)
    ctx->pc = 0x79a348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x79a34c: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x79a34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a350: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x79a350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79a354: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x79a354u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a358: 0x93a80006  lbu         $t0, 0x6($sp)
    ctx->pc = 0x79a358u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x79a35c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x79A35Cu;
    {
        const bool branch_taken_0x79a35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A35Cu;
        // 0x79a360: 0x246a0008  addiu       $t2, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a35c) {
            ctx->pc = 0x79A48Cu;
            goto label_79a48c;
        }
    }
    ctx->pc = 0x79A364u;
label_79a364:
    // 0x79a364: 0x24020404  addiu       $v0, $zero, 0x404
    ctx->pc = 0x79a364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
    // 0x79a368: 0x10e20032  beq         $a3, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x79A368u;
    {
        const bool branch_taken_0x79a368 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A368u;
        // 0x79a36c: 0x28e20405  slti        $v0, $a3, 0x405 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1029) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a368) {
            ctx->pc = 0x79A434u;
            goto label_79a434;
        }
    }
    ctx->pc = 0x79A370u;
    // 0x79a370: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x79A370u;
    {
        const bool branch_taken_0x79a370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A370u;
        // 0x79a374: 0x24020105  addiu       $v0, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a370) {
            ctx->pc = 0x79A3B4u;
            goto label_79a3b4;
        }
    }
    ctx->pc = 0x79A378u;
    // 0x79a378: 0x10e2001e  beq         $a3, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x79A378u;
    {
        const bool branch_taken_0x79a378 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A378u;
        // 0x79a37c: 0x28e20106  slti        $v0, $a3, 0x106 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)262) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a378) {
            ctx->pc = 0x79A3F4u;
            goto label_79a3f4;
        }
    }
    ctx->pc = 0x79A380u;
    // 0x79a380: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A380u;
    {
        const bool branch_taken_0x79a380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A380u;
        // 0x79a384: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a380) {
            ctx->pc = 0x79A398u;
            goto label_79a398;
        }
    }
    ctx->pc = 0x79A388u;
    // 0x79a388: 0x10e2001e  beq         $a3, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x79A388u;
    {
        const bool branch_taken_0x79a388 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A388u;
        // 0x79a38c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a388) {
            ctx->pc = 0x79A404u;
            goto label_79a404;
        }
    }
    ctx->pc = 0x79A390u;
    // 0x79a390: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x79A390u;
    {
        const bool branch_taken_0x79a390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a390) {
            ctx->pc = 0x79A48Cu;
            goto label_79a48c;
        }
    }
    ctx->pc = 0x79A398u;
label_79a398:
    // 0x79a398: 0x24020204  addiu       $v0, $zero, 0x204
    ctx->pc = 0x79a398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x79a39c: 0x10e2001c  beq         $a3, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x79A39Cu;
    {
        const bool branch_taken_0x79a39c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A39Cu;
        // 0x79a3a0: 0x24020300  addiu       $v0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a39c) {
            ctx->pc = 0x79A410u;
            goto label_79a410;
        }
    }
    ctx->pc = 0x79A3A4u;
    // 0x79a3a4: 0x10e2001f  beq         $a3, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x79A3A4u;
    {
        const bool branch_taken_0x79a3a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3A4u;
        // 0x79a3a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3a4) {
            ctx->pc = 0x79A424u;
            goto label_79a424;
        }
    }
    ctx->pc = 0x79A3ACu;
    // 0x79a3ac: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x79A3ACu;
    {
        const bool branch_taken_0x79a3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a3ac) {
            ctx->pc = 0x79A48Cu;
            goto label_79a48c;
        }
    }
    ctx->pc = 0x79A3B4u;
label_79a3b4:
    // 0x79a3b4: 0x24020607  addiu       $v0, $zero, 0x607
    ctx->pc = 0x79a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1543));
    // 0x79a3b8: 0x10e20027  beq         $a3, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x79A3B8u;
    {
        const bool branch_taken_0x79a3b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3B8u;
        // 0x79a3bc: 0x28e20608  slti        $v0, $a3, 0x608 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3b8) {
            ctx->pc = 0x79A458u;
            goto label_79a458;
        }
    }
    ctx->pc = 0x79A3C0u;
    // 0x79a3c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A3C0u;
    {
        const bool branch_taken_0x79a3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3C0u;
        // 0x79a3c4: 0x24020503  addiu       $v0, $zero, 0x503 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3c0) {
            ctx->pc = 0x79A3D8u;
            goto label_79a3d8;
        }
    }
    ctx->pc = 0x79A3C8u;
    // 0x79a3c8: 0x10e2001f  beq         $a3, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x79A3C8u;
    {
        const bool branch_taken_0x79a3c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3C8u;
        // 0x79a3cc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3c8) {
            ctx->pc = 0x79A448u;
            goto label_79a448;
        }
    }
    ctx->pc = 0x79A3D0u;
    // 0x79a3d0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x79A3D0u;
    {
        const bool branch_taken_0x79a3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a3d0) {
            ctx->pc = 0x79A48Cu;
            goto label_79a48c;
        }
    }
    ctx->pc = 0x79A3D8u;
label_79a3d8:
    // 0x79a3d8: 0x24020701  addiu       $v0, $zero, 0x701
    ctx->pc = 0x79a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1793));
    // 0x79a3dc: 0x10e20023  beq         $a3, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x79A3DCu;
    {
        const bool branch_taken_0x79a3dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3DCu;
        // 0x79a3e0: 0x24020802  addiu       $v0, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3dc) {
            ctx->pc = 0x79A46Cu;
            goto label_79a46c;
        }
    }
    ctx->pc = 0x79A3E4u;
    // 0x79a3e4: 0x10e20026  beq         $a3, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x79A3E4u;
    {
        const bool branch_taken_0x79a3e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3E4u;
        // 0x79a3e8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3e4) {
            ctx->pc = 0x79A480u;
            goto label_79a480;
        }
    }
    ctx->pc = 0x79A3ECu;
    // 0x79a3ec: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x79A3ECu;
    {
        const bool branch_taken_0x79a3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a3ec) {
            ctx->pc = 0x79A48Cu;
            goto label_79a48c;
        }
    }
    ctx->pc = 0x79A3F4u;
label_79a3f4:
    // 0x79a3f4: 0xad20c804  sw          $zero, -0x37FC($t1)
    ctx->pc = 0x79a3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294952964), GPR_U32(ctx, 0));
    // 0x79a3f8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x79a3f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a3fc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x79A3FCu;
    {
        const bool branch_taken_0x79a3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3FCu;
        // 0x79a400: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3fc) {
            ctx->pc = 0x79A48Cu;
            goto label_79a48c;
        }
    }
    ctx->pc = 0x79A404u;
label_79a404:
    // 0x79a404: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x79a404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a408: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x79A408u;
    {
        const bool branch_taken_0x79a408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A408u;
        // 0x79a40c: 0xad22c804  sw          $v0, -0x37FC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294952964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a408) {
            ctx->pc = 0x79A48Cu;
            goto label_79a48c;
        }
    }
    ctx->pc = 0x79A410u;
label_79a410:
    // 0x79a410: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79a410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a414: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x79a414u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a418: 0xad22c804  sw          $v0, -0x37FC($t1)
    ctx->pc = 0x79a418u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294952964), GPR_U32(ctx, 2));
    // 0x79a41c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x79A41Cu;
    {
        const bool branch_taken_0x79a41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A41Cu;
        // 0x79a420: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a41c) {
            ctx->pc = 0x79A48Cu;
            goto label_79a48c;
        }
    }
    ctx->pc = 0x79A424u;
label_79a424:
    // 0x79a424: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x79a424u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a428: 0xad22c804  sw          $v0, -0x37FC($t1)
    ctx->pc = 0x79a428u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294952964), GPR_U32(ctx, 2));
    // 0x79a42c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x79A42Cu;
    {
        const bool branch_taken_0x79a42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A42Cu;
        // 0x79a430: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a42c) {
            ctx->pc = 0x79A48Cu;
            goto label_79a48c;
        }
    }
    ctx->pc = 0x79A434u;
label_79a434:
    // 0x79a434: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79a434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a438: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x79a438u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a43c: 0xad22c804  sw          $v0, -0x37FC($t1)
    ctx->pc = 0x79a43cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294952964), GPR_U32(ctx, 2));
    // 0x79a440: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x79A440u;
    {
        const bool branch_taken_0x79a440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A440u;
        // 0x79a444: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a440) {
            ctx->pc = 0x79A48Cu;
            goto label_79a48c;
        }
    }
    ctx->pc = 0x79A448u;
label_79a448:
    // 0x79a448: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x79a448u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a44c: 0xad22c804  sw          $v0, -0x37FC($t1)
    ctx->pc = 0x79a44cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294952964), GPR_U32(ctx, 2));
    // 0x79a450: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x79A450u;
    {
        const bool branch_taken_0x79a450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A450u;
        // 0x79a454: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a450) {
            ctx->pc = 0x79A48Cu;
            goto label_79a48c;
        }
    }
    ctx->pc = 0x79A458u;
label_79a458:
    // 0x79a458: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x79a458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a45c: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x79a45cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a460: 0xad22c804  sw          $v0, -0x37FC($t1)
    ctx->pc = 0x79a460u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294952964), GPR_U32(ctx, 2));
    // 0x79a464: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x79A464u;
    {
        const bool branch_taken_0x79a464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A464u;
        // 0x79a468: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a464) {
            ctx->pc = 0x79A48Cu;
            goto label_79a48c;
        }
    }
    ctx->pc = 0x79A46Cu;
label_79a46c:
    // 0x79a46c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x79a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79a470: 0x240a0007  addiu       $t2, $zero, 0x7
    ctx->pc = 0x79a470u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79a474: 0xad22c804  sw          $v0, -0x37FC($t1)
    ctx->pc = 0x79a474u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294952964), GPR_U32(ctx, 2));
    // 0x79a478: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79A478u;
    {
        const bool branch_taken_0x79a478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A478u;
        // 0x79a47c: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a478) {
            ctx->pc = 0x79A48Cu;
            goto label_79a48c;
        }
    }
    ctx->pc = 0x79A480u;
label_79a480:
    // 0x79a480: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x79a480u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a484: 0xad22c804  sw          $v0, -0x37FC($t1)
    ctx->pc = 0x79a484u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294952964), GPR_U32(ctx, 2));
    // 0x79a488: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x79a488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_79a48c:
    // 0x79a48c: 0x1140000d  beqz        $t2, . + 4 + (0xD << 2)
    ctx->pc = 0x79A48Cu;
    {
        const bool branch_taken_0x79a48c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A48Cu;
        // 0x79a490: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a48c) {
            ctx->pc = 0x79A4C4u;
            goto label_79a4c4;
        }
    }
    ctx->pc = 0x79A494u;
    // 0x79a494: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x79a494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x79a498: 0x8c447a4c  lw          $a0, 0x7A4C($v0)
    ctx->pc = 0x79a498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31308)));
    // 0x79a49c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x79a49cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x79a4a0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a4a4: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x79a4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x79a4a8: 0x24a5c4d0  addiu       $a1, $a1, -0x3B30
    ctx->pc = 0x79a4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952144));
    // 0x79a4ac: 0xa0686aa4  sb          $t0, 0x6AA4($v1)
    ctx->pc = 0x79a4acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x586AA4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x586AA4u, _value); } while (0);
    // 0x79a4b0: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x79A4B0u;
    SET_GPR_U32(ctx, 31, 0x79A4B8u);
    ctx->pc = 0x79A4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4B0u;
    // 0x79a4b4: 0x140302d  daddu       $a2, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x79A4B0u, 0x79A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4B8u;
label_79a4b8:
    // 0x79a4b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4bc: 0xc0a52d8  jal         func_294B60
    ctx->pc = 0x79A4BCu;
    SET_GPR_U32(ctx, 31, 0x79A4C4u);
    ctx->pc = 0x79A4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4BCu;
    // 0x79a4c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B60u, 0x79A4BCu, 0x79A4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4C4u;
label_79a4c4:
    // 0x79a4c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a4c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a4c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79a4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x79A4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4CCu;
        // 0x79a4d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A4D4u;
    // 0x79a4d4: 0x0  nop
    ctx->pc = 0x79a4d4u;
    // NOP
    ctx->pc = 0x79a4d8u;
}
} // namespace gh_r040
