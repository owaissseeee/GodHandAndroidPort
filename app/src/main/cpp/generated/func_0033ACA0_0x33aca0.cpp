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

// Function: func_0033ACA0
// Address: 0x33aca0 - 0x33ad08
void func_0033ACA0_0x33aca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033ACA0_0x33aca0");
#endif

    ctx->pc = 0x33aca0u;

    // 0x33aca0: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x33aca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x33aca4: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x33aca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x33aca8: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x33aca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33acac: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x33acacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33acb0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x33acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x33acb4: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x33acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x33acb8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x33acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x33acbc: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x33acbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33acc0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33ACC0u;
    {
        const bool branch_taken_0x33acc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33acc0) {
            ctx->pc = 0x33ACC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33ACC0u;
            // 0x33acc4: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33ACD4u;
            goto label_33acd4;
        }
    }
    ctx->pc = 0x33ACC8u;
    // 0x33acc8: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x33acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x33accc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x33acccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33acd0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x33acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_33acd4:
    // 0x33acd4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x33acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33acd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33ACD8u;
    {
        const bool branch_taken_0x33acd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ACD8u;
        // 0x33acdc: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33acd8) {
            ctx->pc = 0x33ACE8u;
            goto label_33ace8;
        }
    }
    ctx->pc = 0x33ACE0u;
    // 0x33ace0: 0x3e00008  jr          $ra
    ctx->pc = 0x33ACE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ACE0u;
        // 0x33ace4: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33ACE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33ACE8u;
label_33ace8:
    // 0x33ace8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33acec: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x33acecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x33acf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33acf4: 0x3e00008  jr          $ra
    ctx->pc = 0x33ACF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ACF4u;
        // 0x33acf8: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33ACF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33ACFCu;
    // 0x33acfc: 0x0  nop
    ctx->pc = 0x33acfcu;
    // NOP
    // 0x33ad00: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x33ad00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x33ad04: 0x0  nop
    ctx->pc = 0x33ad04u;
    // NOP
    ctx->pc = 0x33ad08u;
}
