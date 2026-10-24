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

// Function: func_001ECF30
// Address: 0x1ecf30 - 0x1ecfe8
void func_001ECF30_0x1ecf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ECF30_0x1ecf30");
#endif

    switch (ctx->pc) {
        case 0x1ecf94u: goto label_1ecf94;
        case 0x1ecfd4u: goto label_1ecfd4;
        default: break;
    }

    ctx->pc = 0x1ecf30u;

    // 0x1ecf30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ecf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ecf34: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1ecf34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1ecf38: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1ecf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1ecf3c: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x1ecf3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ecf40: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ecf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1ecf44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ecf44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf48: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1ECF48u;
    {
        const bool branch_taken_0x1ecf48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF48u;
        // 0x1ecf4c: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecf48) {
            ctx->pc = 0x1ECFD4u;
            goto label_1ecfd4;
        }
    }
    ctx->pc = 0x1ECF50u;
    // 0x1ecf50: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x1ecf50u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ecf54: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1ecf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1ecf58: 0x2446bd40  addiu       $a2, $v0, -0x42C0
    ctx->pc = 0x1ecf58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950208));
    // 0x1ecf5c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1ecf5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ecf60: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1ecf60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ecf64: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1ecf64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ecf68: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1ecf68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ecf6c: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x1ecf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x42BD50u));
    // 0x1ecf70: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1ecf70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ecf74: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1ecf74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ecf78: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x1ecf78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ecf7c: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x1ecf7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ecf80: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1ecf80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1ecf84: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x1ecf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x1ecf88: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x1ecf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1ecf8c: 0xc0b5996  jal         func_2D6658
    ctx->pc = 0x1ECF8Cu;
    SET_GPR_U32(ctx, 31, 0x1ECF94u);
    ctx->pc = 0x1ECF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECF8Cu;
    // 0x1ecf90: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6658u, 0x1ECF8Cu, 0x1ECF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECF94u;
label_1ecf94:
    // 0x1ecf94: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1ecf94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1ecf98: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x1ecf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x1ecf9c: 0x2446bd58  addiu       $a2, $v0, -0x42A8
    ctx->pc = 0x1ecf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950232));
    // 0x1ecfa0: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x1ecfa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1ecfa4: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x1ecfa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1ecfa8: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x1ecfa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1ecfac: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x1ecfacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1ecfb0: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x1ecfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x42BD68u));
    // 0x1ecfb4: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x1ecfb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ecfb8: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x1ecfb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ecfbc: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x1ecfbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ecfc0: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x1ecfc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ecfc4: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1ecfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1ecfc8: 0x262411d0  addiu       $a0, $s1, 0x11D0
    ctx->pc = 0x1ecfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4560));
    // 0x1ecfcc: 0xc0b5996  jal         func_2D6658
    ctx->pc = 0x1ECFCCu;
    SET_GPR_U32(ctx, 31, 0x1ECFD4u);
    ctx->pc = 0x1ECFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECFCCu;
    // 0x1ecfd0: 0x8c650020  lw          $a1, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6658u, 0x1ECFCCu, 0x1ECFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECFD4u;
label_1ecfd4:
    // 0x1ecfd4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1ecfd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ecfd8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1ecfd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ecfdc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ecfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ecfe0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECFE0u;
        // 0x1ecfe4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECFE8u;
}
