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

// Function: Motion_seq_readSpdData
// Address: 0x2c7d18 - 0x2c7da8
void Motion_seq_readSpdData_0x2c7d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Motion_seq_readSpdData_0x2c7d18");
#endif

    switch (ctx->pc) {
        case 0x2c7d40u: goto label_2c7d40;
        case 0x2c7d58u: goto label_2c7d58;
        default: break;
    }

    ctx->pc = 0x2c7d18u;

    // 0x2c7d18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c7d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c7d1c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2c7d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c7d20: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2c7d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2c7d24: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2c7d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2c7d28: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x2c7d28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c7d2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c7d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7d30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c7d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c7d34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c7d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7d38: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2C7D38u;
    SET_GPR_U32(ctx, 31, 0x2C7D40u);
    ctx->pc = 0x2C7D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7D38u;
    // 0x2c7d3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2C7D38u, 0x2C7D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D40u;
label_2c7d40:
    // 0x2c7d40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7d44: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7D44u;
    {
        const bool branch_taken_0x2c7d44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C7D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D44u;
        // 0x2c7d48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7d44) {
            ctx->pc = 0x2C7D58u;
            goto label_2c7d58;
        }
    }
    ctx->pc = 0x2C7D4Cu;
    // 0x2c7d4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c7d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7d50: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x2C7D50u;
    SET_GPR_U32(ctx, 31, 0x2C7D58u);
    ctx->pc = 0x2C7D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7D50u;
    // 0x2c7d54: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x2C7D50u, 0x2C7D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7D58u;
label_2c7d58:
    // 0x2c7d58: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2c7d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c7d5c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2c7d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c7d60: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2c7d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7d64: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2c7d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c7d68: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2c7d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c7d6c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2c7d6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2c7d70: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2c7d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c7d74: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2c7d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2c7d78: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2c7d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c7d7c: 0x9fa50010  lwu         $a1, 0x10($sp)
    ctx->pc = 0x2c7d7cu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7d80: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c7d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c7d84: 0x9fa30014  lwu         $v1, 0x14($sp)
    ctx->pc = 0x2c7d84u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2c7d88: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2c7d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2c7d8c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2c7d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c7d90: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2c7d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2c7d94: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2c7d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2c7d98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c7d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7d9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c7d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c7da0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7DA0u;
        // 0x2c7da4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7DA8u;
}
