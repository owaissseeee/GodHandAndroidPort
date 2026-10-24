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

// Function: Motion_seq_readSeData
// Address: 0x2c7da8 - 0x2c7e30
void Motion_seq_readSeData_0x2c7da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Motion_seq_readSeData_0x2c7da8");
#endif

    switch (ctx->pc) {
        case 0x2c7dd8u: goto label_2c7dd8;
        case 0x2c7df0u: goto label_2c7df0;
        default: break;
    }

    ctx->pc = 0x2c7da8u;

    // 0x2c7da8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c7da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c7dac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2c7dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2c7db0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2c7db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2c7db4: 0x30d000ff  andi        $s0, $a2, 0xFF
    ctx->pc = 0x2c7db4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c7db8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c7db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c7dbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c7dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7dc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c7dc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7dc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c7dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c7dc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c7dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7dcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c7dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7dd0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2C7DD0u;
    SET_GPR_U32(ctx, 31, 0x2C7DD8u);
    ctx->pc = 0x2C7DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7DD0u;
    // 0x2c7dd4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2C7DD0u, 0x2C7DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7DD8u;
label_2c7dd8:
    // 0x2c7dd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7ddc: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7DDCu;
    {
        const bool branch_taken_0x2c7ddc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7DDCu;
        // 0x2c7de0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ddc) {
            ctx->pc = 0x2C7DF0u;
            goto label_2c7df0;
        }
    }
    ctx->pc = 0x2C7DE4u;
    // 0x2c7de4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c7de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7de8: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x2C7DE8u;
    SET_GPR_U32(ctx, 31, 0x2C7DF0u);
    ctx->pc = 0x2C7DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7DE8u;
    // 0x2c7dec: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x2C7DE8u, 0x2C7DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7DF0u;
label_2c7df0:
    // 0x2c7df0: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x2c7df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c7df4: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x2c7df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c7df8: 0x8ba4000b  lwl         $a0, 0xB($sp)
    ctx->pc = 0x2c7df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x2c7dfc: 0x9ba40008  lwr         $a0, 0x8($sp)
    ctx->pc = 0x2c7dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x2c7e00: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x2c7e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7e04: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x2c7e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7e08: 0xaa44000b  swl         $a0, 0xB($s2)
    ctx->pc = 0x2c7e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2c7e0c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2c7e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7e10: 0xba440008  swr         $a0, 0x8($s2)
    ctx->pc = 0x2c7e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2c7e14: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2c7e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c7e18: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2c7e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c7e1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c7e1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7e20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c7e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7e24: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E24u;
        // 0x2c7e28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7E2Cu;
    // 0x2c7e2c: 0x0  nop
    ctx->pc = 0x2c7e2cu;
    // NOP
    ctx->pc = 0x2c7e30u;
}
