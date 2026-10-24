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

// Function: Motion_seq_readEffectData
// Address: 0x2c7f00 - 0x2c7f88
void Motion_seq_readEffectData_0x2c7f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Motion_seq_readEffectData_0x2c7f00");
#endif

    switch (ctx->pc) {
        case 0x2c7f30u: goto label_2c7f30;
        case 0x2c7f48u: goto label_2c7f48;
        default: break;
    }

    ctx->pc = 0x2c7f00u;

    // 0x2c7f00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c7f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c7f04: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2c7f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2c7f08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2c7f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2c7f0c: 0x30d000ff  andi        $s0, $a2, 0xFF
    ctx->pc = 0x2c7f0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c7f10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c7f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c7f14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c7f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7f18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c7f18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7f1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c7f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c7f20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c7f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7f24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c7f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7f28: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2C7F28u;
    SET_GPR_U32(ctx, 31, 0x2C7F30u);
    ctx->pc = 0x2C7F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7F28u;
    // 0x2c7f2c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2C7F28u, 0x2C7F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7F30u;
label_2c7f30:
    // 0x2c7f30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7f34: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7F34u;
    {
        const bool branch_taken_0x2c7f34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C7F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F34u;
        // 0x2c7f38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f34) {
            ctx->pc = 0x2C7F48u;
            goto label_2c7f48;
        }
    }
    ctx->pc = 0x2C7F3Cu;
    // 0x2c7f3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c7f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7f40: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x2C7F40u;
    SET_GPR_U32(ctx, 31, 0x2C7F48u);
    ctx->pc = 0x2C7F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7F40u;
    // 0x2c7f44: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x2C7F40u, 0x2C7F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7F48u;
label_2c7f48:
    // 0x2c7f48: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x2c7f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c7f4c: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x2c7f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c7f50: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2c7f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7f54: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x2c7f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7f58: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x2c7f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7f5c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2c7f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7f60: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x2c7f60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x2c7f64: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2c7f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c7f68: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2c7f68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c7f6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c7f6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7f70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c7f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7f74: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7F74u;
        // 0x2c7f78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7F7Cu;
    // 0x2c7f7c: 0x0  nop
    ctx->pc = 0x2c7f7cu;
    // NOP
    // 0x2c7f80: 0xa082001b  sb          $v0, 0x1B($a0)
    ctx->pc = 0x2c7f80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 27), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c7f84: 0x0  nop
    ctx->pc = 0x2c7f84u;
    // NOP
    ctx->pc = 0x2c7f88u;
}
