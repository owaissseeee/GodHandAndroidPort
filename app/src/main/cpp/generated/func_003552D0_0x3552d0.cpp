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

// Function: func_003552D0
// Address: 0x3552d0 - 0x3553c8
void func_003552D0_0x3552d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003552D0_0x3552d0");
#endif

    switch (ctx->pc) {
        case 0x3552f8u: goto label_3552f8;
        case 0x355388u: goto label_355388;
        case 0x3553a0u: goto label_3553a0;
        default: break;
    }

    ctx->pc = 0x3552d0u;

    // 0x3552d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3552d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3552d4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3552d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3552d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3552d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3552dc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3552dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3552e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3552e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3552e4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3552e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3552e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3552e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3552ec: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3552ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3552f0: 0xc0d54f2  jal         func_3553C8
    ctx->pc = 0x3552F0u;
    SET_GPR_U32(ctx, 31, 0x3552F8u);
    ctx->pc = 0x3552F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3552F0u;
    // 0x3552f4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3553C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3553C8u, 0x3552F0u, 0x3552F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3552F8u;
label_3552f8:
    // 0x3552f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3552f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3552fc: 0x5080002d  beql        $a0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x3552FCu;
    {
        const bool branch_taken_0x3552fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3552fc) {
            ctx->pc = 0x355300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3552FCu;
            // 0x355300: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3553B4u;
            goto label_3553b4;
        }
    }
    ctx->pc = 0x355304u;
    // 0x355304: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x355304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x355308: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x355308u;
    {
        const bool branch_taken_0x355308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355308u;
        // 0x35530c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355308) {
            ctx->pc = 0x3553B0u;
            goto label_3553b0;
        }
    }
    ctx->pc = 0x355310u;
    // 0x355310: 0x68820013  ldl         $v0, 0x13($a0)
    ctx->pc = 0x355310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x355314: 0x6c82000c  ldr         $v0, 0xC($a0)
    ctx->pc = 0x355314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x355318: 0x6883001b  ldl         $v1, 0x1B($a0)
    ctx->pc = 0x355318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x35531c: 0x6c830014  ldr         $v1, 0x14($a0)
    ctx->pc = 0x35531cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x355320: 0x68850023  ldl         $a1, 0x23($a0)
    ctx->pc = 0x355320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x355324: 0x6c85001c  ldr         $a1, 0x1C($a0)
    ctx->pc = 0x355324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x355328: 0x6886002b  ldl         $a2, 0x2B($a0)
    ctx->pc = 0x355328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x35532c: 0x6c860024  ldr         $a2, 0x24($a0)
    ctx->pc = 0x35532cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x355330: 0xb2220d73  sdl         $v0, 0xD73($s1)
    ctx->pc = 0x355330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3443); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355334: 0xb6220d6c  sdr         $v0, 0xD6C($s1)
    ctx->pc = 0x355334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3436); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355338: 0xb2230d7b  sdl         $v1, 0xD7B($s1)
    ctx->pc = 0x355338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3451); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35533c: 0xb6230d74  sdr         $v1, 0xD74($s1)
    ctx->pc = 0x35533cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355340: 0xb2250d83  sdl         $a1, 0xD83($s1)
    ctx->pc = 0x355340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3459); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355344: 0xb6250d7c  sdr         $a1, 0xD7C($s1)
    ctx->pc = 0x355344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3452); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355348: 0xb2260d8b  sdl         $a2, 0xD8B($s1)
    ctx->pc = 0x355348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3467); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35534c: 0xb6260d84  sdr         $a2, 0xD84($s1)
    ctx->pc = 0x35534cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3460); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355350: 0x68820033  ldl         $v0, 0x33($a0)
    ctx->pc = 0x355350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x355354: 0x6c82002c  ldr         $v0, 0x2C($a0)
    ctx->pc = 0x355354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x355358: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x355358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x35535c: 0xb2220d93  sdl         $v0, 0xD93($s1)
    ctx->pc = 0x35535cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3475); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355360: 0xb6220d8c  sdr         $v0, 0xD8C($s1)
    ctx->pc = 0x355360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3468); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355364: 0xae230d94  sw          $v1, 0xD94($s1)
    ctx->pc = 0x355364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3476), GPR_U32(ctx, 3));
    // 0x355368: 0x24830038  addiu       $v1, $a0, 0x38
    ctx->pc = 0x355368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x35536c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x35536cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x355370: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x355370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355374: 0x8c620200  lw          $v0, 0x200($v1)
    ctx->pc = 0x355374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x355378: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x355378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35537c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x35537cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x355380: 0xc0da99a  jal         func_36A668
    ctx->pc = 0x355380u;
    SET_GPR_U32(ctx, 31, 0x355388u);
    ctx->pc = 0x355384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355380u;
    // 0x355384: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A668u, 0x355380u, 0x355388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355388u;
label_355388:
    // 0x355388: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x355388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x35538c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35538cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355390: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x355390u;
    {
        const bool branch_taken_0x355390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x355394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355390u;
        // 0x355394: 0x34a50f1b  ori         $a1, $a1, 0xF1B (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3867);
        ctx->in_delay_slot = false;
        if (branch_taken_0x355390) {
            ctx->pc = 0x3553A8u;
            goto label_3553a8;
        }
    }
    ctx->pc = 0x355398u;
    // 0x355398: 0xc0d375c  jal         func_34DD70
    ctx->pc = 0x355398u;
    SET_GPR_U32(ctx, 31, 0x3553A0u);
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x355398u, 0x3553A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3553A0u;
label_3553a0:
    // 0x3553a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3553A0u;
    {
        const bool branch_taken_0x3553a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3553A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3553A0u;
        // 0x3553a4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3553a0) {
            ctx->pc = 0x3553B4u;
            goto label_3553b4;
        }
    }
    ctx->pc = 0x3553A8u;
label_3553a8:
    // 0x3553a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3553a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3553ac: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3553acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3553b0:
    // 0x3553b0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3553b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3553b4:
    // 0x3553b4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3553b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3553b8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3553b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3553bc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3553bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3553c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3553C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3553C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3553C0u;
        // 0x3553c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3553C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3553C8u;
}
