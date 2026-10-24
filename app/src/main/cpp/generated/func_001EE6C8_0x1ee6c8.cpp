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

// Function: func_001EE6C8
// Address: 0x1ee6c8 - 0x1ee730
void func_001EE6C8_0x1ee6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EE6C8_0x1ee6c8");
#endif

    switch (ctx->pc) {
        case 0x1ee720u: goto label_1ee720;
        default: break;
    }

    ctx->pc = 0x1ee6c8u;

    // 0x1ee6c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ee6cc: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1ee6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1ee6d0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1ee6d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ee6d4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EE6D4u;
    {
        const bool branch_taken_0x1ee6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6D4u;
        // 0x1ee6d8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee6d4) {
            ctx->pc = 0x1EE720u;
            goto label_1ee720;
        }
    }
    ctx->pc = 0x1EE6DCu;
    // 0x1ee6dc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1ee6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1ee6e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ee6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ee6e4: 0x2448bdd8  addiu       $t0, $v0, -0x4228
    ctx->pc = 0x1ee6e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950360));
    // 0x1ee6e8: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x1ee6e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1ee6ec: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x1ee6ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1ee6f0: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x1ee6f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ee6f4: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x1ee6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ee6f8: 0x8d070010  lw          $a3, 0x10($t0)
    ctx->pc = 0x1ee6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1ee6fc: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x1ee6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ee700: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x1ee700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ee704: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x1ee704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ee708: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x1ee708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ee70c: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x1ee70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x1ee710: 0x24840df0  addiu       $a0, $a0, 0xDF0
    ctx->pc = 0x1ee710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3568));
    // 0x1ee714: 0x3a33021  addu        $a2, $sp, $v1
    ctx->pc = 0x1ee714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1ee718: 0xc0b5996  jal         func_2D6658
    ctx->pc = 0x1EE718u;
    SET_GPR_U32(ctx, 31, 0x1EE720u);
    ctx->pc = 0x1EE71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE718u;
    // 0x1ee71c: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6658u, 0x1EE718u, 0x1EE720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE720u;
label_1ee720:
    // 0x1ee720: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ee720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee724: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE724u;
        // 0x1ee728: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE72Cu;
    // 0x1ee72c: 0x0  nop
    ctx->pc = 0x1ee72cu;
    // NOP
    ctx->pc = 0x1ee730u;
}
