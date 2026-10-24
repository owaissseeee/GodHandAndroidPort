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

// Function: func_003547B0
// Address: 0x3547b0 - 0x3549a8
void func_003547B0_0x3547b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003547B0_0x3547b0");
#endif

    switch (ctx->pc) {
        case 0x3547c4u: goto label_3547c4;
        case 0x354930u: goto label_354930;
        case 0x354940u: goto label_354940;
        case 0x354960u: goto label_354960;
        case 0x354968u: goto label_354968;
        case 0x354978u: goto label_354978;
        default: break;
    }

    ctx->pc = 0x3547b0u;

    // 0x3547b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3547b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3547b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3547b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3547b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3547b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3547bc: 0xc0d526a  jal         func_3549A8
    ctx->pc = 0x3547BCu;
    SET_GPR_U32(ctx, 31, 0x3547C4u);
    ctx->pc = 0x3547C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3547BCu;
    // 0x3547c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3549A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3549A8u, 0x3547BCu, 0x3547C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3547C4u;
label_3547c4:
    // 0x3547c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3547C4u;
    {
        const bool branch_taken_0x3547c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3547C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3547C4u;
        // 0x3547c8: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3547c4) {
            ctx->pc = 0x3547E8u;
            goto label_3547e8;
        }
    }
    ctx->pc = 0x3547CCu;
    // 0x3547cc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x3547ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x3547d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3547d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3547d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3547d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3547d8: 0x34a50f15  ori         $a1, $a1, 0xF15
    ctx->pc = 0x3547d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3861);
    // 0x3547dc: 0x80d375c  j           func_34DD70
    ctx->pc = 0x3547DCu;
    ctx->pc = 0x3547E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3547DCu;
    // 0x3547e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x3547DCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3547E4u;
    // 0x3547e4: 0x0  nop
    ctx->pc = 0x3547e4u;
    // NOP
label_3547e8:
    // 0x3547e8: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x3547e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x3547ec: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x3547ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
    // 0x3547f0: 0x24476ba8  addiu       $a3, $v0, 0x6BA8
    ctx->pc = 0x3547f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 27560));
    // 0x3547f4: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x3547f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3547f8: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x3547f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3547fc: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x3547fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x354800: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x354800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x354804: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x354804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x354808: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x354808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x35480c: 0xb203000b  sdl         $v1, 0xB($s0)
    ctx->pc = 0x35480cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x354810: 0xb6030004  sdr         $v1, 0x4($s0)
    ctx->pc = 0x354810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x354814: 0xb2050013  sdl         $a1, 0x13($s0)
    ctx->pc = 0x354814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x354818: 0xb605000c  sdr         $a1, 0xC($s0)
    ctx->pc = 0x354818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35481c: 0xb206001b  sdl         $a2, 0x1B($s0)
    ctx->pc = 0x35481cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x354820: 0xb6060014  sdr         $a2, 0x14($s0)
    ctx->pc = 0x354820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x354824: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x354824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x354828: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x354828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x35482c: 0x8ce50020  lw          $a1, 0x20($a3)
    ctx->pc = 0x35482cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x766BC8u));
    // 0x354830: 0xb2030023  sdl         $v1, 0x23($s0)
    ctx->pc = 0x354830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x354834: 0xb603001c  sdr         $v1, 0x1C($s0)
    ctx->pc = 0x354834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x354838: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x354838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x35483c: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x35483cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x354840: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x354840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x354844: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x354844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x354848: 0x248b6bd0  addiu       $t3, $a0, 0x6BD0
    ctx->pc = 0x354848u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 27600));
    // 0x35484c: 0x69680007  ldl         $t0, 0x7($t3)
    ctx->pc = 0x35484cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x354850: 0x6d680000  ldr         $t0, 0x0($t3)
    ctx->pc = 0x354850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x354854: 0xb208002f  sdl         $t0, 0x2F($s0)
    ctx->pc = 0x354854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x354858: 0xb6080028  sdr         $t0, 0x28($s0)
    ctx->pc = 0x354858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35485c: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x35485cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x354860: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x354860u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354864: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x354864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354868: 0x244b6bd8  addiu       $t3, $v0, 0x6BD8
    ctx->pc = 0x354868u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 27608));
    // 0x35486c: 0x69640007  ldl         $a0, 0x7($t3)
    ctx->pc = 0x35486cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x354870: 0x6d640000  ldr         $a0, 0x0($t3)
    ctx->pc = 0x354870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x354874: 0x6966000f  ldl         $a2, 0xF($t3)
    ctx->pc = 0x354874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x354878: 0x6d660008  ldr         $a2, 0x8($t3)
    ctx->pc = 0x354878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x35487c: 0x696a0017  ldl         $t2, 0x17($t3)
    ctx->pc = 0x35487cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x354880: 0x6d6a0010  ldr         $t2, 0x10($t3)
    ctx->pc = 0x354880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x354884: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x354884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x354888: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x354888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35488c: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x35488cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x354890: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x354890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x354894: 0xb06a0017  sdl         $t2, 0x17($v1)
    ctx->pc = 0x354894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x354898: 0xb46a0010  sdr         $t2, 0x10($v1)
    ctx->pc = 0x354898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35489c: 0x6964001f  ldl         $a0, 0x1F($t3)
    ctx->pc = 0x35489cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3548a0: 0x6d640018  ldr         $a0, 0x18($t3)
    ctx->pc = 0x3548a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3548a4: 0x69660027  ldl         $a2, 0x27($t3)
    ctx->pc = 0x3548a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3548a8: 0x6d660020  ldr         $a2, 0x20($t3)
    ctx->pc = 0x3548a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3548ac: 0x696a002f  ldl         $t2, 0x2F($t3)
    ctx->pc = 0x3548acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x3548b0: 0x6d6a0028  ldr         $t2, 0x28($t3)
    ctx->pc = 0x3548b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x3548b4: 0xb064001f  sdl         $a0, 0x1F($v1)
    ctx->pc = 0x3548b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3548b8: 0xb4640018  sdr         $a0, 0x18($v1)
    ctx->pc = 0x3548b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3548bc: 0xb0660027  sdl         $a2, 0x27($v1)
    ctx->pc = 0x3548bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3548c0: 0xb4660020  sdr         $a2, 0x20($v1)
    ctx->pc = 0x3548c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3548c4: 0xb06a002f  sdl         $t2, 0x2F($v1)
    ctx->pc = 0x3548c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3548c8: 0xb46a0028  sdr         $t2, 0x28($v1)
    ctx->pc = 0x3548c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3548cc: 0x69640037  ldl         $a0, 0x37($t3)
    ctx->pc = 0x3548ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3548d0: 0x6d640030  ldr         $a0, 0x30($t3)
    ctx->pc = 0x3548d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3548d4: 0x6966003f  ldl         $a2, 0x3F($t3)
    ctx->pc = 0x3548d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3548d8: 0x6d660038  ldr         $a2, 0x38($t3)
    ctx->pc = 0x3548d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3548dc: 0xb0640037  sdl         $a0, 0x37($v1)
    ctx->pc = 0x3548dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3548e0: 0xb4640030  sdr         $a0, 0x30($v1)
    ctx->pc = 0x3548e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3548e4: 0xb066003f  sdl         $a2, 0x3F($v1)
    ctx->pc = 0x3548e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3548e8: 0xb4660038  sdr         $a2, 0x38($v1)
    ctx->pc = 0x3548e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3548ec: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3548ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3548f0: 0xae070074  sw          $a3, 0x74($s0)
    ctx->pc = 0x3548f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 7));
    // 0x3548f4: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x3548f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x3548f8: 0xae080078  sw          $t0, 0x78($s0)
    ctx->pc = 0x3548f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 8));
    // 0x3548fc: 0xae09013c  sw          $t1, 0x13C($s0)
    ctx->pc = 0x3548fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 9));
    // 0x354900: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x354900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x354904: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x354904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x354908: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x354908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x35490c: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x35490cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x354910: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x354910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x354914: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x354914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
    // 0x354918: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x354918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x35491c: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x35491cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
    // 0x354920: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x354920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
    // 0x354924: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x354924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
    // 0x354928: 0xc0d529c  jal         func_354A70
    ctx->pc = 0x354928u;
    SET_GPR_U32(ctx, 31, 0x354930u);
    ctx->pc = 0x35492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354928u;
    // 0x35492c: 0xae000174  sw          $zero, 0x174($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354A70u, 0x354928u, 0x354930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354930u;
label_354930:
    // 0x354930: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x354930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x354934: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x354934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x354938: 0xc0d52c8  jal         func_354B20
    ctx->pc = 0x354938u;
    SET_GPR_U32(ctx, 31, 0x354940u);
    ctx->pc = 0x35493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354938u;
    // 0x35493c: 0x2604008c  addiu       $a0, $s0, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354B20u, 0x354938u, 0x354940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354940u;
label_354940:
    // 0x354940: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x354940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x354944: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x354944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x354948: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x354948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
    // 0x35494c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35494cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x354950: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x354950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x354954: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x354954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x354958: 0xc0d482c  jal         func_3520B0
    ctx->pc = 0x354958u;
    SET_GPR_U32(ctx, 31, 0x354960u);
    ctx->pc = 0x35495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354958u;
    // 0x35495c: 0x26040118  addiu       $a0, $s0, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3520B0u, 0x354958u, 0x354960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354960u;
label_354960:
    // 0x354960: 0xc0d52d0  jal         func_354B40
    ctx->pc = 0x354960u;
    SET_GPR_U32(ctx, 31, 0x354968u);
    ctx->pc = 0x354964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354960u;
    // 0x354964: 0x26041080  addiu       $a0, $s0, 0x1080 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354B40u, 0x354960u, 0x354968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354968u;
label_354968:
    // 0x354968: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x354968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x35496c: 0x26021114  addiu       $v0, $s0, 0x1114
    ctx->pc = 0x35496cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4372));
    // 0x354970: 0x26030fe4  addiu       $v1, $s0, 0xFE4
    ctx->pc = 0x354970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4068));
    // 0x354974: 0x0  nop
    ctx->pc = 0x354974u;
    // NOP
label_354978:
    // 0x354978: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x354978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x35497c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35497cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x354980: 0x2463ff10  addiu       $v1, $v1, -0xF0
    ctx->pc = 0x354980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967056));
    // 0x354984: 0x0  nop
    ctx->pc = 0x354984u;
    // NOP
    // 0x354988: 0x0  nop
    ctx->pc = 0x354988u;
    // NOP
    // 0x35498c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35498Cu;
    {
        const bool branch_taken_0x35498c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x354990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35498Cu;
        // 0x354990: 0x2442fff8  addiu       $v0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35498c) {
            ctx->pc = 0x354978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354978;
        }
    }
    ctx->pc = 0x354994u;
    // 0x354994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x354994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354998: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x354998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35499c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35499cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3549a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3549A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3549A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3549A0u;
        // 0x3549a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3549A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3549A8u;
}
