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

// Function: htci_is_bgn_host
// Address: 0x334d10 - 0x334d68
void htci_is_bgn_host_0x334d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("htci_is_bgn_host_0x334d10");
#endif

    switch (ctx->pc) {
        case 0x334d30u: goto label_334d30;
        case 0x334d54u: goto label_334d54;
        default: break;
    }

    ctx->pc = 0x334d10u;

    // 0x334d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x334d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x334d14: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x334d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x334d18: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x334d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x334d1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x334d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x334d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d24: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x334d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x334d28: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x334D28u;
    SET_GPR_U32(ctx, 31, 0x334D30u);
    ctx->pc = 0x334D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334D28u;
    // 0x334d2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x334D28u, 0x334D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D30u;
label_334d30:
    // 0x334d30: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x334d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x334d34: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x334d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x334d38: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x334d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x334d3c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x334d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x334d40: 0x24a549f8  addiu       $a1, $a1, 0x49F8
    ctx->pc = 0x334d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18936));
    // 0x334d44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x334d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d48: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x334d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x334d4c: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x334D4Cu;
    SET_GPR_U32(ctx, 31, 0x334D54u);
    ctx->pc = 0x334D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334D4Cu;
    // 0x334d50: 0xa3a00005  sb          $zero, 0x5($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x334D4Cu, 0x334D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D54u;
label_334d54:
    // 0x334d54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x334d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334d58: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x334d58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x334d5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x334d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x334d60: 0x3e00008  jr          $ra
    ctx->pc = 0x334D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D60u;
        // 0x334d64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334D68u;
}
