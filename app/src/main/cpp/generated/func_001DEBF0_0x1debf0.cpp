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

// Function: func_001DEBF0
// Address: 0x1debf0 - 0x1dec70
void func_001DEBF0_0x1debf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DEBF0_0x1debf0");
#endif

    switch (ctx->pc) {
        case 0x1dec60u: goto label_1dec60;
        default: break;
    }

    ctx->pc = 0x1debf0u;

    // 0x1debf0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1debf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1debf4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1debf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1debf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1debf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1debfc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1debfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dec00: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1dec00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1dec04: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DEC04u;
    {
        const bool branch_taken_0x1dec04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC04u;
        // 0x1dec08: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dec04) {
            ctx->pc = 0x1DEC60u;
            goto label_1dec60;
        }
    }
    ctx->pc = 0x1DEC0Cu;
    // 0x1dec0c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1dec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1dec10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dec10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dec14: 0x244ab5d0  addiu       $t2, $v0, -0x4A30
    ctx->pc = 0x1dec14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948304));
    // 0x1dec18: 0x69440007  ldl         $a0, 0x7($t2)
    ctx->pc = 0x1dec18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1dec1c: 0x6d440000  ldr         $a0, 0x0($t2)
    ctx->pc = 0x1dec1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1dec20: 0x6946000f  ldl         $a2, 0xF($t2)
    ctx->pc = 0x1dec20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1dec24: 0x6d460008  ldr         $a2, 0x8($t2)
    ctx->pc = 0x1dec24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1dec28: 0x8d490010  lw          $t1, 0x10($t2)
    ctx->pc = 0x1dec28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x1dec2c: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1dec2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dec30: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1dec30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dec34: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x1dec34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dec38: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x1dec38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dec3c: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x1dec3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x1dec40: 0x3a33021  addu        $a2, $sp, $v1
    ctx->pc = 0x1dec40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1dec44: 0x2402007c  addiu       $v0, $zero, 0x7C
    ctx->pc = 0x1dec44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1dec48: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1dec48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dec4c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1dec4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dec50: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1dec50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1dec54: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1dec54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1dec58: 0xc0b59c8  jal         func_2D6720
    ctx->pc = 0x1DEC58u;
    SET_GPR_U32(ctx, 31, 0x1DEC60u);
    ctx->pc = 0x1DEC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEC58u;
    // 0x1dec5c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6720u, 0x1DEC58u, 0x1DEC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEC60u;
label_1dec60:
    // 0x1dec60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dec60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dec64: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEC64u;
        // 0x1dec68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEC6Cu;
    // 0x1dec6c: 0x0  nop
    ctx->pc = 0x1dec6cu;
    // NOP
    ctx->pc = 0x1dec70u;
}
