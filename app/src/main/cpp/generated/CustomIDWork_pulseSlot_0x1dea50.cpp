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

// Function: CustomIDWork_pulseSlot
// Address: 0x1dea50 - 0x1deb08
void CustomIDWork_pulseSlot_0x1dea50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_pulseSlot_0x1dea50");
#endif

    switch (ctx->pc) {
        case 0x1dead4u: goto label_1dead4;
        case 0x1deafcu: goto label_1deafc;
        default: break;
    }

    ctx->pc = 0x1dea50u;

    // 0x1dea50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dea50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dea54: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1dea54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1dea58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dea58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dea5c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1dea5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1dea60: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1DEA60u;
    {
        const bool branch_taken_0x1dea60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA60u;
        // 0x1dea64: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea60) {
            ctx->pc = 0x1DEAFCu;
            goto label_1deafc;
        }
    }
    ctx->pc = 0x1DEA68u;
    // 0x1dea68: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1dea68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1dea6c: 0x2449b5d0  addiu       $t1, $v0, -0x4A30
    ctx->pc = 0x1dea6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948304));
    // 0x1dea70: 0x69240007  ldl         $a0, 0x7($t1)
    ctx->pc = 0x1dea70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1dea74: 0x6d240000  ldr         $a0, 0x0($t1)
    ctx->pc = 0x1dea74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1dea78: 0x6925000f  ldl         $a1, 0xF($t1)
    ctx->pc = 0x1dea78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1dea7c: 0x6d250008  ldr         $a1, 0x8($t1)
    ctx->pc = 0x1dea7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1dea80: 0x8d280010  lw          $t0, 0x10($t1)
    ctx->pc = 0x1dea80u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x42B5E0u));
    // 0x1dea84: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1dea84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea88: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1dea88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea8c: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1dea8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea90: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1dea90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dea94: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x1dea94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x1dea98: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DEA98u;
    {
        const bool branch_taken_0x1dea98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA98u;
        // 0x1dea9c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea98) {
            ctx->pc = 0x1DEADCu;
            goto label_1deadc;
        }
    }
    ctx->pc = 0x1DEAA0u;
    // 0x1deaa0: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x1deaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1deaa4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1deaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1deaa8: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1deaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1deaac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1deaacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1deab0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1deab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1deab4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1deab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1deab8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1deab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1deabc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1deabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1deac0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1deac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1deac4: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x1deac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1deac8: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1deac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1deacc: 0xc0b5a7c  jal         func_2D69F0
    ctx->pc = 0x1DEACCu;
    SET_GPR_U32(ctx, 31, 0x1DEAD4u);
    ctx->pc = 0x1DEAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEACCu;
    // 0x1dead0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D69F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D69F0u, 0x1DEACCu, 0x1DEAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEAD4u;
label_1dead4:
    // 0x1dead4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DEAD4u;
    {
        const bool branch_taken_0x1dead4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAD4u;
        // 0x1dead8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dead4) {
            ctx->pc = 0x1DEB00u;
            goto label_1deb00;
        }
    }
    ctx->pc = 0x1DEADCu;
label_1deadc:
    // 0x1deadc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1deadcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1deae0: 0x2405007c  addiu       $a1, $zero, 0x7C
    ctx->pc = 0x1deae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1deae4: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x1deae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1deae8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1deae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1deaec: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1deaecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1deaf0: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1deaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1deaf4: 0xc0b5a8c  jal         func_2D6A30
    ctx->pc = 0x1DEAF4u;
    SET_GPR_U32(ctx, 31, 0x1DEAFCu);
    ctx->pc = 0x1DEAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEAF4u;
    // 0x1deaf8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6A30u, 0x1DEAF4u, 0x1DEAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEAFCu;
label_1deafc:
    // 0x1deafc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1deafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1deb00:
    // 0x1deb00: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB00u;
        // 0x1deb04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEB08u;
}
