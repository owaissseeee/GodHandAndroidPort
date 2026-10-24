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

// Function: func_00354080
// Address: 0x354080 - 0x354128
void func_00354080_0x354080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00354080_0x354080");
#endif

    switch (ctx->pc) {
        case 0x3540f4u: goto label_3540f4;
        case 0x354104u: goto label_354104;
        default: break;
    }

    ctx->pc = 0x354080u;

    // 0x354080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x354084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x354084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x354088: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x354088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35408c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35408cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x354090: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x354090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x354094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x354098: 0x6a020df7  ldl         $v0, 0xDF7($s0)
    ctx->pc = 0x354098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3575); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x35409c: 0x6e020df0  ldr         $v0, 0xDF0($s0)
    ctx->pc = 0x35409cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3568); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3540a0: 0x6a030dff  ldl         $v1, 0xDFF($s0)
    ctx->pc = 0x3540a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3583); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3540a4: 0x6e030df8  ldr         $v1, 0xDF8($s0)
    ctx->pc = 0x3540a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3576); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3540a8: 0x6a050e07  ldl         $a1, 0xE07($s0)
    ctx->pc = 0x3540a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3591); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3540ac: 0x6e050e00  ldr         $a1, 0xE00($s0)
    ctx->pc = 0x3540acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3584); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3540b0: 0x6a060e0f  ldl         $a2, 0xE0F($s0)
    ctx->pc = 0x3540b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3599); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3540b4: 0x6e060e08  ldr         $a2, 0xE08($s0)
    ctx->pc = 0x3540b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3540b8: 0xb2220013  sdl         $v0, 0x13($s1)
    ctx->pc = 0x3540b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3540bc: 0xb622000c  sdr         $v0, 0xC($s1)
    ctx->pc = 0x3540bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3540c0: 0xb223001b  sdl         $v1, 0x1B($s1)
    ctx->pc = 0x3540c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3540c4: 0xb6230014  sdr         $v1, 0x14($s1)
    ctx->pc = 0x3540c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3540c8: 0xb2250023  sdl         $a1, 0x23($s1)
    ctx->pc = 0x3540c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3540cc: 0xb625001c  sdr         $a1, 0x1C($s1)
    ctx->pc = 0x3540ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3540d0: 0xb226002b  sdl         $a2, 0x2B($s1)
    ctx->pc = 0x3540d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3540d4: 0xb6260024  sdr         $a2, 0x24($s1)
    ctx->pc = 0x3540d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3540d8: 0x6a020e17  ldl         $v0, 0xE17($s0)
    ctx->pc = 0x3540d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3607); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3540dc: 0x6e020e10  ldr         $v0, 0xE10($s0)
    ctx->pc = 0x3540dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3600); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3540e0: 0x8e030e18  lw          $v1, 0xE18($s0)
    ctx->pc = 0x3540e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3608)));
    // 0x3540e4: 0xb2220033  sdl         $v0, 0x33($s1)
    ctx->pc = 0x3540e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3540e8: 0xb622002c  sdr         $v0, 0x2C($s1)
    ctx->pc = 0x3540e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3540ec: 0xc0d58d6  jal         func_356358
    ctx->pc = 0x3540ECu;
    SET_GPR_U32(ctx, 31, 0x3540F4u);
    ctx->pc = 0x3540F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3540ECu;
    // 0x3540f0: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356358u, 0x3540ECu, 0x3540F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3540F4u;
label_3540f4:
    // 0x3540f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3540F4u;
    {
        const bool branch_taken_0x3540f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3540F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3540F4u;
        // 0x3540f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3540f4) {
            ctx->pc = 0x354108u;
            goto label_354108;
        }
    }
    ctx->pc = 0x3540FCu;
    // 0x3540fc: 0xc0d5b16  jal         func_356C58
    ctx->pc = 0x3540FCu;
    SET_GPR_U32(ctx, 31, 0x354104u);
    ctx->pc = 0x356C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356C58u, 0x3540FCu, 0x354104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354104u;
label_354104:
    // 0x354104: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x354104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
label_354108:
    // 0x354108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35410c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35410cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354110: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x354110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354114: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x354114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x354118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x354118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35411c: 0x80d504a  j           func_354128
    ctx->pc = 0x35411Cu;
    ctx->pc = 0x354120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35411Cu;
    // 0x354120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354128u, 0x35411Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x354124u;
    // 0x354124: 0x0  nop
    ctx->pc = 0x354124u;
    // NOP
    ctx->pc = 0x354128u;
}
