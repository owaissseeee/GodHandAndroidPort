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

// Function: sfbuf_SetSupSj
// Address: 0x34c158 - 0x34c1f8
void sfbuf_SetSupSj_0x34c158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfbuf_SetSupSj_0x34c158");
#endif

    switch (ctx->pc) {
        case 0x34c188u: goto label_34c188;
        case 0x34c1c4u: goto label_34c1c4;
        case 0x34c1d4u: goto label_34c1d4;
        case 0x34c1dcu: goto label_34c1dc;
        default: break;
    }

    ctx->pc = 0x34c158u;

    // 0x34c158: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34c158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34c15c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34c15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34c160: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34c160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c164: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34c164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34c168: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x34c168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c16c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34c16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34c170: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x34c170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c174: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34c174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c178: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x34c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x34c17c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34c17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34c180: 0xc0d37da  jal         func_34DF68
    ctx->pc = 0x34C180u;
    SET_GPR_U32(ctx, 31, 0x34C188u);
    ctx->pc = 0x34C184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C180u;
    // 0x34c184: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF68u, 0x34C180u, 0x34C188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C188u;
label_34c188:
    // 0x34c188: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x34c188u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x34c18c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x34c18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x34c190: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x34c190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x34c194: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x34c194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x34c198: 0x6a63000f  ldl         $v1, 0xF($s3)
    ctx->pc = 0x34c198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x34c19c: 0x6e630008  ldr         $v1, 0x8($s3)
    ctx->pc = 0x34c19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x34c1a0: 0x6a650017  ldl         $a1, 0x17($s3)
    ctx->pc = 0x34c1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x34c1a4: 0x6e650010  ldr         $a1, 0x10($s3)
    ctx->pc = 0x34c1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x34c1a8: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x34c1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34c1ac: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x34c1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34c1b0: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x34c1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34c1b4: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x34c1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34c1b8: 0xb2050017  sdl         $a1, 0x17($s0)
    ctx->pc = 0x34c1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34c1bc: 0xc0d307e  jal         func_34C1F8
    ctx->pc = 0x34C1BCu;
    SET_GPR_U32(ctx, 31, 0x34C1C4u);
    ctx->pc = 0x34C1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C1BCu;
    // 0x34c1c0: 0xb6050010  sdr         $a1, 0x10($s0) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C1F8u, 0x34C1BCu, 0x34C1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C1C4u;
label_34c1c4:
    // 0x34c1c4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x34c1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x34c1c8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x34c1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x34c1cc: 0xc0d64b4  jal         func_3592D0
    ctx->pc = 0x34C1CCu;
    SET_GPR_U32(ctx, 31, 0x34C1D4u);
    ctx->pc = 0x34C1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C1CCu;
    // 0x34c1d0: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3592D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3592D0u, 0x34C1CCu, 0x34C1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C1D4u;
label_34c1d4:
    // 0x34c1d4: 0xc0d37e0  jal         func_34DF80
    ctx->pc = 0x34C1D4u;
    SET_GPR_U32(ctx, 31, 0x34C1DCu);
    ctx->pc = 0x34C1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C1D4u;
    // 0x34c1d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF80u, 0x34C1D4u, 0x34C1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C1DCu;
label_34c1dc:
    // 0x34c1dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34c1dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c1e0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34c1e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34c1e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34c1e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34c1e8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34c1e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34c1ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34c1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34c1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x34C1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C1F0u;
        // 0x34c1f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C1F8u;
}
